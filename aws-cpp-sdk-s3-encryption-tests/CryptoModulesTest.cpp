/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/CryptoConfiguration.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/s3-encryption/ContentCryptoScheme.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/core/utils/crypto/CryptoStream.h>

#include <aws/kms/KMSClient.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/DecryptRequest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Array.h>

namespace
{
    static const char* const ALLOCATION_TAG = "CryptoModuleTests";
    static const char* const BUCKET_TEST_NAME = "testbucket";
    static const char* const KEY_TEST_NAME = "testKey";
    static const char* const INSTRUCTION_KEY_NAME = "testKey.instruction";
    static const char* const BODY_STREAM_TEST = "This is a test message for encryption and decryption.";
    static const char* const TEST_CMK_ID = "ARN:SOME_COMBINATION_OF_LETTERS_AND_NUMBERS";
    static const int TIMEOUT_MAX = 30;
    static const char* const BYTES_SPECIFIER = "bytes=0-10";
    static const char* const ASSERTION_FAILED = "Assertion failed: 0";
    static const char* const TAG_REQUEST_RANGE_SPECIFIER = "bytes=-16";
    static size_t const GCM_TAG_LENGTH = 128u;
    static size_t const CBC_IV_SIZE_BYTES = 16u;
    static size_t const GCM_IV_SIZE_BYTES = 12u;

    static const char* const LIVE_BUCKET_NAME = "s3encryptionclient";
    static const char* const LIVE_CMKID = "arn:aws:kms:us-east-1:413075755375:key/2752fae8-2cb4-4b30-aed0-6267e6c9607f";

    using namespace Aws::Auth;
    using namespace Aws::Client;
    using namespace Aws::S3Encryption;
    using namespace Aws::S3Encryption::ContentCryptoSchemeMapper;
    using namespace Aws::S3Encryption::KeyWrapAlgorithmMapper;
    using namespace Aws::S3Encryption::Modules;
    using namespace Aws::S3Encryption::Materials;
    using namespace Aws::S3::Model;
    using namespace Aws::S3;
    using namespace Aws::KMS;
    using namespace Aws::KMS::Model;

    /*
    * This is a class that represents a mock KMS Client which is used to encrypt/decrypt the content encryption key
    * in the S3 Encryption Client module. When encrypt is called, it will take the plain text key and store it and
    * return the user a different generated key to take place as the encrypted key. Then when decrypt is called, the 
    * plaintext key will be returned to the user. This does not actually decrypt or encrypt anything, but acts in
    * the same fashion as an actual KMS Client.
    */
    class MockKMSClient : public KMSClient
    {
    public:
        MockKMSClient(ClientConfiguration clientConfiguration = ClientConfiguration()) :
            KMSClient(clientConfiguration), m_encryptCalledCount(0), m_decryptCalledCount(0),
            m_encryptedKey(Aws::Utils::Crypto::SymmetricCipher::GenerateKey()), m_decryptedKey(nullptr)
        {
        }

        EncryptOutcome Encrypt(const EncryptRequest& request) const override
        {
            Aws::Utils::CryptoBuffer buffer(request.GetPlaintext().GetUnderlyingData(), request.GetPlaintext().GetLength());
            m_decryptedKey = Aws::MakeShared<Aws::Utils::CryptoBuffer>(ALLOCATION_TAG, buffer);

            m_encryptCalledCount++;
            return PopulateSuccessfulEncryptOutcome();
        }
        DecryptOutcome Decrypt(const DecryptRequest&) const override
        {
            m_decryptCalledCount++;
            return PopulateSuccessfulDecryptOutcome();
        }

        mutable size_t m_encryptCalledCount;
        mutable size_t m_decryptCalledCount;
        Aws::Utils::ByteBuffer m_encryptedKey;
        mutable std::shared_ptr<Aws::Utils::CryptoBuffer> m_decryptedKey;

    private:
        EncryptOutcome PopulateSuccessfulEncryptOutcome() const
        {
            EncryptOutcome outcome;
            EncryptResult result(outcome.GetResult());
            result.SetCiphertextBlob(m_encryptedKey);
            return result;
        }

        DecryptOutcome PopulateSuccessfulDecryptOutcome() const
        {
            DecryptOutcome outcome;
            DecryptResult result(outcome.GetResult());
            result.SetPlaintext(*m_decryptedKey);
            return result;
        }
    };

