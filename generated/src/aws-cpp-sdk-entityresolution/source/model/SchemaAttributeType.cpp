/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/SchemaAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace SchemaAttributeTypeMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t NAME_FIRST_HASH = ConstExprHashingUtils::HashString("NAME_FIRST");
        static constexpr uint32_t NAME_MIDDLE_HASH = ConstExprHashingUtils::HashString("NAME_MIDDLE");
        static constexpr uint32_t NAME_LAST_HASH = ConstExprHashingUtils::HashString("NAME_LAST");
        static constexpr uint32_t ADDRESS_HASH = ConstExprHashingUtils::HashString("ADDRESS");
        static constexpr uint32_t ADDRESS_STREET1_HASH = ConstExprHashingUtils::HashString("ADDRESS_STREET1");
        static constexpr uint32_t ADDRESS_STREET2_HASH = ConstExprHashingUtils::HashString("ADDRESS_STREET2");
        static constexpr uint32_t ADDRESS_STREET3_HASH = ConstExprHashingUtils::HashString("ADDRESS_STREET3");
        static constexpr uint32_t ADDRESS_CITY_HASH = ConstExprHashingUtils::HashString("ADDRESS_CITY");
        static constexpr uint32_t ADDRESS_STATE_HASH = ConstExprHashingUtils::HashString("ADDRESS_STATE");
        static constexpr uint32_t ADDRESS_COUNTRY_HASH = ConstExprHashingUtils::HashString("ADDRESS_COUNTRY");
        static constexpr uint32_t ADDRESS_POSTALCODE_HASH = ConstExprHashingUtils::HashString("ADDRESS_POSTALCODE");
        static constexpr uint32_t PHONE_HASH = ConstExprHashingUtils::HashString("PHONE");
        static constexpr uint32_t PHONE_NUMBER_HASH = ConstExprHashingUtils::HashString("PHONE_NUMBER");
        static constexpr uint32_t PHONE_COUNTRYCODE_HASH = ConstExprHashingUtils::HashString("PHONE_COUNTRYCODE");
        static constexpr uint32_t EMAIL_ADDRESS_HASH = ConstExprHashingUtils::HashString("EMAIL_ADDRESS");
        static constexpr uint32_t UNIQUE_ID_HASH = ConstExprHashingUtils::HashString("UNIQUE_ID");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");


        SchemaAttributeType GetSchemaAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return SchemaAttributeType::NAME;
          }
          else if (hashCode == NAME_FIRST_HASH)
          {
            return SchemaAttributeType::NAME_FIRST;
          }
          else if (hashCode == NAME_MIDDLE_HASH)
          {
            return SchemaAttributeType::NAME_MIDDLE;
          }
          else if (hashCode == NAME_LAST_HASH)
          {
            return SchemaAttributeType::NAME_LAST;
          }
          else if (hashCode == ADDRESS_HASH)
          {
            return SchemaAttributeType::ADDRESS;
          }
          else if (hashCode == ADDRESS_STREET1_HASH)
          {
            return SchemaAttributeType::ADDRESS_STREET1;
          }
          else if (hashCode == ADDRESS_STREET2_HASH)
          {
            return SchemaAttributeType::ADDRESS_STREET2;
          }
          else if (hashCode == ADDRESS_STREET3_HASH)
          {
            return SchemaAttributeType::ADDRESS_STREET3;
          }
          else if (hashCode == ADDRESS_CITY_HASH)
          {
            return SchemaAttributeType::ADDRESS_CITY;
          }
          else if (hashCode == ADDRESS_STATE_HASH)
          {
            return SchemaAttributeType::ADDRESS_STATE;
          }
          else if (hashCode == ADDRESS_COUNTRY_HASH)
          {
            return SchemaAttributeType::ADDRESS_COUNTRY;
          }
          else if (hashCode == ADDRESS_POSTALCODE_HASH)
          {
            return SchemaAttributeType::ADDRESS_POSTALCODE;
          }
          else if (hashCode == PHONE_HASH)
          {
            return SchemaAttributeType::PHONE;
          }
          else if (hashCode == PHONE_NUMBER_HASH)
          {
            return SchemaAttributeType::PHONE_NUMBER;
          }
          else if (hashCode == PHONE_COUNTRYCODE_HASH)
          {
            return SchemaAttributeType::PHONE_COUNTRYCODE;
          }
          else if (hashCode == EMAIL_ADDRESS_HASH)
          {
            return SchemaAttributeType::EMAIL_ADDRESS;
          }
          else if (hashCode == UNIQUE_ID_HASH)
          {
            return SchemaAttributeType::UNIQUE_ID;
          }
          else if (hashCode == DATE_HASH)
          {
            return SchemaAttributeType::DATE;
          }
          else if (hashCode == STRING_HASH)
          {
            return SchemaAttributeType::STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaAttributeType>(hashCode);
          }

          return SchemaAttributeType::NOT_SET;
        }

        Aws::String GetNameForSchemaAttributeType(SchemaAttributeType enumValue)
        {
          switch(enumValue)
          {
          case SchemaAttributeType::NOT_SET:
            return {};
          case SchemaAttributeType::NAME:
            return "NAME";
          case SchemaAttributeType::NAME_FIRST:
            return "NAME_FIRST";
          case SchemaAttributeType::NAME_MIDDLE:
            return "NAME_MIDDLE";
          case SchemaAttributeType::NAME_LAST:
            return "NAME_LAST";
          case SchemaAttributeType::ADDRESS:
            return "ADDRESS";
          case SchemaAttributeType::ADDRESS_STREET1:
            return "ADDRESS_STREET1";
          case SchemaAttributeType::ADDRESS_STREET2:
            return "ADDRESS_STREET2";
          case SchemaAttributeType::ADDRESS_STREET3:
            return "ADDRESS_STREET3";
          case SchemaAttributeType::ADDRESS_CITY:
            return "ADDRESS_CITY";
          case SchemaAttributeType::ADDRESS_STATE:
            return "ADDRESS_STATE";
          case SchemaAttributeType::ADDRESS_COUNTRY:
            return "ADDRESS_COUNTRY";
          case SchemaAttributeType::ADDRESS_POSTALCODE:
            return "ADDRESS_POSTALCODE";
          case SchemaAttributeType::PHONE:
            return "PHONE";
          case SchemaAttributeType::PHONE_NUMBER:
            return "PHONE_NUMBER";
          case SchemaAttributeType::PHONE_COUNTRYCODE:
            return "PHONE_COUNTRYCODE";
          case SchemaAttributeType::EMAIL_ADDRESS:
            return "EMAIL_ADDRESS";
          case SchemaAttributeType::UNIQUE_ID:
            return "UNIQUE_ID";
          case SchemaAttributeType::DATE:
            return "DATE";
          case SchemaAttributeType::STRING:
            return "STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaAttributeTypeMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
