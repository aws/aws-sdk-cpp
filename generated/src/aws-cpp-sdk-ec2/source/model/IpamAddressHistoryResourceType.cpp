/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamAddressHistoryResourceType.h>
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
      namespace IpamAddressHistoryResourceTypeMapper
      {

        static const int eip_HASH = HashingUtils::HashString("eip");
        static const int vpc_HASH = HashingUtils::HashString("vpc");
        static const int subnet_HASH = HashingUtils::HashString("subnet");
        static const int network_interface_HASH = HashingUtils::HashString("network-interface");
        static const int instance_HASH = HashingUtils::HashString("instance");


        IpamAddressHistoryResourceType GetIpamAddressHistoryResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == eip_HASH)
          {
            return IpamAddressHistoryResourceType::eip;
          }
          else if (hashCode == vpc_HASH)
          {
            return IpamAddressHistoryResourceType::vpc;
          }
          else if (hashCode == subnet_HASH)
          {
            return IpamAddressHistoryResourceType::subnet;
          }
          else if (hashCode == network_interface_HASH)
          {
            return IpamAddressHistoryResourceType::network_interface;
          }
          else if (hashCode == instance_HASH)
          {
            return IpamAddressHistoryResourceType::instance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamAddressHistoryResourceType>(hashCode);
          }

          return IpamAddressHistoryResourceType::NOT_SET;
        }

        Aws::String GetNameForIpamAddressHistoryResourceType(IpamAddressHistoryResourceType enumValue)
        {
          switch(enumValue)
          {
          case IpamAddressHistoryResourceType::NOT_SET:
            return {};
          case IpamAddressHistoryResourceType::eip:
            return "eip";
          case IpamAddressHistoryResourceType::vpc:
            return "vpc";
          case IpamAddressHistoryResourceType::subnet:
            return "subnet";
          case IpamAddressHistoryResourceType::network_interface:
            return "network-interface";
          case IpamAddressHistoryResourceType::instance:
            return "instance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamAddressHistoryResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
