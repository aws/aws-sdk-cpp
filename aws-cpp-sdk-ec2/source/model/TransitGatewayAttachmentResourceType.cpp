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

        static const int vpc_HASH = HashingUtils::HashString("vpc");
        static const int vpn_HASH = HashingUtils::HashString("vpn");
        static const int direct_connect_gateway_HASH = HashingUtils::HashString("direct-connect-gateway");
        static const int peering_HASH = HashingUtils::HashString("peering");
        static const int tgw_peering_HASH = HashingUtils::HashString("tgw-peering");


        TransitGatewayAttachmentResourceType GetTransitGatewayAttachmentResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case TransitGatewayAttachmentResourceType::vpc:
            return "vpc";
          case TransitGatewayAttachmentResourceType::vpn:
            return "vpn";
          case TransitGatewayAttachmentResourceType::direct_connect_gateway:
            return "direct-connect-gateway";
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
