/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace PhoneNumberTypeMapper
      {

        static const int TOLL_FREE_HASH = HashingUtils::HashString("TOLL_FREE");
        static const int DID_HASH = HashingUtils::HashString("DID");


        PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOLL_FREE_HASH)
          {
            return PhoneNumberType::TOLL_FREE;
          }
          else if (hashCode == DID_HASH)
          {
            return PhoneNumberType::DID;
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
          case PhoneNumberType::TOLL_FREE:
            return "TOLL_FREE";
          case PhoneNumberType::DID:
            return "DID";
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
  } // namespace Connect
} // namespace Aws
