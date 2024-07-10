/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAction.h>
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
      namespace GuardrailActionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int GUARDRAIL_INTERVENED_HASH = HashingUtils::HashString("GUARDRAIL_INTERVENED");


        GuardrailAction GetGuardrailActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return GuardrailAction::NONE;
          }
          else if (hashCode == GUARDRAIL_INTERVENED_HASH)
          {
            return GuardrailAction::GUARDRAIL_INTERVENED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailAction>(hashCode);
          }

          return GuardrailAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailAction(GuardrailAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailAction::NOT_SET:
            return {};
          case GuardrailAction::NONE:
            return "NONE";
          case GuardrailAction::GUARDRAIL_INTERVENED:
            return "GUARDRAIL_INTERVENED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailActionMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
