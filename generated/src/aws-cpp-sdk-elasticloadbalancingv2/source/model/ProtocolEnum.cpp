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

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int TLS_HASH = HashingUtils::HashString("TLS");
        static const int UDP_HASH = HashingUtils::HashString("UDP");
        static const int TCP_UDP_HASH = HashingUtils::HashString("TCP_UDP");
        static const int GENEVE_HASH = HashingUtils::HashString("GENEVE");


        ProtocolEnum GetProtocolEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
