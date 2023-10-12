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

        static constexpr uint32_t ACUITY_HASH = ConstExprHashingUtils::HashString("ACUITY");
        static constexpr uint32_t QUALITY_HASH = ConstExprHashingUtils::HashString("QUALITY");
        static constexpr uint32_t TEST_VALUE_HASH = ConstExprHashingUtils::HashString("TEST_VALUE");
        static constexpr uint32_t TEST_UNITS_HASH = ConstExprHashingUtils::HashString("TEST_UNITS");
        static constexpr uint32_t DIRECTION_HASH = ConstExprHashingUtils::HashString("DIRECTION");
        static constexpr uint32_t SYSTEM_ORGAN_SITE_HASH = ConstExprHashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static constexpr uint32_t TEST_UNIT_HASH = ConstExprHashingUtils::HashString("TEST_UNIT");


        SNOMEDCTRelationshipType GetSNOMEDCTRelationshipTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
