/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/SNOMEDCTTraitName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace SNOMEDCTTraitNameMapper
      {

        static constexpr uint32_t NEGATION_HASH = ConstExprHashingUtils::HashString("NEGATION");
        static constexpr uint32_t DIAGNOSIS_HASH = ConstExprHashingUtils::HashString("DIAGNOSIS");
        static constexpr uint32_t SIGN_HASH = ConstExprHashingUtils::HashString("SIGN");
        static constexpr uint32_t SYMPTOM_HASH = ConstExprHashingUtils::HashString("SYMPTOM");
        static constexpr uint32_t PERTAINS_TO_FAMILY_HASH = ConstExprHashingUtils::HashString("PERTAINS_TO_FAMILY");
        static constexpr uint32_t HYPOTHETICAL_HASH = ConstExprHashingUtils::HashString("HYPOTHETICAL");
        static constexpr uint32_t LOW_CONFIDENCE_HASH = ConstExprHashingUtils::HashString("LOW_CONFIDENCE");
        static constexpr uint32_t PAST_HISTORY_HASH = ConstExprHashingUtils::HashString("PAST_HISTORY");
        static constexpr uint32_t FUTURE_HASH = ConstExprHashingUtils::HashString("FUTURE");


        SNOMEDCTTraitName GetSNOMEDCTTraitNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEGATION_HASH)
          {
            return SNOMEDCTTraitName::NEGATION;
          }
          else if (hashCode == DIAGNOSIS_HASH)
          {
            return SNOMEDCTTraitName::DIAGNOSIS;
          }
          else if (hashCode == SIGN_HASH)
          {
            return SNOMEDCTTraitName::SIGN;
          }
          else if (hashCode == SYMPTOM_HASH)
          {
            return SNOMEDCTTraitName::SYMPTOM;
          }
          else if (hashCode == PERTAINS_TO_FAMILY_HASH)
          {
            return SNOMEDCTTraitName::PERTAINS_TO_FAMILY;
          }
          else if (hashCode == HYPOTHETICAL_HASH)
          {
            return SNOMEDCTTraitName::HYPOTHETICAL;
          }
          else if (hashCode == LOW_CONFIDENCE_HASH)
          {
            return SNOMEDCTTraitName::LOW_CONFIDENCE;
          }
          else if (hashCode == PAST_HISTORY_HASH)
          {
            return SNOMEDCTTraitName::PAST_HISTORY;
          }
          else if (hashCode == FUTURE_HASH)
          {
            return SNOMEDCTTraitName::FUTURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SNOMEDCTTraitName>(hashCode);
          }

          return SNOMEDCTTraitName::NOT_SET;
        }

        Aws::String GetNameForSNOMEDCTTraitName(SNOMEDCTTraitName enumValue)
        {
          switch(enumValue)
          {
          case SNOMEDCTTraitName::NOT_SET:
            return {};
          case SNOMEDCTTraitName::NEGATION:
            return "NEGATION";
          case SNOMEDCTTraitName::DIAGNOSIS:
            return "DIAGNOSIS";
          case SNOMEDCTTraitName::SIGN:
            return "SIGN";
          case SNOMEDCTTraitName::SYMPTOM:
            return "SYMPTOM";
          case SNOMEDCTTraitName::PERTAINS_TO_FAMILY:
            return "PERTAINS_TO_FAMILY";
          case SNOMEDCTTraitName::HYPOTHETICAL:
            return "HYPOTHETICAL";
          case SNOMEDCTTraitName::LOW_CONFIDENCE:
            return "LOW_CONFIDENCE";
          case SNOMEDCTTraitName::PAST_HISTORY:
            return "PAST_HISTORY";
          case SNOMEDCTTraitName::FUTURE:
            return "FUTURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SNOMEDCTTraitNameMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
