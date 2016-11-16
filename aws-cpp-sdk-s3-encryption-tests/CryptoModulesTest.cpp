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

#ifndef NO_SYMMETRIC_ENCRYPTION

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/ContentCryptoScheme.h>
#include <aws/core/utils/crypto/CryptoStream.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Array.h>

#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/CryptoConfiguration.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>

#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>

#include <aws/kms/KMSClient.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/DecryptRequest.h>

namespace
{
    static const char* const ALLOCATION_TAG = "CryptoModuleTests";
    static const char* const BUCKET_TEST_NAME = "testbucket";
    static const char* const KEY_TEST_NAME = "testKey";
    static const char* const BODY_STREAM_TEST = "This is a test message for encryption and decryption.";
    static const char* const TEST_CMK_ID = "ARN:SOME_COMBINATION_OF_LETTERS_AND_NUMBERS";
    static size_t const CBC_IV_SIZE_BYTES = 16u;

#ifndef ENABLE_COMMONCRYPTO_ENCRYPTION
#ifndef NDEBUG
    static const char* const BYTES_SPECIFIER = "bytes=0-10";
    static const char* const ASSERTION_FAILED = "Assertion .*";
#endif // NDEBUG
    static const char* const GET_RANGE_SPECIFIER = "bytes=20-40";
    static const char* const GET_RANGE_OUTPUT = "ge for encryption and";
    static size_t const GCM_TAG_LENGTH = 128u;
    static size_t const GCM_IV_SIZE_BYTES = 12u;
#endif

    using namespace Aws::Auth;
    using namespace Aws::Client;
    using namespace Aws::S3Encryption;
    using namespace Aws::Utils::Crypto;
    using namespace Aws::Utils::Crypto::ContentCryptoSchemeMapper;
    using namespace Aws::Utils::Crypto::KeyWrapAlgorithmMapper;
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
            KMSClient(Aws::Auth::AWSCredentials("", ""), clientConfiguration), m_encryptCalledCount(0), m_decryptCalledCount(0),
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
            S3Client(Aws::Auth::AWSCredentials("", ""), clientConfiguration), m_putObjectCalled(0), m_getObjectCalled(0), m_body(nullptr)
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
            m_requestContentLength = request.GetContentLength();

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
            size_t written = 0;
            if (!range.empty())
            {
                auto bytes = m_requestContentLength;
                auto rangeBytes = CryptoModule::ParseGetObjectRequestRange(range, bytes);
                responseStream.GetUnderlyingStream().write((const char*)bodyString.c_str() + rangeBytes.first, rangeBytes.second - rangeBytes.first + 1);
                written = rangeBytes.second - rangeBytes.first;
            }
            else
            {
                responseStream.GetUnderlyingStream().write((const char*)bodyString.c_str(), m_requestContentLength);
                written = m_requestContentLength;
            }

            responseStream.GetUnderlyingStream().flush();
            Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream> awsStream(std::move(responseStream), Aws::Http::HeaderValueCollection());
            Aws::S3::Model::GetObjectResult getObjectResult(std::move(awsStream));
            getObjectResult.SetContentLength(written);
            getObjectResult.SetMetadata(m_metadata);
            return Aws::S3::Model::GetObjectOutcome(std::move(getObjectResult));
        }

        Aws::S3::Model::HeadObjectOutcome HeadObject(const Aws::S3::Model::HeadObjectRequest&) const override
        {
            Aws::S3::Model::HeadObjectOutcome outcome;
            Aws::S3::Model::HeadObjectResult result(outcome.GetResultWithOwnership());
            result.SetMetadata(m_metadata);
            result.SetContentLength(m_requestContentLength);
            return result;
        }

        const Aws::Map<Aws::String, Aws::String>& GetMetadata() const
        {
            return m_metadata;
        }

        size_t GetRequestContentLength() const
        {
            return m_requestContentLength;
        }

        mutable size_t m_putObjectCalled;
        mutable size_t m_getObjectCalled;
        mutable Aws::String bodyString;
        mutable Aws::Map<Aws::String, Aws::String> m_metadata;
        mutable std::shared_ptr<Aws::IOStream> m_body;
        mutable std::shared_ptr<Aws::IOStream> m_instructionBody;
        mutable size_t m_requestContentLength;
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
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);
        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, 0u);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), CBC_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::CBC);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(BODY_STREAM_TEST, ss.str().c_str());
        ASSERT_EQ(s3Client.GetMetadata(), getOutcome.GetResult().GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 1u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
    }

