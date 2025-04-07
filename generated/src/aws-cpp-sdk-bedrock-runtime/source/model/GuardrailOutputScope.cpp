/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailOutputScope.h>
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
      namespace GuardrailOutputScopeMapper
      {

        static const int INTERVENTIONS_HASH = HashingUtils::HashString("INTERVENTIONS");
        static const int FULL_HASH = HashingUtils::HashString("FULL");


        GuardrailOutputScope GetGuardrailOutputScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERVENTIONS_HASH)
          {
            return GuardrailOutputScope::INTERVENTIONS;
          }
          else if (hashCode == FULL_HASH)
          {
            return GuardrailOutputScope::FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailOutputScope>(hashCode);
          }

          return GuardrailOutputScope::NOT_SET;
        }

        Aws::String GetNameForGuardrailOutputScope(GuardrailOutputScope enumValue)
        {
          switch(enumValue)
          {
          case GuardrailOutputScope::NOT_SET:
            return {};
          case GuardrailOutputScope::INTERVENTIONS:
            return "INTERVENTIONS";
          case GuardrailOutputScope::FULL:
            return "FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailOutputScopeMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
