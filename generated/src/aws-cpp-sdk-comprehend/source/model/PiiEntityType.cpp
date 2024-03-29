﻿/**
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

        static const int BANK_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER");
        static const int BANK_ROUTING_HASH = HashingUtils::HashString("BANK_ROUTING");
        static const int CREDIT_DEBIT_NUMBER_HASH = HashingUtils::HashString("CREDIT_DEBIT_NUMBER");
        static const int CREDIT_DEBIT_CVV_HASH = HashingUtils::HashString("CREDIT_DEBIT_CVV");
        static const int CREDIT_DEBIT_EXPIRY_HASH = HashingUtils::HashString("CREDIT_DEBIT_EXPIRY");
        static const int PIN_HASH = HashingUtils::HashString("PIN");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int ADDRESS_HASH = HashingUtils::HashString("ADDRESS");
        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int PHONE_HASH = HashingUtils::HashString("PHONE");
        static const int SSN_HASH = HashingUtils::HashString("SSN");
        static const int DATE_TIME_HASH = HashingUtils::HashString("DATE_TIME");
        static const int PASSPORT_NUMBER_HASH = HashingUtils::HashString("PASSPORT_NUMBER");
        static const int DRIVER_ID_HASH = HashingUtils::HashString("DRIVER_ID");
        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int AGE_HASH = HashingUtils::HashString("AGE");
        static const int USERNAME_HASH = HashingUtils::HashString("USERNAME");
        static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
        static const int AWS_ACCESS_KEY_HASH = HashingUtils::HashString("AWS_ACCESS_KEY");
        static const int AWS_SECRET_KEY_HASH = HashingUtils::HashString("AWS_SECRET_KEY");
        static const int IP_ADDRESS_HASH = HashingUtils::HashString("IP_ADDRESS");
        static const int MAC_ADDRESS_HASH = HashingUtils::HashString("MAC_ADDRESS");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int LICENSE_PLATE_HASH = HashingUtils::HashString("LICENSE_PLATE");
        static const int VEHICLE_IDENTIFICATION_NUMBER_HASH = HashingUtils::HashString("VEHICLE_IDENTIFICATION_NUMBER");
        static const int UK_NATIONAL_INSURANCE_NUMBER_HASH = HashingUtils::HashString("UK_NATIONAL_INSURANCE_NUMBER");
        static const int CA_SOCIAL_INSURANCE_NUMBER_HASH = HashingUtils::HashString("CA_SOCIAL_INSURANCE_NUMBER");
        static const int US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_HASH = HashingUtils::HashString("US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER");
        static const int UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER_HASH = HashingUtils::HashString("UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER");
        static const int IN_PERMANENT_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("IN_PERMANENT_ACCOUNT_NUMBER");
        static const int IN_NREGA_HASH = HashingUtils::HashString("IN_NREGA");
        static const int INTERNATIONAL_BANK_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("INTERNATIONAL_BANK_ACCOUNT_NUMBER");
        static const int SWIFT_CODE_HASH = HashingUtils::HashString("SWIFT_CODE");
        static const int UK_NATIONAL_HEALTH_SERVICE_NUMBER_HASH = HashingUtils::HashString("UK_NATIONAL_HEALTH_SERVICE_NUMBER");
        static const int CA_HEALTH_NUMBER_HASH = HashingUtils::HashString("CA_HEALTH_NUMBER");
        static const int IN_AADHAAR_HASH = HashingUtils::HashString("IN_AADHAAR");
        static const int IN_VOTER_NUMBER_HASH = HashingUtils::HashString("IN_VOTER_NUMBER");


        PiiEntityType GetPiiEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
