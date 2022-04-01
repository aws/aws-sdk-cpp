/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/PhoneNumberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace PhoneNumberTypeMapper
      {

        static const int MOBILE_HASH = HashingUtils::HashString("MOBILE");
        static const int WORK_HASH = HashingUtils::HashString("WORK");
        static const int HOME_HASH = HashingUtils::HashString("HOME");


        PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MOBILE_HASH)
          {
            return PhoneNumberType::MOBILE;
          }
          else if (hashCode == WORK_HASH)
          {
            return PhoneNumberType::WORK;
          }
          else if (hashCode == HOME_HASH)
          {
            return PhoneNumberType::HOME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberType>(hashCode);
          }

          return PhoneNumberType::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberType(PhoneNumberType enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberType::MOBILE:
            return "MOBILE";
          case PhoneNumberType::WORK:
            return "WORK";
          case PhoneNumberType::HOME:
            return "HOME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
