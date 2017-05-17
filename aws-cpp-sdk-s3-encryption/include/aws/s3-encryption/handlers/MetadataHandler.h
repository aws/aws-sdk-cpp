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

#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/s3-encryption/handlers/DataHandler.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            /*
            Metadata handler will be responsible for reading and writing metadata to and from S3 object using a Put object
            request or a Get object result.
            */
            class AWS_S3ENCRYPTION_API MetadataHandler : public DataHandler
            {
            public:
                /*
                * Write ContentCryptoMaterial data to a put object request. This occurs in place.
                */
                void PopulateRequest(Aws::S3::Model::PutObjectRequest& request, const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

                /*
                * Read the metadata of a GetObject result and store into a ContentCryptoMaterial Object.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadContentCryptoMaterial(Aws::S3::Model::GetObjectResult& result) override;

                /*
                * Read the metadata of a HeadObeject result and store into a ContentCryptoMaterialObject.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadContentCryptoMaterial(const Aws::S3::Model::HeadObjectResult& result);
            };
        }
    }
}