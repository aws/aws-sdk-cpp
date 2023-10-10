/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/SNOMEDCTEntityCategory.h>
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
      namespace SNOMEDCTEntityCategoryMapper
      {

        static const int MEDICAL_CONDITION_HASH = HashingUtils::HashString("MEDICAL_CONDITION");
        static const int ANATOMY_HASH = HashingUtils::HashString("ANATOMY");
        static const int TEST_TREATMENT_PROCEDURE_HASH = HashingUtils::HashString("TEST_TREATMENT_PROCEDURE");


        SNOMEDCTEntityCategory GetSNOMEDCTEntityCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEDICAL_CONDITION_HASH)
          {
            return SNOMEDCTEntityCategory::MEDICAL_CONDITION;
          }
          else if (hashCode == ANATOMY_HASH)
          {
            return SNOMEDCTEntityCategory::ANATOMY;
          }
          else if (hashCode == TEST_TREATMENT_PROCEDURE_HASH)
          {
            return SNOMEDCTEntityCategory::TEST_TREATMENT_PROCEDURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SNOMEDCTEntityCategory>(hashCode);
          }

          return SNOMEDCTEntityCategory::NOT_SET;
        }

        Aws::String GetNameForSNOMEDCTEntityCategory(SNOMEDCTEntityCategory enumValue)
        {
          switch(enumValue)
          {
          case SNOMEDCTEntityCategory::NOT_SET:
            return {};
          case SNOMEDCTEntityCategory::MEDICAL_CONDITION:
            return "MEDICAL_CONDITION";
          case SNOMEDCTEntityCategory::ANATOMY:
            return "ANATOMY";
          case SNOMEDCTEntityCategory::TEST_TREATMENT_PROCEDURE:
            return "TEST_TREATMENT_PROCEDURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SNOMEDCTEntityCategoryMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
