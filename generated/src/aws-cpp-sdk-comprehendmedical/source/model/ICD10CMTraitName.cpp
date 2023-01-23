/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/ICD10CMTraitName.h>
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
      namespace ICD10CMTraitNameMapper
      {

        static const int NEGATION_HASH = HashingUtils::HashString("NEGATION");
        static const int DIAGNOSIS_HASH = HashingUtils::HashString("DIAGNOSIS");
        static const int SIGN_HASH = HashingUtils::HashString("SIGN");
        static const int SYMPTOM_HASH = HashingUtils::HashString("SYMPTOM");
        static const int PERTAINS_TO_FAMILY_HASH = HashingUtils::HashString("PERTAINS_TO_FAMILY");
        static const int HYPOTHETICAL_HASH = HashingUtils::HashString("HYPOTHETICAL");
        static const int LOW_CONFIDENCE_HASH = HashingUtils::HashString("LOW_CONFIDENCE");


        ICD10CMTraitName GetICD10CMTraitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEGATION_HASH)
          {
            return ICD10CMTraitName::NEGATION;
          }
          else if (hashCode == DIAGNOSIS_HASH)
          {
            return ICD10CMTraitName::DIAGNOSIS;
          }
          else if (hashCode == SIGN_HASH)
          {
            return ICD10CMTraitName::SIGN;
          }
          else if (hashCode == SYMPTOM_HASH)
          {
            return ICD10CMTraitName::SYMPTOM;
          }
          else if (hashCode == PERTAINS_TO_FAMILY_HASH)
          {
            return ICD10CMTraitName::PERTAINS_TO_FAMILY;
          }
          else if (hashCode == HYPOTHETICAL_HASH)
          {
            return ICD10CMTraitName::HYPOTHETICAL;
          }
          else if (hashCode == LOW_CONFIDENCE_HASH)
          {
            return ICD10CMTraitName::LOW_CONFIDENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ICD10CMTraitName>(hashCode);
          }

          return ICD10CMTraitName::NOT_SET;
        }

        Aws::String GetNameForICD10CMTraitName(ICD10CMTraitName enumValue)
        {
          switch(enumValue)
          {
          case ICD10CMTraitName::NEGATION:
            return "NEGATION";
          case ICD10CMTraitName::DIAGNOSIS:
            return "DIAGNOSIS";
          case ICD10CMTraitName::SIGN:
            return "SIGN";
          case ICD10CMTraitName::SYMPTOM:
            return "SYMPTOM";
          case ICD10CMTraitName::PERTAINS_TO_FAMILY:
            return "PERTAINS_TO_FAMILY";
          case ICD10CMTraitName::HYPOTHETICAL:
            return "HYPOTHETICAL";
          case ICD10CMTraitName::LOW_CONFIDENCE:
            return "LOW_CONFIDENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ICD10CMTraitNameMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
