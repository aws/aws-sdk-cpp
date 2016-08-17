/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53domains/model/ExtraParamName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace ExtraParamNameMapper
      {

        static const int DUNS_NUMBER_HASH = HashingUtils::HashString("DUNS_NUMBER");
        static const int BRAND_NUMBER_HASH = HashingUtils::HashString("BRAND_NUMBER");
        static const int BIRTH_DEPARTMENT_HASH = HashingUtils::HashString("BIRTH_DEPARTMENT");
        static const int BIRTH_DATE_IN_YYYY_MM_DD_HASH = HashingUtils::HashString("BIRTH_DATE_IN_YYYY_MM_DD");
        static const int BIRTH_COUNTRY_HASH = HashingUtils::HashString("BIRTH_COUNTRY");
        static const int BIRTH_CITY_HASH = HashingUtils::HashString("BIRTH_CITY");
        static const int DOCUMENT_NUMBER_HASH = HashingUtils::HashString("DOCUMENT_NUMBER");
        static const int AU_ID_NUMBER_HASH = HashingUtils::HashString("AU_ID_NUMBER");
        static const int AU_ID_TYPE_HASH = HashingUtils::HashString("AU_ID_TYPE");
        static const int CA_LEGAL_TYPE_HASH = HashingUtils::HashString("CA_LEGAL_TYPE");
        static const int CA_BUSINESS_ENTITY_TYPE_HASH = HashingUtils::HashString("CA_BUSINESS_ENTITY_TYPE");
        static const int ES_IDENTIFICATION_HASH = HashingUtils::HashString("ES_IDENTIFICATION");
        static const int ES_IDENTIFICATION_TYPE_HASH = HashingUtils::HashString("ES_IDENTIFICATION_TYPE");
        static const int ES_LEGAL_FORM_HASH = HashingUtils::HashString("ES_LEGAL_FORM");
        static const int FI_BUSINESS_NUMBER_HASH = HashingUtils::HashString("FI_BUSINESS_NUMBER");
        static const int FI_ID_NUMBER_HASH = HashingUtils::HashString("FI_ID_NUMBER");
        static const int IT_PIN_HASH = HashingUtils::HashString("IT_PIN");
        static const int RU_PASSPORT_DATA_HASH = HashingUtils::HashString("RU_PASSPORT_DATA");
        static const int SE_ID_NUMBER_HASH = HashingUtils::HashString("SE_ID_NUMBER");
        static const int SG_ID_NUMBER_HASH = HashingUtils::HashString("SG_ID_NUMBER");
        static const int VAT_NUMBER_HASH = HashingUtils::HashString("VAT_NUMBER");


        ExtraParamName GetExtraParamNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUNS_NUMBER_HASH)
          {
            return ExtraParamName::DUNS_NUMBER;
          }
          else if (hashCode == BRAND_NUMBER_HASH)
          {
            return ExtraParamName::BRAND_NUMBER;
          }
          else if (hashCode == BIRTH_DEPARTMENT_HASH)
          {
            return ExtraParamName::BIRTH_DEPARTMENT;
          }
          else if (hashCode == BIRTH_DATE_IN_YYYY_MM_DD_HASH)
          {
            return ExtraParamName::BIRTH_DATE_IN_YYYY_MM_DD;
          }
          else if (hashCode == BIRTH_COUNTRY_HASH)
          {
            return ExtraParamName::BIRTH_COUNTRY;
          }
          else if (hashCode == BIRTH_CITY_HASH)
          {
            return ExtraParamName::BIRTH_CITY;
          }
          else if (hashCode == DOCUMENT_NUMBER_HASH)
          {
            return ExtraParamName::DOCUMENT_NUMBER;
          }
          else if (hashCode == AU_ID_NUMBER_HASH)
          {
            return ExtraParamName::AU_ID_NUMBER;
          }
          else if (hashCode == AU_ID_TYPE_HASH)
          {
            return ExtraParamName::AU_ID_TYPE;
          }
          else if (hashCode == CA_LEGAL_TYPE_HASH)
          {
            return ExtraParamName::CA_LEGAL_TYPE;
          }
          else if (hashCode == CA_BUSINESS_ENTITY_TYPE_HASH)
          {
            return ExtraParamName::CA_BUSINESS_ENTITY_TYPE;
          }
          else if (hashCode == ES_IDENTIFICATION_HASH)
          {
            return ExtraParamName::ES_IDENTIFICATION;
          }
          else if (hashCode == ES_IDENTIFICATION_TYPE_HASH)
          {
            return ExtraParamName::ES_IDENTIFICATION_TYPE;
          }
          else if (hashCode == ES_LEGAL_FORM_HASH)
          {
            return ExtraParamName::ES_LEGAL_FORM;
          }
          else if (hashCode == FI_BUSINESS_NUMBER_HASH)
          {
            return ExtraParamName::FI_BUSINESS_NUMBER;
          }
          else if (hashCode == FI_ID_NUMBER_HASH)
          {
            return ExtraParamName::FI_ID_NUMBER;
          }
          else if (hashCode == IT_PIN_HASH)
          {
            return ExtraParamName::IT_PIN;
          }
          else if (hashCode == RU_PASSPORT_DATA_HASH)
          {
            return ExtraParamName::RU_PASSPORT_DATA;
          }
          else if (hashCode == SE_ID_NUMBER_HASH)
          {
            return ExtraParamName::SE_ID_NUMBER;
          }
          else if (hashCode == SG_ID_NUMBER_HASH)
          {
            return ExtraParamName::SG_ID_NUMBER;
          }
          else if (hashCode == VAT_NUMBER_HASH)
          {
            return ExtraParamName::VAT_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExtraParamName>(hashCode);
          }

          return ExtraParamName::NOT_SET;
        }

        Aws::String GetNameForExtraParamName(ExtraParamName enumValue)
        {
          switch(enumValue)
          {
          case ExtraParamName::DUNS_NUMBER:
            return "DUNS_NUMBER";
          case ExtraParamName::BRAND_NUMBER:
            return "BRAND_NUMBER";
          case ExtraParamName::BIRTH_DEPARTMENT:
            return "BIRTH_DEPARTMENT";
          case ExtraParamName::BIRTH_DATE_IN_YYYY_MM_DD:
            return "BIRTH_DATE_IN_YYYY_MM_DD";
          case ExtraParamName::BIRTH_COUNTRY:
            return "BIRTH_COUNTRY";
          case ExtraParamName::BIRTH_CITY:
            return "BIRTH_CITY";
          case ExtraParamName::DOCUMENT_NUMBER:
            return "DOCUMENT_NUMBER";
          case ExtraParamName::AU_ID_NUMBER:
            return "AU_ID_NUMBER";
          case ExtraParamName::AU_ID_TYPE:
            return "AU_ID_TYPE";
          case ExtraParamName::CA_LEGAL_TYPE:
            return "CA_LEGAL_TYPE";
          case ExtraParamName::CA_BUSINESS_ENTITY_TYPE:
            return "CA_BUSINESS_ENTITY_TYPE";
          case ExtraParamName::ES_IDENTIFICATION:
            return "ES_IDENTIFICATION";
          case ExtraParamName::ES_IDENTIFICATION_TYPE:
            return "ES_IDENTIFICATION_TYPE";
          case ExtraParamName::ES_LEGAL_FORM:
            return "ES_LEGAL_FORM";
          case ExtraParamName::FI_BUSINESS_NUMBER:
            return "FI_BUSINESS_NUMBER";
          case ExtraParamName::FI_ID_NUMBER:
            return "FI_ID_NUMBER";
          case ExtraParamName::IT_PIN:
            return "IT_PIN";
          case ExtraParamName::RU_PASSPORT_DATA:
            return "RU_PASSPORT_DATA";
          case ExtraParamName::SE_ID_NUMBER:
            return "SE_ID_NUMBER";
          case ExtraParamName::SG_ID_NUMBER:
            return "SG_ID_NUMBER";
          case ExtraParamName::VAT_NUMBER:
            return "VAT_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ExtraParamNameMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
