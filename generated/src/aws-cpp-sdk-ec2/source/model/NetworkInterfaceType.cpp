/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfaceType.h>
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
      namespace NetworkInterfaceTypeMapper
      {

        static const int interface_HASH = HashingUtils::HashString("interface");
        static const int natGateway_HASH = HashingUtils::HashString("natGateway");
        static const int efa_HASH = HashingUtils::HashString("efa");
        static const int trunk_HASH = HashingUtils::HashString("trunk");
        static const int load_balancer_HASH = HashingUtils::HashString("load_balancer");
        static const int network_load_balancer_HASH = HashingUtils::HashString("network_load_balancer");
        static const int vpc_endpoint_HASH = HashingUtils::HashString("vpc_endpoint");
        static const int branch_HASH = HashingUtils::HashString("branch");
        static const int transit_gateway_HASH = HashingUtils::HashString("transit_gateway");
        static const int lambda_HASH = HashingUtils::HashString("lambda");
        static const int quicksight_HASH = HashingUtils::HashString("quicksight");
        static const int global_accelerator_managed_HASH = HashingUtils::HashString("global_accelerator_managed");
        static const int api_gateway_managed_HASH = HashingUtils::HashString("api_gateway_managed");
        static const int gateway_load_balancer_HASH = HashingUtils::HashString("gateway_load_balancer");
        static const int gateway_load_balancer_endpoint_HASH = HashingUtils::HashString("gateway_load_balancer_endpoint");
        static const int iot_rules_managed_HASH = HashingUtils::HashString("iot_rules_managed");
        static const int aws_codestar_connections_managed_HASH = HashingUtils::HashString("aws_codestar_connections_managed");


        NetworkInterfaceType GetNetworkInterfaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == interface_HASH)
          {
            return NetworkInterfaceType::interface;
          }
          else if (hashCode == natGateway_HASH)
          {
            return NetworkInterfaceType::natGateway;
          }
          else if (hashCode == efa_HASH)
          {
            return NetworkInterfaceType::efa;
          }
          else if (hashCode == trunk_HASH)
          {
            return NetworkInterfaceType::trunk;
          }
          else if (hashCode == load_balancer_HASH)
          {
            return NetworkInterfaceType::load_balancer;
          }
          else if (hashCode == network_load_balancer_HASH)
          {
            return NetworkInterfaceType::network_load_balancer;
          }
          else if (hashCode == vpc_endpoint_HASH)
          {
            return NetworkInterfaceType::vpc_endpoint;
          }
          else if (hashCode == branch_HASH)
          {
            return NetworkInterfaceType::branch;
          }
          else if (hashCode == transit_gateway_HASH)
          {
            return NetworkInterfaceType::transit_gateway;
          }
          else if (hashCode == lambda_HASH)
          {
            return NetworkInterfaceType::lambda;
          }
          else if (hashCode == quicksight_HASH)
          {
            return NetworkInterfaceType::quicksight;
          }
          else if (hashCode == global_accelerator_managed_HASH)
          {
            return NetworkInterfaceType::global_accelerator_managed;
          }
          else if (hashCode == api_gateway_managed_HASH)
          {
            return NetworkInterfaceType::api_gateway_managed;
          }
          else if (hashCode == gateway_load_balancer_HASH)
          {
            return NetworkInterfaceType::gateway_load_balancer;
          }
          else if (hashCode == gateway_load_balancer_endpoint_HASH)
          {
            return NetworkInterfaceType::gateway_load_balancer_endpoint;
          }
          else if (hashCode == iot_rules_managed_HASH)
          {
            return NetworkInterfaceType::iot_rules_managed;
          }
          else if (hashCode == aws_codestar_connections_managed_HASH)
          {
            return NetworkInterfaceType::aws_codestar_connections_managed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceType>(hashCode);
          }

          return NetworkInterfaceType::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceType(NetworkInterfaceType enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceType::NOT_SET:
            return {};
          case NetworkInterfaceType::interface:
            return "interface";
          case NetworkInterfaceType::natGateway:
            return "natGateway";
          case NetworkInterfaceType::efa:
            return "efa";
          case NetworkInterfaceType::trunk:
            return "trunk";
          case NetworkInterfaceType::load_balancer:
            return "load_balancer";
          case NetworkInterfaceType::network_load_balancer:
            return "network_load_balancer";
          case NetworkInterfaceType::vpc_endpoint:
            return "vpc_endpoint";
          case NetworkInterfaceType::branch:
            return "branch";
          case NetworkInterfaceType::transit_gateway:
            return "transit_gateway";
          case NetworkInterfaceType::lambda:
            return "lambda";
          case NetworkInterfaceType::quicksight:
            return "quicksight";
          case NetworkInterfaceType::global_accelerator_managed:
            return "global_accelerator_managed";
          case NetworkInterfaceType::api_gateway_managed:
            return "api_gateway_managed";
          case NetworkInterfaceType::gateway_load_balancer:
            return "gateway_load_balancer";
          case NetworkInterfaceType::gateway_load_balancer_endpoint:
            return "gateway_load_balancer_endpoint";
          case NetworkInterfaceType::iot_rules_managed:
            return "iot_rules_managed";
          case NetworkInterfaceType::aws_codestar_connections_managed:
            return "aws_codestar_connections_managed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
