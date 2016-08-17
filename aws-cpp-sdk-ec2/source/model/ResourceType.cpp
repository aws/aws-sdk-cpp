/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/ResourceType.h>
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
      namespace ResourceTypeMapper
      {

        static const int customer_gateway_HASH = HashingUtils::HashString("customer-gateway");
        static const int dhcp_options_HASH = HashingUtils::HashString("dhcp-options");
        static const int image_HASH = HashingUtils::HashString("image");
        static const int instance_HASH = HashingUtils::HashString("instance");
        static const int internet_gateway_HASH = HashingUtils::HashString("internet-gateway");
        static const int network_acl_HASH = HashingUtils::HashString("network-acl");
        static const int network_interface_HASH = HashingUtils::HashString("network-interface");
        static const int reserved_instances_HASH = HashingUtils::HashString("reserved-instances");
        static const int route_table_HASH = HashingUtils::HashString("route-table");
        static const int snapshot_HASH = HashingUtils::HashString("snapshot");
        static const int spot_instances_request_HASH = HashingUtils::HashString("spot-instances-request");
        static const int subnet_HASH = HashingUtils::HashString("subnet");
        static const int security_group_HASH = HashingUtils::HashString("security-group");
        static const int volume_HASH = HashingUtils::HashString("volume");
        static const int vpc_HASH = HashingUtils::HashString("vpc");
        static const int vpn_connection_HASH = HashingUtils::HashString("vpn-connection");
        static const int vpn_gateway_HASH = HashingUtils::HashString("vpn-gateway");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == customer_gateway_HASH)
          {
            return ResourceType::customer_gateway;
          }
          else if (hashCode == dhcp_options_HASH)
          {
            return ResourceType::dhcp_options;
          }
          else if (hashCode == image_HASH)
          {
            return ResourceType::image;
          }
          else if (hashCode == instance_HASH)
          {
            return ResourceType::instance;
          }
          else if (hashCode == internet_gateway_HASH)
          {
            return ResourceType::internet_gateway;
          }
          else if (hashCode == network_acl_HASH)
          {
            return ResourceType::network_acl;
          }
          else if (hashCode == network_interface_HASH)
          {
            return ResourceType::network_interface;
          }
          else if (hashCode == reserved_instances_HASH)
          {
            return ResourceType::reserved_instances;
          }
          else if (hashCode == route_table_HASH)
          {
            return ResourceType::route_table;
          }
          else if (hashCode == snapshot_HASH)
          {
            return ResourceType::snapshot;
          }
          else if (hashCode == spot_instances_request_HASH)
          {
            return ResourceType::spot_instances_request;
          }
          else if (hashCode == subnet_HASH)
          {
            return ResourceType::subnet;
          }
          else if (hashCode == security_group_HASH)
          {
            return ResourceType::security_group;
          }
          else if (hashCode == volume_HASH)
          {
            return ResourceType::volume;
          }
          else if (hashCode == vpc_HASH)
          {
            return ResourceType::vpc;
          }
          else if (hashCode == vpn_connection_HASH)
          {
            return ResourceType::vpn_connection;
          }
          else if (hashCode == vpn_gateway_HASH)
          {
            return ResourceType::vpn_gateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::customer_gateway:
            return "customer-gateway";
          case ResourceType::dhcp_options:
            return "dhcp-options";
          case ResourceType::image:
            return "image";
          case ResourceType::instance:
            return "instance";
          case ResourceType::internet_gateway:
            return "internet-gateway";
          case ResourceType::network_acl:
            return "network-acl";
          case ResourceType::network_interface:
            return "network-interface";
          case ResourceType::reserved_instances:
            return "reserved-instances";
          case ResourceType::route_table:
            return "route-table";
          case ResourceType::snapshot:
            return "snapshot";
          case ResourceType::spot_instances_request:
            return "spot-instances-request";
          case ResourceType::subnet:
            return "subnet";
          case ResourceType::security_group:
            return "security-group";
          case ResourceType::volume:
            return "volume";
          case ResourceType::vpc:
            return "vpc";
          case ResourceType::vpn_connection:
            return "vpn-connection";
          case ResourceType::vpn_gateway:
            return "vpn-gateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
