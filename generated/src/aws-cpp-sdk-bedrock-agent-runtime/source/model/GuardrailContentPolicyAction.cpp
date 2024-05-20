/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailContentPolicyAction.h>
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
      namespace GuardrailContentPolicyActionMapper
      {

        static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");


        GuardrailContentPolicyAction GetGuardrailContentPolicyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCKED_HASH)
          {
            return GuardrailContentPolicyAction::BLOCKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentPolicyAction>(hashCode);
          }

          return GuardrailContentPolicyAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentPolicyAction(GuardrailContentPolicyAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentPolicyAction::NOT_SET:
            return {};
          case GuardrailContentPolicyAction::BLOCKED:
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

      } // namespace GuardrailContentPolicyActionMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
