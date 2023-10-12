/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DnsRecordIpType.h>
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
      namespace DnsRecordIpTypeMapper
      {

        static constexpr uint32_t ipv4_HASH = ConstExprHashingUtils::HashString("ipv4");
        static constexpr uint32_t dualstack_HASH = ConstExprHashingUtils::HashString("dualstack");
        static constexpr uint32_t ipv6_HASH = ConstExprHashingUtils::HashString("ipv6");
        static constexpr uint32_t service_defined_HASH = ConstExprHashingUtils::HashString("service-defined");


        DnsRecordIpType GetDnsRecordIpTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return DnsRecordIpType::ipv4;
          }
          else if (hashCode == dualstack_HASH)
          {
            return DnsRecordIpType::dualstack;
          }
          else if (hashCode == ipv6_HASH)
          {
            return DnsRecordIpType::ipv6;
          }
          else if (hashCode == service_defined_HASH)
          {
            return DnsRecordIpType::service_defined;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsRecordIpType>(hashCode);
          }

          return DnsRecordIpType::NOT_SET;
        }

        Aws::String GetNameForDnsRecordIpType(DnsRecordIpType enumValue)
        {
          switch(enumValue)
          {
          case DnsRecordIpType::NOT_SET:
            return {};
          case DnsRecordIpType::ipv4:
            return "ipv4";
          case DnsRecordIpType::dualstack:
            return "dualstack";
          case DnsRecordIpType::ipv6:
            return "ipv6";
          case DnsRecordIpType::service_defined:
            return "service-defined";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsRecordIpTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
