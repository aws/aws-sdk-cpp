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
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/core/utils/crypto/ContentCryptoScheme.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/PutObjectResult.h>

static const char* const INSTRUCTION_HEADER_VALUE = "default instruction file header";
static size_t CRYPTO_TAG_LENGTH = 16;
static size_t IV_SIZE = 12;

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
        m_metadata = request.GetMetadata();
        m_body = request.GetBody();
        Aws::S3::Model::PutObjectOutcome outcome;
        Aws::S3::Model::PutObjectResult result(outcome.GetResultWithOwnership());
        return result;
    }

    Aws::S3::Model::GetObjectOutcome GetObject(const Aws::S3::Model::GetObjectRequest& request) const override
    {
        m_getObjectCalled++;
        auto factory = request.GetResponseStreamFactory();
        Aws::Utils::Stream::ResponseStream responseStream(factory);
        if (m_body != nullptr)
        {
            responseStream.GetUnderlyingStream() << m_body->rdbuf();
        }
        Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream> awsStream(std::move(responseStream), Aws::Http::HeaderValueCollection());
        Aws::S3::Model::GetObjectResult getObjectResult(std::move(awsStream));
        getObjectResult.SetMetadata(m_metadata);
        return Aws::S3::Model::GetObjectOutcome(std::move(getObjectResult));
    }

    mutable size_t m_putObjectCalled;
    mutable size_t m_getObjectCalled;
    mutable Aws::Map<Aws::String, Aws::String> m_metadata;
    mutable std::shared_ptr<Aws::IOStream> m_body;
};

namespace
{

    using namespace Aws::Client;
    using namespace Aws::S3::Model;
    using namespace Aws::S3Encryption;
    using namespace Aws::S3Encryption::Handlers;
    using namespace Aws::Utils;
    using namespace Aws::Utils::Crypto;

    static const char* ALLOCATION_TAG = "HandlersTest";
    static const char* TEST_BUCKET_NAME = "TestBucketName";
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    static const char* TEST_KEY = "testKey";
    static const char* TEST_VALUE = "testValue";

    class HandlerTest : public ::testing::Test
    {
    protected:

        static void PopulateContentCryptoMaterial(ContentCryptoMaterial& contentCryptoMaterial)
        {
            contentCryptoMaterial.SetEncryptedContentEncryptionKey(SymmetricCipher::GenerateKey());
            contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(IV_SIZE));
            contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
            contentCryptoMaterial.SetCryptoTagLength(CRYPTO_TAG_LENGTH);
            contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
            Aws::Map<Aws::String, Aws::String> testMap;
            testMap[TEST_KEY] = TEST_VALUE;
            contentCryptoMaterial.SetMaterialsDescription(testMap);
        }

