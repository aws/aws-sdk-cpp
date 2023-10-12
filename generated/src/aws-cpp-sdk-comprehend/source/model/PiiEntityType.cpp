/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PiiEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace PiiEntityTypeMapper
      {

        static constexpr uint32_t BANK_ACCOUNT_NUMBER_HASH = ConstExprHashingUtils::HashString("BANK_ACCOUNT_NUMBER");
        static constexpr uint32_t BANK_ROUTING_HASH = ConstExprHashingUtils::HashString("BANK_ROUTING");
        static constexpr uint32_t CREDIT_DEBIT_NUMBER_HASH = ConstExprHashingUtils::HashString("CREDIT_DEBIT_NUMBER");
        static constexpr uint32_t CREDIT_DEBIT_CVV_HASH = ConstExprHashingUtils::HashString("CREDIT_DEBIT_CVV");
        static constexpr uint32_t CREDIT_DEBIT_EXPIRY_HASH = ConstExprHashingUtils::HashString("CREDIT_DEBIT_EXPIRY");
        static constexpr uint32_t PIN_HASH = ConstExprHashingUtils::HashString("PIN");
        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");
        static constexpr uint32_t ADDRESS_HASH = ConstExprHashingUtils::HashString("ADDRESS");
        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t PHONE_HASH = ConstExprHashingUtils::HashString("PHONE");
        static constexpr uint32_t SSN_HASH = ConstExprHashingUtils::HashString("SSN");
        static constexpr uint32_t DATE_TIME_HASH = ConstExprHashingUtils::HashString("DATE_TIME");
        static constexpr uint32_t PASSPORT_NUMBER_HASH = ConstExprHashingUtils::HashString("PASSPORT_NUMBER");
        static constexpr uint32_t DRIVER_ID_HASH = ConstExprHashingUtils::HashString("DRIVER_ID");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");
        static constexpr uint32_t AGE_HASH = ConstExprHashingUtils::HashString("AGE");
        static constexpr uint32_t USERNAME_HASH = ConstExprHashingUtils::HashString("USERNAME");
        static constexpr uint32_t PASSWORD_HASH = ConstExprHashingUtils::HashString("PASSWORD");
        static constexpr uint32_t AWS_ACCESS_KEY_HASH = ConstExprHashingUtils::HashString("AWS_ACCESS_KEY");
        static constexpr uint32_t AWS_SECRET_KEY_HASH = ConstExprHashingUtils::HashString("AWS_SECRET_KEY");
        static constexpr uint32_t IP_ADDRESS_HASH = ConstExprHashingUtils::HashString("IP_ADDRESS");
        static constexpr uint32_t MAC_ADDRESS_HASH = ConstExprHashingUtils::HashString("MAC_ADDRESS");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t LICENSE_PLATE_HASH = ConstExprHashingUtils::HashString("LICENSE_PLATE");
        static constexpr uint32_t VEHICLE_IDENTIFICATION_NUMBER_HASH = ConstExprHashingUtils::HashString("VEHICLE_IDENTIFICATION_NUMBER");
        static constexpr uint32_t UK_NATIONAL_INSURANCE_NUMBER_HASH = ConstExprHashingUtils::HashString("UK_NATIONAL_INSURANCE_NUMBER");
        static constexpr uint32_t CA_SOCIAL_INSURANCE_NUMBER_HASH = ConstExprHashingUtils::HashString("CA_SOCIAL_INSURANCE_NUMBER");
        static constexpr uint32_t US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_HASH = ConstExprHashingUtils::HashString("US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER");
        static constexpr uint32_t UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER_HASH = ConstExprHashingUtils::HashString("UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER");
        static constexpr uint32_t IN_PERMANENT_ACCOUNT_NUMBER_HASH = ConstExprHashingUtils::HashString("IN_PERMANENT_ACCOUNT_NUMBER");
        static constexpr uint32_t IN_NREGA_HASH = ConstExprHashingUtils::HashString("IN_NREGA");
        static constexpr uint32_t INTERNATIONAL_BANK_ACCOUNT_NUMBER_HASH = ConstExprHashingUtils::HashString("INTERNATIONAL_BANK_ACCOUNT_NUMBER");
        static constexpr uint32_t SWIFT_CODE_HASH = ConstExprHashingUtils::HashString("SWIFT_CODE");
        static constexpr uint32_t UK_NATIONAL_HEALTH_SERVICE_NUMBER_HASH = ConstExprHashingUtils::HashString("UK_NATIONAL_HEALTH_SERVICE_NUMBER");
        static constexpr uint32_t CA_HEALTH_NUMBER_HASH = ConstExprHashingUtils::HashString("CA_HEALTH_NUMBER");
        static constexpr uint32_t IN_AADHAAR_HASH = ConstExprHashingUtils::HashString("IN_AADHAAR");
        static constexpr uint32_t IN_VOTER_NUMBER_HASH = ConstExprHashingUtils::HashString("IN_VOTER_NUMBER");


        PiiEntityType GetPiiEntityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BANK_ACCOUNT_NUMBER_HASH)
          {
            return PiiEntityType::BANK_ACCOUNT_NUMBER;
          }
          else if (hashCode == BANK_ROUTING_HASH)
          {
            return PiiEntityType::BANK_ROUTING;
          }
          else if (hashCode == CREDIT_DEBIT_NUMBER_HASH)
          {
            return PiiEntityType::CREDIT_DEBIT_NUMBER;
          }
          else if (hashCode == CREDIT_DEBIT_CVV_HASH)
          {
            return PiiEntityType::CREDIT_DEBIT_CVV;
          }
          else if (hashCode == CREDIT_DEBIT_EXPIRY_HASH)
          {
            return PiiEntityType::CREDIT_DEBIT_EXPIRY;
          }
          else if (hashCode == PIN_HASH)
          {
            return PiiEntityType::PIN;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return PiiEntityType::EMAIL;
          }
          else if (hashCode == ADDRESS_HASH)
          {
            return PiiEntityType::ADDRESS;
          }
          else if (hashCode == NAME_HASH)
          {
            return PiiEntityType::NAME;
          }
          else if (hashCode == PHONE_HASH)
          {
            return PiiEntityType::PHONE;
          }
          else if (hashCode == SSN_HASH)
          {
            return PiiEntityType::SSN;
          }
          else if (hashCode == DATE_TIME_HASH)
          {
            return PiiEntityType::DATE_TIME;
          }
          else if (hashCode == PASSPORT_NUMBER_HASH)
          {
            return PiiEntityType::PASSPORT_NUMBER;
          }
          else if (hashCode == DRIVER_ID_HASH)
          {
            return PiiEntityType::DRIVER_ID;
          }
          else if (hashCode == URL_HASH)
          {
            return PiiEntityType::URL;
          }
          else if (hashCode == AGE_HASH)
          {
            return PiiEntityType::AGE;
          }
          else if (hashCode == USERNAME_HASH)
          {
            return PiiEntityType::USERNAME;
          }
          else if (hashCode == PASSWORD_HASH)
          {
            return PiiEntityType::PASSWORD;
          }
          else if (hashCode == AWS_ACCESS_KEY_HASH)
          {
            return PiiEntityType::AWS_ACCESS_KEY;
          }
          else if (hashCode == AWS_SECRET_KEY_HASH)
          {
            return PiiEntityType::AWS_SECRET_KEY;
          }
          else if (hashCode == IP_ADDRESS_HASH)
          {
            return PiiEntityType::IP_ADDRESS;
          }
          else if (hashCode == MAC_ADDRESS_HASH)
          {
            return PiiEntityType::MAC_ADDRESS;
          }
          else if (hashCode == ALL_HASH)
          {
            return PiiEntityType::ALL;
          }
          else if (hashCode == LICENSE_PLATE_HASH)
          {
            return PiiEntityType::LICENSE_PLATE;
          }
          else if (hashCode == VEHICLE_IDENTIFICATION_NUMBER_HASH)
          {
            return PiiEntityType::VEHICLE_IDENTIFICATION_NUMBER;
          }
          else if (hashCode == UK_NATIONAL_INSURANCE_NUMBER_HASH)
          {
            return PiiEntityType::UK_NATIONAL_INSURANCE_NUMBER;
          }
          else if (hashCode == CA_SOCIAL_INSURANCE_NUMBER_HASH)
          {
            return PiiEntityType::CA_SOCIAL_INSURANCE_NUMBER;
          }
          else if (hashCode == US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_HASH)
          {
            return PiiEntityType::US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER;
          }
          else if (hashCode == UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER_HASH)
          {
            return PiiEntityType::UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER;
          }
          else if (hashCode == IN_PERMANENT_ACCOUNT_NUMBER_HASH)
          {
            return PiiEntityType::IN_PERMANENT_ACCOUNT_NUMBER;
          }
          else if (hashCode == IN_NREGA_HASH)
          {
            return PiiEntityType::IN_NREGA;
          }
          else if (hashCode == INTERNATIONAL_BANK_ACCOUNT_NUMBER_HASH)
          {
            return PiiEntityType::INTERNATIONAL_BANK_ACCOUNT_NUMBER;
          }
          else if (hashCode == SWIFT_CODE_HASH)
          {
            return PiiEntityType::SWIFT_CODE;
          }
          else if (hashCode == UK_NATIONAL_HEALTH_SERVICE_NUMBER_HASH)
          {
            return PiiEntityType::UK_NATIONAL_HEALTH_SERVICE_NUMBER;
          }
          else if (hashCode == CA_HEALTH_NUMBER_HASH)
          {
            return PiiEntityType::CA_HEALTH_NUMBER;
          }
          else if (hashCode == IN_AADHAAR_HASH)
          {
            return PiiEntityType::IN_AADHAAR;
          }
          else if (hashCode == IN_VOTER_NUMBER_HASH)
          {
            return PiiEntityType::IN_VOTER_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PiiEntityType>(hashCode);
          }

          return PiiEntityType::NOT_SET;
        }

        Aws::String GetNameForPiiEntityType(PiiEntityType enumValue)
        {
          switch(enumValue)
          {
          case PiiEntityType::NOT_SET:
            return {};
          case PiiEntityType::BANK_ACCOUNT_NUMBER:
            return "BANK_ACCOUNT_NUMBER";
          case PiiEntityType::BANK_ROUTING:
            return "BANK_ROUTING";
          case PiiEntityType::CREDIT_DEBIT_NUMBER:
            return "CREDIT_DEBIT_NUMBER";
          case PiiEntityType::CREDIT_DEBIT_CVV:
            return "CREDIT_DEBIT_CVV";
          case PiiEntityType::CREDIT_DEBIT_EXPIRY:
            return "CREDIT_DEBIT_EXPIRY";
          case PiiEntityType::PIN:
            return "PIN";
          case PiiEntityType::EMAIL:
            return "EMAIL";
          case PiiEntityType::ADDRESS:
            return "ADDRESS";
          case PiiEntityType::NAME:
            return "NAME";
          case PiiEntityType::PHONE:
            return "PHONE";
          case PiiEntityType::SSN:
            return "SSN";
          case PiiEntityType::DATE_TIME:
            return "DATE_TIME";
          case PiiEntityType::PASSPORT_NUMBER:
            return "PASSPORT_NUMBER";
          case PiiEntityType::DRIVER_ID:
            return "DRIVER_ID";
          case PiiEntityType::URL:
            return "URL";
          case PiiEntityType::AGE:
            return "AGE";
          case PiiEntityType::USERNAME:
            return "USERNAME";
          case PiiEntityType::PASSWORD:
            return "PASSWORD";
          case PiiEntityType::AWS_ACCESS_KEY:
            return "AWS_ACCESS_KEY";
          case PiiEntityType::AWS_SECRET_KEY:
            return "AWS_SECRET_KEY";
          case PiiEntityType::IP_ADDRESS:
            return "IP_ADDRESS";
          case PiiEntityType::MAC_ADDRESS:
            return "MAC_ADDRESS";
          case PiiEntityType::ALL:
            return "ALL";
          case PiiEntityType::LICENSE_PLATE:
            return "LICENSE_PLATE";
          case PiiEntityType::VEHICLE_IDENTIFICATION_NUMBER:
            return "VEHICLE_IDENTIFICATION_NUMBER";
          case PiiEntityType::UK_NATIONAL_INSURANCE_NUMBER:
            return "UK_NATIONAL_INSURANCE_NUMBER";
          case PiiEntityType::CA_SOCIAL_INSURANCE_NUMBER:
            return "CA_SOCIAL_INSURANCE_NUMBER";
          case PiiEntityType::US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER:
            return "US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER";
          case PiiEntityType::UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER:
            return "UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER";
          case PiiEntityType::IN_PERMANENT_ACCOUNT_NUMBER:
            return "IN_PERMANENT_ACCOUNT_NUMBER";
          case PiiEntityType::IN_NREGA:
            return "IN_NREGA";
          case PiiEntityType::INTERNATIONAL_BANK_ACCOUNT_NUMBER:
            return "INTERNATIONAL_BANK_ACCOUNT_NUMBER";
          case PiiEntityType::SWIFT_CODE:
            return "SWIFT_CODE";
          case PiiEntityType::UK_NATIONAL_HEALTH_SERVICE_NUMBER:
            return "UK_NATIONAL_HEALTH_SERVICE_NUMBER";
          case PiiEntityType::CA_HEALTH_NUMBER:
            return "CA_HEALTH_NUMBER";
          case PiiEntityType::IN_AADHAAR:
            return "IN_AADHAAR";
          case PiiEntityType::IN_VOTER_NUMBER:
            return "IN_VOTER_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PiiEntityTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
