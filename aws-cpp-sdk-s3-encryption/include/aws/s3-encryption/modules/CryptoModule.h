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

#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
//Modules empty for now
namespace Aws
{
    namespace S3Encryption
    {
        namespace Modules
        {
            class AWS_S3ENCRYPTION_API CryptoModule
            {
            public:
                CryptoModule();
            };

            class AWS_S3ENCRYPTION_API CryptoModuleEO : public CryptoModule
            {
            public:
                CryptoModuleEO();
            };

            class AWS_S3ENCRYPTION_API CryptoModuleAE : public CryptoModule
            {
            public:
                CryptoModuleAE();
            };

            class AWS_S3ENCRYPTION_API CryptoModuleStrictAE : public CryptoModule
            {
            public:
                CryptoModuleStrictAE();
            };
        }
    }
}
