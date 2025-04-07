/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailSensitiveInformationPolicyAction.h>
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
      namespace GuardrailSensitiveInformationPolicyActionMapper
      {

        static const int ANONYMIZED_HASH = HashingUtils::HashString("ANONYMIZED");
        static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuardrailSensitiveInformationPolicyAction GetGuardrailSensitiveInformationPolicyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANONYMIZED_HASH)
          {
            return GuardrailSensitiveInformationPolicyAction::ANONYMIZED;
          }
          else if (hashCode == BLOCKED_HASH)
          {
            return GuardrailSensitiveInformationPolicyAction::BLOCKED;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuardrailSensitiveInformationPolicyAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailSensitiveInformationPolicyAction>(hashCode);
          }

          return GuardrailSensitiveInformationPolicyAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailSensitiveInformationPolicyAction(GuardrailSensitiveInformationPolicyAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailSensitiveInformationPolicyAction::NOT_SET:
            return {};
          case GuardrailSensitiveInformationPolicyAction::ANONYMIZED:
            return "ANONYMIZED";
          case GuardrailSensitiveInformationPolicyAction::BLOCKED:
            return "BLOCKED";
          case GuardrailSensitiveInformationPolicyAction::NONE:
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

      } // namespace GuardrailSensitiveInformationPolicyActionMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
