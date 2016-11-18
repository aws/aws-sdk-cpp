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

#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/external/gtest.h>
#include <aws/testing/MemoryTesting.h>

#include <fstream>

using namespace Aws::Utils;


TEST(FileTest, HomeDirectory)
{
    auto homeDirectory = Aws::FileSystem::GetHomeDirectory();

    ASSERT_TRUE(homeDirectory.size() > 0);
}

TEST(FileTest, TempFile)
{
    Aws::String filePath; 

    {
        TempFile tempFile(std::ios_base::out | std::ios_base::trunc);
        ASSERT_TRUE(tempFile.GetFileName().size() > 0);

        tempFile << "1" << std::endl;
        ASSERT_TRUE(tempFile.good());

        tempFile.close();

        int32_t test = 0;
        std::ifstream testIn(tempFile.GetFileName().c_str());
        testIn >> test;
        testIn.close();

        ASSERT_EQ(test, 1);
        filePath = tempFile.GetFileName();
    }

    std::ifstream testIn(filePath.c_str());
    ASSERT_FALSE(testIn.good());
}
