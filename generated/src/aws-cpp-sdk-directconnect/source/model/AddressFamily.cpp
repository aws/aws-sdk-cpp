/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AddressFamily.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace AddressFamilyMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int ipv6_HASH = HashingUtils::HashString("ipv6");


        AddressFamily GetAddressFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return AddressFamily::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return AddressFamily::ipv6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddressFamily>(hashCode);
          }

          return AddressFamily::NOT_SET;
        }

        Aws::String GetNameForAddressFamily(AddressFamily enumValue)
        {
          switch(enumValue)
          {
          case AddressFamily::ipv4:
            return "ipv4";
          case AddressFamily::ipv6:
            return "ipv6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AddressFamilyMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
