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
    capacity_reservation,
    client_vpn_endpoint,
    customer_gateway,
    carrier_gateway,
    coip_pool,
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
    instance_event_window,
    internet_gateway,
    ipam,
    ipam_pool,
    ipam_scope,
    ipv4pool_ec2,
    ipv6pool_ec2,
    key_pair,
    launch_template,
    local_gateway,
    local_gateway_route_table,
    local_gateway_virtual_interface,
    local_gateway_virtual_interface_group,
    local_gateway_route_table_vpc_association,
    local_gateway_route_table_virtual_interface_group_association,
    natgateway,
    network_acl,
    network_interface,
    network_insights_analysis,
    network_insights_path,
    network_insights_access_scope,
    network_insights_access_scope_analysis,
    placement_group,
    prefix_list,
    replace_root_volume_task,
    reserved_instances,
    route_table,
    security_group,
    security_group_rule,
    snapshot,
    spot_fleet_request,
    spot_instances_request,
    subnet,
    subnet_cidr_reservation,
    traffic_mirror_filter,
    traffic_mirror_session,
    traffic_mirror_target,
    transit_gateway,
    transit_gateway_attachment,
    transit_gateway_connect_peer,
    transit_gateway_multicast_domain,
    transit_gateway_policy_table,
    transit_gateway_route_table,
    transit_gateway_route_table_announcement,
    volume,
    vpc,
    vpc_endpoint,
    vpc_endpoint_connection,
    vpc_endpoint_service,
    vpc_endpoint_service_permission,
    vpc_peering_connection,
    vpn_connection,
    vpn_gateway,
    vpc_flow_log,
    capacity_reservation_fleet,
    traffic_mirror_filter_rule,
    vpc_endpoint_connection_device_type,
    verified_access_instance,
    verified_access_group,
    verified_access_endpoint,
    verified_access_policy,
    verified_access_trust_provider,
    vpn_connection_device_type,
    vpc_block_public_access_exclusion
  };

namespace ResourceTypeMapper
{
AWS_EC2_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
