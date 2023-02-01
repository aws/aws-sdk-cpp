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

        static const int NEGATION_HASH = HashingUtils::HashString("NEGATION");
        static const int DIAGNOSIS_HASH = HashingUtils::HashString("DIAGNOSIS");
        static const int SIGN_HASH = HashingUtils::HashString("SIGN");
        static const int SYMPTOM_HASH = HashingUtils::HashString("SYMPTOM");
        static const int PERTAINS_TO_FAMILY_HASH = HashingUtils::HashString("PERTAINS_TO_FAMILY");
        static const int HYPOTHETICAL_HASH = HashingUtils::HashString("HYPOTHETICAL");
        static const int LOW_CONFIDENCE_HASH = HashingUtils::HashString("LOW_CONFIDENCE");
        static const int PAST_HISTORY_HASH = HashingUtils::HashString("PAST_HISTORY");
        static const int FUTURE_HASH = HashingUtils::HashString("FUTURE");


        SNOMEDCTTraitName GetSNOMEDCTTraitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