        static void PopulateGetObjectResultMetadata(GetObjectResult& result)
        {
            auto metadata = result.GetMetadata();
            metadata[CONTENT_KEY_HEADER] = HashingUtils::Base64Encode(SymmetricCipher::GenerateKey());
            metadata[IV_HEADER] = HashingUtils::Base64Encode(SymmetricCipher::GenerateIV(IV_SIZE));
            metadata[CONTENT_CRYPTO_SCHEME_HEADER] = ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(ContentCryptoScheme::GCM);
            metadata[CRYPTO_TAG_LENGTH_HEADER] = StringUtils::to_string(CRYPTO_TAG_LENGTH);
            metadata[KEY_WRAP_ALGORITHM] = KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
            metadata[MATERIALS_DESCRIPTION_HEADER] = "";
            result.SetMetadata(metadata);
        }
    };

    //This tests the meta data write and read functionality without the use of a mock client.
    TEST_F(HandlerTest, WriteReadMetadataTest)
    {
        ContentCryptoMaterial contentCryptoMaterial;
        MetadataHandler handler;
        PutObjectRequest request;
        PopulateContentCryptoMaterial(contentCryptoMaterial);

        handler.PopulateRequest(request, contentCryptoMaterial);
        auto metadata = request.GetMetadata();
        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[CONTENT_KEY_HEADER]), contentCryptoMaterial.GetEncryptedContentEncryptionKey());

        ASSERT_NE(metadata.find(IV_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[IV_HEADER]), contentCryptoMaterial.GetIV());

        ASSERT_NE(metadata.find(CONTENT_CRYPTO_SCHEME_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(metadata.find(CRYPTO_TAG_LENGTH_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(metadata.find(KEY_WRAP_ALGORITHM), metadata.end());
        ASSERT_STREQ(metadata[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(metadata.find(MATERIALS_DESCRIPTION_HEADER), metadata.end());
        ASSERT_STREQ(metadata[MATERIALS_DESCRIPTION_HEADER].c_str(), handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()).c_str());

        GetObjectResult result;
        result.SetMetadata(metadata);
        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(result);
        ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
        ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
        ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
        ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
        ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
        ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
    }

    //This tests the read metadata functionaliy of the handler without a mock client.
    TEST_F(HandlerTest, ReadMetadataTest)
    {
        GetObjectResult result;
        MetadataHandler handler;
        PopulateGetObjectResultMetadata(result);

        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(result);
        auto metadata = result.GetMetadata();

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[CONTENT_KEY_HEADER]), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[IV_HEADER]), readContentCryptoMaterial.GetIV());

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(readContentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(readContentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_STREQ(metadata[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(readContentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(handler.DeserializeMap(metadata[MATERIALS_DESCRIPTION_HEADER]), readContentCryptoMaterial.GetMaterialsDescription());
    }

    //This tests the write metadata functionaliy of the handler without a mock client.
    TEST_F(HandlerTest, WriteMetadataTest)
    {
        PutObjectRequest request;
        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);
        MetadataHandler handler;
        handler.PopulateRequest(request, contentCryptoMaterial);

        auto metadata = request.GetMetadata();

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[CONTENT_KEY_HEADER]), contentCryptoMaterial.GetEncryptedContentEncryptionKey());

        ASSERT_NE(metadata.find(IV_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[IV_HEADER]), contentCryptoMaterial.GetIV());

        ASSERT_NE(metadata.find(CONTENT_CRYPTO_SCHEME_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(metadata.find(CRYPTO_TAG_LENGTH_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(metadata.find(KEY_WRAP_ALGORITHM), metadata.end());
        ASSERT_STREQ(metadata[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(metadata.find(MATERIALS_DESCRIPTION_HEADER), metadata.end());
        ASSERT_STREQ(metadata[MATERIALS_DESCRIPTION_HEADER].c_str(), handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()).c_str());
    }

    //This test the metadata read/write functionality using a mock S3 Client which stores the metadata on a put object request and 
    //  uses the metadata to populate a get object result.
    TEST_F(HandlerTest, MetadataS3OperationsTest)
    {
        auto myClient = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG, ClientConfiguration());
        Aws::String fullBucketName = TEST_BUCKET_NAME;

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);

        //put contentCryptoMaterial into metadata
        MetadataHandler handler;
        handler.PopulateRequest(putObjectRequest, contentCryptoMaterial);

        PutObjectOutcome putObjectOutcome = myClient->PutObject(putObjectRequest);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = myClient->GetObject(getObjectRequest);

        GetObjectResult& getObjectResult = getObjectOutcome.GetResult();

        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(getObjectResult);

        ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
        ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
        ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
        ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
        ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
        ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
        ASSERT_EQ(myClient->m_getObjectCalled, 1u);
        ASSERT_EQ(myClient->m_putObjectCalled, 1u);
    }

    //This tests the instruciton file functionality of writing content crypto material to an instruction file object. 
    TEST_F(HandlerTest, WriteInstructionFileTest)
    {
        PutObjectRequest request;
        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);
        InstructionFileHandler handler;
        handler.PopulateRequest(request, contentCryptoMaterial);

        auto bodyStream = request.GetBody();
        Aws::String jsonString;
        (*bodyStream) >> jsonString;
        Aws::Map<Aws::String, Aws::String> cryptoContentMap = handler.DeserializeMap(jsonString);

        ASSERT_NE(cryptoContentMap.find(CONTENT_KEY_HEADER), cryptoContentMap.end());
        ASSERT_EQ(HashingUtils::Base64Decode(cryptoContentMap[CONTENT_KEY_HEADER]), contentCryptoMaterial.GetEncryptedContentEncryptionKey());

        ASSERT_NE(cryptoContentMap.find(IV_HEADER), cryptoContentMap.end());
        ASSERT_EQ(HashingUtils::Base64Decode(cryptoContentMap[IV_HEADER]), contentCryptoMaterial.GetIV());

        ASSERT_NE(cryptoContentMap.find(CONTENT_CRYPTO_SCHEME_HEADER), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(cryptoContentMap.find(CRYPTO_TAG_LENGTH_HEADER), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(cryptoContentMap.find(KEY_WRAP_ALGORITHM), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(cryptoContentMap.find(MATERIALS_DESCRIPTION_HEADER), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[MATERIALS_DESCRIPTION_HEADER].c_str(), handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()).c_str());
    }

    //This tests the instruction file read/write functionality by using a mock S3 client.
    TEST_F(HandlerTest, InstructionFileS3OperationsTest)
    {
        auto myClient = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG, ClientConfiguration());
        Aws::String fullBucketName = TEST_BUCKET_NAME;

        PutObjectRequest instructionPutObjectRequest;
        instructionPutObjectRequest.SetBucket(fullBucketName);
        instructionPutObjectRequest.SetKey(TEST_OBJ_KEY);

        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);

        //content crypto material into body of a putObjectRequest
        InstructionFileHandler handler;
        handler.PopulateRequest(instructionPutObjectRequest, contentCryptoMaterial);

        PutObjectOutcome putObjectOutcome = myClient->PutObject(instructionPutObjectRequest);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = myClient->GetObject(getObjectRequest);

        GetObjectResult& getObjectResult = getObjectOutcome.GetResult();

        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(getObjectResult);

        auto metadata = getObjectResult.GetMetadata();
        ASSERT_TRUE(metadata.find(INSTRUCTION_FILE_HEADER) != metadata.end());
        ASSERT_STREQ(metadata[INSTRUCTION_FILE_HEADER].c_str(), INSTRUCTION_HEADER_VALUE);

        ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
        ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
        ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
        ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
        ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
        ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
        ASSERT_EQ(myClient->m_getObjectCalled, 1u);
        ASSERT_EQ(myClient->m_putObjectCalled, 1u);
    }

}