#ifndef ENABLE_COMMONCRYPTO_ENCRYPTION
    TEST_F(CryptoModulesTest, AuthenticatedEncryptionOperationsTestWithSimpleEncryptionMaterials)
    {
        Aws::Utils::CryptoBuffer masterKey = Aws::Utils::Crypto::SymmetricCipher::GenerateKey();
        SimpleEncryptionMaterials materials(masterKey);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);
        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(BODY_STREAM_TEST, ss.str().c_str());
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), s3Client.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
    }


    TEST_F(CryptoModulesTest, StrictAuthenticatedEncryptionOperationsTestWithSimpleEncryptionMaterials)
    {
        Aws::Utils::CryptoBuffer masterKey = Aws::Utils::Crypto::SymmetricCipher::GenerateKey();
        SimpleEncryptionMaterials materials(masterKey);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);
        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), s3Client.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
    }
#endif

    TEST_F(CryptoModulesTest, EncryptionOnlyOperationsTestWithKMSEncryptionMaterials)
    {
        auto kmsClient = Aws::MakeShared<MockKMSClient>(ALLOCATION_TAG, ClientConfiguration());
        KMSEncryptionMaterials materials(TEST_CMK_ID, kmsClient);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);
        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, 0u);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), CBC_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::CBC);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::KMS);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), s3Client.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 1u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
        ASSERT_EQ(kmsClient->m_encryptCalledCount, 1u);
        ASSERT_EQ(kmsClient->m_decryptCalledCount, 1u);
    }


#ifndef ENABLE_COMMONCRYPTO_ENCRYPTION
    TEST_F(CryptoModulesTest, AuthenticatedEncryptionOperationsTestWithKMSEncryptionMaterials)
    {
        auto kmsClient = Aws::MakeShared<MockKMSClient>(ALLOCATION_TAG, ClientConfiguration());
        KMSEncryptionMaterials materials(TEST_CMK_ID, kmsClient);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);
        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::KMS);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), s3Client.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
        ASSERT_EQ(kmsClient->m_encryptCalledCount, 1u);
        ASSERT_EQ(kmsClient->m_decryptCalledCount, 1u);
    }

    TEST_F(CryptoModulesTest, AERangeGet)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(GCM_TAG_LENGTH, cryptoTagLength);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(GCM_IV_SIZE_BYTES, ivBuffer.GetLength());

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(ContentCryptoScheme::GCM, scheme);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(KeyWrapAlgorithm::AES_KEY_WRAP, keyWrapAlgorithm);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);
        getRequest.SetRange(GET_RANGE_SPECIFIER);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());
        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        auto getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);

        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(GET_RANGE_OUTPUT, ss.str().c_str());
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), s3Client.GetMetadata());
        //we should not have pulled a tag here.
        ASSERT_EQ(s3Client.m_getObjectCalled, 1u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
    }


    TEST_F(CryptoModulesTest, StrictAuthenticatedEncryptionOperationsTestWithKMSEncryptionMaterials)
    {
        auto kmsClient = Aws::MakeShared<MockKMSClient>(ALLOCATION_TAG, ClientConfiguration());
        KMSEncryptionMaterials materials(TEST_CMK_ID, kmsClient);
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);
        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::KMS);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        ASSERT_TRUE(getOutcome.IsSuccess());
        Aws::OStream& ostream = getOutcome.GetResult().GetBody();
        Aws::OStringStream ss;
        ss << ostream.rdbuf();

        ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);
        ASSERT_EQ(getOutcome.GetResult().GetMetadata(), s3Client.GetMetadata());
        ASSERT_EQ(s3Client.m_getObjectCalled, 2u);
        ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
        ASSERT_EQ(kmsClient->m_encryptCalledCount, 1u);
        ASSERT_EQ(kmsClient->m_decryptCalledCount, 1u);
    }

