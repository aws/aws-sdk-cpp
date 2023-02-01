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

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int DX_NAME_HASH = HashingUtils::HashString("DX_NAME");
        static const int DOSAGE_HASH = HashingUtils::HashString("DOSAGE");
        static const int ROUTE_OR_MODE_HASH = HashingUtils::HashString("ROUTE_OR_MODE");
        static const int FORM_HASH = HashingUtils::HashString("FORM");
        static const int FREQUENCY_HASH = HashingUtils::HashString("FREQUENCY");
        static const int DURATION_HASH = HashingUtils::HashString("DURATION");
        static const int GENERIC_NAME_HASH = HashingUtils::HashString("GENERIC_NAME");
        static const int BRAND_NAME_HASH = HashingUtils::HashString("BRAND_NAME");
        static const int STRENGTH_HASH = HashingUtils::HashString("STRENGTH");
        static const int RATE_HASH = HashingUtils::HashString("RATE");
        static const int ACUITY_HASH = HashingUtils::HashString("ACUITY");
        static const int TEST_NAME_HASH = HashingUtils::HashString("TEST_NAME");
        static const int TEST_VALUE_HASH = HashingUtils::HashString("TEST_VALUE");
        static const int TEST_UNITS_HASH = HashingUtils::HashString("TEST_UNITS");
        static const int TEST_UNIT_HASH = HashingUtils::HashString("TEST_UNIT");
        static const int PROCEDURE_NAME_HASH = HashingUtils::HashString("PROCEDURE_NAME");
        static const int TREATMENT_NAME_HASH = HashingUtils::HashString("TREATMENT_NAME");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int AGE_HASH = HashingUtils::HashString("AGE");
        static const int CONTACT_POINT_HASH = HashingUtils::HashString("CONTACT_POINT");
        static const int PHONE_OR_FAX_HASH = HashingUtils::HashString("PHONE_OR_FAX");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int IDENTIFIER_HASH = HashingUtils::HashString("IDENTIFIER");
        static const int ID_HASH = HashingUtils::HashString("ID");
        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int ADDRESS_HASH = HashingUtils::HashString("ADDRESS");
        static const int PROFESSION_HASH = HashingUtils::HashString("PROFESSION");
        static const int SYSTEM_ORGAN_SITE_HASH = HashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static const int DIRECTION_HASH = HashingUtils::HashString("DIRECTION");
        static const int QUALITY_HASH = HashingUtils::HashString("QUALITY");
        static const int QUANTITY_HASH = HashingUtils::HashString("QUANTITY");
        static const int TIME_EXPRESSION_HASH = HashingUtils::HashString("TIME_EXPRESSION");
        static const int TIME_TO_MEDICATION_NAME_HASH = HashingUtils::HashString("TIME_TO_MEDICATION_NAME");
        static const int TIME_TO_DX_NAME_HASH = HashingUtils::HashString("TIME_TO_DX_NAME");
        static const int TIME_TO_TEST_NAME_HASH = HashingUtils::HashString("TIME_TO_TEST_NAME");
        static const int TIME_TO_PROCEDURE_NAME_HASH = HashingUtils::HashString("TIME_TO_PROCEDURE_NAME");
        static const int TIME_TO_TREATMENT_NAME_HASH = HashingUtils::HashString("TIME_TO_TREATMENT_NAME");
        static const int AMOUNT_HASH = HashingUtils::HashString("AMOUNT");
        static const int GENDER_HASH = HashingUtils::HashString("GENDER");
        static const int RACE_ETHNICITY_HASH = HashingUtils::HashString("RACE_ETHNICITY");
        static const int ALLERGIES_HASH = HashingUtils::HashString("ALLERGIES");
        static const int TOBACCO_USE_HASH = HashingUtils::HashString("TOBACCO_USE");
        static const int ALCOHOL_CONSUMPTION_HASH = HashingUtils::HashString("ALCOHOL_CONSUMPTION");
        static const int REC_DRUG_USE_HASH = HashingUtils::HashString("REC_DRUG_USE");


        EntitySubType GetEntitySubTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
