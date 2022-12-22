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

        static const int EVERY_HASH = HashingUtils::HashString("EVERY");
        static const int WITH_DOSAGE_HASH = HashingUtils::HashString("WITH_DOSAGE");
        static const int ADMINISTERED_VIA_HASH = HashingUtils::HashString("ADMINISTERED_VIA");
        static const int FOR_HASH = HashingUtils::HashString("FOR");
        static const int NEGATIVE_HASH = HashingUtils::HashString("NEGATIVE");
        static const int OVERLAP_HASH = HashingUtils::HashString("OVERLAP");
        static const int DOSAGE_HASH = HashingUtils::HashString("DOSAGE");
        static const int ROUTE_OR_MODE_HASH = HashingUtils::HashString("ROUTE_OR_MODE");
        static const int FORM_HASH = HashingUtils::HashString("FORM");
        static const int FREQUENCY_HASH = HashingUtils::HashString("FREQUENCY");
        static const int DURATION_HASH = HashingUtils::HashString("DURATION");
        static const int STRENGTH_HASH = HashingUtils::HashString("STRENGTH");
        static const int RATE_HASH = HashingUtils::HashString("RATE");
        static const int ACUITY_HASH = HashingUtils::HashString("ACUITY");
        static const int TEST_VALUE_HASH = HashingUtils::HashString("TEST_VALUE");
        static const int TEST_UNITS_HASH = HashingUtils::HashString("TEST_UNITS");
        static const int TEST_UNIT_HASH = HashingUtils::HashString("TEST_UNIT");
        static const int DIRECTION_HASH = HashingUtils::HashString("DIRECTION");
        static const int SYSTEM_ORGAN_SITE_HASH = HashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static const int AMOUNT_HASH = HashingUtils::HashString("AMOUNT");


        RelationshipType GetRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
