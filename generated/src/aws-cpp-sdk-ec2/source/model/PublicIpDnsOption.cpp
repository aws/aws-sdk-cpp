/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PublicIpDnsOption.h>
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
      namespace PublicIpDnsOptionMapper
      {

        static const int public_dual_stack_dns_name_HASH = HashingUtils::HashString("public-dual-stack-dns-name");
        static const int public_ipv4_dns_name_HASH = HashingUtils::HashString("public-ipv4-dns-name");
        static const int public_ipv6_dns_name_HASH = HashingUtils::HashString("public-ipv6-dns-name");


        PublicIpDnsOption GetPublicIpDnsOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == public_dual_stack_dns_name_HASH)
          {
            return PublicIpDnsOption::public_dual_stack_dns_name;
          }
          else if (hashCode == public_ipv4_dns_name_HASH)
          {
            return PublicIpDnsOption::public_ipv4_dns_name;
          }
          else if (hashCode == public_ipv6_dns_name_HASH)
          {
            return PublicIpDnsOption::public_ipv6_dns_name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublicIpDnsOption>(hashCode);
          }

          return PublicIpDnsOption::NOT_SET;
        }

        Aws::String GetNameForPublicIpDnsOption(PublicIpDnsOption enumValue)
        {
          switch(enumValue)
          {
          case PublicIpDnsOption::NOT_SET:
            return {};
          case PublicIpDnsOption::public_dual_stack_dns_name:
            return "public-dual-stack-dns-name";
          case PublicIpDnsOption::public_ipv4_dns_name:
            return "public-ipv4-dns-name";
          case PublicIpDnsOption::public_ipv6_dns_name:
            return "public-ipv6-dns-name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublicIpDnsOptionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
