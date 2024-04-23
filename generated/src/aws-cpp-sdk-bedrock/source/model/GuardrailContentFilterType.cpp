/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace GuardrailContentFilterTypeMapper
      {

        static const int SEXUAL_HASH = HashingUtils::HashString("SEXUAL");
        static const int VIOLENCE_HASH = HashingUtils::HashString("VIOLENCE");
        static const int HATE_HASH = HashingUtils::HashString("HATE");
        static const int INSULTS_HASH = HashingUtils::HashString("INSULTS");
        static const int MISCONDUCT_HASH = HashingUtils::HashString("MISCONDUCT");
        static const int PROMPT_ATTACK_HASH = HashingUtils::HashString("PROMPT_ATTACK");


        GuardrailContentFilterType GetGuardrailContentFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEXUAL_HASH)
          {
            return GuardrailContentFilterType::SEXUAL;
          }
          else if (hashCode == VIOLENCE_HASH)
          {
            return GuardrailContentFilterType::VIOLENCE;
          }
          else if (hashCode == HATE_HASH)
          {
            return GuardrailContentFilterType::HATE;
          }
          else if (hashCode == INSULTS_HASH)
          {
            return GuardrailContentFilterType::INSULTS;
          }
          else if (hashCode == MISCONDUCT_HASH)
          {
            return GuardrailContentFilterType::MISCONDUCT;
          }
          else if (hashCode == PROMPT_ATTACK_HASH)
          {
            return GuardrailContentFilterType::PROMPT_ATTACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentFilterType>(hashCode);
          }

          return GuardrailContentFilterType::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentFilterType(GuardrailContentFilterType enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentFilterType::NOT_SET:
            return {};
          case GuardrailContentFilterType::SEXUAL:
            return "SEXUAL";
          case GuardrailContentFilterType::VIOLENCE:
            return "VIOLENCE";
          case GuardrailContentFilterType::HATE:
            return "HATE";
          case GuardrailContentFilterType::INSULTS:
            return "INSULTS";
          case GuardrailContentFilterType::MISCONDUCT:
            return "MISCONDUCT";
          case GuardrailContentFilterType::PROMPT_ATTACK:
            return "PROMPT_ATTACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContentFilterTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
