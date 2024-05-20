/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailWordPolicyAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace GuardrailWordPolicyActionMapper
      {

        static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");


        GuardrailWordPolicyAction GetGuardrailWordPolicyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCKED_HASH)
          {
            return GuardrailWordPolicyAction::BLOCKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailWordPolicyAction>(hashCode);
          }

          return GuardrailWordPolicyAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailWordPolicyAction(GuardrailWordPolicyAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailWordPolicyAction::NOT_SET:
            return {};
          case GuardrailWordPolicyAction::BLOCKED:
            return "BLOCKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailWordPolicyActionMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
