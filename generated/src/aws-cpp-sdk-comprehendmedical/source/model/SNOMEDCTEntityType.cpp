/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/SNOMEDCTEntityType.h>
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
      namespace SNOMEDCTEntityTypeMapper
      {

        static const int DX_NAME_HASH = HashingUtils::HashString("DX_NAME");
        static const int TEST_NAME_HASH = HashingUtils::HashString("TEST_NAME");
        static const int PROCEDURE_NAME_HASH = HashingUtils::HashString("PROCEDURE_NAME");
        static const int TREATMENT_NAME_HASH = HashingUtils::HashString("TREATMENT_NAME");


        SNOMEDCTEntityType GetSNOMEDCTEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DX_NAME_HASH)
          {
            return SNOMEDCTEntityType::DX_NAME;
          }
          else if (hashCode == TEST_NAME_HASH)
          {
            return SNOMEDCTEntityType::TEST_NAME;
          }
          else if (hashCode == PROCEDURE_NAME_HASH)
          {
            return SNOMEDCTEntityType::PROCEDURE_NAME;
          }
          else if (hashCode == TREATMENT_NAME_HASH)
          {
            return SNOMEDCTEntityType::TREATMENT_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SNOMEDCTEntityType>(hashCode);
          }

          return SNOMEDCTEntityType::NOT_SET;
        }

        Aws::String GetNameForSNOMEDCTEntityType(SNOMEDCTEntityType enumValue)
        {
          switch(enumValue)
          {
          case SNOMEDCTEntityType::NOT_SET:
            return {};
          case SNOMEDCTEntityType::DX_NAME:
            return "DX_NAME";
          case SNOMEDCTEntityType::TEST_NAME:
            return "TEST_NAME";
          case SNOMEDCTEntityType::PROCEDURE_NAME:
            return "PROCEDURE_NAME";
          case SNOMEDCTEntityType::TREATMENT_NAME:
            return "TREATMENT_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SNOMEDCTEntityTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
