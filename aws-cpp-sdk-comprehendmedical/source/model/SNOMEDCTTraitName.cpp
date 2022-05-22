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
