/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/SNOMEDCTRelationshipType.h>
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
      namespace SNOMEDCTRelationshipTypeMapper
      {

        static const int ACUITY_HASH = HashingUtils::HashString("ACUITY");
        static const int QUALITY_HASH = HashingUtils::HashString("QUALITY");
        static const int TEST_VALUE_HASH = HashingUtils::HashString("TEST_VALUE");
        static const int TEST_UNITS_HASH = HashingUtils::HashString("TEST_UNITS");
        static const int DIRECTION_HASH = HashingUtils::HashString("DIRECTION");
        static const int SYSTEM_ORGAN_SITE_HASH = HashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static const int TEST_UNIT_HASH = HashingUtils::HashString("TEST_UNIT");


        SNOMEDCTRelationshipType GetSNOMEDCTRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACUITY_HASH)
          {
            return SNOMEDCTRelationshipType::ACUITY;
          }
          else if (hashCode == QUALITY_HASH)
          {
            return SNOMEDCTRelationshipType::QUALITY;
          }
          else if (hashCode == TEST_VALUE_HASH)
          {
            return SNOMEDCTRelationshipType::TEST_VALUE;
          }
          else if (hashCode == TEST_UNITS_HASH)
          {
            return SNOMEDCTRelationshipType::TEST_UNITS;
          }
          else if (hashCode == DIRECTION_HASH)
          {
            return SNOMEDCTRelationshipType::DIRECTION;
          }
          else if (hashCode == SYSTEM_ORGAN_SITE_HASH)
          {
            return SNOMEDCTRelationshipType::SYSTEM_ORGAN_SITE;
          }
          else if (hashCode == TEST_UNIT_HASH)
          {
            return SNOMEDCTRelationshipType::TEST_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SNOMEDCTRelationshipType>(hashCode);
          }

          return SNOMEDCTRelationshipType::NOT_SET;
        }

        Aws::String GetNameForSNOMEDCTRelationshipType(SNOMEDCTRelationshipType enumValue)
        {
          switch(enumValue)
          {
          case SNOMEDCTRelationshipType::NOT_SET:
            return {};
          case SNOMEDCTRelationshipType::ACUITY:
            return "ACUITY";
          case SNOMEDCTRelationshipType::QUALITY:
            return "QUALITY";
          case SNOMEDCTRelationshipType::TEST_VALUE:
            return "TEST_VALUE";
          case SNOMEDCTRelationshipType::TEST_UNITS:
            return "TEST_UNITS";
          case SNOMEDCTRelationshipType::DIRECTION:
            return "DIRECTION";
          case SNOMEDCTRelationshipType::SYSTEM_ORGAN_SITE:
            return "SYSTEM_ORGAN_SITE";
          case SNOMEDCTRelationshipType::TEST_UNIT:
            return "TEST_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SNOMEDCTRelationshipTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
