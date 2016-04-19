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

#include <aws/external/gtest.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/crypto/Cipher.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

TEST(AES_CBC_TEST, Test128BitEncryptionMode)
{
    unsigned char iv_raw[16] =  { 0x06, 0xa9, 0x21, 0x40, 0x36, 0xb8, 0xa1, 0x5b, 0x51, 0x2e, 0x03, 0xd5, 0x34, 0x12, 0x00, 0x06 };

    unsigned char key_raw[16] = { 0x3d, 0xaf, 0xba, 0x42, 0x9d, 0x9e, 0xb4, 0x30, 0xb4, 0x22, 0xda, 0x80, 0x2c, 0x9f, 0xac, 0x41 };
    unsigned char* data_raw = (unsigned char*)"Single block msg";
    unsigned char expected_raw[16] = {0xe3, 0x53, 0x77, 0x9c, 0x10, 0x79, 0xae, 0xb8, 0x27, 0x08, 0x94, 0x2d, 0xbe, 0x77, 0x18, 0x1a};

    ByteBuffer iv(iv_raw, 16);
    ByteBuffer key(key_raw, 16);
    ByteBuffer data(data_raw, 17);
    ByteBuffer expected(expected_raw, 16);

    auto cipher = CreateAES_CBCImplementation(key, iv);
    auto result = cipher->EncryptBuffer(data);
    auto finish = cipher->FinalizeEncryption();

    ASSERT_EQ(expected, result);
}