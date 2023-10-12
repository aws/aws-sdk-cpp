/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t capacity_reservation_HASH = ConstExprHashingUtils::HashString("capacity-reservation");
        static constexpr uint32_t client_vpn_endpoint_HASH = ConstExprHashingUtils::HashString("client-vpn-endpoint");
        static constexpr uint32_t customer_gateway_HASH = ConstExprHashingUtils::HashString("customer-gateway");
        static constexpr uint32_t carrier_gateway_HASH = ConstExprHashingUtils::HashString("carrier-gateway");
        static constexpr uint32_t coip_pool_HASH = ConstExprHashingUtils::HashString("coip-pool");
        static constexpr uint32_t dedicated_host_HASH = ConstExprHashingUtils::HashString("dedicated-host");
        static constexpr uint32_t dhcp_options_HASH = ConstExprHashingUtils::HashString("dhcp-options");
        static constexpr uint32_t egress_only_internet_gateway_HASH = ConstExprHashingUtils::HashString("egress-only-internet-gateway");
        static constexpr uint32_t elastic_ip_HASH = ConstExprHashingUtils::HashString("elastic-ip");
        static constexpr uint32_t elastic_gpu_HASH = ConstExprHashingUtils::HashString("elastic-gpu");
        static constexpr uint32_t export_image_task_HASH = ConstExprHashingUtils::HashString("export-image-task");
        static constexpr uint32_t export_instance_task_HASH = ConstExprHashingUtils::HashString("export-instance-task");
        static constexpr uint32_t fleet_HASH = ConstExprHashingUtils::HashString("fleet");
        static constexpr uint32_t fpga_image_HASH = ConstExprHashingUtils::HashString("fpga-image");
        static constexpr uint32_t host_reservation_HASH = ConstExprHashingUtils::HashString("host-reservation");
        static constexpr uint32_t image_HASH = ConstExprHashingUtils::HashString("image");
        static constexpr uint32_t import_image_task_HASH = ConstExprHashingUtils::HashString("import-image-task");
        static constexpr uint32_t import_snapshot_task_HASH = ConstExprHashingUtils::HashString("import-snapshot-task");
        static constexpr uint32_t instance_HASH = ConstExprHashingUtils::HashString("instance");
        static constexpr uint32_t instance_event_window_HASH = ConstExprHashingUtils::HashString("instance-event-window");
        static constexpr uint32_t internet_gateway_HASH = ConstExprHashingUtils::HashString("internet-gateway");
        static constexpr uint32_t ipam_HASH = ConstExprHashingUtils::HashString("ipam");
        static constexpr uint32_t ipam_pool_HASH = ConstExprHashingUtils::HashString("ipam-pool");
        static constexpr uint32_t ipam_scope_HASH = ConstExprHashingUtils::HashString("ipam-scope");
        static constexpr uint32_t ipv4pool_ec2_HASH = ConstExprHashingUtils::HashString("ipv4pool-ec2");
        static constexpr uint32_t ipv6pool_ec2_HASH = ConstExprHashingUtils::HashString("ipv6pool-ec2");
        static constexpr uint32_t key_pair_HASH = ConstExprHashingUtils::HashString("key-pair");
        static constexpr uint32_t launch_template_HASH = ConstExprHashingUtils::HashString("launch-template");
        static constexpr uint32_t local_gateway_HASH = ConstExprHashingUtils::HashString("local-gateway");
        static constexpr uint32_t local_gateway_route_table_HASH = ConstExprHashingUtils::HashString("local-gateway-route-table");
        static constexpr uint32_t local_gateway_virtual_interface_HASH = ConstExprHashingUtils::HashString("local-gateway-virtual-interface");
        static constexpr uint32_t local_gateway_virtual_interface_group_HASH = ConstExprHashingUtils::HashString("local-gateway-virtual-interface-group");
        static constexpr uint32_t local_gateway_route_table_vpc_association_HASH = ConstExprHashingUtils::HashString("local-gateway-route-table-vpc-association");
        static constexpr uint32_t local_gateway_route_table_virtual_interface_group_association_HASH = ConstExprHashingUtils::HashString("local-gateway-route-table-virtual-interface-group-association");
        static constexpr uint32_t natgateway_HASH = ConstExprHashingUtils::HashString("natgateway");
        static constexpr uint32_t network_acl_HASH = ConstExprHashingUtils::HashString("network-acl");
        static constexpr uint32_t network_interface_HASH = ConstExprHashingUtils::HashString("network-interface");
        static constexpr uint32_t network_insights_analysis_HASH = ConstExprHashingUtils::HashString("network-insights-analysis");
        static constexpr uint32_t network_insights_path_HASH = ConstExprHashingUtils::HashString("network-insights-path");
        static constexpr uint32_t network_insights_access_scope_HASH = ConstExprHashingUtils::HashString("network-insights-access-scope");
        static constexpr uint32_t network_insights_access_scope_analysis_HASH = ConstExprHashingUtils::HashString("network-insights-access-scope-analysis");
        static constexpr uint32_t placement_group_HASH = ConstExprHashingUtils::HashString("placement-group");
        static constexpr uint32_t prefix_list_HASH = ConstExprHashingUtils::HashString("prefix-list");
        static constexpr uint32_t replace_root_volume_task_HASH = ConstExprHashingUtils::HashString("replace-root-volume-task");
        static constexpr uint32_t reserved_instances_HASH = ConstExprHashingUtils::HashString("reserved-instances");
        static constexpr uint32_t route_table_HASH = ConstExprHashingUtils::HashString("route-table");
        static constexpr uint32_t security_group_HASH = ConstExprHashingUtils::HashString("security-group");
        static constexpr uint32_t security_group_rule_HASH = ConstExprHashingUtils::HashString("security-group-rule");
        static constexpr uint32_t snapshot_HASH = ConstExprHashingUtils::HashString("snapshot");
        static constexpr uint32_t spot_fleet_request_HASH = ConstExprHashingUtils::HashString("spot-fleet-request");
        static constexpr uint32_t spot_instances_request_HASH = ConstExprHashingUtils::HashString("spot-instances-request");
        static constexpr uint32_t subnet_HASH = ConstExprHashingUtils::HashString("subnet");
        static constexpr uint32_t subnet_cidr_reservation_HASH = ConstExprHashingUtils::HashString("subnet-cidr-reservation");
        static constexpr uint32_t traffic_mirror_filter_HASH = ConstExprHashingUtils::HashString("traffic-mirror-filter");
        static constexpr uint32_t traffic_mirror_session_HASH = ConstExprHashingUtils::HashString("traffic-mirror-session");
        static constexpr uint32_t traffic_mirror_target_HASH = ConstExprHashingUtils::HashString("traffic-mirror-target");
        static constexpr uint32_t transit_gateway_HASH = ConstExprHashingUtils::HashString("transit-gateway");
        static constexpr uint32_t transit_gateway_attachment_HASH = ConstExprHashingUtils::HashString("transit-gateway-attachment");
        static constexpr uint32_t transit_gateway_connect_peer_HASH = ConstExprHashingUtils::HashString("transit-gateway-connect-peer");
        static constexpr uint32_t transit_gateway_multicast_domain_HASH = ConstExprHashingUtils::HashString("transit-gateway-multicast-domain");
        static constexpr uint32_t transit_gateway_policy_table_HASH = ConstExprHashingUtils::HashString("transit-gateway-policy-table");
        static constexpr uint32_t transit_gateway_route_table_HASH = ConstExprHashingUtils::HashString("transit-gateway-route-table");
        static constexpr uint32_t transit_gateway_route_table_announcement_HASH = ConstExprHashingUtils::HashString("transit-gateway-route-table-announcement");
        static constexpr uint32_t volume_HASH = ConstExprHashingUtils::HashString("volume");
        static constexpr uint32_t vpc_HASH = ConstExprHashingUtils::HashString("vpc");
        static constexpr uint32_t vpc_endpoint_HASH = ConstExprHashingUtils::HashString("vpc-endpoint");
        static constexpr uint32_t vpc_endpoint_connection_HASH = ConstExprHashingUtils::HashString("vpc-endpoint-connection");
        static constexpr uint32_t vpc_endpoint_service_HASH = ConstExprHashingUtils::HashString("vpc-endpoint-service");
        static constexpr uint32_t vpc_endpoint_service_permission_HASH = ConstExprHashingUtils::HashString("vpc-endpoint-service-permission");
        static constexpr uint32_t vpc_peering_connection_HASH = ConstExprHashingUtils::HashString("vpc-peering-connection");
        static constexpr uint32_t vpn_connection_HASH = ConstExprHashingUtils::HashString("vpn-connection");
        static constexpr uint32_t vpn_gateway_HASH = ConstExprHashingUtils::HashString("vpn-gateway");
        static constexpr uint32_t vpc_flow_log_HASH = ConstExprHashingUtils::HashString("vpc-flow-log");
        static constexpr uint32_t capacity_reservation_fleet_HASH = ConstExprHashingUtils::HashString("capacity-reservation-fleet");
        static constexpr uint32_t traffic_mirror_filter_rule_HASH = ConstExprHashingUtils::HashString("traffic-mirror-filter-rule");
        static constexpr uint32_t vpc_endpoint_connection_device_type_HASH = ConstExprHashingUtils::HashString("vpc-endpoint-connection-device-type");
        static constexpr uint32_t verified_access_instance_HASH = ConstExprHashingUtils::HashString("verified-access-instance");
        static constexpr uint32_t verified_access_group_HASH = ConstExprHashingUtils::HashString("verified-access-group");
        static constexpr uint32_t verified_access_endpoint_HASH = ConstExprHashingUtils::HashString("verified-access-endpoint");
        static constexpr uint32_t verified_access_policy_HASH = ConstExprHashingUtils::HashString("verified-access-policy");
        static constexpr uint32_t verified_access_trust_provider_HASH = ConstExprHashingUtils::HashString("verified-access-trust-provider");
        static constexpr uint32_t vpn_connection_device_type_HASH = ConstExprHashingUtils::HashString("vpn-connection-device-type");
        static constexpr uint32_t vpc_block_public_access_exclusion_HASH = ConstExprHashingUtils::HashString("vpc-block-public-access-exclusion");
        static constexpr uint32_t ipam_resource_discovery_HASH = ConstExprHashingUtils::HashString("ipam-resource-discovery");
        static constexpr uint32_t ipam_resource_discovery_association_HASH = ConstExprHashingUtils::HashString("ipam-resource-discovery-association");
        static constexpr uint32_t instance_connect_endpoint_HASH = ConstExprHashingUtils::HashString("instance-connect-endpoint");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == capacity_reservation_HASH)
          {
            return ResourceType::capacity_reservation;
          }
          else if (hashCode == client_vpn_endpoint_HASH)
          {
            return ResourceType::client_vpn_endpoint;
          }
          else if (hashCode == customer_gateway_HASH)
          {
            return ResourceType::customer_gateway;
          }
          else if (hashCode == carrier_gateway_HASH)
          {
            return ResourceType::carrier_gateway;
          }
          else if (hashCode == coip_pool_HASH)
          {
            return ResourceType::coip_pool;
          }
          else if (hashCode == dedicated_host_HASH)
          {
            return ResourceType::dedicated_host;
          }
          else if (hashCode == dhcp_options_HASH)
          {
            return ResourceType::dhcp_options;
          }
          else if (hashCode == egress_only_internet_gateway_HASH)
          {
            return ResourceType::egress_only_internet_gateway;
          }
          else if (hashCode == elastic_ip_HASH)
          {
            return ResourceType::elastic_ip;
          }
          else if (hashCode == elastic_gpu_HASH)
          {
            return ResourceType::elastic_gpu;
          }
          else if (hashCode == export_image_task_HASH)
          {
            return ResourceType::export_image_task;
          }
          else if (hashCode == export_instance_task_HASH)
          {
            return ResourceType::export_instance_task;
          }
          else if (hashCode == fleet_HASH)
          {
            return ResourceType::fleet;
          }
          else if (hashCode == fpga_image_HASH)
          {
            return ResourceType::fpga_image;
          }
          else if (hashCode == host_reservation_HASH)
          {
            return ResourceType::host_reservation;
          }
          else if (hashCode == image_HASH)
          {
            return ResourceType::image;
          }
          else if (hashCode == import_image_task_HASH)
          {
            return ResourceType::import_image_task;
          }
          else if (hashCode == import_snapshot_task_HASH)
          {
            return ResourceType::import_snapshot_task;
          }
          else if (hashCode == instance_HASH)
          {
            return ResourceType::instance;
          }
          else if (hashCode == instance_event_window_HASH)
          {
            return ResourceType::instance_event_window;
          }
          else if (hashCode == internet_gateway_HASH)
          {
            return ResourceType::internet_gateway;
          }
          else if (hashCode == ipam_HASH)
          {
            return ResourceType::ipam;
          }
          else if (hashCode == ipam_pool_HASH)
          {
            return ResourceType::ipam_pool;
          }
          else if (hashCode == ipam_scope_HASH)
          {
            return ResourceType::ipam_scope;
          }
          else if (hashCode == ipv4pool_ec2_HASH)
          {
            return ResourceType::ipv4pool_ec2;
          }
          else if (hashCode == ipv6pool_ec2_HASH)
          {
            return ResourceType::ipv6pool_ec2;
          }
          else if (hashCode == key_pair_HASH)
          {
            return ResourceType::key_pair;
          }
          else if (hashCode == launch_template_HASH)
          {
            return ResourceType::launch_template;
          }
          else if (hashCode == local_gateway_HASH)
          {
            return ResourceType::local_gateway;
          }
          else if (hashCode == local_gateway_route_table_HASH)
          {
            return ResourceType::local_gateway_route_table;
          }
          else if (hashCode == local_gateway_virtual_interface_HASH)
          {
            return ResourceType::local_gateway_virtual_interface;
          }
          else if (hashCode == local_gateway_virtual_interface_group_HASH)
          {
            return ResourceType::local_gateway_virtual_interface_group;
          }
          else if (hashCode == local_gateway_route_table_vpc_association_HASH)
          {
            return ResourceType::local_gateway_route_table_vpc_association;
          }
          else if (hashCode == local_gateway_route_table_virtual_interface_group_association_HASH)
          {
            return ResourceType::local_gateway_route_table_virtual_interface_group_association;
          }
          else if (hashCode == natgateway_HASH)
          {
            return ResourceType::natgateway;
          }
          else if (hashCode == network_acl_HASH)
          {
            return ResourceType::network_acl;
          }
          else if (hashCode == network_interface_HASH)
          {
            return ResourceType::network_interface;
          }
          else if (hashCode == network_insights_analysis_HASH)
          {
            return ResourceType::network_insights_analysis;
          }
          else if (hashCode == network_insights_path_HASH)
          {
            return ResourceType::network_insights_path;
          }
          else if (hashCode == network_insights_access_scope_HASH)
          {
            return ResourceType::network_insights_access_scope;
          }
          else if (hashCode == network_insights_access_scope_analysis_HASH)
          {
            return ResourceType::network_insights_access_scope_analysis;
          }
          else if (hashCode == placement_group_HASH)
          {
            return ResourceType::placement_group;
          }
          else if (hashCode == prefix_list_HASH)
          {
            return ResourceType::prefix_list;
          }
          else if (hashCode == replace_root_volume_task_HASH)
          {
            return ResourceType::replace_root_volume_task;
          }
          else if (hashCode == reserved_instances_HASH)
          {
            return ResourceType::reserved_instances;
          }
          else if (hashCode == route_table_HASH)
          {
            return ResourceType::route_table;
          }
          else if (hashCode == security_group_HASH)
          {
            return ResourceType::security_group;
          }
          else if (hashCode == security_group_rule_HASH)
          {
            return ResourceType::security_group_rule;
          }
          else if (hashCode == snapshot_HASH)
          {
            return ResourceType::snapshot;
          }
          else if (hashCode == spot_fleet_request_HASH)
          {
            return ResourceType::spot_fleet_request;
          }
          else if (hashCode == spot_instances_request_HASH)
          {
            return ResourceType::spot_instances_request;
          }
          else if (hashCode == subnet_HASH)
          {
            return ResourceType::subnet;
          }
          else if (hashCode == subnet_cidr_reservation_HASH)
          {
            return ResourceType::subnet_cidr_reservation;
          }
          else if (hashCode == traffic_mirror_filter_HASH)
          {
            return ResourceType::traffic_mirror_filter;
          }
          else if (hashCode == traffic_mirror_session_HASH)
          {
            return ResourceType::traffic_mirror_session;
          }
          else if (hashCode == traffic_mirror_target_HASH)
          {
            return ResourceType::traffic_mirror_target;
          }
          else if (hashCode == transit_gateway_HASH)
          {
            return ResourceType::transit_gateway;
          }
          else if (hashCode == transit_gateway_attachment_HASH)
          {
            return ResourceType::transit_gateway_attachment;
          }
          else if (hashCode == transit_gateway_connect_peer_HASH)
          {
            return ResourceType::transit_gateway_connect_peer;
          }
          else if (hashCode == transit_gateway_multicast_domain_HASH)
          {
            return ResourceType::transit_gateway_multicast_domain;
          }
          else if (hashCode == transit_gateway_policy_table_HASH)
          {
            return ResourceType::transit_gateway_policy_table;
          }
          else if (hashCode == transit_gateway_route_table_HASH)
          {
            return ResourceType::transit_gateway_route_table;
          }
          else if (hashCode == transit_gateway_route_table_announcement_HASH)
          {
            return ResourceType::transit_gateway_route_table_announcement;
          }
          else if (hashCode == volume_HASH)
          {
            return ResourceType::volume;
          }
          else if (hashCode == vpc_HASH)
          {
            return ResourceType::vpc;
          }
          else if (hashCode == vpc_endpoint_HASH)
          {
            return ResourceType::vpc_endpoint;
          }
          else if (hashCode == vpc_endpoint_connection_HASH)
          {
            return ResourceType::vpc_endpoint_connection;
          }
          else if (hashCode == vpc_endpoint_service_HASH)
          {
            return ResourceType::vpc_endpoint_service;
          }
          else if (hashCode == vpc_endpoint_service_permission_HASH)
          {
            return ResourceType::vpc_endpoint_service_permission;
          }
          else if (hashCode == vpc_peering_connection_HASH)
          {
            return ResourceType::vpc_peering_connection;
          }
          else if (hashCode == vpn_connection_HASH)
          {
            return ResourceType::vpn_connection;
          }
          else if (hashCode == vpn_gateway_HASH)
          {
            return ResourceType::vpn_gateway;
          }
          else if (hashCode == vpc_flow_log_HASH)
          {
            return ResourceType::vpc_flow_log;
          }
          else if (hashCode == capacity_reservation_fleet_HASH)
          {
            return ResourceType::capacity_reservation_fleet;
          }
          else if (hashCode == traffic_mirror_filter_rule_HASH)
          {
            return ResourceType::traffic_mirror_filter_rule;
          }
          else if (hashCode == vpc_endpoint_connection_device_type_HASH)
          {
            return ResourceType::vpc_endpoint_connection_device_type;
          }
          else if (hashCode == verified_access_instance_HASH)
          {
            return ResourceType::verified_access_instance;
          }
          else if (hashCode == verified_access_group_HASH)
          {
            return ResourceType::verified_access_group;
          }
          else if (hashCode == verified_access_endpoint_HASH)
          {
            return ResourceType::verified_access_endpoint;
          }
          else if (hashCode == verified_access_policy_HASH)
          {
            return ResourceType::verified_access_policy;
          }
          else if (hashCode == verified_access_trust_provider_HASH)
          {
            return ResourceType::verified_access_trust_provider;
          }
          else if (hashCode == vpn_connection_device_type_HASH)
          {
            return ResourceType::vpn_connection_device_type;
          }
          else if (hashCode == vpc_block_public_access_exclusion_HASH)
          {
            return ResourceType::vpc_block_public_access_exclusion;
          }
          else if (hashCode == ipam_resource_discovery_HASH)
          {
            return ResourceType::ipam_resource_discovery;
          }
          else if (hashCode == ipam_resource_discovery_association_HASH)
          {
            return ResourceType::ipam_resource_discovery_association;
          }
          else if (hashCode == instance_connect_endpoint_HASH)
          {
            return ResourceType::instance_connect_endpoint;
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
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::capacity_reservation:
            return "capacity-reservation";
          case ResourceType::client_vpn_endpoint:
            return "client-vpn-endpoint";
          case ResourceType::customer_gateway:
            return "customer-gateway";
          case ResourceType::carrier_gateway:
            return "carrier-gateway";
          case ResourceType::coip_pool:
            return "coip-pool";
          case ResourceType::dedicated_host:
            return "dedicated-host";
          case ResourceType::dhcp_options:
            return "dhcp-options";
          case ResourceType::egress_only_internet_gateway:
            return "egress-only-internet-gateway";
          case ResourceType::elastic_ip:
            return "elastic-ip";
          case ResourceType::elastic_gpu:
            return "elastic-gpu";
          case ResourceType::export_image_task:
            return "export-image-task";
          case ResourceType::export_instance_task:
            return "export-instance-task";
          case ResourceType::fleet:
            return "fleet";
          case ResourceType::fpga_image:
            return "fpga-image";
          case ResourceType::host_reservation:
            return "host-reservation";
          case ResourceType::image:
            return "image";
          case ResourceType::import_image_task:
            return "import-image-task";
          case ResourceType::import_snapshot_task:
            return "import-snapshot-task";
          case ResourceType::instance:
            return "instance";
          case ResourceType::instance_event_window:
            return "instance-event-window";
          case ResourceType::internet_gateway:
            return "internet-gateway";
          case ResourceType::ipam:
            return "ipam";
          case ResourceType::ipam_pool:
            return "ipam-pool";
          case ResourceType::ipam_scope:
            return "ipam-scope";
          case ResourceType::ipv4pool_ec2:
            return "ipv4pool-ec2";
          case ResourceType::ipv6pool_ec2:
            return "ipv6pool-ec2";
          case ResourceType::key_pair:
            return "key-pair";
          case ResourceType::launch_template:
            return "launch-template";
          case ResourceType::local_gateway:
            return "local-gateway";
          case ResourceType::local_gateway_route_table:
            return "local-gateway-route-table";
          case ResourceType::local_gateway_virtual_interface:
            return "local-gateway-virtual-interface";
          case ResourceType::local_gateway_virtual_interface_group:
            return "local-gateway-virtual-interface-group";
          case ResourceType::local_gateway_route_table_vpc_association:
            return "local-gateway-route-table-vpc-association";
          case ResourceType::local_gateway_route_table_virtual_interface_group_association:
            return "local-gateway-route-table-virtual-interface-group-association";
          case ResourceType::natgateway:
            return "natgateway";
          case ResourceType::network_acl:
            return "network-acl";
          case ResourceType::network_interface:
            return "network-interface";
          case ResourceType::network_insights_analysis:
            return "network-insights-analysis";
          case ResourceType::network_insights_path:
            return "network-insights-path";
          case ResourceType::network_insights_access_scope:
            return "network-insights-access-scope";
          case ResourceType::network_insights_access_scope_analysis:
            return "network-insights-access-scope-analysis";
          case ResourceType::placement_group:
            return "placement-group";
          case ResourceType::prefix_list:
            return "prefix-list";
          case ResourceType::replace_root_volume_task:
            return "replace-root-volume-task";
          case ResourceType::reserved_instances:
            return "reserved-instances";
          case ResourceType::route_table:
            return "route-table";
          case ResourceType::security_group:
            return "security-group";
          case ResourceType::security_group_rule:
            return "security-group-rule";
          case ResourceType::snapshot:
            return "snapshot";
          case ResourceType::spot_fleet_request:
            return "spot-fleet-request";
          case ResourceType::spot_instances_request:
            return "spot-instances-request";
          case ResourceType::subnet:
            return "subnet";
          case ResourceType::subnet_cidr_reservation:
            return "subnet-cidr-reservation";
          case ResourceType::traffic_mirror_filter:
            return "traffic-mirror-filter";
          case ResourceType::traffic_mirror_session:
            return "traffic-mirror-session";
          case ResourceType::traffic_mirror_target:
            return "traffic-mirror-target";
          case ResourceType::transit_gateway:
            return "transit-gateway";
          case ResourceType::transit_gateway_attachment:
            return "transit-gateway-attachment";
          case ResourceType::transit_gateway_connect_peer:
            return "transit-gateway-connect-peer";
          case ResourceType::transit_gateway_multicast_domain:
            return "transit-gateway-multicast-domain";
          case ResourceType::transit_gateway_policy_table:
            return "transit-gateway-policy-table";
          case ResourceType::transit_gateway_route_table:
            return "transit-gateway-route-table";
          case ResourceType::transit_gateway_route_table_announcement:
            return "transit-gateway-route-table-announcement";
          case ResourceType::volume:
            return "volume";
          case ResourceType::vpc:
            return "vpc";
          case ResourceType::vpc_endpoint:
            return "vpc-endpoint";
          case ResourceType::vpc_endpoint_connection:
            return "vpc-endpoint-connection";
          case ResourceType::vpc_endpoint_service:
            return "vpc-endpoint-service";
          case ResourceType::vpc_endpoint_service_permission:
            return "vpc-endpoint-service-permission";
          case ResourceType::vpc_peering_connection:
            return "vpc-peering-connection";
          case ResourceType::vpn_connection:
            return "vpn-connection";
          case ResourceType::vpn_gateway:
            return "vpn-gateway";
          case ResourceType::vpc_flow_log:
            return "vpc-flow-log";
          case ResourceType::capacity_reservation_fleet:
            return "capacity-reservation-fleet";
          case ResourceType::traffic_mirror_filter_rule:
            return "traffic-mirror-filter-rule";
          case ResourceType::vpc_endpoint_connection_device_type:
            return "vpc-endpoint-connection-device-type";
          case ResourceType::verified_access_instance:
            return "verified-access-instance";
          case ResourceType::verified_access_group:
            return "verified-access-group";
          case ResourceType::verified_access_endpoint:
            return "verified-access-endpoint";
          case ResourceType::verified_access_policy:
            return "verified-access-policy";
          case ResourceType::verified_access_trust_provider:
            return "verified-access-trust-provider";
          case ResourceType::vpn_connection_device_type:
            return "vpn-connection-device-type";
          case ResourceType::vpc_block_public_access_exclusion:
            return "vpc-block-public-access-exclusion";
          case ResourceType::ipam_resource_discovery:
            return "ipam-resource-discovery";
          case ResourceType::ipam_resource_discovery_association:
            return "ipam-resource-discovery-association";
          case ResourceType::instance_connect_endpoint:
            return "instance-connect-endpoint";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
