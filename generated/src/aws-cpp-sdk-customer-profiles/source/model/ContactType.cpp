/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ContactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace ContactTypeMapper
      {

        static const int PhoneNumber_HASH = HashingUtils::HashString("PhoneNumber");
        static const int MobilePhoneNumber_HASH = HashingUtils::HashString("MobilePhoneNumber");
        static const int HomePhoneNumber_HASH = HashingUtils::HashString("HomePhoneNumber");
        static const int BusinessPhoneNumber_HASH = HashingUtils::HashString("BusinessPhoneNumber");
        static const int EmailAddress_HASH = HashingUtils::HashString("EmailAddress");
        static const int PersonalEmailAddress_HASH = HashingUtils::HashString("PersonalEmailAddress");
        static const int BusinessEmailAddress_HASH = HashingUtils::HashString("BusinessEmailAddress");


        ContactType GetContactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PhoneNumber_HASH)
          {
            return ContactType::PhoneNumber;
          }
          else if (hashCode == MobilePhoneNumber_HASH)
          {
            return ContactType::MobilePhoneNumber;
          }
          else if (hashCode == HomePhoneNumber_HASH)
          {
            return ContactType::HomePhoneNumber;
          }
          else if (hashCode == BusinessPhoneNumber_HASH)
          {
            return ContactType::BusinessPhoneNumber;
          }
          else if (hashCode == EmailAddress_HASH)
          {
            return ContactType::EmailAddress;
          }
          else if (hashCode == PersonalEmailAddress_HASH)
          {
            return ContactType::PersonalEmailAddress;
          }
          else if (hashCode == BusinessEmailAddress_HASH)
          {
            return ContactType::BusinessEmailAddress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactType>(hashCode);
          }

          return ContactType::NOT_SET;
        }

        Aws::String GetNameForContactType(ContactType enumValue)
        {
          switch(enumValue)
          {
          case ContactType::NOT_SET:
            return {};
          case ContactType::PhoneNumber:
            return "PhoneNumber";
          case ContactType::MobilePhoneNumber:
            return "MobilePhoneNumber";
          case ContactType::HomePhoneNumber:
            return "HomePhoneNumber";
          case ContactType::BusinessPhoneNumber:
            return "BusinessPhoneNumber";
          case ContactType::EmailAddress:
            return "EmailAddress";
          case ContactType::PersonalEmailAddress:
            return "PersonalEmailAddress";
          case ContactType::BusinessEmailAddress:
            return "BusinessEmailAddress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
