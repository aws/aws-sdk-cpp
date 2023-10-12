/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/EC2Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EC2;

namespace Aws
{
namespace EC2
{
namespace EC2ErrorMapper
{

static constexpr uint32_t DRY_RUN_OPERATION_HASH = ConstExprHashingUtils::HashString("DryRunOperation");
static constexpr uint32_t INVALID_VPN_CONNECTION_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidVpnConnectionID.NotFound");
static constexpr uint32_t VOLUME_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("VolumeLimitExceeded");
static constexpr uint32_t INVALID_SNAPSHOT__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidSnapshot.NotFound");
static constexpr uint32_t RESERVED_INSTANCES_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ReservedInstancesLimitExceeded");
static constexpr uint32_t INVALID_VPC_ENDPOINT_ID__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidVpcEndpointId.NotFound");
static constexpr uint32_t INVALID_ZONE__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidZone.NotFound");
static constexpr uint32_t INVALID_ROUTE__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidRoute.NotFound");
static constexpr uint32_t INVALID_NETWORK_INTERFACE_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidNetworkInterfaceId.Malformed");
static constexpr uint32_t INVALID_VPC__RANGE_HASH = ConstExprHashingUtils::HashString("InvalidVpc.Range");
static constexpr uint32_t NON_E_B_S_INSTANCE_HASH = ConstExprHashingUtils::HashString("NonEBSInstance");
static constexpr uint32_t INVALID_A_M_I_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidAMIID.NotFound");
static constexpr uint32_t INVALID_KEY_PAIR__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidKeyPair.NotFound");
static constexpr uint32_t VPC_PEERING_CONNECTION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("VpcPeeringConnectionAlreadyExists");
static constexpr uint32_t INVALID_VPC_ENDPOINT_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidVpcEndpointId.Malformed");
static constexpr uint32_t INVALID_VOLUME_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidVolumeID.Malformed");
static constexpr uint32_t INVALID_RESERVED_INSTANCES_OFFERING_ID_HASH = ConstExprHashingUtils::HashString("InvalidReservedInstancesOfferingId");
static constexpr uint32_t INVALID_BLOCK_DEVICE_MAPPING_HASH = ConstExprHashingUtils::HashString("InvalidBlockDeviceMapping");
static constexpr uint32_t INVALID_VOLUME_I_D__ZONE_MISMATCH_HASH = ConstExprHashingUtils::HashString("InvalidVolumeID.ZoneMismatch");
static constexpr uint32_t UNSUPPORTED_HASH = ConstExprHashingUtils::HashString("Unsupported");
static constexpr uint32_t INVALID_KEY__FORMAT_HASH = ConstExprHashingUtils::HashString("InvalidKey.Format");
static constexpr uint32_t INVALID_SPOT_FLEET_REQUEST_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidSpotFleetRequestId.Malformed");
static constexpr uint32_t INVALID_ADDRESS_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidAddressID.NotFound");
static constexpr uint32_t ROUTE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("RouteAlreadyExists");
static constexpr uint32_t INVALID_A_M_I_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidAMIID.Malformed");
static constexpr uint32_t INVALID_KEY_PAIR__FORMAT_HASH = ConstExprHashingUtils::HashString("InvalidKeyPair.Format");
static constexpr uint32_t VPC_CIDR_CONFLICT_HASH = ConstExprHashingUtils::HashString("VpcCidrConflict");
static constexpr uint32_t INVALID_GROUP__RESERVED_HASH = ConstExprHashingUtils::HashString("InvalidGroup.Reserved");
static constexpr uint32_t LEGACY_SECURITY_GROUP_HASH = ConstExprHashingUtils::HashString("LegacySecurityGroup");
static constexpr uint32_t CANNOT_DELETE_HASH = ConstExprHashingUtils::HashString("CannotDelete");
static constexpr uint32_t INVALID_I_P_ADDRESS__IN_USE_HASH = ConstExprHashingUtils::HashString("InvalidIPAddress.InUse");
static constexpr uint32_t INVALID_A_M_I_I_D__UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("InvalidAMIID.Unavailable");
static constexpr uint32_t INVALID_FORMAT_HASH = ConstExprHashingUtils::HashString("InvalidFormat");
static constexpr uint32_t INVALID_GROUP_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidGroupId.Malformed");
static constexpr uint32_t BUNDLING_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("BundlingInProgress");
static constexpr uint32_t INVALID_INSTANCE_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidInstanceType");
static constexpr uint32_t INVALID_PERMISSION__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidPermission.NotFound");
static constexpr uint32_t INVALID_ROUTE__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidRoute.Malformed");
static constexpr uint32_t INVALID_RESERVATION_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidReservationID.Malformed");
static constexpr uint32_t INVALID_KEY_PAIR__DUPLICATE_HASH = ConstExprHashingUtils::HashString("InvalidKeyPair.Duplicate");
static constexpr uint32_t ROUTE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RouteLimitExceeded");
static constexpr uint32_t INVALID_SECURITY__REQUEST_HAS_EXPIRED_HASH = ConstExprHashingUtils::HashString("InvalidSecurity.RequestHasExpired");
static constexpr uint32_t INVALID_SPOT_INSTANCE_REQUEST_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidSpotInstanceRequestID.Malformed");
static constexpr uint32_t INVALID_VPC_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidVpcID.NotFound");
static constexpr uint32_t ROUTE_TABLE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RouteTableLimitExceeded");
static constexpr uint32_t INVALID_ATTACHMENT_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidAttachmentID.NotFound");
static constexpr uint32_t INVALID_PERMISSION__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidPermission.Malformed");
static constexpr uint32_t VOLUME_IN_USE_HASH = ConstExprHashingUtils::HashString("VolumeInUse");
static constexpr uint32_t ACTIVE_VPC_PEERING_CONNECTION_PER_VPC_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ActiveVpcPeeringConnectionPerVpcLimitExceeded");
static constexpr uint32_t INVALID_VOLUME__ZONE_MISMATCH_HASH = ConstExprHashingUtils::HashString("InvalidVolume.ZoneMismatch");
static constexpr uint32_t INVALID_DHCP_OPTION_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidDhcpOptionID.NotFound");
static constexpr uint32_t PENDING_SNAPSHOT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PendingSnapshotLimitExceeded");
static constexpr uint32_t INVALID_PREFIX_LIST_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidPrefixListId.Malformed");
static constexpr uint32_t INVALID_VPN_CONNECTION_I_D_HASH = ConstExprHashingUtils::HashString("InvalidVpnConnectionID");
static constexpr uint32_t INVALID_USER_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidUserID.Malformed");
static constexpr uint32_t ADDRESS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AddressLimitExceeded");
static constexpr uint32_t INVALID_GROUP__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidGroup.NotFound");
static constexpr uint32_t INVALID_I_D_HASH = ConstExprHashingUtils::HashString("InvalidID");
static constexpr uint32_t VOLUME_TYPE_NOT_AVAILABLE_IN_ZONE_HASH = ConstExprHashingUtils::HashString("VolumeTypeNotAvailableInZone");
static constexpr uint32_t INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET_HASH = ConstExprHashingUtils::HashString("InsufficientFreeAddressesInSubnet");
static constexpr uint32_t DISK_IMAGE_SIZE_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("DiskImageSizeTooLarge");
static constexpr uint32_t INVALID_A_M_I_ATTRIBUTE_ITEM_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidAMIAttributeItemValue");
static constexpr uint32_t INVALID_GROUP__IN_USE_HASH = ConstExprHashingUtils::HashString("InvalidGroup.InUse");
static constexpr uint32_t INVALID_SPOT_DATAFEED__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidSpotDatafeed.NotFound");
static constexpr uint32_t INSUFFICIENT_RESERVED_INSTANCES_CAPACITY_HASH = ConstExprHashingUtils::HashString("InsufficientReservedInstancesCapacity");
static constexpr uint32_t MAX_I_O_P_S_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxIOPSLimitExceeded");
static constexpr uint32_t RESOURCE_COUNT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceCountExceeded");
static constexpr uint32_t INCORRECT_STATE_HASH = ConstExprHashingUtils::HashString("IncorrectState");
static constexpr uint32_t NETWORK_ACL_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NetworkAclLimitExceeded");
static constexpr uint32_t INVALID_RESERVED_INSTANCES_ID_HASH = ConstExprHashingUtils::HashString("InvalidReservedInstancesId");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperation");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequest");
static constexpr uint32_t VPC_ENDPOINT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("VpcEndpointLimitExceeded");
static constexpr uint32_t INVALID_ROUTE_TABLE_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidRouteTableId.Malformed");
static constexpr uint32_t INVALID_STATE_TRANSITION_HASH = ConstExprHashingUtils::HashString("InvalidStateTransition");
static constexpr uint32_t INVALID_VPC_PEERING_CONNECTION_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidVpcPeeringConnectionId.Malformed");
static constexpr uint32_t PRIVATE_IP_ADDRESS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PrivateIpAddressLimitExceeded");
static constexpr uint32_t VPC_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("VpcLimitExceeded");
static constexpr uint32_t INVALID_PERMISSION__DUPLICATE_HASH = ConstExprHashingUtils::HashString("InvalidPermission.Duplicate");
static constexpr uint32_t CUSTOMER_GATEWAY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CustomerGatewayLimitExceeded");
static constexpr uint32_t INSTANCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("InstanceLimitExceeded");
static constexpr uint32_t INTERNET_GATEWAY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("InternetGatewayLimitExceeded");
static constexpr uint32_t CONCURRENT_SNAPSHOT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ConcurrentSnapshotLimitExceeded");
static constexpr uint32_t SECURITY_GROUPS_PER_INSTANCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SecurityGroupsPerInstanceLimitExceeded");
static constexpr uint32_t V_P_C_RESOURCE_NOT_SPECIFIED_HASH = ConstExprHashingUtils::HashString("VPCResourceNotSpecified");
static constexpr uint32_t INVALID_SNAPSHOT__IN_USE_HASH = ConstExprHashingUtils::HashString("InvalidSnapshot.InUse");
static constexpr uint32_t UNKNOWN_VOLUME_TYPE_HASH = ConstExprHashingUtils::HashString("UnknownVolumeType");
static constexpr uint32_t SECURITY_GROUP_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SecurityGroupLimitExceeded");
static constexpr uint32_t INVALID_SUBNET_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidSubnetID.NotFound");
static constexpr uint32_t GATEWAY__NOT_ATTACHED_HASH = ConstExprHashingUtils::HashString("Gateway.NotAttached");
static constexpr uint32_t INVALID_GROUP__DUPLICATE_HASH = ConstExprHashingUtils::HashString("InvalidGroup.Duplicate");
static constexpr uint32_t ENCRYPTED_VOLUMES_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("EncryptedVolumesNotSupported");
static constexpr uint32_t INVALID_ROUTE_TABLE_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidRouteTableID.NotFound");
static constexpr uint32_t INVALID_SECURITY_GROUP_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidSecurityGroupID.NotFound");
static constexpr uint32_t INVALID_PLACEMENT_GROUP__UNKNOWN_HASH = ConstExprHashingUtils::HashString("InvalidPlacementGroup.Unknown");
static constexpr uint32_t INVALID_INSTANCE_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidInstanceID.Malformed");
static constexpr uint32_t INSTANCE_ALREADY_LINKED_HASH = ConstExprHashingUtils::HashString("InstanceAlreadyLinked");
static constexpr uint32_t INVALID_ATTACHMENT__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidAttachment.NotFound");
static constexpr uint32_t INVALID_CUSTOMER_GATEWAY__DUPLICATE_IP_ADDRESS_HASH = ConstExprHashingUtils::HashString("InvalidCustomerGateway.DuplicateIpAddress");
static constexpr uint32_t INVALID_SUBNET__CONFLICT_HASH = ConstExprHashingUtils::HashString("InvalidSubnet.Conflict");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInput");
static constexpr uint32_t INVALID_INSTANCE_ATTRIBUTE_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidInstanceAttributeValue");
static constexpr uint32_t REQUEST_RESOURCE_COUNT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RequestResourceCountExceeded");
static constexpr uint32_t INVALID_ASSOCIATION_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidAssociationID.NotFound");
static constexpr uint32_t INVALID_DEVICE__IN_USE_HASH = ConstExprHashingUtils::HashString("InvalidDevice.InUse");
static constexpr uint32_t INVALID_CONVERSION_TASK_ID_HASH = ConstExprHashingUtils::HashString("InvalidConversionTaskId");
static constexpr uint32_t MAX_SPOT_FLEET_REQUEST_COUNT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxSpotFleetRequestCountExceeded");
static constexpr uint32_t INVALID_ALLOCATION_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidAllocationID.NotFound");
static constexpr uint32_t INVALID_CUSTOMER_GATEWAY_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidCustomerGatewayID.NotFound");
static constexpr uint32_t INVALID_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("InvalidPolicyDocument");
static constexpr uint32_t INVALID_SPOT_FLEET_REQUEST_ID__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidSpotFleetRequestId.NotFound");
static constexpr uint32_t INVALID_FLOW_LOG_ID__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidFlowLogId.NotFound");
static constexpr uint32_t VPN_GATEWAY_ATTACHMENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("VpnGatewayAttachmentLimitExceeded");
static constexpr uint32_t FILTER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FilterLimitExceeded");
static constexpr uint32_t INVALID_SNAPSHOT_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidSnapshotID.Malformed");
static constexpr uint32_t INVALID_SPOT_FLEET_REQUEST_CONFIG_HASH = ConstExprHashingUtils::HashString("InvalidSpotFleetRequestConfig");
static constexpr uint32_t SNAPSHOT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SnapshotLimitExceeded");
static constexpr uint32_t INVALID_VPC_STATE_HASH = ConstExprHashingUtils::HashString("InvalidVpcState");
static constexpr uint32_t INVALID_GATEWAY_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidGatewayID.NotFound");
static constexpr uint32_t SECURITY_GROUPS_PER_INTERFACE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SecurityGroupsPerInterfaceLimitExceeded");
static constexpr uint32_t MAX_SPOT_INSTANCE_COUNT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxSpotInstanceCountExceeded");
static constexpr uint32_t INVALID_ADDRESS__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidAddress.Malformed");
static constexpr uint32_t INVALID_DHCP_OPTIONS_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidDhcpOptionsId.Malformed");
static constexpr uint32_t NETWORK_ACL_ENTRY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("NetworkAclEntryAlreadyExists");
static constexpr uint32_t VPN_GATEWAY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("VpnGatewayLimitExceeded");
static constexpr uint32_t INVALID_PREFIX_LIST_ID__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidPrefixListId.NotFound");
static constexpr uint32_t INVALID_INSTANCE_I_D_HASH = ConstExprHashingUtils::HashString("InvalidInstanceID");
static constexpr uint32_t INVALID_STATE_HASH = ConstExprHashingUtils::HashString("InvalidState");
static constexpr uint32_t FLOW_LOGS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FlowLogsLimitExceeded");
static constexpr uint32_t INVALID_ADDRESS__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidAddress.NotFound");
static constexpr uint32_t V_P_C_ID_NOT_SPECIFIED_HASH = ConstExprHashingUtils::HashString("VPCIdNotSpecified");
static constexpr uint32_t RESOURCE__ALREADY_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("Resource.AlreadyAssociated");
static constexpr uint32_t NOT_EXPORTABLE_HASH = ConstExprHashingUtils::HashString("NotExportable");
static constexpr uint32_t INVALID_DHCP_OPTIONS_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidDhcpOptionsID.NotFound");
static constexpr uint32_t NETWORK_ACL_ENTRY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NetworkAclEntryLimitExceeded");
static constexpr uint32_t TAG_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagLimitExceeded");
static constexpr uint32_t INVALID_NETWORK_INTERFACE_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidNetworkInterfaceID.NotFound");
static constexpr uint32_t INVALID_VPN_GATEWAY_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidVpnGatewayID.NotFound");
static constexpr uint32_t INVALID_SPOT_INSTANCE_REQUEST_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidSpotInstanceRequestID.NotFound");
static constexpr uint32_t RULES_PER_SECURITY_GROUP_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RulesPerSecurityGroupLimitExceeded");
static constexpr uint32_t INVALID_PLACEMENT_GROUP__DUPLICATE_HASH = ConstExprHashingUtils::HashString("InvalidPlacementGroup.Duplicate");
static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OperationNotPermitted");
static constexpr uint32_t INVALID_EXPORT_TASK_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidExportTaskID.NotFound");
static constexpr uint32_t VPN_CONNECTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("VpnConnectionLimitExceeded");
static constexpr uint32_t INCORRECT_INSTANCE_STATE_HASH = ConstExprHashingUtils::HashString("IncorrectInstanceState");
static constexpr uint32_t INVALID_NETWORK_ACL_ENTRY__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidNetworkAclEntry.NotFound");
static constexpr uint32_t INVALID_VPC_PEERING_CONNECTION_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidVpcPeeringConnectionID.NotFound");
static constexpr uint32_t SUBNET_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SubnetLimitExceeded");
static constexpr uint32_t INVALID_VOLUME_I_D__DUPLICATE_HASH = ConstExprHashingUtils::HashString("InvalidVolumeID.Duplicate");
static constexpr uint32_t INVALID_OPTION__CONFLICT_HASH = ConstExprHashingUtils::HashString("InvalidOption.Conflict");
static constexpr uint32_t INVALID_BUNDLE_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidBundleID.NotFound");
static constexpr uint32_t ATTACHMENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AttachmentLimitExceeded");
static constexpr uint32_t FLOW_LOG_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("FlowLogAlreadyExists");
static constexpr uint32_t INVALID_INSTANCE_I_D__NOT_LINKABLE_HASH = ConstExprHashingUtils::HashString("InvalidInstanceID.NotLinkable");
static constexpr uint32_t INVALID_PLACEMENT_GROUP__IN_USE_HASH = ConstExprHashingUtils::HashString("InvalidPlacementGroup.InUse");
static constexpr uint32_t INVALID_SERVICE_NAME_HASH = ConstExprHashingUtils::HashString("InvalidServiceName");
static constexpr uint32_t INVALID_INTERNET_GATEWAY_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidInternetGatewayID.NotFound");
static constexpr uint32_t INVALID_INSTANCE_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidInstanceID.NotFound");
static constexpr uint32_t INVALID_NETWORK_INTERFACE_ATTACHMENT_I_D__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidNetworkInterfaceAttachmentID.Malformed");
static constexpr uint32_t INVALID_A_M_I_NAME__DUPLICATE_HASH = ConstExprHashingUtils::HashString("InvalidAMIName.Duplicate");
static constexpr uint32_t INVALID_VOLUME__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidVolume.NotFound");
static constexpr uint32_t INVALID_FILTER_HASH = ConstExprHashingUtils::HashString("InvalidFilter");
static constexpr uint32_t INVALID_MANIFEST_HASH = ConstExprHashingUtils::HashString("InvalidManifest");
static constexpr uint32_t INVALID_VPN_GATEWAY_ATTACHMENT__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidVpnGatewayAttachment.NotFound");
static constexpr uint32_t OUTSTANDING_VPC_PEERING_CONNECTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OutstandingVpcPeeringConnectionLimitExceeded");
static constexpr uint32_t INVALID_CUSTOMER_GATEWAY_ID__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidCustomerGatewayId.Malformed");
static constexpr uint32_t CONCURRENT_TAG_ACCESS_HASH = ConstExprHashingUtils::HashString("ConcurrentTagAccess");
static constexpr uint32_t INVALID_INTERFACE__IP_ADDRESS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("InvalidInterface.IpAddressLimitExceeded");
static constexpr uint32_t INVALID_NETWORK_ACL_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidNetworkAclID.NotFound");
static constexpr uint32_t INVALID_A_M_I_NAME__MALFORMED_HASH = ConstExprHashingUtils::HashString("InvalidAMIName.Malformed");
static constexpr uint32_t INVALID_RESERVATION_I_D__NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InvalidReservationID.NotFound");
static constexpr uint32_t DEPENDENCY_VIOLATION_HASH = ConstExprHashingUtils::HashString("DependencyViolation");
static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceeded");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(uint32_t hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == DRY_RUN_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::DRY_RUN_OPERATION), false);
    return true;
  }
  else if (hashCode == INVALID_VPN_CONNECTION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPN_CONNECTION_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == VOLUME_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VOLUME_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SNAPSHOT__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == RESERVED_INSTANCES_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::RESERVED_INSTANCES_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_VPC_ENDPOINT_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPC_ENDPOINT_ID__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_ZONE__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ZONE__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_ROUTE__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ROUTE__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_INTERFACE_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_NETWORK_INTERFACE_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_VPC__RANGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPC__RANGE), false);
    return true;
  }
  else if (hashCode == NON_E_B_S_INSTANCE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::NON_E_B_S_INSTANCE), false);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_A_M_I_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_KEY_PAIR__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_KEY_PAIR__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == VPC_PEERING_CONNECTION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VPC_PEERING_CONNECTION_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_VPC_ENDPOINT_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPC_ENDPOINT_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_VOLUME_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VOLUME_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_RESERVED_INSTANCES_OFFERING_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_RESERVED_INSTANCES_OFFERING_ID), false);
    return true;
  }
  else if (hashCode == INVALID_BLOCK_DEVICE_MAPPING_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_BLOCK_DEVICE_MAPPING), false);
    return true;
  }
  else if (hashCode == INVALID_VOLUME_I_D__ZONE_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VOLUME_I_D__ZONE_MISMATCH), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::UNSUPPORTED), false);
    return true;
  }
  else if (hashCode == INVALID_KEY__FORMAT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_KEY__FORMAT), false);
    return true;
  }
  else if (hashCode == INVALID_SPOT_FLEET_REQUEST_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SPOT_FLEET_REQUEST_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_ADDRESS_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ADDRESS_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == ROUTE_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::ROUTE_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_A_M_I_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_KEY_PAIR__FORMAT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_KEY_PAIR__FORMAT), false);
    return true;
  }
  else if (hashCode == VPC_CIDR_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VPC_CIDR_CONFLICT), false);
    return true;
  }
  else if (hashCode == INVALID_GROUP__RESERVED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_GROUP__RESERVED), false);
    return true;
  }
  else if (hashCode == LEGACY_SECURITY_GROUP_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::LEGACY_SECURITY_GROUP), false);
    return true;
  }
  else if (hashCode == CANNOT_DELETE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::CANNOT_DELETE), false);
    return true;
  }
  else if (hashCode == INVALID_I_P_ADDRESS__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_I_P_ADDRESS__IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_I_D__UNAVAILABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_A_M_I_I_D__UNAVAILABLE), false);
    return true;
  }
  else if (hashCode == INVALID_FORMAT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_FORMAT), false);
    return true;
  }
  else if (hashCode == INVALID_GROUP_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_GROUP_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == BUNDLING_IN_PROGRESS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::BUNDLING_IN_PROGRESS), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INSTANCE_TYPE), false);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PERMISSION__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_ROUTE__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ROUTE__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_RESERVATION_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_RESERVATION_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_KEY_PAIR__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_KEY_PAIR__DUPLICATE), false);
    return true;
  }
  else if (hashCode == ROUTE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::ROUTE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_SECURITY__REQUEST_HAS_EXPIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SECURITY__REQUEST_HAS_EXPIRED), false);
    return true;
  }
  else if (hashCode == INVALID_SPOT_INSTANCE_REQUEST_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SPOT_INSTANCE_REQUEST_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_VPC_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPC_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == ROUTE_TABLE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::ROUTE_TABLE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ATTACHMENT_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ATTACHMENT_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PERMISSION__MALFORMED), false);
    return true;
  }
  else if (hashCode == VOLUME_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VOLUME_IN_USE), false);
    return true;
  }
  else if (hashCode == ACTIVE_VPC_PEERING_CONNECTION_PER_VPC_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::ACTIVE_VPC_PEERING_CONNECTION_PER_VPC_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_VOLUME__ZONE_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VOLUME__ZONE_MISMATCH), false);
    return true;
  }
  else if (hashCode == INVALID_DHCP_OPTION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_DHCP_OPTION_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == PENDING_SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::PENDING_SNAPSHOT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_PREFIX_LIST_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PREFIX_LIST_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_VPN_CONNECTION_I_D_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPN_CONNECTION_I_D), false);
    return true;
  }
  else if (hashCode == INVALID_USER_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_USER_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == ADDRESS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::ADDRESS_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_GROUP__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_GROUP__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_I_D_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_I_D), false);
    return true;
  }
  else if (hashCode == VOLUME_TYPE_NOT_AVAILABLE_IN_ZONE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VOLUME_TYPE_NOT_AVAILABLE_IN_ZONE), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET), false);
    return true;
  }
  else if (hashCode == DISK_IMAGE_SIZE_TOO_LARGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::DISK_IMAGE_SIZE_TOO_LARGE), false);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_ATTRIBUTE_ITEM_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_A_M_I_ATTRIBUTE_ITEM_VALUE), false);
    return true;
  }
  else if (hashCode == INVALID_GROUP__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_GROUP__IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_SPOT_DATAFEED__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SPOT_DATAFEED__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_RESERVED_INSTANCES_CAPACITY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INSUFFICIENT_RESERVED_INSTANCES_CAPACITY), false);
    return true;
  }
  else if (hashCode == MAX_I_O_P_S_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::MAX_I_O_P_S_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == RESOURCE_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::RESOURCE_COUNT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INCORRECT_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INCORRECT_STATE), false);
    return true;
  }
  else if (hashCode == NETWORK_ACL_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::NETWORK_ACL_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_RESERVED_INSTANCES_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_RESERVED_INSTANCES_ID), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::UNSUPPORTED_OPERATION), false);
    return true;
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_REQUEST), false);
    return true;
  }
  else if (hashCode == VPC_ENDPOINT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VPC_ENDPOINT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ROUTE_TABLE_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ROUTE_TABLE_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_STATE_TRANSITION), false);
    return true;
  }
  else if (hashCode == INVALID_VPC_PEERING_CONNECTION_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPC_PEERING_CONNECTION_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == PRIVATE_IP_ADDRESS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::PRIVATE_IP_ADDRESS_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == VPC_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VPC_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PERMISSION__DUPLICATE), false);
    return true;
  }
  else if (hashCode == CUSTOMER_GATEWAY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::CUSTOMER_GATEWAY_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INSTANCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INSTANCE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INTERNET_GATEWAY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INTERNET_GATEWAY_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == CONCURRENT_SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::CONCURRENT_SNAPSHOT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == SECURITY_GROUPS_PER_INSTANCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::SECURITY_GROUPS_PER_INSTANCE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == V_P_C_RESOURCE_NOT_SPECIFIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::V_P_C_RESOURCE_NOT_SPECIFIED), false);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SNAPSHOT__IN_USE), false);
    return true;
  }
  else if (hashCode == UNKNOWN_VOLUME_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::UNKNOWN_VOLUME_TYPE), false);
    return true;
  }
  else if (hashCode == SECURITY_GROUP_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::SECURITY_GROUP_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_SUBNET_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SUBNET_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == GATEWAY__NOT_ATTACHED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::GATEWAY__NOT_ATTACHED), false);
    return true;
  }
  else if (hashCode == INVALID_GROUP__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_GROUP__DUPLICATE), false);
    return true;
  }
  else if (hashCode == ENCRYPTED_VOLUMES_NOT_SUPPORTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::ENCRYPTED_VOLUMES_NOT_SUPPORTED), false);
    return true;
  }
  else if (hashCode == INVALID_ROUTE_TABLE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ROUTE_TABLE_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_SECURITY_GROUP_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SECURITY_GROUP_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_PLACEMENT_GROUP__UNKNOWN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PLACEMENT_GROUP__UNKNOWN), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INSTANCE_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == INSTANCE_ALREADY_LINKED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INSTANCE_ALREADY_LINKED), false);
    return true;
  }
  else if (hashCode == INVALID_ATTACHMENT__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ATTACHMENT__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_CUSTOMER_GATEWAY__DUPLICATE_IP_ADDRESS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_CUSTOMER_GATEWAY__DUPLICATE_IP_ADDRESS), false);
    return true;
  }
  else if (hashCode == INVALID_SUBNET__CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SUBNET__CONFLICT), false);
    return true;
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INPUT), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_ATTRIBUTE_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INSTANCE_ATTRIBUTE_VALUE), false);
    return true;
  }
  else if (hashCode == REQUEST_RESOURCE_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::REQUEST_RESOURCE_COUNT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ASSOCIATION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ASSOCIATION_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_DEVICE__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_DEVICE__IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_CONVERSION_TASK_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_CONVERSION_TASK_ID), false);
    return true;
  }
  else if (hashCode == MAX_SPOT_FLEET_REQUEST_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::MAX_SPOT_FLEET_REQUEST_COUNT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ALLOCATION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ALLOCATION_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_CUSTOMER_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_CUSTOMER_GATEWAY_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_POLICY_DOCUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_POLICY_DOCUMENT), false);
    return true;
  }
  else if (hashCode == INVALID_SPOT_FLEET_REQUEST_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SPOT_FLEET_REQUEST_ID__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_FLOW_LOG_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_FLOW_LOG_ID__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == VPN_GATEWAY_ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VPN_GATEWAY_ATTACHMENT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == FILTER_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::FILTER_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SNAPSHOT_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_SPOT_FLEET_REQUEST_CONFIG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SPOT_FLEET_REQUEST_CONFIG), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::SNAPSHOT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_VPC_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPC_STATE), false);
    return true;
  }
  else if (hashCode == INVALID_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_GATEWAY_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == SECURITY_GROUPS_PER_INTERFACE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::SECURITY_GROUPS_PER_INTERFACE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == MAX_SPOT_INSTANCE_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::MAX_SPOT_INSTANCE_COUNT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ADDRESS__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ADDRESS__MALFORMED), false);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(uint32_t hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == INVALID_DHCP_OPTIONS_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_DHCP_OPTIONS_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == NETWORK_ACL_ENTRY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::NETWORK_ACL_ENTRY_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == VPN_GATEWAY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VPN_GATEWAY_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_PREFIX_LIST_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PREFIX_LIST_ID__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INSTANCE_I_D), false);
    return true;
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_STATE), false);
    return true;
  }
  else if (hashCode == FLOW_LOGS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::FLOW_LOGS_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_ADDRESS__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_ADDRESS__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == V_P_C_ID_NOT_SPECIFIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::V_P_C_ID_NOT_SPECIFIED), false);
    return true;
  }
  else if (hashCode == RESOURCE__ALREADY_ASSOCIATED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::RESOURCE__ALREADY_ASSOCIATED), false);
    return true;
  }
  else if (hashCode == NOT_EXPORTABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::NOT_EXPORTABLE), false);
    return true;
  }
  else if (hashCode == INVALID_DHCP_OPTIONS_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_DHCP_OPTIONS_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == NETWORK_ACL_ENTRY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::NETWORK_ACL_ENTRY_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::TAG_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_INTERFACE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_NETWORK_INTERFACE_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_VPN_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPN_GATEWAY_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_SPOT_INSTANCE_REQUEST_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SPOT_INSTANCE_REQUEST_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == RULES_PER_SECURITY_GROUP_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::RULES_PER_SECURITY_GROUP_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_PLACEMENT_GROUP__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PLACEMENT_GROUP__DUPLICATE), false);
    return true;
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::OPERATION_NOT_PERMITTED), false);
    return true;
  }
  else if (hashCode == INVALID_EXPORT_TASK_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_EXPORT_TASK_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == VPN_CONNECTION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::VPN_CONNECTION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INCORRECT_INSTANCE_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INCORRECT_INSTANCE_STATE), false);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_ACL_ENTRY__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_NETWORK_ACL_ENTRY__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_VPC_PEERING_CONNECTION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPC_PEERING_CONNECTION_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == SUBNET_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::SUBNET_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_VOLUME_I_D__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VOLUME_I_D__DUPLICATE), false);
    return true;
  }
  else if (hashCode == INVALID_OPTION__CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_OPTION__CONFLICT), false);
    return true;
  }
  else if (hashCode == INVALID_BUNDLE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_BUNDLE_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::ATTACHMENT_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == FLOW_LOG_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::FLOW_LOG_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D__NOT_LINKABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INSTANCE_I_D__NOT_LINKABLE), false);
    return true;
  }
  else if (hashCode == INVALID_PLACEMENT_GROUP__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_PLACEMENT_GROUP__IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_SERVICE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_SERVICE_NAME), false);
    return true;
  }
  else if (hashCode == INVALID_INTERNET_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INTERNET_GATEWAY_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INSTANCE_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_INTERFACE_ATTACHMENT_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_NETWORK_INTERFACE_ATTACHMENT_I_D__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_NAME__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_A_M_I_NAME__DUPLICATE), false);
    return true;
  }
  else if (hashCode == INVALID_VOLUME__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VOLUME__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_FILTER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_FILTER), false);
    return true;
  }
  else if (hashCode == INVALID_MANIFEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_MANIFEST), false);
    return true;
  }
  else if (hashCode == INVALID_VPN_GATEWAY_ATTACHMENT__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_VPN_GATEWAY_ATTACHMENT__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == OUTSTANDING_VPC_PEERING_CONNECTION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::OUTSTANDING_VPC_PEERING_CONNECTION_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_CUSTOMER_GATEWAY_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_CUSTOMER_GATEWAY_ID__MALFORMED), false);
    return true;
  }
  else if (hashCode == CONCURRENT_TAG_ACCESS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::CONCURRENT_TAG_ACCESS), false);
    return true;
  }
  else if (hashCode == INVALID_INTERFACE__IP_ADDRESS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_INTERFACE__IP_ADDRESS_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_ACL_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_NETWORK_ACL_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_NAME__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_A_M_I_NAME__MALFORMED), false);
    return true;
  }
  else if (hashCode == INVALID_RESERVATION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::INVALID_RESERVATION_I_D__NOT_FOUND), false);
    return true;
  }
  else if (hashCode == DEPENDENCY_VIOLATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::DEPENDENCY_VIOLATION), false);
    return true;
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2Errors::RESOURCE_LIMIT_EXCEEDED), false);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);
  AWSError<CoreErrors> error;
  if (GetErrorForNameHelper0(hashCode, error))
  {
    return error;
  }
  else if (GetErrorForNameHelper1(hashCode, error))
  {
    return error;
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EC2ErrorMapper
} // namespace EC2
} // namespace Aws
