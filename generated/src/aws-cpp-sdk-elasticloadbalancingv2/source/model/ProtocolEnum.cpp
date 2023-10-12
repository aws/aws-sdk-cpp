/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace ProtocolEnumMapper
      {

        static constexpr uint32_t HTTP_HASH = ConstExprHashingUtils::HashString("HTTP");
        static constexpr uint32_t HTTPS_HASH = ConstExprHashingUtils::HashString("HTTPS");
        static constexpr uint32_t TCP_HASH = ConstExprHashingUtils::HashString("TCP");
        static constexpr uint32_t TLS_HASH = ConstExprHashingUtils::HashString("TLS");
        static constexpr uint32_t UDP_HASH = ConstExprHashingUtils::HashString("UDP");
        static constexpr uint32_t TCP_UDP_HASH = ConstExprHashingUtils::HashString("TCP_UDP");
        static constexpr uint32_t GENEVE_HASH = ConstExprHashingUtils::HashString("GENEVE");


        ProtocolEnum GetProtocolEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return ProtocolEnum::HTTP;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return ProtocolEnum::HTTPS;
          }
          else if (hashCode == TCP_HASH)
          {
            return ProtocolEnum::TCP;
          }
          else if (hashCode == TLS_HASH)
          {
            return ProtocolEnum::TLS;
          }
          else if (hashCode == UDP_HASH)
          {
            return ProtocolEnum::UDP;
          }
          else if (hashCode == TCP_UDP_HASH)
          {
            return ProtocolEnum::TCP_UDP;
          }
          else if (hashCode == GENEVE_HASH)
          {
            return ProtocolEnum::GENEVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtocolEnum>(hashCode);
          }

          return ProtocolEnum::NOT_SET;
        }

        Aws::String GetNameForProtocolEnum(ProtocolEnum enumValue)
        {
          switch(enumValue)
          {
          case ProtocolEnum::NOT_SET:
            return {};
          case ProtocolEnum::HTTP:
            return "HTTP";
          case ProtocolEnum::HTTPS:
            return "HTTPS";
          case ProtocolEnum::TCP:
            return "TCP";
          case ProtocolEnum::TLS:
            return "TLS";
          case ProtocolEnum::UDP:
            return "UDP";
          case ProtocolEnum::TCP_UDP:
            return "TCP_UDP";
          case ProtocolEnum::GENEVE:
            return "GENEVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
