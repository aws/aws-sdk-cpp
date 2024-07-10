/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContextualGroundingPolicyAction.h>
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
      namespace GuardrailContextualGroundingPolicyActionMapper
      {

        static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuardrailContextualGroundingPolicyAction GetGuardrailContextualGroundingPolicyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCKED_HASH)
          {
            return GuardrailContextualGroundingPolicyAction::BLOCKED;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuardrailContextualGroundingPolicyAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContextualGroundingPolicyAction>(hashCode);
          }

          return GuardrailContextualGroundingPolicyAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailContextualGroundingPolicyAction(GuardrailContextualGroundingPolicyAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContextualGroundingPolicyAction::NOT_SET:
            return {};
          case GuardrailContextualGroundingPolicyAction::BLOCKED:
            return "BLOCKED";
          case GuardrailContextualGroundingPolicyAction::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContextualGroundingPolicyActionMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
