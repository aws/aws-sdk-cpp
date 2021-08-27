/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/TestGridSessionArtifactType.h>
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
      namespace TestGridSessionArtifactTypeMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");
        static const int SELENIUM_LOG_HASH = HashingUtils::HashString("SELENIUM_LOG");


        TestGridSessionArtifactType GetTestGridSessionArtifactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return TestGridSessionArtifactType::UNKNOWN;
          }
          else if (hashCode == VIDEO_HASH)
          {
            return TestGridSessionArtifactType::VIDEO;
          }
          else if (hashCode == SELENIUM_LOG_HASH)
          {
            return TestGridSessionArtifactType::SELENIUM_LOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestGridSessionArtifactType>(hashCode);
          }

          return TestGridSessionArtifactType::NOT_SET;
        }

        Aws::String GetNameForTestGridSessionArtifactType(TestGridSessionArtifactType enumValue)
        {
          switch(enumValue)
          {
          case TestGridSessionArtifactType::UNKNOWN:
            return "UNKNOWN";
          case TestGridSessionArtifactType::VIDEO:
            return "VIDEO";
          case TestGridSessionArtifactType::SELENIUM_LOG:
            return "SELENIUM_LOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestGridSessionArtifactTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
