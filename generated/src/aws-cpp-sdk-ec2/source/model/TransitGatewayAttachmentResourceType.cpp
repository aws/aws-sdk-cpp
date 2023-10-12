/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
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
      namespace TransitGatewayAttachmentResourceTypeMapper
      {

        static constexpr uint32_t vpc_HASH = ConstExprHashingUtils::HashString("vpc");
        static constexpr uint32_t vpn_HASH = ConstExprHashingUtils::HashString("vpn");
        static constexpr uint32_t direct_connect_gateway_HASH = ConstExprHashingUtils::HashString("direct-connect-gateway");
        static constexpr uint32_t connect_HASH = ConstExprHashingUtils::HashString("connect");
        static constexpr uint32_t peering_HASH = ConstExprHashingUtils::HashString("peering");
        static constexpr uint32_t tgw_peering_HASH = ConstExprHashingUtils::HashString("tgw-peering");


        TransitGatewayAttachmentResourceType GetTransitGatewayAttachmentResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vpc_HASH)
          {
            return TransitGatewayAttachmentResourceType::vpc;
          }
          else if (hashCode == vpn_HASH)
          {
            return TransitGatewayAttachmentResourceType::vpn;
          }
          else if (hashCode == direct_connect_gateway_HASH)
          {
            return TransitGatewayAttachmentResourceType::direct_connect_gateway;
          }
          else if (hashCode == connect_HASH)
          {
            return TransitGatewayAttachmentResourceType::connect;
          }
          else if (hashCode == peering_HASH)
          {
            return TransitGatewayAttachmentResourceType::peering;
          }
          else if (hashCode == tgw_peering_HASH)
          {
            return TransitGatewayAttachmentResourceType::tgw_peering;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayAttachmentResourceType>(hashCode);
          }

          return TransitGatewayAttachmentResourceType::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayAttachmentResourceType(TransitGatewayAttachmentResourceType enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayAttachmentResourceType::NOT_SET:
            return {};
          case TransitGatewayAttachmentResourceType::vpc:
            return "vpc";
          case TransitGatewayAttachmentResourceType::vpn:
            return "vpn";
          case TransitGatewayAttachmentResourceType::direct_connect_gateway:
            return "direct-connect-gateway";
          case TransitGatewayAttachmentResourceType::connect:
            return "connect";
          case TransitGatewayAttachmentResourceType::peering:
            return "peering";
          case TransitGatewayAttachmentResourceType::tgw_peering:
            return "tgw-peering";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayAttachmentResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
