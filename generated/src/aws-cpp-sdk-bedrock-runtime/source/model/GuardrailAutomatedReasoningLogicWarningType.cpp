/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningLogicWarningType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace GuardrailAutomatedReasoningLogicWarningTypeMapper
      {

        static const int ALWAYS_FALSE_HASH = HashingUtils::HashString("ALWAYS_FALSE");
        static const int ALWAYS_TRUE_HASH = HashingUtils::HashString("ALWAYS_TRUE");


        GuardrailAutomatedReasoningLogicWarningType GetGuardrailAutomatedReasoningLogicWarningTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_FALSE_HASH)
          {
            return GuardrailAutomatedReasoningLogicWarningType::ALWAYS_FALSE;
          }
          else if (hashCode == ALWAYS_TRUE_HASH)
          {
            return GuardrailAutomatedReasoningLogicWarningType::ALWAYS_TRUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailAutomatedReasoningLogicWarningType>(hashCode);
          }

          return GuardrailAutomatedReasoningLogicWarningType::NOT_SET;
        }

        Aws::String GetNameForGuardrailAutomatedReasoningLogicWarningType(GuardrailAutomatedReasoningLogicWarningType enumValue)
        {
          switch(enumValue)
          {
          case GuardrailAutomatedReasoningLogicWarningType::NOT_SET:
            return {};
          case GuardrailAutomatedReasoningLogicWarningType::ALWAYS_FALSE:
            return "ALWAYS_FALSE";
          case GuardrailAutomatedReasoningLogicWarningType::ALWAYS_TRUE:
            return "ALWAYS_TRUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailAutomatedReasoningLogicWarningTypeMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
