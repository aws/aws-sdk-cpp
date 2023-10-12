/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestExecutionApiMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TestExecutionApiModeMapper
      {

        static constexpr uint32_t Streaming_HASH = ConstExprHashingUtils::HashString("Streaming");
        static constexpr uint32_t NonStreaming_HASH = ConstExprHashingUtils::HashString("NonStreaming");


        TestExecutionApiMode GetTestExecutionApiModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Streaming_HASH)
          {
            return TestExecutionApiMode::Streaming;
          }
          else if (hashCode == NonStreaming_HASH)
          {
            return TestExecutionApiMode::NonStreaming;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestExecutionApiMode>(hashCode);
          }

          return TestExecutionApiMode::NOT_SET;
        }

        Aws::String GetNameForTestExecutionApiMode(TestExecutionApiMode enumValue)
        {
          switch(enumValue)
          {
          case TestExecutionApiMode::NOT_SET:
            return {};
          case TestExecutionApiMode::Streaming:
            return "Streaming";
          case TestExecutionApiMode::NonStreaming:
            return "NonStreaming";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestExecutionApiModeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
