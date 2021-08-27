/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
