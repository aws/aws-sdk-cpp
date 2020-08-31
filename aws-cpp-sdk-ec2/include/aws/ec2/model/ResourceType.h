/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    egress_only_internet_gateway,
    elastic_ip,
    elastic_gpu,
    export_image_task,
    export_instance_task,
    fleet,
    fpga_image,
    host_reservation,
    image,
    import_image_task,
    import_snapshot_task,
    instance,
    internet_gateway,
    key_pair,
    launch_template,
    local_gateway_route_table_vpc_association,
    natgateway,
    network_acl,
    network_interface,
    placement_group,
    reserved_instances,
    route_table,
    security_group,
    snapshot,
    spot_fleet_request,
    spot_instances_request,
    subnet,
    traffic_mirror_filter,
    traffic_mirror_session,
    traffic_mirror_target,
    transit_gateway,
    transit_gateway_attachment,
    transit_gateway_multicast_domain,
    transit_gateway_route_table,
    volume,
    vpc,
    vpc_peering_connection,
    vpn_connection,
    vpn_gateway,
    vpc_flow_log
  };

namespace ResourceTypeMapper
{
AWS_EC2_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
