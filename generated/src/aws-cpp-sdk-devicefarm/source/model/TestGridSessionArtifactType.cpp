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

        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t VIDEO_HASH = ConstExprHashingUtils::HashString("VIDEO");
        static constexpr uint32_t SELENIUM_LOG_HASH = ConstExprHashingUtils::HashString("SELENIUM_LOG");


        TestGridSessionArtifactType GetTestGridSessionArtifactTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case TestGridSessionArtifactType::NOT_SET:
            return {};
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