    /*
    * This is a class that represents a S3 Client which is used to mimic the put/get operations of a actual s3 client.
    * During a put object, the body of the request is stored as well as the metadata of the requet. This data is then
    * populated into a get object result when a get operation is called. If a get request has a range specifying the 
    * last 16 bytes of data, we know this is the crypto tag stored at the end of the body for GCM encryption, and we
    * return this. If the range is everything but the last 16 bytes then we only return that part of the body to the
    * result. 
    */
    class MockS3Client : public Aws::S3::S3Client
    {
    public:
        MockS3Client(Aws::Client::ClientConfiguration clientConfiguration = Aws::Client::ClientConfiguration()) :
            S3Client(clientConfiguration), m_putObjectCalled(0), m_getObjectCalled(0), m_body(nullptr)
        {
        }

        Aws::S3::Model::PutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request) const override
        {
            m_putObjectCalled++;
            if (request.GetKey().find(Aws::S3Encryption::Handlers::DEFAULT_INSTRUCTION_FILE_SUFFIX) != Aws::String::npos)
            {

                Aws::S3::Model::PutObjectOutcome outcome;
                Aws::S3::Model::PutObjectResult result(outcome.GetResultWithOwnership());
                return result;
            }
            m_metadata = request.GetMetadata();

            std::shared_ptr<Aws::IOStream> body = request.GetBody();
            Aws::String tempBodyString((Aws::IStreamBufIterator(*body)), Aws::IStreamBufIterator());
            bodyString = tempBodyString;

            Aws::S3::Model::PutObjectOutcome outcome;
            Aws::S3::Model::PutObjectResult result(outcome.GetResultWithOwnership());
            return result;
        }

        Aws::S3::Model::GetObjectOutcome GetObject(const Aws::S3::Model::GetObjectRequest& request) const override
        {
            m_getObjectCalled++;
            auto factory = request.GetResponseStreamFactory();
            Aws::Utils::Stream::ResponseStream responseStream(factory);

            Aws::String range = request.GetRange();
            if (!range.empty())
            {
                auto bytes = bodyString.size();
                if (range == TAG_REQUEST_RANGE_SPECIFIER)
                {
                    auto tagString = bodyString.substr(bytes - 16u);
                    responseStream.GetUnderlyingStream() << tagString;
                }
                else
                {
                    auto adjustedBodyString = bodyString.substr(0, bodyString.size() - 16u);
                    responseStream.GetUnderlyingStream() << adjustedBodyString;

                }
            }
            else
            {
                responseStream.GetUnderlyingStream() << bodyString;
            }
            
            Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream> awsStream(std::move(responseStream), Aws::Http::HeaderValueCollection());
            Aws::S3::Model::GetObjectResult getObjectResult(std::move(awsStream));
            getObjectResult.SetMetadata(m_metadata);
            return Aws::S3::Model::GetObjectOutcome(std::move(getObjectResult));
        }

        Aws::S3::Model::HeadObjectOutcome HeadObject(const Aws::S3::Model::HeadObjectRequest&) const override
        {
            Aws::S3::Model::HeadObjectOutcome outcome;
            Aws::S3::Model::HeadObjectResult result(outcome.GetResultWithOwnership());
            result.SetMetadata(m_metadata);
            return result;
        }

