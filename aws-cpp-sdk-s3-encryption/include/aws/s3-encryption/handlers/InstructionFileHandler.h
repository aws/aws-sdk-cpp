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
#include <aws/s3-encryption/handlers/DataHandler.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            static Aws::String DEFAULT_INSTRUCTION_FILE_SUFFIX = ".instruction";
            static const char* ALLOCATION_TAG = "InstructionFileHandler";
            /*
            Instruction file handler will be responsible for reading and writing instruction files to and from S3 object using a Put object
            request or a Get object result.
            */
            class AWS_S3ENCRYPTION_API InstructionFileHandler : public DataHandler
            {
            public:
                /*
                Write ContentCryptoMaterial data to an instruction file object which is passed as an arguement for this function.
                */
                void WriteData(Aws::S3::Model::PutObjectRequest& request, const ContentCryptoMaterial& contentCryptoMaterial) override;

                /*
                Read data from an instruction file object and return a Content Crypto Material object.
                */
                ContentCryptoMaterial ReadData(Aws::S3::Model::GetObjectResult& result) override;
            };
        }
    }
}
