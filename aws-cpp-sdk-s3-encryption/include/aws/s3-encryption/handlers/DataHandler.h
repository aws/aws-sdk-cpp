/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3-encryption/ContentCryptoMaterial.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/PutObjectRequest.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            static Aws::String CONTENT_KEY_HEADER = "x-amz-key-v2";
            static Aws::String IV_HEADER = "x-amz-iv";
            static Aws::String MATERIALS_DESCRIPTION_HEADER = "x-amz-matdesc";
            static Aws::String CONTENT_CRYPTO_SCHEME_HEADER = "x-amz-cek=alg";
            static Aws::String CRYPTO_TAG_LENGTH_HEADER = "x-amz-tag-len";
            static Aws::String KEY_WRAP_ALGORITHM = "x-amz-wrap-alg";
            static Aws::String INSTRUCTION_FILE_HEADER = "x-amz-crypto-instr-file";

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
                virtual void WriteData(Aws::S3::Model::PutObjectRequest& request, const ContentCryptoMaterial& contentCryptoMaterial) = 0;

                /*
                Override this function to read data from an S3 object and return a Content Crypto Material object.
                */
                virtual ContentCryptoMaterial ReadData(Aws::S3::Model::GetObjectResult& result) = 0;

                /*
                Function to json serialize a map contianing pairs of strings.
                */
                const Aws::String SerializeMap(const Aws::Map<Aws::String, Aws::String>& currentMap);

                /*
                Function to deserialize a string to map.
                */
                const Aws::Map<Aws::String, Aws::String> DeSerializeMap(const Aws::String& jsonString);
            };
        }
    }
}
