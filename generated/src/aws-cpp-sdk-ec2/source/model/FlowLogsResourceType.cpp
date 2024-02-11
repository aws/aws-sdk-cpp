/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FlowLogsResourceType.h>
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
      namespace FlowLogsResourceTypeMapper
      {

        static const int VPC_HASH = HashingUtils::HashString("VPC");
        static const int Subnet_HASH = HashingUtils::HashString("Subnet");
        static const int NetworkInterface_HASH = HashingUtils::HashString("NetworkInterface");
        static const int TransitGateway_HASH = HashingUtils::HashString("TransitGateway");
        static const int TransitGatewayAttachment_HASH = HashingUtils::HashString("TransitGatewayAttachment");


        FlowLogsResourceType GetFlowLogsResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VPC_HASH)
          {
            return FlowLogsResourceType::VPC;
          }
          else if (hashCode == Subnet_HASH)
          {
            return FlowLogsResourceType::Subnet;
          }
          else if (hashCode == NetworkInterface_HASH)
          {
            return FlowLogsResourceType::NetworkInterface;
          }
          else if (hashCode == TransitGateway_HASH)
          {
            return FlowLogsResourceType::TransitGateway;
          }
          else if (hashCode == TransitGatewayAttachment_HASH)
          {
            return FlowLogsResourceType::TransitGatewayAttachment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowLogsResourceType>(hashCode);
          }

          return FlowLogsResourceType::NOT_SET;
        }

        Aws::String GetNameForFlowLogsResourceType(FlowLogsResourceType enumValue)
        {
          switch(enumValue)
          {
          case FlowLogsResourceType::NOT_SET:
            return {};
          case FlowLogsResourceType::VPC:
            return "VPC";
          case FlowLogsResourceType::Subnet:
            return "Subnet";
          case FlowLogsResourceType::NetworkInterface:
            return "NetworkInterface";
          case FlowLogsResourceType::TransitGateway:
            return "TransitGateway";
          case FlowLogsResourceType::TransitGatewayAttachment:
            return "TransitGatewayAttachment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowLogsResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