#ifndef NDEBUG
    TEST_F(CryptoModulesTest, StrictAERangeGet)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, GCM_TAG_LENGTH);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), GCM_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::GCM);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), cryptoConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);
        getRequest.SetRange(BYTES_SPECIFIER);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        ASSERT_DEATH({ decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction); }, ASSERTION_FAILED);
    }

    TEST_F(CryptoModulesTest, StrictAEDecryptionFailure)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration eoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
        CryptoConfiguration strictAEConfig(StorageMethod::METADATA, CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);

        MockS3Client s3Client;

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), eoConfig);

        PutObjectRequest putRequest;
        putRequest.SetBucket(BUCKET_TEST_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << BODY_STREAM_TEST;
        objectStream->flush();
        putRequest.SetBody(objectStream);
        putRequest.SetKey(KEY_TEST_NAME);

        auto putObjectFunction = [&s3Client](Aws::S3::Model::PutObjectRequest putRequest) -> Aws::S3::Model::PutObjectOutcome { return s3Client.PutObject(putRequest); };
        PutObjectOutcome putOutcome = module->PutObjectSecurely(putRequest, putObjectFunction);
        ASSERT_TRUE(putOutcome.IsSuccess());

        auto metadata = s3Client.GetMetadata();
        MetadataFilled(metadata);

        size_t cryptoTagLength = static_cast<size_t>(Aws::Utils::StringUtils::ConvertToInt64(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str()));
        ASSERT_EQ(cryptoTagLength, 0u);

        Aws::Utils::CryptoBuffer ivBuffer = Aws::Utils::HashingUtils::Base64Decode(metadata[IV_HEADER]);
        ASSERT_EQ(ivBuffer.GetLength(), CBC_IV_SIZE_BYTES);

        ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(metadata[CONTENT_CRYPTO_SCHEME_HEADER]);
        ASSERT_EQ(scheme, ContentCryptoScheme::CBC);

        KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(metadata[KEY_WRAP_ALGORITHM]);
        ASSERT_EQ(keyWrapAlgorithm, KeyWrapAlgorithm::AES_KEY_WRAP);

        //check to make sure content length is now padded since StrictAE appends the tag to the end of the body
        ASSERT_TRUE(s3Client.GetRequestContentLength() > strlen(BODY_STREAM_TEST));

        auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(ALLOCATION_TAG, materials), strictAEConfig);
        GetObjectRequest getRequest;
        getRequest.SetBucket(BUCKET_TEST_NAME);
        getRequest.SetKey(KEY_TEST_NAME);

        HeadObjectRequest headObject;
        headObject.WithBucket(BUCKET_TEST_NAME);
        headObject.WithKey(KEY_TEST_NAME);
        HeadObjectOutcome headOutcome = s3Client.HeadObject(headObject);

        Aws::S3Encryption::Handlers::MetadataHandler handler;
        ContentCryptoMaterial contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());

        auto getObjectFunction = [&s3Client](Aws::S3::Model::GetObjectRequest getRequest) -> Aws::S3::Model::GetObjectOutcome { return s3Client.GetObject(getRequest); };
        ASSERT_DEATH({ decryptionModule->GetObjectSecurely(getRequest, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction); }, ASSERTION_FAILED);
    }
#endif // NDEBUG
#endif

    TEST_F(CryptoModulesTest, RangeParserSuccess)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration config(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
        CryptoModuleFactory factory;

        int64_t contentLength = 90;
        Aws::Vector<Aws::String> rangeOptions = { "bytes=10-20", "bytes=-20", "bytes=20-", "bytes=1-9" };
        Aws::Vector<std::pair<int64_t, int64_t>> resultPairs = {
            std::make_pair(10LL, 20LL),
            std::make_pair(70LL, contentLength - 1),
            std::make_pair(20LL, contentLength - 1),
            std::make_pair(1LL, 9LL)
        };

        for (size_t i = 0; i < rangeOptions.size(); ++i)
        {
            auto pair = CryptoModule::ParseGetObjectRequestRange(rangeOptions[i], contentLength);
            ASSERT_EQ(pair, resultPairs[i]);
        }
    }

    TEST_F(CryptoModulesTest, RangeParserFailure)
    {
        SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration config(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
        CryptoModuleFactory factory;

        int64_t contentLength = 90;
        Aws::Vector<Aws::String> rangeOptions = { "bytes10-20", "bytes=20", "20=-", "bytes19" };

        for (size_t i = 0; i < rangeOptions.size(); ++i)
        {
            auto pair = CryptoModule::ParseGetObjectRequestRange(rangeOptions[i], contentLength);
            ASSERT_EQ(pair, std::make_pair(static_cast<int64_t>(0), static_cast<int64_t>(0)));
        }
    }
}

#endif
