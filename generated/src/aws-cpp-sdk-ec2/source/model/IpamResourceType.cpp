/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamResourceType.h>
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
      namespace IpamResourceTypeMapper
      {

        static constexpr uint32_t vpc_HASH = ConstExprHashingUtils::HashString("vpc");
        static constexpr uint32_t subnet_HASH = ConstExprHashingUtils::HashString("subnet");
        static constexpr uint32_t eip_HASH = ConstExprHashingUtils::HashString("eip");
        static constexpr uint32_t public_ipv4_pool_HASH = ConstExprHashingUtils::HashString("public-ipv4-pool");
        static constexpr uint32_t ipv6_pool_HASH = ConstExprHashingUtils::HashString("ipv6-pool");


        IpamResourceType GetIpamResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vpc_HASH)
          {
            return IpamResourceType::vpc;
          }
          else if (hashCode == subnet_HASH)
          {
            return IpamResourceType::subnet;
          }
          else if (hashCode == eip_HASH)
          {
            return IpamResourceType::eip;
          }
          else if (hashCode == public_ipv4_pool_HASH)
          {
            return IpamResourceType::public_ipv4_pool;
          }
          else if (hashCode == ipv6_pool_HASH)
          {
            return IpamResourceType::ipv6_pool;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamResourceType>(hashCode);
          }

          return IpamResourceType::NOT_SET;
        }

        Aws::String GetNameForIpamResourceType(IpamResourceType enumValue)
        {
          switch(enumValue)
          {
          case IpamResourceType::NOT_SET:
            return {};
          case IpamResourceType::vpc:
            return "vpc";
          case IpamResourceType::subnet:
            return "subnet";
          case IpamResourceType::eip:
            return "eip";
          case IpamResourceType::public_ipv4_pool:
            return "public-ipv4-pool";
          case IpamResourceType::ipv6_pool:
            return "ipv6-pool";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
