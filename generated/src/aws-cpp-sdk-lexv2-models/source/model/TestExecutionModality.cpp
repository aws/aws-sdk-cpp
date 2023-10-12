/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestExecutionModality.h>
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
      namespace TestExecutionModalityMapper
      {

        static constexpr uint32_t Text_HASH = ConstExprHashingUtils::HashString("Text");
        static constexpr uint32_t Audio_HASH = ConstExprHashingUtils::HashString("Audio");


        TestExecutionModality GetTestExecutionModalityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Text_HASH)
          {
            return TestExecutionModality::Text;
          }
          else if (hashCode == Audio_HASH)
          {
            return TestExecutionModality::Audio;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestExecutionModality>(hashCode);
          }

          return TestExecutionModality::NOT_SET;
        }

        Aws::String GetNameForTestExecutionModality(TestExecutionModality enumValue)
        {
          switch(enumValue)
          {
          case TestExecutionModality::NOT_SET:
            return {};
          case TestExecutionModality::Text:
            return "Text";
          case TestExecutionModality::Audio:
            return "Audio";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestExecutionModalityMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
