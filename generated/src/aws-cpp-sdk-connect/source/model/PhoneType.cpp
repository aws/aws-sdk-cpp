/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneType.h>
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
      namespace PhoneTypeMapper
      {

        static const int SOFT_PHONE_HASH = HashingUtils::HashString("SOFT_PHONE");
        static const int DESK_PHONE_HASH = HashingUtils::HashString("DESK_PHONE");


        PhoneType GetPhoneTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOFT_PHONE_HASH)
          {
            return PhoneType::SOFT_PHONE;
          }
          else if (hashCode == DESK_PHONE_HASH)
          {
            return PhoneType::DESK_PHONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneType>(hashCode);
          }

          return PhoneType::NOT_SET;
        }

        Aws::String GetNameForPhoneType(PhoneType enumValue)
        {
          switch(enumValue)
          {
          case PhoneType::SOFT_PHONE:
            return "SOFT_PHONE";
          case PhoneType::DESK_PHONE:
            return "DESK_PHONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
