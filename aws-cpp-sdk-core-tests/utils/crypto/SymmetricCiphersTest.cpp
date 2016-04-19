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
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

TEST(AES_CBC_TEST, rfc3602_case_1)
{
    Aws::String iv_raw =  "0x3dafba429d9eb430b422da802c9fac41";
    Aws::String key_raw = "0x06a9214036b8a15b512e03d534120006";
    unsigned char* data_raw = (unsigned char*)"Single block msg";
    Aws::String expected_raw = "e353779c1079aeb82708942dbe77181a";

    ByteBuffer iv = HashingUtils::HexDecode(iv_raw);
    ByteBuffer key = HashingUtils::HexDecode(key_raw);
    ByteBuffer data(data_raw, 17);
    ByteBuffer expected = HashingUtils::HexDecode(expected_raw);

    auto cipher = CreateAES_CBCImplementation(key, iv);
    auto result = cipher->EncryptBuffer(data);
    auto finish = cipher->FinalizeEncryption();
    std::cout << "res " << HashingUtils::HexEncode(result) << std::endl;
    std::cout << "fin " << HashingUtils::HexEncode(finish) << std::endl;
    ASSERT_EQ(expected_raw, HashingUtils::HexEncode(result));

    Aws::StringStream ss;
    ss << result.GetUnderlyingData() << finish.GetUnderlyingData();
    cipher = CreateAES_CBCImplementation(key, iv);
    result = cipher->DecryptBuffer(ByteBuffer((unsigned char*)ss.str().c_str(), ss.str().length()));
    std::cout << result.GetUnderlyingData() << std::endl;
}