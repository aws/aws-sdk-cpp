/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/RelationshipType.h>
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
      namespace RelationshipTypeMapper
      {

        static constexpr uint32_t EVERY_HASH = ConstExprHashingUtils::HashString("EVERY");
        static constexpr uint32_t WITH_DOSAGE_HASH = ConstExprHashingUtils::HashString("WITH_DOSAGE");
        static constexpr uint32_t ADMINISTERED_VIA_HASH = ConstExprHashingUtils::HashString("ADMINISTERED_VIA");
        static constexpr uint32_t FOR_HASH = ConstExprHashingUtils::HashString("FOR");
        static constexpr uint32_t NEGATIVE_HASH = ConstExprHashingUtils::HashString("NEGATIVE");
        static constexpr uint32_t OVERLAP_HASH = ConstExprHashingUtils::HashString("OVERLAP");
        static constexpr uint32_t DOSAGE_HASH = ConstExprHashingUtils::HashString("DOSAGE");
        static constexpr uint32_t ROUTE_OR_MODE_HASH = ConstExprHashingUtils::HashString("ROUTE_OR_MODE");
        static constexpr uint32_t FORM_HASH = ConstExprHashingUtils::HashString("FORM");
        static constexpr uint32_t FREQUENCY_HASH = ConstExprHashingUtils::HashString("FREQUENCY");
        static constexpr uint32_t DURATION_HASH = ConstExprHashingUtils::HashString("DURATION");
        static constexpr uint32_t STRENGTH_HASH = ConstExprHashingUtils::HashString("STRENGTH");
        static constexpr uint32_t RATE_HASH = ConstExprHashingUtils::HashString("RATE");
        static constexpr uint32_t ACUITY_HASH = ConstExprHashingUtils::HashString("ACUITY");
        static constexpr uint32_t TEST_VALUE_HASH = ConstExprHashingUtils::HashString("TEST_VALUE");
        static constexpr uint32_t TEST_UNITS_HASH = ConstExprHashingUtils::HashString("TEST_UNITS");
        static constexpr uint32_t TEST_UNIT_HASH = ConstExprHashingUtils::HashString("TEST_UNIT");
        static constexpr uint32_t DIRECTION_HASH = ConstExprHashingUtils::HashString("DIRECTION");
        static constexpr uint32_t SYSTEM_ORGAN_SITE_HASH = ConstExprHashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static constexpr uint32_t AMOUNT_HASH = ConstExprHashingUtils::HashString("AMOUNT");
        static constexpr uint32_t USAGE_HASH = ConstExprHashingUtils::HashString("USAGE");
        static constexpr uint32_t QUALITY_HASH = ConstExprHashingUtils::HashString("QUALITY");


        RelationshipType GetRelationshipTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVERY_HASH)
          {
            return RelationshipType::EVERY;
          }
          else if (hashCode == WITH_DOSAGE_HASH)
          {
            return RelationshipType::WITH_DOSAGE;
          }
          else if (hashCode == ADMINISTERED_VIA_HASH)
          {
            return RelationshipType::ADMINISTERED_VIA;
          }
          else if (hashCode == FOR_HASH)
          {
            return RelationshipType::FOR;
          }
          else if (hashCode == NEGATIVE_HASH)
          {
            return RelationshipType::NEGATIVE;
          }
          else if (hashCode == OVERLAP_HASH)
          {
            return RelationshipType::OVERLAP;
          }
          else if (hashCode == DOSAGE_HASH)
          {
            return RelationshipType::DOSAGE;
          }
          else if (hashCode == ROUTE_OR_MODE_HASH)
          {
            return RelationshipType::ROUTE_OR_MODE;
          }
          else if (hashCode == FORM_HASH)
          {
            return RelationshipType::FORM;
          }
          else if (hashCode == FREQUENCY_HASH)
          {
            return RelationshipType::FREQUENCY;
          }
          else if (hashCode == DURATION_HASH)
          {
            return RelationshipType::DURATION;
          }
          else if (hashCode == STRENGTH_HASH)
          {
            return RelationshipType::STRENGTH;
          }
          else if (hashCode == RATE_HASH)
          {
            return RelationshipType::RATE;
          }
          else if (hashCode == ACUITY_HASH)
          {
            return RelationshipType::ACUITY;
          }
          else if (hashCode == TEST_VALUE_HASH)
          {
            return RelationshipType::TEST_VALUE;
          }
          else if (hashCode == TEST_UNITS_HASH)
          {
            return RelationshipType::TEST_UNITS;
          }
          else if (hashCode == TEST_UNIT_HASH)
          {
            return RelationshipType::TEST_UNIT;
          }
          else if (hashCode == DIRECTION_HASH)
          {
            return RelationshipType::DIRECTION;
          }
          else if (hashCode == SYSTEM_ORGAN_SITE_HASH)
          {
            return RelationshipType::SYSTEM_ORGAN_SITE;
          }
          else if (hashCode == AMOUNT_HASH)
          {
            return RelationshipType::AMOUNT;
          }
          else if (hashCode == USAGE_HASH)
          {
            return RelationshipType::USAGE;
          }
          else if (hashCode == QUALITY_HASH)
          {
            return RelationshipType::QUALITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationshipType>(hashCode);
          }

          return RelationshipType::NOT_SET;
        }

        Aws::String GetNameForRelationshipType(RelationshipType enumValue)
        {
          switch(enumValue)
          {
          case RelationshipType::NOT_SET:
            return {};
          case RelationshipType::EVERY:
            return "EVERY";
          case RelationshipType::WITH_DOSAGE:
            return "WITH_DOSAGE";
          case RelationshipType::ADMINISTERED_VIA:
            return "ADMINISTERED_VIA";
          case RelationshipType::FOR:
            return "FOR";
          case RelationshipType::NEGATIVE:
            return "NEGATIVE";
          case RelationshipType::OVERLAP:
            return "OVERLAP";
          case RelationshipType::DOSAGE:
            return "DOSAGE";
          case RelationshipType::ROUTE_OR_MODE:
            return "ROUTE_OR_MODE";
          case RelationshipType::FORM:
            return "FORM";
          case RelationshipType::FREQUENCY:
            return "FREQUENCY";
          case RelationshipType::DURATION:
            return "DURATION";
          case RelationshipType::STRENGTH:
            return "STRENGTH";
          case RelationshipType::RATE:
            return "RATE";
          case RelationshipType::ACUITY:
            return "ACUITY";
          case RelationshipType::TEST_VALUE:
            return "TEST_VALUE";
          case RelationshipType::TEST_UNITS:
            return "TEST_UNITS";
          case RelationshipType::TEST_UNIT:
            return "TEST_UNIT";
          case RelationshipType::DIRECTION:
            return "DIRECTION";
          case RelationshipType::SYSTEM_ORGAN_SITE:
            return "SYSTEM_ORGAN_SITE";
          case RelationshipType::AMOUNT:
            return "AMOUNT";
          case RelationshipType::USAGE:
            return "USAGE";
          case RelationshipType::QUALITY:
            return "QUALITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationshipTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