        mutable size_t m_putObjectCalled;
        mutable size_t m_getObjectCalled;
        mutable Aws::String bodyString;
        mutable Aws::Map<Aws::String, Aws::String> m_metadata;
        mutable std::shared_ptr<Aws::IOStream> m_body;
        mutable std::shared_ptr<Aws::IOStream> m_instructionBody;
    };

    class CryptoModulesTest : public ::testing::Test 
    {
    protected:
        /*
        * Function to check if metadata map contains content crypto material.
        * Use this function to make sure a put object request contains all the material after
        * a PutObjectSecurely call. 
        */
        static void MetadataFilled(Aws::Map<Aws::String, Aws::String> metadataMap)
        {
            auto metadataEnd = metadataMap.end();
            ASSERT_TRUE(metadataMap.find(CONTENT_KEY_HEADER) != metadataEnd && metadataMap.find(IV_HEADER) != metadataEnd
                && metadataMap.find(CRYPTO_TAG_LENGTH_HEADER) != metadataEnd && metadataMap.find(CONTENT_CRYPTO_SCHEME_HEADER) != metadataEnd
                && metadataMap.find(KEY_WRAP_ALGORITHM) != metadataEnd && metadataMap.find(MATERIALS_DESCRIPTION_HEADER) != metadataEnd);
            ASSERT_TRUE(metadataMap[CONTENT_KEY_HEADER].size() > 0u);
            ASSERT_TRUE(metadataMap[IV_HEADER].size() > 0u);
            ASSERT_TRUE(metadataMap[CRYPTO_TAG_LENGTH_HEADER].size() > 0u);
            ASSERT_TRUE(metadataMap[CONTENT_CRYPTO_SCHEME_HEADER].size() > 0u);
            ASSERT_TRUE(metadataMap[KEY_WRAP_ALGORITHM].size() > 0u);
            ASSERT_TRUE(metadataMap[MATERIALS_DESCRIPTION_HEADER].size() > 0u);
        }
    };

    TEST_F(CryptoModulesTest, EncryptionOnlyOperationsTestWithSimpleEncryptionMaterials)
    {
        Aws::Utils::CryptoBuffer masterKey = Aws::Utils::Crypto::SymmetricCipher::GenerateKey();
        SimpleEncryptionMaterials materials(masterKey);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, 0u);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), CBC_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::CBC);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        //check to make sure content length is now padded since EO uses CBC padding.
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult());
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();
        
        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), putRequest.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 1);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1);
    }

    TEST_F(CryptoModulesTest, AuthenticatedEncryptionOperationsTestWithSimpleEncryptionMaterials)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        //check to make sure content length is now padded since AE appends the tag to the end of the body
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult());
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), putRequest.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1);
    }

    TEST_F(CryptoModulesTest, StrictAuthenticatedEncryptionOperationsTestWithSimpleEncryptionMaterials)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        //check to make sure content length is now padded since StrictAE appends the tag to the end of the body
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult());
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), putRequest.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1);
    }

    TEST_F(CryptoModulesTest, EncryptionOnlyOperationsTestWithKMSEncryptionMaterials)
    {
        auto kmsClient = Aws::MakeShared<MockKMSClient>(ALLOCATION_TAG, ClientConfiguration());
        KMSEncryptionMaterials materials(TEST_CMK_ID, kmsClient);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, 0u);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), CBC_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::CBC);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::KMS);

        //check to make sure content length is now padded since EO using CBC padding.
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult());
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), putRequest.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 1u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
        ASSERT_EQ(kmsClient->m_encryptCalledCount, 1u);
        ASSERT_EQ(kmsClient->m_decryptCalledCount, 1u);
    }

    TEST_F(CryptoModulesTest, AuthenticatedEncryptionOperationsTestWithKMSEncryptionMaterials)
    {
        auto kmsClient = Aws::MakeShared<MockKMSClient>(ALLOCATION_TAG, ClientConfiguration());
        KMSEncryptionMaterials materials(TEST_CMK_ID, kmsClient);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::KMS);

        //check to make sure content length is now padded since AE appends the tag to the end of the body
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult());
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), putRequest.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1);
        ASSERT_EQ(kmsClient->m_encryptCalledCount, 1u);
        ASSERT_EQ(kmsClient->m_decryptCalledCount, 1u);
    }

    TEST_F(CryptoModulesTest, StrictAuthenticatedEncryptionOperationsTestWithKMSEncryptionMaterials)
    {
        auto kmsClient = Aws::MakeShared<MockKMSClient>(ALLOCATION_TAG, ClientConfiguration());
        KMSEncryptionMaterials materials(TEST_CMK_ID, kmsClient);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::KMS);

        //check to make sure content length is now padded since StrictAE appends the tag to the end of the body
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult());
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), putRequest.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1);
        ASSERT_EQ(kmsClient->m_encryptCalledCount, 1u);
        ASSERT_EQ(kmsClient->m_decryptCalledCount, 1u);
    }

    TEST_F(CryptoModulesTest, StrictAERangeGet)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        //check to make sure content length is now padded since StrictAE appends the tag to the end of the body
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);
        getRequest.SetRange(BYTES_SPECIFIER);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        ASSERT_DEATH({ decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult()); }, ASSERTION_FAILED);
    }

    TEST_F(CryptoModulesTest, StrictAEDecryptionFailure)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration eoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
        CryptoConfiguration strictAEConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), eoConfig, s3Client);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = putRequest.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, 0u);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), CBC_IV_SIZE_BYTES);

        Aws::S3Encryption::ContentCryptoScheme scheme = Aws::S3Encryption::ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::CBC);

        Aws::S3Encryption::KeyWrapAlgorithm keyWrapAlgorithm = Aws::S3Encryption::KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        //check to make sure content length is now padded since StrictAE appends the tag to the end of the body
        ASSERT_TRUE(putRequest.GetContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), strictAEConfig, s3Client);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        ASSERT_DEATH({ decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult()); }, ASSERTION_FAILED);
    }
}