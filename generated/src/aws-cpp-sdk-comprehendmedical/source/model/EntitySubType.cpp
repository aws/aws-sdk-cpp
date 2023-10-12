/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/EntitySubType.h>
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
      namespace EntitySubTypeMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t DX_NAME_HASH = ConstExprHashingUtils::HashString("DX_NAME");
        static constexpr uint32_t DOSAGE_HASH = ConstExprHashingUtils::HashString("DOSAGE");
        static constexpr uint32_t ROUTE_OR_MODE_HASH = ConstExprHashingUtils::HashString("ROUTE_OR_MODE");
        static constexpr uint32_t FORM_HASH = ConstExprHashingUtils::HashString("FORM");
        static constexpr uint32_t FREQUENCY_HASH = ConstExprHashingUtils::HashString("FREQUENCY");
        static constexpr uint32_t DURATION_HASH = ConstExprHashingUtils::HashString("DURATION");
        static constexpr uint32_t GENERIC_NAME_HASH = ConstExprHashingUtils::HashString("GENERIC_NAME");
        static constexpr uint32_t BRAND_NAME_HASH = ConstExprHashingUtils::HashString("BRAND_NAME");
        static constexpr uint32_t STRENGTH_HASH = ConstExprHashingUtils::HashString("STRENGTH");
        static constexpr uint32_t RATE_HASH = ConstExprHashingUtils::HashString("RATE");
        static constexpr uint32_t ACUITY_HASH = ConstExprHashingUtils::HashString("ACUITY");
        static constexpr uint32_t TEST_NAME_HASH = ConstExprHashingUtils::HashString("TEST_NAME");
        static constexpr uint32_t TEST_VALUE_HASH = ConstExprHashingUtils::HashString("TEST_VALUE");
        static constexpr uint32_t TEST_UNITS_HASH = ConstExprHashingUtils::HashString("TEST_UNITS");
        static constexpr uint32_t TEST_UNIT_HASH = ConstExprHashingUtils::HashString("TEST_UNIT");
        static constexpr uint32_t PROCEDURE_NAME_HASH = ConstExprHashingUtils::HashString("PROCEDURE_NAME");
        static constexpr uint32_t TREATMENT_NAME_HASH = ConstExprHashingUtils::HashString("TREATMENT_NAME");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t AGE_HASH = ConstExprHashingUtils::HashString("AGE");
        static constexpr uint32_t CONTACT_POINT_HASH = ConstExprHashingUtils::HashString("CONTACT_POINT");
        static constexpr uint32_t PHONE_OR_FAX_HASH = ConstExprHashingUtils::HashString("PHONE_OR_FAX");
        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");
        static constexpr uint32_t IDENTIFIER_HASH = ConstExprHashingUtils::HashString("IDENTIFIER");
        static constexpr uint32_t ID_HASH = ConstExprHashingUtils::HashString("ID");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");
        static constexpr uint32_t ADDRESS_HASH = ConstExprHashingUtils::HashString("ADDRESS");
        static constexpr uint32_t PROFESSION_HASH = ConstExprHashingUtils::HashString("PROFESSION");
        static constexpr uint32_t SYSTEM_ORGAN_SITE_HASH = ConstExprHashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static constexpr uint32_t DIRECTION_HASH = ConstExprHashingUtils::HashString("DIRECTION");
        static constexpr uint32_t QUALITY_HASH = ConstExprHashingUtils::HashString("QUALITY");
        static constexpr uint32_t QUANTITY_HASH = ConstExprHashingUtils::HashString("QUANTITY");
        static constexpr uint32_t TIME_EXPRESSION_HASH = ConstExprHashingUtils::HashString("TIME_EXPRESSION");
        static constexpr uint32_t TIME_TO_MEDICATION_NAME_HASH = ConstExprHashingUtils::HashString("TIME_TO_MEDICATION_NAME");
        static constexpr uint32_t TIME_TO_DX_NAME_HASH = ConstExprHashingUtils::HashString("TIME_TO_DX_NAME");
        static constexpr uint32_t TIME_TO_TEST_NAME_HASH = ConstExprHashingUtils::HashString("TIME_TO_TEST_NAME");
        static constexpr uint32_t TIME_TO_PROCEDURE_NAME_HASH = ConstExprHashingUtils::HashString("TIME_TO_PROCEDURE_NAME");
        static constexpr uint32_t TIME_TO_TREATMENT_NAME_HASH = ConstExprHashingUtils::HashString("TIME_TO_TREATMENT_NAME");
        static constexpr uint32_t AMOUNT_HASH = ConstExprHashingUtils::HashString("AMOUNT");
        static constexpr uint32_t GENDER_HASH = ConstExprHashingUtils::HashString("GENDER");
        static constexpr uint32_t RACE_ETHNICITY_HASH = ConstExprHashingUtils::HashString("RACE_ETHNICITY");
        static constexpr uint32_t ALLERGIES_HASH = ConstExprHashingUtils::HashString("ALLERGIES");
        static constexpr uint32_t TOBACCO_USE_HASH = ConstExprHashingUtils::HashString("TOBACCO_USE");
        static constexpr uint32_t ALCOHOL_CONSUMPTION_HASH = ConstExprHashingUtils::HashString("ALCOHOL_CONSUMPTION");
        static constexpr uint32_t REC_DRUG_USE_HASH = ConstExprHashingUtils::HashString("REC_DRUG_USE");


        EntitySubType GetEntitySubTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return EntitySubType::NAME;
          }
          else if (hashCode == DX_NAME_HASH)
          {
            return EntitySubType::DX_NAME;
          }
          else if (hashCode == DOSAGE_HASH)
          {
            return EntitySubType::DOSAGE;
          }
          else if (hashCode == ROUTE_OR_MODE_HASH)
          {
            return EntitySubType::ROUTE_OR_MODE;
          }
          else if (hashCode == FORM_HASH)
          {
            return EntitySubType::FORM;
          }
          else if (hashCode == FREQUENCY_HASH)
          {
            return EntitySubType::FREQUENCY;
          }
          else if (hashCode == DURATION_HASH)
          {
            return EntitySubType::DURATION;
          }
          else if (hashCode == GENERIC_NAME_HASH)
          {
            return EntitySubType::GENERIC_NAME;
          }
          else if (hashCode == BRAND_NAME_HASH)
          {
            return EntitySubType::BRAND_NAME;
          }
          else if (hashCode == STRENGTH_HASH)
          {
            return EntitySubType::STRENGTH;
          }
          else if (hashCode == RATE_HASH)
          {
            return EntitySubType::RATE;
          }
          else if (hashCode == ACUITY_HASH)
          {
            return EntitySubType::ACUITY;
          }
          else if (hashCode == TEST_NAME_HASH)
          {
            return EntitySubType::TEST_NAME;
          }
          else if (hashCode == TEST_VALUE_HASH)
          {
            return EntitySubType::TEST_VALUE;
          }
          else if (hashCode == TEST_UNITS_HASH)
          {
            return EntitySubType::TEST_UNITS;
          }
          else if (hashCode == TEST_UNIT_HASH)
          {
            return EntitySubType::TEST_UNIT;
          }
          else if (hashCode == PROCEDURE_NAME_HASH)
          {
            return EntitySubType::PROCEDURE_NAME;
          }
          else if (hashCode == TREATMENT_NAME_HASH)
          {
            return EntitySubType::TREATMENT_NAME;
          }
          else if (hashCode == DATE_HASH)
          {
            return EntitySubType::DATE;
          }
          else if (hashCode == AGE_HASH)
          {
            return EntitySubType::AGE;
          }
          else if (hashCode == CONTACT_POINT_HASH)
          {
            return EntitySubType::CONTACT_POINT;
          }
          else if (hashCode == PHONE_OR_FAX_HASH)
          {
            return EntitySubType::PHONE_OR_FAX;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return EntitySubType::EMAIL;
          }
          else if (hashCode == IDENTIFIER_HASH)
          {
            return EntitySubType::IDENTIFIER;
          }
          else if (hashCode == ID_HASH)
          {
            return EntitySubType::ID;
          }
          else if (hashCode == URL_HASH)
          {
            return EntitySubType::URL;
          }
          else if (hashCode == ADDRESS_HASH)
          {
            return EntitySubType::ADDRESS;
          }
          else if (hashCode == PROFESSION_HASH)
          {
            return EntitySubType::PROFESSION;
          }
          else if (hashCode == SYSTEM_ORGAN_SITE_HASH)
          {
            return EntitySubType::SYSTEM_ORGAN_SITE;
          }
          else if (hashCode == DIRECTION_HASH)
          {
            return EntitySubType::DIRECTION;
          }
          else if (hashCode == QUALITY_HASH)
          {
            return EntitySubType::QUALITY;
          }
          else if (hashCode == QUANTITY_HASH)
          {
            return EntitySubType::QUANTITY;
          }
          else if (hashCode == TIME_EXPRESSION_HASH)
          {
            return EntitySubType::TIME_EXPRESSION;
          }
          else if (hashCode == TIME_TO_MEDICATION_NAME_HASH)
          {
            return EntitySubType::TIME_TO_MEDICATION_NAME;
          }
          else if (hashCode == TIME_TO_DX_NAME_HASH)
          {
            return EntitySubType::TIME_TO_DX_NAME;
          }
          else if (hashCode == TIME_TO_TEST_NAME_HASH)
          {
            return EntitySubType::TIME_TO_TEST_NAME;
          }
          else if (hashCode == TIME_TO_PROCEDURE_NAME_HASH)
          {
            return EntitySubType::TIME_TO_PROCEDURE_NAME;
          }
          else if (hashCode == TIME_TO_TREATMENT_NAME_HASH)
          {
            return EntitySubType::TIME_TO_TREATMENT_NAME;
          }
          else if (hashCode == AMOUNT_HASH)
          {
            return EntitySubType::AMOUNT;
          }
          else if (hashCode == GENDER_HASH)
          {
            return EntitySubType::GENDER;
          }
          else if (hashCode == RACE_ETHNICITY_HASH)
          {
            return EntitySubType::RACE_ETHNICITY;
          }
          else if (hashCode == ALLERGIES_HASH)
          {
            return EntitySubType::ALLERGIES;
          }
          else if (hashCode == TOBACCO_USE_HASH)
          {
            return EntitySubType::TOBACCO_USE;
          }
          else if (hashCode == ALCOHOL_CONSUMPTION_HASH)
          {
            return EntitySubType::ALCOHOL_CONSUMPTION;
          }
          else if (hashCode == REC_DRUG_USE_HASH)
          {
            return EntitySubType::REC_DRUG_USE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntitySubType>(hashCode);
          }

          return EntitySubType::NOT_SET;
        }

        Aws::String GetNameForEntitySubType(EntitySubType enumValue)
        {
          switch(enumValue)
          {
          case EntitySubType::NOT_SET:
            return {};
          case EntitySubType::NAME:
            return "NAME";
          case EntitySubType::DX_NAME:
            return "DX_NAME";
          case EntitySubType::DOSAGE:
            return "DOSAGE";
          case EntitySubType::ROUTE_OR_MODE:
            return "ROUTE_OR_MODE";
          case EntitySubType::FORM:
            return "FORM";
          case EntitySubType::FREQUENCY:
            return "FREQUENCY";
          case EntitySubType::DURATION:
            return "DURATION";
          case EntitySubType::GENERIC_NAME:
            return "GENERIC_NAME";
          case EntitySubType::BRAND_NAME:
            return "BRAND_NAME";
          case EntitySubType::STRENGTH:
            return "STRENGTH";
          case EntitySubType::RATE:
            return "RATE";
          case EntitySubType::ACUITY:
            return "ACUITY";
          case EntitySubType::TEST_NAME:
            return "TEST_NAME";
          case EntitySubType::TEST_VALUE:
            return "TEST_VALUE";
          case EntitySubType::TEST_UNITS:
            return "TEST_UNITS";
          case EntitySubType::TEST_UNIT:
            return "TEST_UNIT";
          case EntitySubType::PROCEDURE_NAME:
            return "PROCEDURE_NAME";
          case EntitySubType::TREATMENT_NAME:
            return "TREATMENT_NAME";
          case EntitySubType::DATE:
            return "DATE";
          case EntitySubType::AGE:
            return "AGE";
          case EntitySubType::CONTACT_POINT:
            return "CONTACT_POINT";
          case EntitySubType::PHONE_OR_FAX:
            return "PHONE_OR_FAX";
          case EntitySubType::EMAIL:
            return "EMAIL";
          case EntitySubType::IDENTIFIER:
            return "IDENTIFIER";
          case EntitySubType::ID:
            return "ID";
          case EntitySubType::URL:
            return "URL";
          case EntitySubType::ADDRESS:
            return "ADDRESS";
          case EntitySubType::PROFESSION:
            return "PROFESSION";
          case EntitySubType::SYSTEM_ORGAN_SITE:
            return "SYSTEM_ORGAN_SITE";
          case EntitySubType::DIRECTION:
            return "DIRECTION";
          case EntitySubType::QUALITY:
            return "QUALITY";
          case EntitySubType::QUANTITY:
            return "QUANTITY";
          case EntitySubType::TIME_EXPRESSION:
            return "TIME_EXPRESSION";
          case EntitySubType::TIME_TO_MEDICATION_NAME:
            return "TIME_TO_MEDICATION_NAME";
          case EntitySubType::TIME_TO_DX_NAME:
            return "TIME_TO_DX_NAME";
          case EntitySubType::TIME_TO_TEST_NAME:
            return "TIME_TO_TEST_NAME";
          case EntitySubType::TIME_TO_PROCEDURE_NAME:
            return "TIME_TO_PROCEDURE_NAME";
          case EntitySubType::TIME_TO_TREATMENT_NAME:
            return "TIME_TO_TREATMENT_NAME";
          case EntitySubType::AMOUNT:
            return "AMOUNT";
          case EntitySubType::GENDER:
            return "GENDER";
          case EntitySubType::RACE_ETHNICITY:
            return "RACE_ETHNICITY";
          case EntitySubType::ALLERGIES:
            return "ALLERGIES";
          case EntitySubType::TOBACCO_USE:
            return "TOBACCO_USE";
          case EntitySubType::ALCOHOL_CONSUMPTION:
            return "ALCOHOL_CONSUMPTION";
          case EntitySubType::REC_DRUG_USE:
            return "REC_DRUG_USE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntitySubTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
