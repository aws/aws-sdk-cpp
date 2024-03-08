/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/IpAddressFamily.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlobalAccelerator
  {
    namespace Model
    {
      namespace IpAddressFamilyMapper
      {

        static const int IPv4_HASH = HashingUtils::HashString("IPv4");
        static const int IPv6_HASH = HashingUtils::HashString("IPv6");


        IpAddressFamily GetIpAddressFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPv4_HASH)
          {
            return IpAddressFamily::IPv4;
          }
          else if (hashCode == IPv6_HASH)
          {
            return IpAddressFamily::IPv6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpAddressFamily>(hashCode);
          }

          return IpAddressFamily::NOT_SET;
        }

        Aws::String GetNameForIpAddressFamily(IpAddressFamily enumValue)
        {
          switch(enumValue)
          {
          case IpAddressFamily::NOT_SET:
            return {};
          case IpAddressFamily::IPv4:
            return "IPv4";
          case IpAddressFamily::IPv6:
            return "IPv6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpAddressFamilyMapper
    } // namespace Model
  } // namespace GlobalAccelerator
} // namespace Aws
