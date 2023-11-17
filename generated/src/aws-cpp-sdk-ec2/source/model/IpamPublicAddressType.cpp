/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPublicAddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace IpamPublicAddressTypeMapper
      {

        static const int service_managed_ip_HASH = HashingUtils::HashString("service-managed-ip");
        static const int service_managed_byoip_HASH = HashingUtils::HashString("service-managed-byoip");
        static const int amazon_owned_eip_HASH = HashingUtils::HashString("amazon-owned-eip");
        static const int byoip_HASH = HashingUtils::HashString("byoip");
        static const int ec2_public_ip_HASH = HashingUtils::HashString("ec2-public-ip");


        IpamPublicAddressType GetIpamPublicAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == service_managed_ip_HASH)
          {
            return IpamPublicAddressType::service_managed_ip;
          }
          else if (hashCode == service_managed_byoip_HASH)
          {
            return IpamPublicAddressType::service_managed_byoip;
          }
          else if (hashCode == amazon_owned_eip_HASH)
          {
            return IpamPublicAddressType::amazon_owned_eip;
          }
          else if (hashCode == byoip_HASH)
          {
            return IpamPublicAddressType::byoip;
          }
          else if (hashCode == ec2_public_ip_HASH)
          {
            return IpamPublicAddressType::ec2_public_ip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPublicAddressType>(hashCode);
          }

          return IpamPublicAddressType::NOT_SET;
        }

        Aws::String GetNameForIpamPublicAddressType(IpamPublicAddressType enumValue)
        {
          switch(enumValue)
          {
          case IpamPublicAddressType::NOT_SET:
            return {};
          case IpamPublicAddressType::service_managed_ip:
            return "service-managed-ip";
          case IpamPublicAddressType::service_managed_byoip:
            return "service-managed-byoip";
          case IpamPublicAddressType::amazon_owned_eip:
            return "amazon-owned-eip";
          case IpamPublicAddressType::byoip:
            return "byoip";
          case IpamPublicAddressType::ec2_public_ip:
            return "ec2-public-ip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPublicAddressTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
