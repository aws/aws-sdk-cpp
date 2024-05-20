/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailTopicPolicyAction.h>
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
      namespace GuardrailTopicPolicyActionMapper
      {

        static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");


        GuardrailTopicPolicyAction GetGuardrailTopicPolicyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCKED_HASH)
          {
            return GuardrailTopicPolicyAction::BLOCKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailTopicPolicyAction>(hashCode);
          }

          return GuardrailTopicPolicyAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailTopicPolicyAction(GuardrailTopicPolicyAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailTopicPolicyAction::NOT_SET:
            return {};
          case GuardrailTopicPolicyAction::BLOCKED:
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

      } // namespace GuardrailTopicPolicyActionMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
