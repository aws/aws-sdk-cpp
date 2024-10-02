/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContentFilterStrength.h>
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
      namespace GuardrailContentFilterStrengthMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        GuardrailContentFilterStrength GetGuardrailContentFilterStrengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return GuardrailContentFilterStrength::NONE;
          }
          else if (hashCode == LOW_HASH)
          {
            return GuardrailContentFilterStrength::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return GuardrailContentFilterStrength::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return GuardrailContentFilterStrength::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentFilterStrength>(hashCode);
          }

          return GuardrailContentFilterStrength::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentFilterStrength(GuardrailContentFilterStrength enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentFilterStrength::NOT_SET:
            return {};
          case GuardrailContentFilterStrength::NONE:
            return "NONE";
          case GuardrailContentFilterStrength::LOW:
            return "LOW";
          case GuardrailContentFilterStrength::MEDIUM:
            return "MEDIUM";
          case GuardrailContentFilterStrength::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContentFilterStrengthMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
