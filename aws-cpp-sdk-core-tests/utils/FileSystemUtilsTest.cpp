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

#include <aws/core/utils/FileSystemUtils.h>
#include <aws/external/gtest.h>
#include <aws/testing/MemoryTesting.h>

#include <fstream>

using namespace Aws::Utils;


TEST(FileTest, HomeDirectory)
{
    auto homeDirectory = Aws::Utils::FileSystemUtils::GetHomeDirectory();

    ASSERT_TRUE(homeDirectory.size() > 0);
}

TEST(FileTest, TempFile)
{
    auto tempFilePath = Aws::Utils::FileSystemUtils::CreateTempFilePath();
    ASSERT_TRUE(tempFilePath.size() > 0);

    std::ofstream testFile(tempFilePath.c_str());
    testFile << "1" << std::endl;
    ASSERT_TRUE(testFile.good());

    testFile.close();

    int32_t test = 0;
    std::ifstream testIn(tempFilePath.c_str());
    testIn >> test;
    testIn.close();

    ASSERT_EQ(test, 1);
}
