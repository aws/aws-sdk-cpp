/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    client_vpn_endpoint,
    customer_gateway,
    dedicated_host,
    dhcp_options,
    elastic_ip,
    fleet,
    fpga_image,
    host_reservation,
    image,
    instance,
    internet_gateway,
    launch_template,
    natgateway,
    network_acl,
    network_interface,
    reserved_instances,
    route_table,
    security_group,
    snapshot,
    spot_instances_request,
    subnet,
    traffic_mirror_filter,
    traffic_mirror_session,
    traffic_mirror_target,
    transit_gateway,
    transit_gateway_attachment,
    transit_gateway_route_table,
    volume,
    vpc,
    vpc_peering_connection,
    vpn_connection,
    vpn_gateway
  };

namespace ResourceTypeMapper
{
AWS_EC2_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
