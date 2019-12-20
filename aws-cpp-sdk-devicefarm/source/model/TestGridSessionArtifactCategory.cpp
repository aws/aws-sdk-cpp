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

#include <aws/devicefarm/model/TestGridSessionArtifactCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace TestGridSessionArtifactCategoryMapper
      {

        static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");
        static const int LOG_HASH = HashingUtils::HashString("LOG");


        TestGridSessionArtifactCategory GetTestGridSessionArtifactCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIDEO_HASH)
          {
            return TestGridSessionArtifactCategory::VIDEO;
          }
          else if (hashCode == LOG_HASH)
          {
            return TestGridSessionArtifactCategory::LOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestGridSessionArtifactCategory>(hashCode);
          }

          return TestGridSessionArtifactCategory::NOT_SET;
        }

        Aws::String GetNameForTestGridSessionArtifactCategory(TestGridSessionArtifactCategory enumValue)
        {
          switch(enumValue)
          {
          case TestGridSessionArtifactCategory::VIDEO:
            return "VIDEO";
          case TestGridSessionArtifactCategory::LOG:
            return "LOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestGridSessionArtifactCategoryMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
