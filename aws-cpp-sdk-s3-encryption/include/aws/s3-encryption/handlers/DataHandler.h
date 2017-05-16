/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/HeadObjectResult.h>

namespace Aws
{
    namespace S3Encryption
    {
        static const char* const MetadataHandler_Tag = "MetadataHandler";
        static const char* const CONTENT_KEY_HEADER = "x-amz-key-v2";
        static const char* const IV_HEADER = "x-amz-iv";
        static const char* const MATERIALS_DESCRIPTION_HEADER = "x-amz-matdesc";
        static const char* const CONTENT_CRYPTO_SCHEME_HEADER = "x-amz-cek-alg";
        static const char* const CRYPTO_TAG_LENGTH_HEADER = "x-amz-tag-len";
        static const char* const KEY_WRAP_ALGORITHM = "x-amz-wrap-alg";
        static const char* const INSTRUCTION_FILE_HEADER = "x-amz-crypto-instr-file";

        namespace Handlers
        {
            /*
            Data handler class will be responsible for reading and writing metadata and instruction files to and from S3 object using a Put object
            request or a Get object result.
            */
            class AWS_S3ENCRYPTION_API DataHandler
            {
            public:
                /*
                Override this function to write content crypto material data to S3 object request.
                */
                virtual void PopulateRequest(Aws::S3::Model::PutObjectRequest& request, const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) = 0;

                /*
                Override this function to read data from an S3 object and return a Content Crypto Material object.
                */
                virtual Aws::Utils::Crypto::ContentCryptoMaterial ReadContentCryptoMaterial(Aws::S3::Model::GetObjectResult& result) = 0;

                /*
                Function to json serialize a map contianing pairs of strings.
                */
                const Aws::String SerializeMap(const Aws::Map<Aws::String, Aws::String>& currentMap);

                /*
                Function to deserialize a string to map.
                */
                const Aws::Map<Aws::String, Aws::String> DeserializeMap(const Aws::String& jsonString);

            protected:
                /*
                * Function to read meta data and return a content crypto material object.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadMetadata(const Aws::Map<Aws::String, Aws::String>& metadata);
            };
        }
    }
}
