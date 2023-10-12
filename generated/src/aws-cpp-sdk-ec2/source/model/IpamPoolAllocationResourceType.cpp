/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolAllocationResourceType.h>
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
      namespace IpamPoolAllocationResourceTypeMapper
      {

        static constexpr uint32_t ipam_pool_HASH = ConstExprHashingUtils::HashString("ipam-pool");
        static constexpr uint32_t vpc_HASH = ConstExprHashingUtils::HashString("vpc");
        static constexpr uint32_t ec2_public_ipv4_pool_HASH = ConstExprHashingUtils::HashString("ec2-public-ipv4-pool");
        static constexpr uint32_t custom_HASH = ConstExprHashingUtils::HashString("custom");


        IpamPoolAllocationResourceType GetIpamPoolAllocationResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipam_pool_HASH)
          {
            return IpamPoolAllocationResourceType::ipam_pool;
          }
          else if (hashCode == vpc_HASH)
          {
            return IpamPoolAllocationResourceType::vpc;
          }
          else if (hashCode == ec2_public_ipv4_pool_HASH)
          {
            return IpamPoolAllocationResourceType::ec2_public_ipv4_pool;
          }
          else if (hashCode == custom_HASH)
          {
            return IpamPoolAllocationResourceType::custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPoolAllocationResourceType>(hashCode);
          }

          return IpamPoolAllocationResourceType::NOT_SET;
        }

        Aws::String GetNameForIpamPoolAllocationResourceType(IpamPoolAllocationResourceType enumValue)
        {
          switch(enumValue)
          {
          case IpamPoolAllocationResourceType::NOT_SET:
            return {};
          case IpamPoolAllocationResourceType::ipam_pool:
            return "ipam-pool";
          case IpamPoolAllocationResourceType::vpc:
            return "vpc";
          case IpamPoolAllocationResourceType::ec2_public_ipv4_pool:
            return "ec2-public-ipv4-pool";
          case IpamPoolAllocationResourceType::custom:
            return "custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPoolAllocationResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
