/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptAddressTransferAsync(...)  SubmitAsync(&EC2Client::AcceptAddressTransfer, __VA_ARGS__)
#define AcceptAddressTransferCallable(REQUEST)  SubmitCallable(&EC2Client::AcceptAddressTransfer, REQUEST)

#define AcceptReservedInstancesExchangeQuoteAsync(...)  SubmitAsync(&EC2Client::AcceptReservedInstancesExchangeQuote, __VA_ARGS__)
#define AcceptReservedInstancesExchangeQuoteCallable(REQUEST)  SubmitCallable(&EC2Client::AcceptReservedInstancesExchangeQuote, REQUEST)

#define AcceptTransitGatewayMulticastDomainAssociationsAsync(...)  SubmitAsync(&EC2Client::AcceptTransitGatewayMulticastDomainAssociations, __VA_ARGS__)
#define AcceptTransitGatewayMulticastDomainAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::AcceptTransitGatewayMulticastDomainAssociations, REQUEST)

#define AcceptTransitGatewayPeeringAttachmentAsync(...)  SubmitAsync(&EC2Client::AcceptTransitGatewayPeeringAttachment, __VA_ARGS__)
#define AcceptTransitGatewayPeeringAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::AcceptTransitGatewayPeeringAttachment, REQUEST)

#define AcceptTransitGatewayVpcAttachmentAsync(...)  SubmitAsync(&EC2Client::AcceptTransitGatewayVpcAttachment, __VA_ARGS__)
#define AcceptTransitGatewayVpcAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::AcceptTransitGatewayVpcAttachment, REQUEST)

#define AcceptVpcEndpointConnectionsAsync(...)  SubmitAsync(&EC2Client::AcceptVpcEndpointConnections, __VA_ARGS__)
#define AcceptVpcEndpointConnectionsCallable(REQUEST)  SubmitCallable(&EC2Client::AcceptVpcEndpointConnections, REQUEST)

#define AcceptVpcPeeringConnectionAsync(...)  SubmitAsync(&EC2Client::AcceptVpcPeeringConnection, __VA_ARGS__)
#define AcceptVpcPeeringConnectionCallable(REQUEST)  SubmitCallable(&EC2Client::AcceptVpcPeeringConnection, REQUEST)

#define AdvertiseByoipCidrAsync(...)  SubmitAsync(&EC2Client::AdvertiseByoipCidr, __VA_ARGS__)
#define AdvertiseByoipCidrCallable(REQUEST)  SubmitCallable(&EC2Client::AdvertiseByoipCidr, REQUEST)

#define AllocateAddressAsync(...)  SubmitAsync(&EC2Client::AllocateAddress, __VA_ARGS__)
#define AllocateAddressCallable(REQUEST)  SubmitCallable(&EC2Client::AllocateAddress, REQUEST)

#define AllocateHostsAsync(...)  SubmitAsync(&EC2Client::AllocateHosts, __VA_ARGS__)
#define AllocateHostsCallable(REQUEST)  SubmitCallable(&EC2Client::AllocateHosts, REQUEST)

#define AllocateIpamPoolCidrAsync(...)  SubmitAsync(&EC2Client::AllocateIpamPoolCidr, __VA_ARGS__)
#define AllocateIpamPoolCidrCallable(REQUEST)  SubmitCallable(&EC2Client::AllocateIpamPoolCidr, REQUEST)

#define ApplySecurityGroupsToClientVpnTargetNetworkAsync(...)  SubmitAsync(&EC2Client::ApplySecurityGroupsToClientVpnTargetNetwork, __VA_ARGS__)
#define ApplySecurityGroupsToClientVpnTargetNetworkCallable(REQUEST)  SubmitCallable(&EC2Client::ApplySecurityGroupsToClientVpnTargetNetwork, REQUEST)

#define AssignIpv6AddressesAsync(...)  SubmitAsync(&EC2Client::AssignIpv6Addresses, __VA_ARGS__)
#define AssignIpv6AddressesCallable(REQUEST)  SubmitCallable(&EC2Client::AssignIpv6Addresses, REQUEST)

#define AssignPrivateIpAddressesAsync(...)  SubmitAsync(&EC2Client::AssignPrivateIpAddresses, __VA_ARGS__)
#define AssignPrivateIpAddressesCallable(REQUEST)  SubmitCallable(&EC2Client::AssignPrivateIpAddresses, REQUEST)

#define AssociateAddressAsync(...)  SubmitAsync(&EC2Client::AssociateAddress, __VA_ARGS__)
#define AssociateAddressCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateAddress, REQUEST)

#define AssociateClientVpnTargetNetworkAsync(...)  SubmitAsync(&EC2Client::AssociateClientVpnTargetNetwork, __VA_ARGS__)
#define AssociateClientVpnTargetNetworkCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateClientVpnTargetNetwork, REQUEST)

#define AssociateDhcpOptionsAsync(...)  SubmitAsync(&EC2Client::AssociateDhcpOptions, __VA_ARGS__)
#define AssociateDhcpOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateDhcpOptions, REQUEST)

#define AssociateEnclaveCertificateIamRoleAsync(...)  SubmitAsync(&EC2Client::AssociateEnclaveCertificateIamRole, __VA_ARGS__)
#define AssociateEnclaveCertificateIamRoleCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateEnclaveCertificateIamRole, REQUEST)

#define AssociateIamInstanceProfileAsync(...)  SubmitAsync(&EC2Client::AssociateIamInstanceProfile, __VA_ARGS__)
#define AssociateIamInstanceProfileCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateIamInstanceProfile, REQUEST)

#define AssociateInstanceEventWindowAsync(...)  SubmitAsync(&EC2Client::AssociateInstanceEventWindow, __VA_ARGS__)
#define AssociateInstanceEventWindowCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateInstanceEventWindow, REQUEST)

#define AssociateRouteTableAsync(...)  SubmitAsync(&EC2Client::AssociateRouteTable, __VA_ARGS__)
#define AssociateRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateRouteTable, REQUEST)

#define AssociateSubnetCidrBlockAsync(...)  SubmitAsync(&EC2Client::AssociateSubnetCidrBlock, __VA_ARGS__)
#define AssociateSubnetCidrBlockCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateSubnetCidrBlock, REQUEST)

#define AssociateTransitGatewayMulticastDomainAsync(...)  SubmitAsync(&EC2Client::AssociateTransitGatewayMulticastDomain, __VA_ARGS__)
#define AssociateTransitGatewayMulticastDomainCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateTransitGatewayMulticastDomain, REQUEST)

#define AssociateTransitGatewayPolicyTableAsync(...)  SubmitAsync(&EC2Client::AssociateTransitGatewayPolicyTable, __VA_ARGS__)
#define AssociateTransitGatewayPolicyTableCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateTransitGatewayPolicyTable, REQUEST)

#define AssociateTransitGatewayRouteTableAsync(...)  SubmitAsync(&EC2Client::AssociateTransitGatewayRouteTable, __VA_ARGS__)
#define AssociateTransitGatewayRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateTransitGatewayRouteTable, REQUEST)

#define AssociateTrunkInterfaceAsync(...)  SubmitAsync(&EC2Client::AssociateTrunkInterface, __VA_ARGS__)
#define AssociateTrunkInterfaceCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateTrunkInterface, REQUEST)

#define AssociateVpcCidrBlockAsync(...)  SubmitAsync(&EC2Client::AssociateVpcCidrBlock, __VA_ARGS__)
#define AssociateVpcCidrBlockCallable(REQUEST)  SubmitCallable(&EC2Client::AssociateVpcCidrBlock, REQUEST)

#define AttachClassicLinkVpcAsync(...)  SubmitAsync(&EC2Client::AttachClassicLinkVpc, __VA_ARGS__)
#define AttachClassicLinkVpcCallable(REQUEST)  SubmitCallable(&EC2Client::AttachClassicLinkVpc, REQUEST)

#define AttachInternetGatewayAsync(...)  SubmitAsync(&EC2Client::AttachInternetGateway, __VA_ARGS__)
#define AttachInternetGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::AttachInternetGateway, REQUEST)

#define AttachNetworkInterfaceAsync(...)  SubmitAsync(&EC2Client::AttachNetworkInterface, __VA_ARGS__)
#define AttachNetworkInterfaceCallable(REQUEST)  SubmitCallable(&EC2Client::AttachNetworkInterface, REQUEST)

#define AttachVolumeAsync(...)  SubmitAsync(&EC2Client::AttachVolume, __VA_ARGS__)
#define AttachVolumeCallable(REQUEST)  SubmitCallable(&EC2Client::AttachVolume, REQUEST)

#define AttachVpnGatewayAsync(...)  SubmitAsync(&EC2Client::AttachVpnGateway, __VA_ARGS__)
#define AttachVpnGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::AttachVpnGateway, REQUEST)

#define AuthorizeClientVpnIngressAsync(...)  SubmitAsync(&EC2Client::AuthorizeClientVpnIngress, __VA_ARGS__)
#define AuthorizeClientVpnIngressCallable(REQUEST)  SubmitCallable(&EC2Client::AuthorizeClientVpnIngress, REQUEST)

#define AuthorizeSecurityGroupEgressAsync(...)  SubmitAsync(&EC2Client::AuthorizeSecurityGroupEgress, __VA_ARGS__)
#define AuthorizeSecurityGroupEgressCallable(REQUEST)  SubmitCallable(&EC2Client::AuthorizeSecurityGroupEgress, REQUEST)

#define AuthorizeSecurityGroupIngressAsync(...)  SubmitAsync(&EC2Client::AuthorizeSecurityGroupIngress, __VA_ARGS__)
#define AuthorizeSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&EC2Client::AuthorizeSecurityGroupIngress, REQUEST)

#define BundleInstanceAsync(...)  SubmitAsync(&EC2Client::BundleInstance, __VA_ARGS__)
#define BundleInstanceCallable(REQUEST)  SubmitCallable(&EC2Client::BundleInstance, REQUEST)

#define CancelBundleTaskAsync(...)  SubmitAsync(&EC2Client::CancelBundleTask, __VA_ARGS__)
#define CancelBundleTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CancelBundleTask, REQUEST)

#define CancelCapacityReservationAsync(...)  SubmitAsync(&EC2Client::CancelCapacityReservation, __VA_ARGS__)
#define CancelCapacityReservationCallable(REQUEST)  SubmitCallable(&EC2Client::CancelCapacityReservation, REQUEST)

#define CancelCapacityReservationFleetsAsync(...)  SubmitAsync(&EC2Client::CancelCapacityReservationFleets, __VA_ARGS__)
#define CancelCapacityReservationFleetsCallable(REQUEST)  SubmitCallable(&EC2Client::CancelCapacityReservationFleets, REQUEST)

#define CancelConversionTaskAsync(...)  SubmitAsync(&EC2Client::CancelConversionTask, __VA_ARGS__)
#define CancelConversionTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CancelConversionTask, REQUEST)

#define CancelExportTaskAsync(...)  SubmitAsync(&EC2Client::CancelExportTask, __VA_ARGS__)
#define CancelExportTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CancelExportTask, REQUEST)

#define CancelImageLaunchPermissionAsync(...)  SubmitAsync(&EC2Client::CancelImageLaunchPermission, __VA_ARGS__)
#define CancelImageLaunchPermissionCallable(REQUEST)  SubmitCallable(&EC2Client::CancelImageLaunchPermission, REQUEST)

#define CancelImportTaskAsync(...)  SubmitAsync(&EC2Client::CancelImportTask, __VA_ARGS__)
#define CancelImportTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CancelImportTask, REQUEST)

#define CancelReservedInstancesListingAsync(...)  SubmitAsync(&EC2Client::CancelReservedInstancesListing, __VA_ARGS__)
#define CancelReservedInstancesListingCallable(REQUEST)  SubmitCallable(&EC2Client::CancelReservedInstancesListing, REQUEST)

#define CancelSpotFleetRequestsAsync(...)  SubmitAsync(&EC2Client::CancelSpotFleetRequests, __VA_ARGS__)
#define CancelSpotFleetRequestsCallable(REQUEST)  SubmitCallable(&EC2Client::CancelSpotFleetRequests, REQUEST)

#define CancelSpotInstanceRequestsAsync(...)  SubmitAsync(&EC2Client::CancelSpotInstanceRequests, __VA_ARGS__)
#define CancelSpotInstanceRequestsCallable(REQUEST)  SubmitCallable(&EC2Client::CancelSpotInstanceRequests, REQUEST)

#define ConfirmProductInstanceAsync(...)  SubmitAsync(&EC2Client::ConfirmProductInstance, __VA_ARGS__)
#define ConfirmProductInstanceCallable(REQUEST)  SubmitCallable(&EC2Client::ConfirmProductInstance, REQUEST)

#define CopyFpgaImageAsync(...)  SubmitAsync(&EC2Client::CopyFpgaImage, __VA_ARGS__)
#define CopyFpgaImageCallable(REQUEST)  SubmitCallable(&EC2Client::CopyFpgaImage, REQUEST)

#define CopyImageAsync(...)  SubmitAsync(&EC2Client::CopyImage, __VA_ARGS__)
#define CopyImageCallable(REQUEST)  SubmitCallable(&EC2Client::CopyImage, REQUEST)

#define CopySnapshotAsync(...)  SubmitAsync(&EC2Client::CopySnapshot, __VA_ARGS__)
#define CopySnapshotCallable(REQUEST)  SubmitCallable(&EC2Client::CopySnapshot, REQUEST)

#define CreateCapacityReservationAsync(...)  SubmitAsync(&EC2Client::CreateCapacityReservation, __VA_ARGS__)
#define CreateCapacityReservationCallable(REQUEST)  SubmitCallable(&EC2Client::CreateCapacityReservation, REQUEST)

#define CreateCapacityReservationFleetAsync(...)  SubmitAsync(&EC2Client::CreateCapacityReservationFleet, __VA_ARGS__)
#define CreateCapacityReservationFleetCallable(REQUEST)  SubmitCallable(&EC2Client::CreateCapacityReservationFleet, REQUEST)

#define CreateCarrierGatewayAsync(...)  SubmitAsync(&EC2Client::CreateCarrierGateway, __VA_ARGS__)
#define CreateCarrierGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::CreateCarrierGateway, REQUEST)

#define CreateClientVpnEndpointAsync(...)  SubmitAsync(&EC2Client::CreateClientVpnEndpoint, __VA_ARGS__)
#define CreateClientVpnEndpointCallable(REQUEST)  SubmitCallable(&EC2Client::CreateClientVpnEndpoint, REQUEST)

#define CreateClientVpnRouteAsync(...)  SubmitAsync(&EC2Client::CreateClientVpnRoute, __VA_ARGS__)
#define CreateClientVpnRouteCallable(REQUEST)  SubmitCallable(&EC2Client::CreateClientVpnRoute, REQUEST)

#define CreateCoipCidrAsync(...)  SubmitAsync(&EC2Client::CreateCoipCidr, __VA_ARGS__)
#define CreateCoipCidrCallable(REQUEST)  SubmitCallable(&EC2Client::CreateCoipCidr, REQUEST)

#define CreateCoipPoolAsync(...)  SubmitAsync(&EC2Client::CreateCoipPool, __VA_ARGS__)
#define CreateCoipPoolCallable(REQUEST)  SubmitCallable(&EC2Client::CreateCoipPool, REQUEST)

#define CreateCustomerGatewayAsync(...)  SubmitAsync(&EC2Client::CreateCustomerGateway, __VA_ARGS__)
#define CreateCustomerGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::CreateCustomerGateway, REQUEST)

#define CreateDefaultSubnetAsync(...)  SubmitAsync(&EC2Client::CreateDefaultSubnet, __VA_ARGS__)
#define CreateDefaultSubnetCallable(REQUEST)  SubmitCallable(&EC2Client::CreateDefaultSubnet, REQUEST)

#define CreateDefaultVpcAsync(...)  SubmitAsync(&EC2Client::CreateDefaultVpc, __VA_ARGS__)
#define CreateDefaultVpcCallable(REQUEST)  SubmitCallable(&EC2Client::CreateDefaultVpc, REQUEST)

#define CreateDhcpOptionsAsync(...)  SubmitAsync(&EC2Client::CreateDhcpOptions, __VA_ARGS__)
#define CreateDhcpOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::CreateDhcpOptions, REQUEST)

#define CreateEgressOnlyInternetGatewayAsync(...)  SubmitAsync(&EC2Client::CreateEgressOnlyInternetGateway, __VA_ARGS__)
#define CreateEgressOnlyInternetGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::CreateEgressOnlyInternetGateway, REQUEST)

#define CreateFleetAsync(...)  SubmitAsync(&EC2Client::CreateFleet, __VA_ARGS__)
#define CreateFleetCallable(REQUEST)  SubmitCallable(&EC2Client::CreateFleet, REQUEST)

#define CreateFlowLogsAsync(...)  SubmitAsync(&EC2Client::CreateFlowLogs, __VA_ARGS__)
#define CreateFlowLogsCallable(REQUEST)  SubmitCallable(&EC2Client::CreateFlowLogs, REQUEST)

#define CreateFpgaImageAsync(...)  SubmitAsync(&EC2Client::CreateFpgaImage, __VA_ARGS__)
#define CreateFpgaImageCallable(REQUEST)  SubmitCallable(&EC2Client::CreateFpgaImage, REQUEST)

#define CreateImageAsync(...)  SubmitAsync(&EC2Client::CreateImage, __VA_ARGS__)
#define CreateImageCallable(REQUEST)  SubmitCallable(&EC2Client::CreateImage, REQUEST)

#define CreateInstanceEventWindowAsync(...)  SubmitAsync(&EC2Client::CreateInstanceEventWindow, __VA_ARGS__)
#define CreateInstanceEventWindowCallable(REQUEST)  SubmitCallable(&EC2Client::CreateInstanceEventWindow, REQUEST)

#define CreateInstanceExportTaskAsync(...)  SubmitAsync(&EC2Client::CreateInstanceExportTask, __VA_ARGS__)
#define CreateInstanceExportTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CreateInstanceExportTask, REQUEST)

#define CreateInternetGatewayAsync(...)  SubmitAsync(&EC2Client::CreateInternetGateway, __VA_ARGS__)
#define CreateInternetGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::CreateInternetGateway, REQUEST)

#define CreateIpamAsync(...)  SubmitAsync(&EC2Client::CreateIpam, __VA_ARGS__)
#define CreateIpamCallable(REQUEST)  SubmitCallable(&EC2Client::CreateIpam, REQUEST)

#define CreateIpamPoolAsync(...)  SubmitAsync(&EC2Client::CreateIpamPool, __VA_ARGS__)
#define CreateIpamPoolCallable(REQUEST)  SubmitCallable(&EC2Client::CreateIpamPool, REQUEST)

#define CreateIpamScopeAsync(...)  SubmitAsync(&EC2Client::CreateIpamScope, __VA_ARGS__)
#define CreateIpamScopeCallable(REQUEST)  SubmitCallable(&EC2Client::CreateIpamScope, REQUEST)

#define CreateKeyPairAsync(...)  SubmitAsync(&EC2Client::CreateKeyPair, __VA_ARGS__)
#define CreateKeyPairCallable(REQUEST)  SubmitCallable(&EC2Client::CreateKeyPair, REQUEST)

#define CreateLaunchTemplateAsync(...)  SubmitAsync(&EC2Client::CreateLaunchTemplate, __VA_ARGS__)
#define CreateLaunchTemplateCallable(REQUEST)  SubmitCallable(&EC2Client::CreateLaunchTemplate, REQUEST)

#define CreateLaunchTemplateVersionAsync(...)  SubmitAsync(&EC2Client::CreateLaunchTemplateVersion, __VA_ARGS__)
#define CreateLaunchTemplateVersionCallable(REQUEST)  SubmitCallable(&EC2Client::CreateLaunchTemplateVersion, REQUEST)

#define CreateLocalGatewayRouteAsync(...)  SubmitAsync(&EC2Client::CreateLocalGatewayRoute, __VA_ARGS__)
#define CreateLocalGatewayRouteCallable(REQUEST)  SubmitCallable(&EC2Client::CreateLocalGatewayRoute, REQUEST)

#define CreateLocalGatewayRouteTableAsync(...)  SubmitAsync(&EC2Client::CreateLocalGatewayRouteTable, __VA_ARGS__)
#define CreateLocalGatewayRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::CreateLocalGatewayRouteTable, REQUEST)

#define CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationAsync(...)  SubmitAsync(&EC2Client::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation, __VA_ARGS__)
#define CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationCallable(REQUEST)  SubmitCallable(&EC2Client::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation, REQUEST)

#define CreateLocalGatewayRouteTableVpcAssociationAsync(...)  SubmitAsync(&EC2Client::CreateLocalGatewayRouteTableVpcAssociation, __VA_ARGS__)
#define CreateLocalGatewayRouteTableVpcAssociationCallable(REQUEST)  SubmitCallable(&EC2Client::CreateLocalGatewayRouteTableVpcAssociation, REQUEST)

#define CreateManagedPrefixListAsync(...)  SubmitAsync(&EC2Client::CreateManagedPrefixList, __VA_ARGS__)
#define CreateManagedPrefixListCallable(REQUEST)  SubmitCallable(&EC2Client::CreateManagedPrefixList, REQUEST)

#define CreateNatGatewayAsync(...)  SubmitAsync(&EC2Client::CreateNatGateway, __VA_ARGS__)
#define CreateNatGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::CreateNatGateway, REQUEST)

#define CreateNetworkAclAsync(...)  SubmitAsync(&EC2Client::CreateNetworkAcl, __VA_ARGS__)
#define CreateNetworkAclCallable(REQUEST)  SubmitCallable(&EC2Client::CreateNetworkAcl, REQUEST)

#define CreateNetworkAclEntryAsync(...)  SubmitAsync(&EC2Client::CreateNetworkAclEntry, __VA_ARGS__)
#define CreateNetworkAclEntryCallable(REQUEST)  SubmitCallable(&EC2Client::CreateNetworkAclEntry, REQUEST)

#define CreateNetworkInsightsAccessScopeAsync(...)  SubmitAsync(&EC2Client::CreateNetworkInsightsAccessScope, __VA_ARGS__)
#define CreateNetworkInsightsAccessScopeCallable(REQUEST)  SubmitCallable(&EC2Client::CreateNetworkInsightsAccessScope, REQUEST)

#define CreateNetworkInsightsPathAsync(...)  SubmitAsync(&EC2Client::CreateNetworkInsightsPath, __VA_ARGS__)
#define CreateNetworkInsightsPathCallable(REQUEST)  SubmitCallable(&EC2Client::CreateNetworkInsightsPath, REQUEST)

#define CreateNetworkInterfaceAsync(...)  SubmitAsync(&EC2Client::CreateNetworkInterface, __VA_ARGS__)
#define CreateNetworkInterfaceCallable(REQUEST)  SubmitCallable(&EC2Client::CreateNetworkInterface, REQUEST)

#define CreateNetworkInterfacePermissionAsync(...)  SubmitAsync(&EC2Client::CreateNetworkInterfacePermission, __VA_ARGS__)
#define CreateNetworkInterfacePermissionCallable(REQUEST)  SubmitCallable(&EC2Client::CreateNetworkInterfacePermission, REQUEST)

#define CreatePlacementGroupAsync(...)  SubmitAsync(&EC2Client::CreatePlacementGroup, __VA_ARGS__)
#define CreatePlacementGroupCallable(REQUEST)  SubmitCallable(&EC2Client::CreatePlacementGroup, REQUEST)

#define CreatePublicIpv4PoolAsync(...)  SubmitAsync(&EC2Client::CreatePublicIpv4Pool, __VA_ARGS__)
#define CreatePublicIpv4PoolCallable(REQUEST)  SubmitCallable(&EC2Client::CreatePublicIpv4Pool, REQUEST)

#define CreateReplaceRootVolumeTaskAsync(...)  SubmitAsync(&EC2Client::CreateReplaceRootVolumeTask, __VA_ARGS__)
#define CreateReplaceRootVolumeTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CreateReplaceRootVolumeTask, REQUEST)

#define CreateReservedInstancesListingAsync(...)  SubmitAsync(&EC2Client::CreateReservedInstancesListing, __VA_ARGS__)
#define CreateReservedInstancesListingCallable(REQUEST)  SubmitCallable(&EC2Client::CreateReservedInstancesListing, REQUEST)

#define CreateRestoreImageTaskAsync(...)  SubmitAsync(&EC2Client::CreateRestoreImageTask, __VA_ARGS__)
#define CreateRestoreImageTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CreateRestoreImageTask, REQUEST)

#define CreateRouteAsync(...)  SubmitAsync(&EC2Client::CreateRoute, __VA_ARGS__)
#define CreateRouteCallable(REQUEST)  SubmitCallable(&EC2Client::CreateRoute, REQUEST)

#define CreateRouteTableAsync(...)  SubmitAsync(&EC2Client::CreateRouteTable, __VA_ARGS__)
#define CreateRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::CreateRouteTable, REQUEST)

#define CreateSecurityGroupAsync(...)  SubmitAsync(&EC2Client::CreateSecurityGroup, __VA_ARGS__)
#define CreateSecurityGroupCallable(REQUEST)  SubmitCallable(&EC2Client::CreateSecurityGroup, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&EC2Client::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&EC2Client::CreateSnapshot, REQUEST)

#define CreateSnapshotsAsync(...)  SubmitAsync(&EC2Client::CreateSnapshots, __VA_ARGS__)
#define CreateSnapshotsCallable(REQUEST)  SubmitCallable(&EC2Client::CreateSnapshots, REQUEST)

#define CreateSpotDatafeedSubscriptionAsync(...)  SubmitAsync(&EC2Client::CreateSpotDatafeedSubscription, __VA_ARGS__)
#define CreateSpotDatafeedSubscriptionCallable(REQUEST)  SubmitCallable(&EC2Client::CreateSpotDatafeedSubscription, REQUEST)

#define CreateStoreImageTaskAsync(...)  SubmitAsync(&EC2Client::CreateStoreImageTask, __VA_ARGS__)
#define CreateStoreImageTaskCallable(REQUEST)  SubmitCallable(&EC2Client::CreateStoreImageTask, REQUEST)

#define CreateSubnetAsync(...)  SubmitAsync(&EC2Client::CreateSubnet, __VA_ARGS__)
#define CreateSubnetCallable(REQUEST)  SubmitCallable(&EC2Client::CreateSubnet, REQUEST)

#define CreateSubnetCidrReservationAsync(...)  SubmitAsync(&EC2Client::CreateSubnetCidrReservation, __VA_ARGS__)
#define CreateSubnetCidrReservationCallable(REQUEST)  SubmitCallable(&EC2Client::CreateSubnetCidrReservation, REQUEST)

#define CreateTagsAsync(...)  SubmitAsync(&EC2Client::CreateTags, __VA_ARGS__)
#define CreateTagsCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTags, REQUEST)

#define CreateTrafficMirrorFilterAsync(...)  SubmitAsync(&EC2Client::CreateTrafficMirrorFilter, __VA_ARGS__)
#define CreateTrafficMirrorFilterCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTrafficMirrorFilter, REQUEST)

#define CreateTrafficMirrorFilterRuleAsync(...)  SubmitAsync(&EC2Client::CreateTrafficMirrorFilterRule, __VA_ARGS__)
#define CreateTrafficMirrorFilterRuleCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTrafficMirrorFilterRule, REQUEST)

#define CreateTrafficMirrorSessionAsync(...)  SubmitAsync(&EC2Client::CreateTrafficMirrorSession, __VA_ARGS__)
#define CreateTrafficMirrorSessionCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTrafficMirrorSession, REQUEST)

#define CreateTrafficMirrorTargetAsync(...)  SubmitAsync(&EC2Client::CreateTrafficMirrorTarget, __VA_ARGS__)
#define CreateTrafficMirrorTargetCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTrafficMirrorTarget, REQUEST)

#define CreateTransitGatewayAsync(...)  SubmitAsync(&EC2Client::CreateTransitGateway, __VA_ARGS__)
#define CreateTransitGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGateway, REQUEST)

#define CreateTransitGatewayConnectAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayConnect, __VA_ARGS__)
#define CreateTransitGatewayConnectCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayConnect, REQUEST)

#define CreateTransitGatewayConnectPeerAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayConnectPeer, __VA_ARGS__)
#define CreateTransitGatewayConnectPeerCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayConnectPeer, REQUEST)

#define CreateTransitGatewayMulticastDomainAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayMulticastDomain, __VA_ARGS__)
#define CreateTransitGatewayMulticastDomainCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayMulticastDomain, REQUEST)

#define CreateTransitGatewayPeeringAttachmentAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayPeeringAttachment, __VA_ARGS__)
#define CreateTransitGatewayPeeringAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayPeeringAttachment, REQUEST)

#define CreateTransitGatewayPolicyTableAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayPolicyTable, __VA_ARGS__)
#define CreateTransitGatewayPolicyTableCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayPolicyTable, REQUEST)

#define CreateTransitGatewayPrefixListReferenceAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayPrefixListReference, __VA_ARGS__)
#define CreateTransitGatewayPrefixListReferenceCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayPrefixListReference, REQUEST)

#define CreateTransitGatewayRouteAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayRoute, __VA_ARGS__)
#define CreateTransitGatewayRouteCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayRoute, REQUEST)

#define CreateTransitGatewayRouteTableAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayRouteTable, __VA_ARGS__)
#define CreateTransitGatewayRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayRouteTable, REQUEST)

#define CreateTransitGatewayRouteTableAnnouncementAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayRouteTableAnnouncement, __VA_ARGS__)
#define CreateTransitGatewayRouteTableAnnouncementCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayRouteTableAnnouncement, REQUEST)

#define CreateTransitGatewayVpcAttachmentAsync(...)  SubmitAsync(&EC2Client::CreateTransitGatewayVpcAttachment, __VA_ARGS__)
#define CreateTransitGatewayVpcAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::CreateTransitGatewayVpcAttachment, REQUEST)

#define CreateVolumeAsync(...)  SubmitAsync(&EC2Client::CreateVolume, __VA_ARGS__)
#define CreateVolumeCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVolume, REQUEST)

#define CreateVpcAsync(...)  SubmitAsync(&EC2Client::CreateVpc, __VA_ARGS__)
#define CreateVpcCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpc, REQUEST)

#define CreateVpcEndpointAsync(...)  SubmitAsync(&EC2Client::CreateVpcEndpoint, __VA_ARGS__)
#define CreateVpcEndpointCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpcEndpoint, REQUEST)

#define CreateVpcEndpointConnectionNotificationAsync(...)  SubmitAsync(&EC2Client::CreateVpcEndpointConnectionNotification, __VA_ARGS__)
#define CreateVpcEndpointConnectionNotificationCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpcEndpointConnectionNotification, REQUEST)

#define CreateVpcEndpointServiceConfigurationAsync(...)  SubmitAsync(&EC2Client::CreateVpcEndpointServiceConfiguration, __VA_ARGS__)
#define CreateVpcEndpointServiceConfigurationCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpcEndpointServiceConfiguration, REQUEST)

#define CreateVpcPeeringConnectionAsync(...)  SubmitAsync(&EC2Client::CreateVpcPeeringConnection, __VA_ARGS__)
#define CreateVpcPeeringConnectionCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpcPeeringConnection, REQUEST)

#define CreateVpnConnectionAsync(...)  SubmitAsync(&EC2Client::CreateVpnConnection, __VA_ARGS__)
#define CreateVpnConnectionCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpnConnection, REQUEST)

#define CreateVpnConnectionRouteAsync(...)  SubmitAsync(&EC2Client::CreateVpnConnectionRoute, __VA_ARGS__)
#define CreateVpnConnectionRouteCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpnConnectionRoute, REQUEST)

#define CreateVpnGatewayAsync(...)  SubmitAsync(&EC2Client::CreateVpnGateway, __VA_ARGS__)
#define CreateVpnGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::CreateVpnGateway, REQUEST)

#define DeleteCarrierGatewayAsync(...)  SubmitAsync(&EC2Client::DeleteCarrierGateway, __VA_ARGS__)
#define DeleteCarrierGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteCarrierGateway, REQUEST)

#define DeleteClientVpnEndpointAsync(...)  SubmitAsync(&EC2Client::DeleteClientVpnEndpoint, __VA_ARGS__)
#define DeleteClientVpnEndpointCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteClientVpnEndpoint, REQUEST)

#define DeleteClientVpnRouteAsync(...)  SubmitAsync(&EC2Client::DeleteClientVpnRoute, __VA_ARGS__)
#define DeleteClientVpnRouteCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteClientVpnRoute, REQUEST)

#define DeleteCoipCidrAsync(...)  SubmitAsync(&EC2Client::DeleteCoipCidr, __VA_ARGS__)
#define DeleteCoipCidrCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteCoipCidr, REQUEST)

#define DeleteCoipPoolAsync(...)  SubmitAsync(&EC2Client::DeleteCoipPool, __VA_ARGS__)
#define DeleteCoipPoolCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteCoipPool, REQUEST)

#define DeleteCustomerGatewayAsync(...)  SubmitAsync(&EC2Client::DeleteCustomerGateway, __VA_ARGS__)
#define DeleteCustomerGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteCustomerGateway, REQUEST)

#define DeleteDhcpOptionsAsync(...)  SubmitAsync(&EC2Client::DeleteDhcpOptions, __VA_ARGS__)
#define DeleteDhcpOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteDhcpOptions, REQUEST)

#define DeleteEgressOnlyInternetGatewayAsync(...)  SubmitAsync(&EC2Client::DeleteEgressOnlyInternetGateway, __VA_ARGS__)
#define DeleteEgressOnlyInternetGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteEgressOnlyInternetGateway, REQUEST)

#define DeleteFleetsAsync(...)  SubmitAsync(&EC2Client::DeleteFleets, __VA_ARGS__)
#define DeleteFleetsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteFleets, REQUEST)

#define DeleteFlowLogsAsync(...)  SubmitAsync(&EC2Client::DeleteFlowLogs, __VA_ARGS__)
#define DeleteFlowLogsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteFlowLogs, REQUEST)

#define DeleteFpgaImageAsync(...)  SubmitAsync(&EC2Client::DeleteFpgaImage, __VA_ARGS__)
#define DeleteFpgaImageCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteFpgaImage, REQUEST)

#define DeleteInstanceEventWindowAsync(...)  SubmitAsync(&EC2Client::DeleteInstanceEventWindow, __VA_ARGS__)
#define DeleteInstanceEventWindowCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteInstanceEventWindow, REQUEST)

#define DeleteInternetGatewayAsync(...)  SubmitAsync(&EC2Client::DeleteInternetGateway, __VA_ARGS__)
#define DeleteInternetGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteInternetGateway, REQUEST)

#define DeleteIpamAsync(...)  SubmitAsync(&EC2Client::DeleteIpam, __VA_ARGS__)
#define DeleteIpamCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteIpam, REQUEST)

#define DeleteIpamPoolAsync(...)  SubmitAsync(&EC2Client::DeleteIpamPool, __VA_ARGS__)
#define DeleteIpamPoolCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteIpamPool, REQUEST)

#define DeleteIpamScopeAsync(...)  SubmitAsync(&EC2Client::DeleteIpamScope, __VA_ARGS__)
#define DeleteIpamScopeCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteIpamScope, REQUEST)

#define DeleteKeyPairAsync(...)  SubmitAsync(&EC2Client::DeleteKeyPair, __VA_ARGS__)
#define DeleteKeyPairCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteKeyPair, REQUEST)

#define DeleteLaunchTemplateAsync(...)  SubmitAsync(&EC2Client::DeleteLaunchTemplate, __VA_ARGS__)
#define DeleteLaunchTemplateCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteLaunchTemplate, REQUEST)

#define DeleteLaunchTemplateVersionsAsync(...)  SubmitAsync(&EC2Client::DeleteLaunchTemplateVersions, __VA_ARGS__)
#define DeleteLaunchTemplateVersionsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteLaunchTemplateVersions, REQUEST)

#define DeleteLocalGatewayRouteAsync(...)  SubmitAsync(&EC2Client::DeleteLocalGatewayRoute, __VA_ARGS__)
#define DeleteLocalGatewayRouteCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteLocalGatewayRoute, REQUEST)

#define DeleteLocalGatewayRouteTableAsync(...)  SubmitAsync(&EC2Client::DeleteLocalGatewayRouteTable, __VA_ARGS__)
#define DeleteLocalGatewayRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteLocalGatewayRouteTable, REQUEST)

#define DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationAsync(...)  SubmitAsync(&EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation, __VA_ARGS__)
#define DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation, REQUEST)

#define DeleteLocalGatewayRouteTableVpcAssociationAsync(...)  SubmitAsync(&EC2Client::DeleteLocalGatewayRouteTableVpcAssociation, __VA_ARGS__)
#define DeleteLocalGatewayRouteTableVpcAssociationCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteLocalGatewayRouteTableVpcAssociation, REQUEST)

#define DeleteManagedPrefixListAsync(...)  SubmitAsync(&EC2Client::DeleteManagedPrefixList, __VA_ARGS__)
#define DeleteManagedPrefixListCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteManagedPrefixList, REQUEST)

#define DeleteNatGatewayAsync(...)  SubmitAsync(&EC2Client::DeleteNatGateway, __VA_ARGS__)
#define DeleteNatGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNatGateway, REQUEST)

#define DeleteNetworkAclAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkAcl, __VA_ARGS__)
#define DeleteNetworkAclCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkAcl, REQUEST)

#define DeleteNetworkAclEntryAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkAclEntry, __VA_ARGS__)
#define DeleteNetworkAclEntryCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkAclEntry, REQUEST)

#define DeleteNetworkInsightsAccessScopeAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkInsightsAccessScope, __VA_ARGS__)
#define DeleteNetworkInsightsAccessScopeCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkInsightsAccessScope, REQUEST)

#define DeleteNetworkInsightsAccessScopeAnalysisAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkInsightsAccessScopeAnalysis, __VA_ARGS__)
#define DeleteNetworkInsightsAccessScopeAnalysisCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkInsightsAccessScopeAnalysis, REQUEST)

#define DeleteNetworkInsightsAnalysisAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkInsightsAnalysis, __VA_ARGS__)
#define DeleteNetworkInsightsAnalysisCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkInsightsAnalysis, REQUEST)

#define DeleteNetworkInsightsPathAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkInsightsPath, __VA_ARGS__)
#define DeleteNetworkInsightsPathCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkInsightsPath, REQUEST)

#define DeleteNetworkInterfaceAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkInterface, __VA_ARGS__)
#define DeleteNetworkInterfaceCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkInterface, REQUEST)

#define DeleteNetworkInterfacePermissionAsync(...)  SubmitAsync(&EC2Client::DeleteNetworkInterfacePermission, __VA_ARGS__)
#define DeleteNetworkInterfacePermissionCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteNetworkInterfacePermission, REQUEST)

#define DeletePlacementGroupAsync(...)  SubmitAsync(&EC2Client::DeletePlacementGroup, __VA_ARGS__)
#define DeletePlacementGroupCallable(REQUEST)  SubmitCallable(&EC2Client::DeletePlacementGroup, REQUEST)

#define DeletePublicIpv4PoolAsync(...)  SubmitAsync(&EC2Client::DeletePublicIpv4Pool, __VA_ARGS__)
#define DeletePublicIpv4PoolCallable(REQUEST)  SubmitCallable(&EC2Client::DeletePublicIpv4Pool, REQUEST)

#define DeleteQueuedReservedInstancesAsync(...)  SubmitAsync(&EC2Client::DeleteQueuedReservedInstances, __VA_ARGS__)
#define DeleteQueuedReservedInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteQueuedReservedInstances, REQUEST)

#define DeleteRouteAsync(...)  SubmitAsync(&EC2Client::DeleteRoute, __VA_ARGS__)
#define DeleteRouteCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteRoute, REQUEST)

#define DeleteRouteTableAsync(...)  SubmitAsync(&EC2Client::DeleteRouteTable, __VA_ARGS__)
#define DeleteRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteRouteTable, REQUEST)

#define DeleteSecurityGroupAsync(...)  SubmitAsync(&EC2Client::DeleteSecurityGroup, __VA_ARGS__)
#define DeleteSecurityGroupCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteSecurityGroup, REQUEST)

#define DeleteSnapshotAsync(...)  SubmitAsync(&EC2Client::DeleteSnapshot, __VA_ARGS__)
#define DeleteSnapshotCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteSnapshot, REQUEST)

#define DeleteSpotDatafeedSubscriptionAsync(...)  SubmitAsync(&EC2Client::DeleteSpotDatafeedSubscription, __VA_ARGS__)
#define DeleteSpotDatafeedSubscriptionCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteSpotDatafeedSubscription, REQUEST)

#define DeleteSubnetAsync(...)  SubmitAsync(&EC2Client::DeleteSubnet, __VA_ARGS__)
#define DeleteSubnetCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteSubnet, REQUEST)

#define DeleteSubnetCidrReservationAsync(...)  SubmitAsync(&EC2Client::DeleteSubnetCidrReservation, __VA_ARGS__)
#define DeleteSubnetCidrReservationCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteSubnetCidrReservation, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&EC2Client::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTags, REQUEST)

#define DeleteTrafficMirrorFilterAsync(...)  SubmitAsync(&EC2Client::DeleteTrafficMirrorFilter, __VA_ARGS__)
#define DeleteTrafficMirrorFilterCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTrafficMirrorFilter, REQUEST)

#define DeleteTrafficMirrorFilterRuleAsync(...)  SubmitAsync(&EC2Client::DeleteTrafficMirrorFilterRule, __VA_ARGS__)
#define DeleteTrafficMirrorFilterRuleCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTrafficMirrorFilterRule, REQUEST)

#define DeleteTrafficMirrorSessionAsync(...)  SubmitAsync(&EC2Client::DeleteTrafficMirrorSession, __VA_ARGS__)
#define DeleteTrafficMirrorSessionCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTrafficMirrorSession, REQUEST)

#define DeleteTrafficMirrorTargetAsync(...)  SubmitAsync(&EC2Client::DeleteTrafficMirrorTarget, __VA_ARGS__)
#define DeleteTrafficMirrorTargetCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTrafficMirrorTarget, REQUEST)

#define DeleteTransitGatewayAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGateway, __VA_ARGS__)
#define DeleteTransitGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGateway, REQUEST)

#define DeleteTransitGatewayConnectAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayConnect, __VA_ARGS__)
#define DeleteTransitGatewayConnectCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayConnect, REQUEST)

#define DeleteTransitGatewayConnectPeerAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayConnectPeer, __VA_ARGS__)
#define DeleteTransitGatewayConnectPeerCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayConnectPeer, REQUEST)

#define DeleteTransitGatewayMulticastDomainAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayMulticastDomain, __VA_ARGS__)
#define DeleteTransitGatewayMulticastDomainCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayMulticastDomain, REQUEST)

#define DeleteTransitGatewayPeeringAttachmentAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayPeeringAttachment, __VA_ARGS__)
#define DeleteTransitGatewayPeeringAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayPeeringAttachment, REQUEST)

#define DeleteTransitGatewayPolicyTableAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayPolicyTable, __VA_ARGS__)
#define DeleteTransitGatewayPolicyTableCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayPolicyTable, REQUEST)

#define DeleteTransitGatewayPrefixListReferenceAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayPrefixListReference, __VA_ARGS__)
#define DeleteTransitGatewayPrefixListReferenceCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayPrefixListReference, REQUEST)

#define DeleteTransitGatewayRouteAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayRoute, __VA_ARGS__)
#define DeleteTransitGatewayRouteCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayRoute, REQUEST)

#define DeleteTransitGatewayRouteTableAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayRouteTable, __VA_ARGS__)
#define DeleteTransitGatewayRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayRouteTable, REQUEST)

#define DeleteTransitGatewayRouteTableAnnouncementAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayRouteTableAnnouncement, __VA_ARGS__)
#define DeleteTransitGatewayRouteTableAnnouncementCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayRouteTableAnnouncement, REQUEST)

#define DeleteTransitGatewayVpcAttachmentAsync(...)  SubmitAsync(&EC2Client::DeleteTransitGatewayVpcAttachment, __VA_ARGS__)
#define DeleteTransitGatewayVpcAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteTransitGatewayVpcAttachment, REQUEST)

#define DeleteVolumeAsync(...)  SubmitAsync(&EC2Client::DeleteVolume, __VA_ARGS__)
#define DeleteVolumeCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVolume, REQUEST)

#define DeleteVpcAsync(...)  SubmitAsync(&EC2Client::DeleteVpc, __VA_ARGS__)
#define DeleteVpcCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpc, REQUEST)

#define DeleteVpcEndpointConnectionNotificationsAsync(...)  SubmitAsync(&EC2Client::DeleteVpcEndpointConnectionNotifications, __VA_ARGS__)
#define DeleteVpcEndpointConnectionNotificationsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpcEndpointConnectionNotifications, REQUEST)

#define DeleteVpcEndpointServiceConfigurationsAsync(...)  SubmitAsync(&EC2Client::DeleteVpcEndpointServiceConfigurations, __VA_ARGS__)
#define DeleteVpcEndpointServiceConfigurationsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpcEndpointServiceConfigurations, REQUEST)

#define DeleteVpcEndpointsAsync(...)  SubmitAsync(&EC2Client::DeleteVpcEndpoints, __VA_ARGS__)
#define DeleteVpcEndpointsCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpcEndpoints, REQUEST)

#define DeleteVpcPeeringConnectionAsync(...)  SubmitAsync(&EC2Client::DeleteVpcPeeringConnection, __VA_ARGS__)
#define DeleteVpcPeeringConnectionCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpcPeeringConnection, REQUEST)

#define DeleteVpnConnectionAsync(...)  SubmitAsync(&EC2Client::DeleteVpnConnection, __VA_ARGS__)
#define DeleteVpnConnectionCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpnConnection, REQUEST)

#define DeleteVpnConnectionRouteAsync(...)  SubmitAsync(&EC2Client::DeleteVpnConnectionRoute, __VA_ARGS__)
#define DeleteVpnConnectionRouteCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpnConnectionRoute, REQUEST)

#define DeleteVpnGatewayAsync(...)  SubmitAsync(&EC2Client::DeleteVpnGateway, __VA_ARGS__)
#define DeleteVpnGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DeleteVpnGateway, REQUEST)

#define DeprovisionByoipCidrAsync(...)  SubmitAsync(&EC2Client::DeprovisionByoipCidr, __VA_ARGS__)
#define DeprovisionByoipCidrCallable(REQUEST)  SubmitCallable(&EC2Client::DeprovisionByoipCidr, REQUEST)

#define DeprovisionIpamPoolCidrAsync(...)  SubmitAsync(&EC2Client::DeprovisionIpamPoolCidr, __VA_ARGS__)
#define DeprovisionIpamPoolCidrCallable(REQUEST)  SubmitCallable(&EC2Client::DeprovisionIpamPoolCidr, REQUEST)

#define DeprovisionPublicIpv4PoolCidrAsync(...)  SubmitAsync(&EC2Client::DeprovisionPublicIpv4PoolCidr, __VA_ARGS__)
#define DeprovisionPublicIpv4PoolCidrCallable(REQUEST)  SubmitCallable(&EC2Client::DeprovisionPublicIpv4PoolCidr, REQUEST)

#define DeregisterImageAsync(...)  SubmitAsync(&EC2Client::DeregisterImage, __VA_ARGS__)
#define DeregisterImageCallable(REQUEST)  SubmitCallable(&EC2Client::DeregisterImage, REQUEST)

#define DeregisterInstanceEventNotificationAttributesAsync(...)  SubmitAsync(&EC2Client::DeregisterInstanceEventNotificationAttributes, __VA_ARGS__)
#define DeregisterInstanceEventNotificationAttributesCallable(REQUEST)  SubmitCallable(&EC2Client::DeregisterInstanceEventNotificationAttributes, REQUEST)

#define DeregisterTransitGatewayMulticastGroupMembersAsync(...)  SubmitAsync(&EC2Client::DeregisterTransitGatewayMulticastGroupMembers, __VA_ARGS__)
#define DeregisterTransitGatewayMulticastGroupMembersCallable(REQUEST)  SubmitCallable(&EC2Client::DeregisterTransitGatewayMulticastGroupMembers, REQUEST)

#define DeregisterTransitGatewayMulticastGroupSourcesAsync(...)  SubmitAsync(&EC2Client::DeregisterTransitGatewayMulticastGroupSources, __VA_ARGS__)
#define DeregisterTransitGatewayMulticastGroupSourcesCallable(REQUEST)  SubmitCallable(&EC2Client::DeregisterTransitGatewayMulticastGroupSources, REQUEST)

#define DescribeAccountAttributesAsync(...)  SubmitAsync(&EC2Client::DescribeAccountAttributes, __VA_ARGS__)
#define DescribeAccountAttributesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeAccountAttributes, REQUEST)

#define DescribeAddressTransfersAsync(...)  SubmitAsync(&EC2Client::DescribeAddressTransfers, __VA_ARGS__)
#define DescribeAddressTransfersCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeAddressTransfers, REQUEST)

#define DescribeAddressesAsync(...)  SubmitAsync(&EC2Client::DescribeAddresses, __VA_ARGS__)
#define DescribeAddressesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeAddresses, REQUEST)

#define DescribeAddressesAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeAddressesAttribute, __VA_ARGS__)
#define DescribeAddressesAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeAddressesAttribute, REQUEST)

#define DescribeAggregateIdFormatAsync(...)  SubmitAsync(&EC2Client::DescribeAggregateIdFormat, __VA_ARGS__)
#define DescribeAggregateIdFormatCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeAggregateIdFormat, REQUEST)

#define DescribeAvailabilityZonesAsync(...)  SubmitAsync(&EC2Client::DescribeAvailabilityZones, __VA_ARGS__)
#define DescribeAvailabilityZonesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeAvailabilityZones, REQUEST)

#define DescribeBundleTasksAsync(...)  SubmitAsync(&EC2Client::DescribeBundleTasks, __VA_ARGS__)
#define DescribeBundleTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeBundleTasks, REQUEST)

#define DescribeByoipCidrsAsync(...)  SubmitAsync(&EC2Client::DescribeByoipCidrs, __VA_ARGS__)
#define DescribeByoipCidrsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeByoipCidrs, REQUEST)

#define DescribeCapacityReservationFleetsAsync(...)  SubmitAsync(&EC2Client::DescribeCapacityReservationFleets, __VA_ARGS__)
#define DescribeCapacityReservationFleetsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeCapacityReservationFleets, REQUEST)

#define DescribeCapacityReservationsAsync(...)  SubmitAsync(&EC2Client::DescribeCapacityReservations, __VA_ARGS__)
#define DescribeCapacityReservationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeCapacityReservations, REQUEST)

#define DescribeCarrierGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeCarrierGateways, __VA_ARGS__)
#define DescribeCarrierGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeCarrierGateways, REQUEST)

#define DescribeClassicLinkInstancesAsync(...)  SubmitAsync(&EC2Client::DescribeClassicLinkInstances, __VA_ARGS__)
#define DescribeClassicLinkInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeClassicLinkInstances, REQUEST)

#define DescribeClientVpnAuthorizationRulesAsync(...)  SubmitAsync(&EC2Client::DescribeClientVpnAuthorizationRules, __VA_ARGS__)
#define DescribeClientVpnAuthorizationRulesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeClientVpnAuthorizationRules, REQUEST)

#define DescribeClientVpnConnectionsAsync(...)  SubmitAsync(&EC2Client::DescribeClientVpnConnections, __VA_ARGS__)
#define DescribeClientVpnConnectionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeClientVpnConnections, REQUEST)

#define DescribeClientVpnEndpointsAsync(...)  SubmitAsync(&EC2Client::DescribeClientVpnEndpoints, __VA_ARGS__)
#define DescribeClientVpnEndpointsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeClientVpnEndpoints, REQUEST)

#define DescribeClientVpnRoutesAsync(...)  SubmitAsync(&EC2Client::DescribeClientVpnRoutes, __VA_ARGS__)
#define DescribeClientVpnRoutesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeClientVpnRoutes, REQUEST)

#define DescribeClientVpnTargetNetworksAsync(...)  SubmitAsync(&EC2Client::DescribeClientVpnTargetNetworks, __VA_ARGS__)
#define DescribeClientVpnTargetNetworksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeClientVpnTargetNetworks, REQUEST)

#define DescribeCoipPoolsAsync(...)  SubmitAsync(&EC2Client::DescribeCoipPools, __VA_ARGS__)
#define DescribeCoipPoolsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeCoipPools, REQUEST)

#define DescribeConversionTasksAsync(...)  SubmitAsync(&EC2Client::DescribeConversionTasks, __VA_ARGS__)
#define DescribeConversionTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeConversionTasks, REQUEST)

#define DescribeCustomerGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeCustomerGateways, __VA_ARGS__)
#define DescribeCustomerGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeCustomerGateways, REQUEST)

#define DescribeDhcpOptionsAsync(...)  SubmitAsync(&EC2Client::DescribeDhcpOptions, __VA_ARGS__)
#define DescribeDhcpOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeDhcpOptions, REQUEST)

#define DescribeEgressOnlyInternetGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeEgressOnlyInternetGateways, __VA_ARGS__)
#define DescribeEgressOnlyInternetGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeEgressOnlyInternetGateways, REQUEST)

#define DescribeElasticGpusAsync(...)  SubmitAsync(&EC2Client::DescribeElasticGpus, __VA_ARGS__)
#define DescribeElasticGpusCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeElasticGpus, REQUEST)

#define DescribeExportImageTasksAsync(...)  SubmitAsync(&EC2Client::DescribeExportImageTasks, __VA_ARGS__)
#define DescribeExportImageTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeExportImageTasks, REQUEST)

#define DescribeExportTasksAsync(...)  SubmitAsync(&EC2Client::DescribeExportTasks, __VA_ARGS__)
#define DescribeExportTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeExportTasks, REQUEST)

#define DescribeFastLaunchImagesAsync(...)  SubmitAsync(&EC2Client::DescribeFastLaunchImages, __VA_ARGS__)
#define DescribeFastLaunchImagesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFastLaunchImages, REQUEST)

#define DescribeFastSnapshotRestoresAsync(...)  SubmitAsync(&EC2Client::DescribeFastSnapshotRestores, __VA_ARGS__)
#define DescribeFastSnapshotRestoresCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFastSnapshotRestores, REQUEST)

#define DescribeFleetHistoryAsync(...)  SubmitAsync(&EC2Client::DescribeFleetHistory, __VA_ARGS__)
#define DescribeFleetHistoryCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFleetHistory, REQUEST)

#define DescribeFleetInstancesAsync(...)  SubmitAsync(&EC2Client::DescribeFleetInstances, __VA_ARGS__)
#define DescribeFleetInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFleetInstances, REQUEST)

#define DescribeFleetsAsync(...)  SubmitAsync(&EC2Client::DescribeFleets, __VA_ARGS__)
#define DescribeFleetsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFleets, REQUEST)

#define DescribeFlowLogsAsync(...)  SubmitAsync(&EC2Client::DescribeFlowLogs, __VA_ARGS__)
#define DescribeFlowLogsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFlowLogs, REQUEST)

#define DescribeFpgaImageAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeFpgaImageAttribute, __VA_ARGS__)
#define DescribeFpgaImageAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFpgaImageAttribute, REQUEST)

#define DescribeFpgaImagesAsync(...)  SubmitAsync(&EC2Client::DescribeFpgaImages, __VA_ARGS__)
#define DescribeFpgaImagesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeFpgaImages, REQUEST)

#define DescribeHostReservationOfferingsAsync(...)  SubmitAsync(&EC2Client::DescribeHostReservationOfferings, __VA_ARGS__)
#define DescribeHostReservationOfferingsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeHostReservationOfferings, REQUEST)

#define DescribeHostReservationsAsync(...)  SubmitAsync(&EC2Client::DescribeHostReservations, __VA_ARGS__)
#define DescribeHostReservationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeHostReservations, REQUEST)

#define DescribeHostsAsync(...)  SubmitAsync(&EC2Client::DescribeHosts, __VA_ARGS__)
#define DescribeHostsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeHosts, REQUEST)

#define DescribeIamInstanceProfileAssociationsAsync(...)  SubmitAsync(&EC2Client::DescribeIamInstanceProfileAssociations, __VA_ARGS__)
#define DescribeIamInstanceProfileAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeIamInstanceProfileAssociations, REQUEST)

#define DescribeIdFormatAsync(...)  SubmitAsync(&EC2Client::DescribeIdFormat, __VA_ARGS__)
#define DescribeIdFormatCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeIdFormat, REQUEST)

#define DescribeIdentityIdFormatAsync(...)  SubmitAsync(&EC2Client::DescribeIdentityIdFormat, __VA_ARGS__)
#define DescribeIdentityIdFormatCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeIdentityIdFormat, REQUEST)

#define DescribeImageAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeImageAttribute, __VA_ARGS__)
#define DescribeImageAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeImageAttribute, REQUEST)

#define DescribeImagesAsync(...)  SubmitAsync(&EC2Client::DescribeImages, __VA_ARGS__)
#define DescribeImagesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeImages, REQUEST)

#define DescribeImportImageTasksAsync(...)  SubmitAsync(&EC2Client::DescribeImportImageTasks, __VA_ARGS__)
#define DescribeImportImageTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeImportImageTasks, REQUEST)

#define DescribeImportSnapshotTasksAsync(...)  SubmitAsync(&EC2Client::DescribeImportSnapshotTasks, __VA_ARGS__)
#define DescribeImportSnapshotTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeImportSnapshotTasks, REQUEST)

#define DescribeInstanceAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeInstanceAttribute, __VA_ARGS__)
#define DescribeInstanceAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstanceAttribute, REQUEST)

#define DescribeInstanceCreditSpecificationsAsync(...)  SubmitAsync(&EC2Client::DescribeInstanceCreditSpecifications, __VA_ARGS__)
#define DescribeInstanceCreditSpecificationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstanceCreditSpecifications, REQUEST)

#define DescribeInstanceEventNotificationAttributesAsync(...)  SubmitAsync(&EC2Client::DescribeInstanceEventNotificationAttributes, __VA_ARGS__)
#define DescribeInstanceEventNotificationAttributesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstanceEventNotificationAttributes, REQUEST)

#define DescribeInstanceEventWindowsAsync(...)  SubmitAsync(&EC2Client::DescribeInstanceEventWindows, __VA_ARGS__)
#define DescribeInstanceEventWindowsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstanceEventWindows, REQUEST)

#define DescribeInstanceStatusAsync(...)  SubmitAsync(&EC2Client::DescribeInstanceStatus, __VA_ARGS__)
#define DescribeInstanceStatusCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstanceStatus, REQUEST)

#define DescribeInstanceTypeOfferingsAsync(...)  SubmitAsync(&EC2Client::DescribeInstanceTypeOfferings, __VA_ARGS__)
#define DescribeInstanceTypeOfferingsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstanceTypeOfferings, REQUEST)

#define DescribeInstanceTypesAsync(...)  SubmitAsync(&EC2Client::DescribeInstanceTypes, __VA_ARGS__)
#define DescribeInstanceTypesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstanceTypes, REQUEST)

#define DescribeInstancesAsync(...)  SubmitAsync(&EC2Client::DescribeInstances, __VA_ARGS__)
#define DescribeInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInstances, REQUEST)

#define DescribeInternetGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeInternetGateways, __VA_ARGS__)
#define DescribeInternetGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeInternetGateways, REQUEST)

#define DescribeIpamPoolsAsync(...)  SubmitAsync(&EC2Client::DescribeIpamPools, __VA_ARGS__)
#define DescribeIpamPoolsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeIpamPools, REQUEST)

#define DescribeIpamScopesAsync(...)  SubmitAsync(&EC2Client::DescribeIpamScopes, __VA_ARGS__)
#define DescribeIpamScopesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeIpamScopes, REQUEST)

#define DescribeIpamsAsync(...)  SubmitAsync(&EC2Client::DescribeIpams, __VA_ARGS__)
#define DescribeIpamsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeIpams, REQUEST)

#define DescribeIpv6PoolsAsync(...)  SubmitAsync(&EC2Client::DescribeIpv6Pools, __VA_ARGS__)
#define DescribeIpv6PoolsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeIpv6Pools, REQUEST)

#define DescribeKeyPairsAsync(...)  SubmitAsync(&EC2Client::DescribeKeyPairs, __VA_ARGS__)
#define DescribeKeyPairsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeKeyPairs, REQUEST)

#define DescribeLaunchTemplateVersionsAsync(...)  SubmitAsync(&EC2Client::DescribeLaunchTemplateVersions, __VA_ARGS__)
#define DescribeLaunchTemplateVersionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLaunchTemplateVersions, REQUEST)

#define DescribeLaunchTemplatesAsync(...)  SubmitAsync(&EC2Client::DescribeLaunchTemplates, __VA_ARGS__)
#define DescribeLaunchTemplatesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLaunchTemplates, REQUEST)

#define DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsAsync(...)  SubmitAsync(&EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, __VA_ARGS__)
#define DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, REQUEST)

#define DescribeLocalGatewayRouteTableVpcAssociationsAsync(...)  SubmitAsync(&EC2Client::DescribeLocalGatewayRouteTableVpcAssociations, __VA_ARGS__)
#define DescribeLocalGatewayRouteTableVpcAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLocalGatewayRouteTableVpcAssociations, REQUEST)

#define DescribeLocalGatewayRouteTablesAsync(...)  SubmitAsync(&EC2Client::DescribeLocalGatewayRouteTables, __VA_ARGS__)
#define DescribeLocalGatewayRouteTablesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLocalGatewayRouteTables, REQUEST)

#define DescribeLocalGatewayVirtualInterfaceGroupsAsync(...)  SubmitAsync(&EC2Client::DescribeLocalGatewayVirtualInterfaceGroups, __VA_ARGS__)
#define DescribeLocalGatewayVirtualInterfaceGroupsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLocalGatewayVirtualInterfaceGroups, REQUEST)

#define DescribeLocalGatewayVirtualInterfacesAsync(...)  SubmitAsync(&EC2Client::DescribeLocalGatewayVirtualInterfaces, __VA_ARGS__)
#define DescribeLocalGatewayVirtualInterfacesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLocalGatewayVirtualInterfaces, REQUEST)

#define DescribeLocalGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeLocalGateways, __VA_ARGS__)
#define DescribeLocalGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeLocalGateways, REQUEST)

#define DescribeManagedPrefixListsAsync(...)  SubmitAsync(&EC2Client::DescribeManagedPrefixLists, __VA_ARGS__)
#define DescribeManagedPrefixListsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeManagedPrefixLists, REQUEST)

#define DescribeMovingAddressesAsync(...)  SubmitAsync(&EC2Client::DescribeMovingAddresses, __VA_ARGS__)
#define DescribeMovingAddressesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeMovingAddresses, REQUEST)

#define DescribeNatGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeNatGateways, __VA_ARGS__)
#define DescribeNatGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNatGateways, REQUEST)

#define DescribeNetworkAclsAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkAcls, __VA_ARGS__)
#define DescribeNetworkAclsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkAcls, REQUEST)

#define DescribeNetworkInsightsAccessScopeAnalysesAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkInsightsAccessScopeAnalyses, __VA_ARGS__)
#define DescribeNetworkInsightsAccessScopeAnalysesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkInsightsAccessScopeAnalyses, REQUEST)

#define DescribeNetworkInsightsAccessScopesAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkInsightsAccessScopes, __VA_ARGS__)
#define DescribeNetworkInsightsAccessScopesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkInsightsAccessScopes, REQUEST)

#define DescribeNetworkInsightsAnalysesAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkInsightsAnalyses, __VA_ARGS__)
#define DescribeNetworkInsightsAnalysesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkInsightsAnalyses, REQUEST)

#define DescribeNetworkInsightsPathsAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkInsightsPaths, __VA_ARGS__)
#define DescribeNetworkInsightsPathsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkInsightsPaths, REQUEST)

#define DescribeNetworkInterfaceAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkInterfaceAttribute, __VA_ARGS__)
#define DescribeNetworkInterfaceAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkInterfaceAttribute, REQUEST)

#define DescribeNetworkInterfacePermissionsAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkInterfacePermissions, __VA_ARGS__)
#define DescribeNetworkInterfacePermissionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkInterfacePermissions, REQUEST)

#define DescribeNetworkInterfacesAsync(...)  SubmitAsync(&EC2Client::DescribeNetworkInterfaces, __VA_ARGS__)
#define DescribeNetworkInterfacesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeNetworkInterfaces, REQUEST)

#define DescribePlacementGroupsAsync(...)  SubmitAsync(&EC2Client::DescribePlacementGroups, __VA_ARGS__)
#define DescribePlacementGroupsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribePlacementGroups, REQUEST)

#define DescribePrefixListsAsync(...)  SubmitAsync(&EC2Client::DescribePrefixLists, __VA_ARGS__)
#define DescribePrefixListsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribePrefixLists, REQUEST)

#define DescribePrincipalIdFormatAsync(...)  SubmitAsync(&EC2Client::DescribePrincipalIdFormat, __VA_ARGS__)
#define DescribePrincipalIdFormatCallable(REQUEST)  SubmitCallable(&EC2Client::DescribePrincipalIdFormat, REQUEST)

#define DescribePublicIpv4PoolsAsync(...)  SubmitAsync(&EC2Client::DescribePublicIpv4Pools, __VA_ARGS__)
#define DescribePublicIpv4PoolsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribePublicIpv4Pools, REQUEST)

#define DescribeRegionsAsync(...)  SubmitAsync(&EC2Client::DescribeRegions, __VA_ARGS__)
#define DescribeRegionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeRegions, REQUEST)

#define DescribeReplaceRootVolumeTasksAsync(...)  SubmitAsync(&EC2Client::DescribeReplaceRootVolumeTasks, __VA_ARGS__)
#define DescribeReplaceRootVolumeTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeReplaceRootVolumeTasks, REQUEST)

#define DescribeReservedInstancesAsync(...)  SubmitAsync(&EC2Client::DescribeReservedInstances, __VA_ARGS__)
#define DescribeReservedInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeReservedInstances, REQUEST)

#define DescribeReservedInstancesListingsAsync(...)  SubmitAsync(&EC2Client::DescribeReservedInstancesListings, __VA_ARGS__)
#define DescribeReservedInstancesListingsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeReservedInstancesListings, REQUEST)

#define DescribeReservedInstancesModificationsAsync(...)  SubmitAsync(&EC2Client::DescribeReservedInstancesModifications, __VA_ARGS__)
#define DescribeReservedInstancesModificationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeReservedInstancesModifications, REQUEST)

#define DescribeReservedInstancesOfferingsAsync(...)  SubmitAsync(&EC2Client::DescribeReservedInstancesOfferings, __VA_ARGS__)
#define DescribeReservedInstancesOfferingsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeReservedInstancesOfferings, REQUEST)

#define DescribeRouteTablesAsync(...)  SubmitAsync(&EC2Client::DescribeRouteTables, __VA_ARGS__)
#define DescribeRouteTablesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeRouteTables, REQUEST)

#define DescribeScheduledInstanceAvailabilityAsync(...)  SubmitAsync(&EC2Client::DescribeScheduledInstanceAvailability, __VA_ARGS__)
#define DescribeScheduledInstanceAvailabilityCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeScheduledInstanceAvailability, REQUEST)

#define DescribeScheduledInstancesAsync(...)  SubmitAsync(&EC2Client::DescribeScheduledInstances, __VA_ARGS__)
#define DescribeScheduledInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeScheduledInstances, REQUEST)

#define DescribeSecurityGroupReferencesAsync(...)  SubmitAsync(&EC2Client::DescribeSecurityGroupReferences, __VA_ARGS__)
#define DescribeSecurityGroupReferencesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSecurityGroupReferences, REQUEST)

#define DescribeSecurityGroupRulesAsync(...)  SubmitAsync(&EC2Client::DescribeSecurityGroupRules, __VA_ARGS__)
#define DescribeSecurityGroupRulesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSecurityGroupRules, REQUEST)

#define DescribeSecurityGroupsAsync(...)  SubmitAsync(&EC2Client::DescribeSecurityGroups, __VA_ARGS__)
#define DescribeSecurityGroupsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSecurityGroups, REQUEST)

#define DescribeSnapshotAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeSnapshotAttribute, __VA_ARGS__)
#define DescribeSnapshotAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSnapshotAttribute, REQUEST)

#define DescribeSnapshotTierStatusAsync(...)  SubmitAsync(&EC2Client::DescribeSnapshotTierStatus, __VA_ARGS__)
#define DescribeSnapshotTierStatusCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSnapshotTierStatus, REQUEST)

#define DescribeSnapshotsAsync(...)  SubmitAsync(&EC2Client::DescribeSnapshots, __VA_ARGS__)
#define DescribeSnapshotsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSnapshots, REQUEST)

#define DescribeSpotDatafeedSubscriptionAsync(...)  SubmitAsync(&EC2Client::DescribeSpotDatafeedSubscription, __VA_ARGS__)
#define DescribeSpotDatafeedSubscriptionCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSpotDatafeedSubscription, REQUEST)

#define DescribeSpotFleetInstancesAsync(...)  SubmitAsync(&EC2Client::DescribeSpotFleetInstances, __VA_ARGS__)
#define DescribeSpotFleetInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSpotFleetInstances, REQUEST)

#define DescribeSpotFleetRequestHistoryAsync(...)  SubmitAsync(&EC2Client::DescribeSpotFleetRequestHistory, __VA_ARGS__)
#define DescribeSpotFleetRequestHistoryCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSpotFleetRequestHistory, REQUEST)

#define DescribeSpotFleetRequestsAsync(...)  SubmitAsync(&EC2Client::DescribeSpotFleetRequests, __VA_ARGS__)
#define DescribeSpotFleetRequestsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSpotFleetRequests, REQUEST)

#define DescribeSpotInstanceRequestsAsync(...)  SubmitAsync(&EC2Client::DescribeSpotInstanceRequests, __VA_ARGS__)
#define DescribeSpotInstanceRequestsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSpotInstanceRequests, REQUEST)

#define DescribeSpotPriceHistoryAsync(...)  SubmitAsync(&EC2Client::DescribeSpotPriceHistory, __VA_ARGS__)
#define DescribeSpotPriceHistoryCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSpotPriceHistory, REQUEST)

#define DescribeStaleSecurityGroupsAsync(...)  SubmitAsync(&EC2Client::DescribeStaleSecurityGroups, __VA_ARGS__)
#define DescribeStaleSecurityGroupsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeStaleSecurityGroups, REQUEST)

#define DescribeStoreImageTasksAsync(...)  SubmitAsync(&EC2Client::DescribeStoreImageTasks, __VA_ARGS__)
#define DescribeStoreImageTasksCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeStoreImageTasks, REQUEST)

#define DescribeSubnetsAsync(...)  SubmitAsync(&EC2Client::DescribeSubnets, __VA_ARGS__)
#define DescribeSubnetsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeSubnets, REQUEST)

#define DescribeTagsAsync(...)  SubmitAsync(&EC2Client::DescribeTags, __VA_ARGS__)
#define DescribeTagsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTags, REQUEST)

#define DescribeTrafficMirrorFiltersAsync(...)  SubmitAsync(&EC2Client::DescribeTrafficMirrorFilters, __VA_ARGS__)
#define DescribeTrafficMirrorFiltersCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTrafficMirrorFilters, REQUEST)

#define DescribeTrafficMirrorSessionsAsync(...)  SubmitAsync(&EC2Client::DescribeTrafficMirrorSessions, __VA_ARGS__)
#define DescribeTrafficMirrorSessionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTrafficMirrorSessions, REQUEST)

#define DescribeTrafficMirrorTargetsAsync(...)  SubmitAsync(&EC2Client::DescribeTrafficMirrorTargets, __VA_ARGS__)
#define DescribeTrafficMirrorTargetsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTrafficMirrorTargets, REQUEST)

#define DescribeTransitGatewayAttachmentsAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayAttachments, __VA_ARGS__)
#define DescribeTransitGatewayAttachmentsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayAttachments, REQUEST)

#define DescribeTransitGatewayConnectPeersAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayConnectPeers, __VA_ARGS__)
#define DescribeTransitGatewayConnectPeersCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayConnectPeers, REQUEST)

#define DescribeTransitGatewayConnectsAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayConnects, __VA_ARGS__)
#define DescribeTransitGatewayConnectsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayConnects, REQUEST)

#define DescribeTransitGatewayMulticastDomainsAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayMulticastDomains, __VA_ARGS__)
#define DescribeTransitGatewayMulticastDomainsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayMulticastDomains, REQUEST)

#define DescribeTransitGatewayPeeringAttachmentsAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayPeeringAttachments, __VA_ARGS__)
#define DescribeTransitGatewayPeeringAttachmentsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayPeeringAttachments, REQUEST)

#define DescribeTransitGatewayPolicyTablesAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayPolicyTables, __VA_ARGS__)
#define DescribeTransitGatewayPolicyTablesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayPolicyTables, REQUEST)

#define DescribeTransitGatewayRouteTableAnnouncementsAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayRouteTableAnnouncements, __VA_ARGS__)
#define DescribeTransitGatewayRouteTableAnnouncementsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayRouteTableAnnouncements, REQUEST)

#define DescribeTransitGatewayRouteTablesAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayRouteTables, __VA_ARGS__)
#define DescribeTransitGatewayRouteTablesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayRouteTables, REQUEST)

#define DescribeTransitGatewayVpcAttachmentsAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGatewayVpcAttachments, __VA_ARGS__)
#define DescribeTransitGatewayVpcAttachmentsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGatewayVpcAttachments, REQUEST)

#define DescribeTransitGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeTransitGateways, __VA_ARGS__)
#define DescribeTransitGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTransitGateways, REQUEST)

#define DescribeTrunkInterfaceAssociationsAsync(...)  SubmitAsync(&EC2Client::DescribeTrunkInterfaceAssociations, __VA_ARGS__)
#define DescribeTrunkInterfaceAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeTrunkInterfaceAssociations, REQUEST)

#define DescribeVolumeAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeVolumeAttribute, __VA_ARGS__)
#define DescribeVolumeAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVolumeAttribute, REQUEST)

#define DescribeVolumeStatusAsync(...)  SubmitAsync(&EC2Client::DescribeVolumeStatus, __VA_ARGS__)
#define DescribeVolumeStatusCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVolumeStatus, REQUEST)

#define DescribeVolumesAsync(...)  SubmitAsync(&EC2Client::DescribeVolumes, __VA_ARGS__)
#define DescribeVolumesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVolumes, REQUEST)

#define DescribeVolumesModificationsAsync(...)  SubmitAsync(&EC2Client::DescribeVolumesModifications, __VA_ARGS__)
#define DescribeVolumesModificationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVolumesModifications, REQUEST)

#define DescribeVpcAttributeAsync(...)  SubmitAsync(&EC2Client::DescribeVpcAttribute, __VA_ARGS__)
#define DescribeVpcAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcAttribute, REQUEST)

#define DescribeVpcClassicLinkAsync(...)  SubmitAsync(&EC2Client::DescribeVpcClassicLink, __VA_ARGS__)
#define DescribeVpcClassicLinkCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcClassicLink, REQUEST)

#define DescribeVpcClassicLinkDnsSupportAsync(...)  SubmitAsync(&EC2Client::DescribeVpcClassicLinkDnsSupport, __VA_ARGS__)
#define DescribeVpcClassicLinkDnsSupportCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcClassicLinkDnsSupport, REQUEST)

#define DescribeVpcEndpointConnectionNotificationsAsync(...)  SubmitAsync(&EC2Client::DescribeVpcEndpointConnectionNotifications, __VA_ARGS__)
#define DescribeVpcEndpointConnectionNotificationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcEndpointConnectionNotifications, REQUEST)

#define DescribeVpcEndpointConnectionsAsync(...)  SubmitAsync(&EC2Client::DescribeVpcEndpointConnections, __VA_ARGS__)
#define DescribeVpcEndpointConnectionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcEndpointConnections, REQUEST)

#define DescribeVpcEndpointServiceConfigurationsAsync(...)  SubmitAsync(&EC2Client::DescribeVpcEndpointServiceConfigurations, __VA_ARGS__)
#define DescribeVpcEndpointServiceConfigurationsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcEndpointServiceConfigurations, REQUEST)

#define DescribeVpcEndpointServicePermissionsAsync(...)  SubmitAsync(&EC2Client::DescribeVpcEndpointServicePermissions, __VA_ARGS__)
#define DescribeVpcEndpointServicePermissionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcEndpointServicePermissions, REQUEST)

#define DescribeVpcEndpointServicesAsync(...)  SubmitAsync(&EC2Client::DescribeVpcEndpointServices, __VA_ARGS__)
#define DescribeVpcEndpointServicesCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcEndpointServices, REQUEST)

#define DescribeVpcEndpointsAsync(...)  SubmitAsync(&EC2Client::DescribeVpcEndpoints, __VA_ARGS__)
#define DescribeVpcEndpointsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcEndpoints, REQUEST)

#define DescribeVpcPeeringConnectionsAsync(...)  SubmitAsync(&EC2Client::DescribeVpcPeeringConnections, __VA_ARGS__)
#define DescribeVpcPeeringConnectionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcPeeringConnections, REQUEST)

#define DescribeVpcsAsync(...)  SubmitAsync(&EC2Client::DescribeVpcs, __VA_ARGS__)
#define DescribeVpcsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpcs, REQUEST)

#define DescribeVpnConnectionsAsync(...)  SubmitAsync(&EC2Client::DescribeVpnConnections, __VA_ARGS__)
#define DescribeVpnConnectionsCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpnConnections, REQUEST)

#define DescribeVpnGatewaysAsync(...)  SubmitAsync(&EC2Client::DescribeVpnGateways, __VA_ARGS__)
#define DescribeVpnGatewaysCallable(REQUEST)  SubmitCallable(&EC2Client::DescribeVpnGateways, REQUEST)

#define DetachClassicLinkVpcAsync(...)  SubmitAsync(&EC2Client::DetachClassicLinkVpc, __VA_ARGS__)
#define DetachClassicLinkVpcCallable(REQUEST)  SubmitCallable(&EC2Client::DetachClassicLinkVpc, REQUEST)

#define DetachInternetGatewayAsync(...)  SubmitAsync(&EC2Client::DetachInternetGateway, __VA_ARGS__)
#define DetachInternetGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DetachInternetGateway, REQUEST)

#define DetachNetworkInterfaceAsync(...)  SubmitAsync(&EC2Client::DetachNetworkInterface, __VA_ARGS__)
#define DetachNetworkInterfaceCallable(REQUEST)  SubmitCallable(&EC2Client::DetachNetworkInterface, REQUEST)

#define DetachVolumeAsync(...)  SubmitAsync(&EC2Client::DetachVolume, __VA_ARGS__)
#define DetachVolumeCallable(REQUEST)  SubmitCallable(&EC2Client::DetachVolume, REQUEST)

#define DetachVpnGatewayAsync(...)  SubmitAsync(&EC2Client::DetachVpnGateway, __VA_ARGS__)
#define DetachVpnGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::DetachVpnGateway, REQUEST)

#define DisableAddressTransferAsync(...)  SubmitAsync(&EC2Client::DisableAddressTransfer, __VA_ARGS__)
#define DisableAddressTransferCallable(REQUEST)  SubmitCallable(&EC2Client::DisableAddressTransfer, REQUEST)

#define DisableEbsEncryptionByDefaultAsync(...)  SubmitAsync(&EC2Client::DisableEbsEncryptionByDefault, __VA_ARGS__)
#define DisableEbsEncryptionByDefaultCallable(REQUEST)  SubmitCallable(&EC2Client::DisableEbsEncryptionByDefault, REQUEST)

#define DisableFastLaunchAsync(...)  SubmitAsync(&EC2Client::DisableFastLaunch, __VA_ARGS__)
#define DisableFastLaunchCallable(REQUEST)  SubmitCallable(&EC2Client::DisableFastLaunch, REQUEST)

#define DisableFastSnapshotRestoresAsync(...)  SubmitAsync(&EC2Client::DisableFastSnapshotRestores, __VA_ARGS__)
#define DisableFastSnapshotRestoresCallable(REQUEST)  SubmitCallable(&EC2Client::DisableFastSnapshotRestores, REQUEST)

#define DisableImageDeprecationAsync(...)  SubmitAsync(&EC2Client::DisableImageDeprecation, __VA_ARGS__)
#define DisableImageDeprecationCallable(REQUEST)  SubmitCallable(&EC2Client::DisableImageDeprecation, REQUEST)

#define DisableIpamOrganizationAdminAccountAsync(...)  SubmitAsync(&EC2Client::DisableIpamOrganizationAdminAccount, __VA_ARGS__)
#define DisableIpamOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&EC2Client::DisableIpamOrganizationAdminAccount, REQUEST)

#define DisableSerialConsoleAccessAsync(...)  SubmitAsync(&EC2Client::DisableSerialConsoleAccess, __VA_ARGS__)
#define DisableSerialConsoleAccessCallable(REQUEST)  SubmitCallable(&EC2Client::DisableSerialConsoleAccess, REQUEST)

#define DisableTransitGatewayRouteTablePropagationAsync(...)  SubmitAsync(&EC2Client::DisableTransitGatewayRouteTablePropagation, __VA_ARGS__)
#define DisableTransitGatewayRouteTablePropagationCallable(REQUEST)  SubmitCallable(&EC2Client::DisableTransitGatewayRouteTablePropagation, REQUEST)

#define DisableVgwRoutePropagationAsync(...)  SubmitAsync(&EC2Client::DisableVgwRoutePropagation, __VA_ARGS__)
#define DisableVgwRoutePropagationCallable(REQUEST)  SubmitCallable(&EC2Client::DisableVgwRoutePropagation, REQUEST)

#define DisableVpcClassicLinkAsync(...)  SubmitAsync(&EC2Client::DisableVpcClassicLink, __VA_ARGS__)
#define DisableVpcClassicLinkCallable(REQUEST)  SubmitCallable(&EC2Client::DisableVpcClassicLink, REQUEST)

#define DisableVpcClassicLinkDnsSupportAsync(...)  SubmitAsync(&EC2Client::DisableVpcClassicLinkDnsSupport, __VA_ARGS__)
#define DisableVpcClassicLinkDnsSupportCallable(REQUEST)  SubmitCallable(&EC2Client::DisableVpcClassicLinkDnsSupport, REQUEST)

#define DisassociateAddressAsync(...)  SubmitAsync(&EC2Client::DisassociateAddress, __VA_ARGS__)
#define DisassociateAddressCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateAddress, REQUEST)

#define DisassociateClientVpnTargetNetworkAsync(...)  SubmitAsync(&EC2Client::DisassociateClientVpnTargetNetwork, __VA_ARGS__)
#define DisassociateClientVpnTargetNetworkCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateClientVpnTargetNetwork, REQUEST)

#define DisassociateEnclaveCertificateIamRoleAsync(...)  SubmitAsync(&EC2Client::DisassociateEnclaveCertificateIamRole, __VA_ARGS__)
#define DisassociateEnclaveCertificateIamRoleCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateEnclaveCertificateIamRole, REQUEST)

#define DisassociateIamInstanceProfileAsync(...)  SubmitAsync(&EC2Client::DisassociateIamInstanceProfile, __VA_ARGS__)
#define DisassociateIamInstanceProfileCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateIamInstanceProfile, REQUEST)

#define DisassociateInstanceEventWindowAsync(...)  SubmitAsync(&EC2Client::DisassociateInstanceEventWindow, __VA_ARGS__)
#define DisassociateInstanceEventWindowCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateInstanceEventWindow, REQUEST)

#define DisassociateRouteTableAsync(...)  SubmitAsync(&EC2Client::DisassociateRouteTable, __VA_ARGS__)
#define DisassociateRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateRouteTable, REQUEST)

#define DisassociateSubnetCidrBlockAsync(...)  SubmitAsync(&EC2Client::DisassociateSubnetCidrBlock, __VA_ARGS__)
#define DisassociateSubnetCidrBlockCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateSubnetCidrBlock, REQUEST)

#define DisassociateTransitGatewayMulticastDomainAsync(...)  SubmitAsync(&EC2Client::DisassociateTransitGatewayMulticastDomain, __VA_ARGS__)
#define DisassociateTransitGatewayMulticastDomainCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateTransitGatewayMulticastDomain, REQUEST)

#define DisassociateTransitGatewayPolicyTableAsync(...)  SubmitAsync(&EC2Client::DisassociateTransitGatewayPolicyTable, __VA_ARGS__)
#define DisassociateTransitGatewayPolicyTableCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateTransitGatewayPolicyTable, REQUEST)

#define DisassociateTransitGatewayRouteTableAsync(...)  SubmitAsync(&EC2Client::DisassociateTransitGatewayRouteTable, __VA_ARGS__)
#define DisassociateTransitGatewayRouteTableCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateTransitGatewayRouteTable, REQUEST)

#define DisassociateTrunkInterfaceAsync(...)  SubmitAsync(&EC2Client::DisassociateTrunkInterface, __VA_ARGS__)
#define DisassociateTrunkInterfaceCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateTrunkInterface, REQUEST)

#define DisassociateVpcCidrBlockAsync(...)  SubmitAsync(&EC2Client::DisassociateVpcCidrBlock, __VA_ARGS__)
#define DisassociateVpcCidrBlockCallable(REQUEST)  SubmitCallable(&EC2Client::DisassociateVpcCidrBlock, REQUEST)

#define EnableAddressTransferAsync(...)  SubmitAsync(&EC2Client::EnableAddressTransfer, __VA_ARGS__)
#define EnableAddressTransferCallable(REQUEST)  SubmitCallable(&EC2Client::EnableAddressTransfer, REQUEST)

#define EnableEbsEncryptionByDefaultAsync(...)  SubmitAsync(&EC2Client::EnableEbsEncryptionByDefault, __VA_ARGS__)
#define EnableEbsEncryptionByDefaultCallable(REQUEST)  SubmitCallable(&EC2Client::EnableEbsEncryptionByDefault, REQUEST)

#define EnableFastLaunchAsync(...)  SubmitAsync(&EC2Client::EnableFastLaunch, __VA_ARGS__)
#define EnableFastLaunchCallable(REQUEST)  SubmitCallable(&EC2Client::EnableFastLaunch, REQUEST)

#define EnableFastSnapshotRestoresAsync(...)  SubmitAsync(&EC2Client::EnableFastSnapshotRestores, __VA_ARGS__)
#define EnableFastSnapshotRestoresCallable(REQUEST)  SubmitCallable(&EC2Client::EnableFastSnapshotRestores, REQUEST)

#define EnableImageDeprecationAsync(...)  SubmitAsync(&EC2Client::EnableImageDeprecation, __VA_ARGS__)
#define EnableImageDeprecationCallable(REQUEST)  SubmitCallable(&EC2Client::EnableImageDeprecation, REQUEST)

#define EnableIpamOrganizationAdminAccountAsync(...)  SubmitAsync(&EC2Client::EnableIpamOrganizationAdminAccount, __VA_ARGS__)
#define EnableIpamOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&EC2Client::EnableIpamOrganizationAdminAccount, REQUEST)

#define EnableSerialConsoleAccessAsync(...)  SubmitAsync(&EC2Client::EnableSerialConsoleAccess, __VA_ARGS__)
#define EnableSerialConsoleAccessCallable(REQUEST)  SubmitCallable(&EC2Client::EnableSerialConsoleAccess, REQUEST)

#define EnableTransitGatewayRouteTablePropagationAsync(...)  SubmitAsync(&EC2Client::EnableTransitGatewayRouteTablePropagation, __VA_ARGS__)
#define EnableTransitGatewayRouteTablePropagationCallable(REQUEST)  SubmitCallable(&EC2Client::EnableTransitGatewayRouteTablePropagation, REQUEST)

#define EnableVgwRoutePropagationAsync(...)  SubmitAsync(&EC2Client::EnableVgwRoutePropagation, __VA_ARGS__)
#define EnableVgwRoutePropagationCallable(REQUEST)  SubmitCallable(&EC2Client::EnableVgwRoutePropagation, REQUEST)

#define EnableVolumeIOAsync(...)  SubmitAsync(&EC2Client::EnableVolumeIO, __VA_ARGS__)
#define EnableVolumeIOCallable(REQUEST)  SubmitCallable(&EC2Client::EnableVolumeIO, REQUEST)

#define EnableVpcClassicLinkAsync(...)  SubmitAsync(&EC2Client::EnableVpcClassicLink, __VA_ARGS__)
#define EnableVpcClassicLinkCallable(REQUEST)  SubmitCallable(&EC2Client::EnableVpcClassicLink, REQUEST)

#define EnableVpcClassicLinkDnsSupportAsync(...)  SubmitAsync(&EC2Client::EnableVpcClassicLinkDnsSupport, __VA_ARGS__)
#define EnableVpcClassicLinkDnsSupportCallable(REQUEST)  SubmitCallable(&EC2Client::EnableVpcClassicLinkDnsSupport, REQUEST)

#define ExportClientVpnClientCertificateRevocationListAsync(...)  SubmitAsync(&EC2Client::ExportClientVpnClientCertificateRevocationList, __VA_ARGS__)
#define ExportClientVpnClientCertificateRevocationListCallable(REQUEST)  SubmitCallable(&EC2Client::ExportClientVpnClientCertificateRevocationList, REQUEST)

#define ExportClientVpnClientConfigurationAsync(...)  SubmitAsync(&EC2Client::ExportClientVpnClientConfiguration, __VA_ARGS__)
#define ExportClientVpnClientConfigurationCallable(REQUEST)  SubmitCallable(&EC2Client::ExportClientVpnClientConfiguration, REQUEST)

#define ExportImageAsync(...)  SubmitAsync(&EC2Client::ExportImage, __VA_ARGS__)
#define ExportImageCallable(REQUEST)  SubmitCallable(&EC2Client::ExportImage, REQUEST)

#define ExportTransitGatewayRoutesAsync(...)  SubmitAsync(&EC2Client::ExportTransitGatewayRoutes, __VA_ARGS__)
#define ExportTransitGatewayRoutesCallable(REQUEST)  SubmitCallable(&EC2Client::ExportTransitGatewayRoutes, REQUEST)

#define GetAssociatedEnclaveCertificateIamRolesAsync(...)  SubmitAsync(&EC2Client::GetAssociatedEnclaveCertificateIamRoles, __VA_ARGS__)
#define GetAssociatedEnclaveCertificateIamRolesCallable(REQUEST)  SubmitCallable(&EC2Client::GetAssociatedEnclaveCertificateIamRoles, REQUEST)

#define GetAssociatedIpv6PoolCidrsAsync(...)  SubmitAsync(&EC2Client::GetAssociatedIpv6PoolCidrs, __VA_ARGS__)
#define GetAssociatedIpv6PoolCidrsCallable(REQUEST)  SubmitCallable(&EC2Client::GetAssociatedIpv6PoolCidrs, REQUEST)

#define GetCapacityReservationUsageAsync(...)  SubmitAsync(&EC2Client::GetCapacityReservationUsage, __VA_ARGS__)
#define GetCapacityReservationUsageCallable(REQUEST)  SubmitCallable(&EC2Client::GetCapacityReservationUsage, REQUEST)

#define GetCoipPoolUsageAsync(...)  SubmitAsync(&EC2Client::GetCoipPoolUsage, __VA_ARGS__)
#define GetCoipPoolUsageCallable(REQUEST)  SubmitCallable(&EC2Client::GetCoipPoolUsage, REQUEST)

#define GetConsoleOutputAsync(...)  SubmitAsync(&EC2Client::GetConsoleOutput, __VA_ARGS__)
#define GetConsoleOutputCallable(REQUEST)  SubmitCallable(&EC2Client::GetConsoleOutput, REQUEST)

#define GetConsoleScreenshotAsync(...)  SubmitAsync(&EC2Client::GetConsoleScreenshot, __VA_ARGS__)
#define GetConsoleScreenshotCallable(REQUEST)  SubmitCallable(&EC2Client::GetConsoleScreenshot, REQUEST)

#define GetDefaultCreditSpecificationAsync(...)  SubmitAsync(&EC2Client::GetDefaultCreditSpecification, __VA_ARGS__)
#define GetDefaultCreditSpecificationCallable(REQUEST)  SubmitCallable(&EC2Client::GetDefaultCreditSpecification, REQUEST)

#define GetEbsDefaultKmsKeyIdAsync(...)  SubmitAsync(&EC2Client::GetEbsDefaultKmsKeyId, __VA_ARGS__)
#define GetEbsDefaultKmsKeyIdCallable(REQUEST)  SubmitCallable(&EC2Client::GetEbsDefaultKmsKeyId, REQUEST)

#define GetEbsEncryptionByDefaultAsync(...)  SubmitAsync(&EC2Client::GetEbsEncryptionByDefault, __VA_ARGS__)
#define GetEbsEncryptionByDefaultCallable(REQUEST)  SubmitCallable(&EC2Client::GetEbsEncryptionByDefault, REQUEST)

#define GetFlowLogsIntegrationTemplateAsync(...)  SubmitAsync(&EC2Client::GetFlowLogsIntegrationTemplate, __VA_ARGS__)
#define GetFlowLogsIntegrationTemplateCallable(REQUEST)  SubmitCallable(&EC2Client::GetFlowLogsIntegrationTemplate, REQUEST)

#define GetGroupsForCapacityReservationAsync(...)  SubmitAsync(&EC2Client::GetGroupsForCapacityReservation, __VA_ARGS__)
#define GetGroupsForCapacityReservationCallable(REQUEST)  SubmitCallable(&EC2Client::GetGroupsForCapacityReservation, REQUEST)

#define GetHostReservationPurchasePreviewAsync(...)  SubmitAsync(&EC2Client::GetHostReservationPurchasePreview, __VA_ARGS__)
#define GetHostReservationPurchasePreviewCallable(REQUEST)  SubmitCallable(&EC2Client::GetHostReservationPurchasePreview, REQUEST)

#define GetInstanceTypesFromInstanceRequirementsAsync(...)  SubmitAsync(&EC2Client::GetInstanceTypesFromInstanceRequirements, __VA_ARGS__)
#define GetInstanceTypesFromInstanceRequirementsCallable(REQUEST)  SubmitCallable(&EC2Client::GetInstanceTypesFromInstanceRequirements, REQUEST)

#define GetInstanceUefiDataAsync(...)  SubmitAsync(&EC2Client::GetInstanceUefiData, __VA_ARGS__)
#define GetInstanceUefiDataCallable(REQUEST)  SubmitCallable(&EC2Client::GetInstanceUefiData, REQUEST)

#define GetIpamAddressHistoryAsync(...)  SubmitAsync(&EC2Client::GetIpamAddressHistory, __VA_ARGS__)
#define GetIpamAddressHistoryCallable(REQUEST)  SubmitCallable(&EC2Client::GetIpamAddressHistory, REQUEST)

#define GetIpamPoolAllocationsAsync(...)  SubmitAsync(&EC2Client::GetIpamPoolAllocations, __VA_ARGS__)
#define GetIpamPoolAllocationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetIpamPoolAllocations, REQUEST)

#define GetIpamPoolCidrsAsync(...)  SubmitAsync(&EC2Client::GetIpamPoolCidrs, __VA_ARGS__)
#define GetIpamPoolCidrsCallable(REQUEST)  SubmitCallable(&EC2Client::GetIpamPoolCidrs, REQUEST)

#define GetIpamResourceCidrsAsync(...)  SubmitAsync(&EC2Client::GetIpamResourceCidrs, __VA_ARGS__)
#define GetIpamResourceCidrsCallable(REQUEST)  SubmitCallable(&EC2Client::GetIpamResourceCidrs, REQUEST)

#define GetLaunchTemplateDataAsync(...)  SubmitAsync(&EC2Client::GetLaunchTemplateData, __VA_ARGS__)
#define GetLaunchTemplateDataCallable(REQUEST)  SubmitCallable(&EC2Client::GetLaunchTemplateData, REQUEST)

#define GetManagedPrefixListAssociationsAsync(...)  SubmitAsync(&EC2Client::GetManagedPrefixListAssociations, __VA_ARGS__)
#define GetManagedPrefixListAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetManagedPrefixListAssociations, REQUEST)

#define GetManagedPrefixListEntriesAsync(...)  SubmitAsync(&EC2Client::GetManagedPrefixListEntries, __VA_ARGS__)
#define GetManagedPrefixListEntriesCallable(REQUEST)  SubmitCallable(&EC2Client::GetManagedPrefixListEntries, REQUEST)

#define GetNetworkInsightsAccessScopeAnalysisFindingsAsync(...)  SubmitAsync(&EC2Client::GetNetworkInsightsAccessScopeAnalysisFindings, __VA_ARGS__)
#define GetNetworkInsightsAccessScopeAnalysisFindingsCallable(REQUEST)  SubmitCallable(&EC2Client::GetNetworkInsightsAccessScopeAnalysisFindings, REQUEST)

#define GetNetworkInsightsAccessScopeContentAsync(...)  SubmitAsync(&EC2Client::GetNetworkInsightsAccessScopeContent, __VA_ARGS__)
#define GetNetworkInsightsAccessScopeContentCallable(REQUEST)  SubmitCallable(&EC2Client::GetNetworkInsightsAccessScopeContent, REQUEST)

#define GetPasswordDataAsync(...)  SubmitAsync(&EC2Client::GetPasswordData, __VA_ARGS__)
#define GetPasswordDataCallable(REQUEST)  SubmitCallable(&EC2Client::GetPasswordData, REQUEST)

#define GetReservedInstancesExchangeQuoteAsync(...)  SubmitAsync(&EC2Client::GetReservedInstancesExchangeQuote, __VA_ARGS__)
#define GetReservedInstancesExchangeQuoteCallable(REQUEST)  SubmitCallable(&EC2Client::GetReservedInstancesExchangeQuote, REQUEST)

#define GetSerialConsoleAccessStatusAsync(...)  SubmitAsync(&EC2Client::GetSerialConsoleAccessStatus, __VA_ARGS__)
#define GetSerialConsoleAccessStatusCallable(REQUEST)  SubmitCallable(&EC2Client::GetSerialConsoleAccessStatus, REQUEST)

#define GetSpotPlacementScoresAsync(...)  SubmitAsync(&EC2Client::GetSpotPlacementScores, __VA_ARGS__)
#define GetSpotPlacementScoresCallable(REQUEST)  SubmitCallable(&EC2Client::GetSpotPlacementScores, REQUEST)

#define GetSubnetCidrReservationsAsync(...)  SubmitAsync(&EC2Client::GetSubnetCidrReservations, __VA_ARGS__)
#define GetSubnetCidrReservationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetSubnetCidrReservations, REQUEST)

#define GetTransitGatewayAttachmentPropagationsAsync(...)  SubmitAsync(&EC2Client::GetTransitGatewayAttachmentPropagations, __VA_ARGS__)
#define GetTransitGatewayAttachmentPropagationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetTransitGatewayAttachmentPropagations, REQUEST)

#define GetTransitGatewayMulticastDomainAssociationsAsync(...)  SubmitAsync(&EC2Client::GetTransitGatewayMulticastDomainAssociations, __VA_ARGS__)
#define GetTransitGatewayMulticastDomainAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetTransitGatewayMulticastDomainAssociations, REQUEST)

#define GetTransitGatewayPolicyTableAssociationsAsync(...)  SubmitAsync(&EC2Client::GetTransitGatewayPolicyTableAssociations, __VA_ARGS__)
#define GetTransitGatewayPolicyTableAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetTransitGatewayPolicyTableAssociations, REQUEST)

#define GetTransitGatewayPolicyTableEntriesAsync(...)  SubmitAsync(&EC2Client::GetTransitGatewayPolicyTableEntries, __VA_ARGS__)
#define GetTransitGatewayPolicyTableEntriesCallable(REQUEST)  SubmitCallable(&EC2Client::GetTransitGatewayPolicyTableEntries, REQUEST)

#define GetTransitGatewayPrefixListReferencesAsync(...)  SubmitAsync(&EC2Client::GetTransitGatewayPrefixListReferences, __VA_ARGS__)
#define GetTransitGatewayPrefixListReferencesCallable(REQUEST)  SubmitCallable(&EC2Client::GetTransitGatewayPrefixListReferences, REQUEST)

#define GetTransitGatewayRouteTableAssociationsAsync(...)  SubmitAsync(&EC2Client::GetTransitGatewayRouteTableAssociations, __VA_ARGS__)
#define GetTransitGatewayRouteTableAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetTransitGatewayRouteTableAssociations, REQUEST)

#define GetTransitGatewayRouteTablePropagationsAsync(...)  SubmitAsync(&EC2Client::GetTransitGatewayRouteTablePropagations, __VA_ARGS__)
#define GetTransitGatewayRouteTablePropagationsCallable(REQUEST)  SubmitCallable(&EC2Client::GetTransitGatewayRouteTablePropagations, REQUEST)

#define GetVpnConnectionDeviceSampleConfigurationAsync(...)  SubmitAsync(&EC2Client::GetVpnConnectionDeviceSampleConfiguration, __VA_ARGS__)
#define GetVpnConnectionDeviceSampleConfigurationCallable(REQUEST)  SubmitCallable(&EC2Client::GetVpnConnectionDeviceSampleConfiguration, REQUEST)

#define GetVpnConnectionDeviceTypesAsync(...)  SubmitAsync(&EC2Client::GetVpnConnectionDeviceTypes, __VA_ARGS__)
#define GetVpnConnectionDeviceTypesCallable(REQUEST)  SubmitCallable(&EC2Client::GetVpnConnectionDeviceTypes, REQUEST)

#define ImportClientVpnClientCertificateRevocationListAsync(...)  SubmitAsync(&EC2Client::ImportClientVpnClientCertificateRevocationList, __VA_ARGS__)
#define ImportClientVpnClientCertificateRevocationListCallable(REQUEST)  SubmitCallable(&EC2Client::ImportClientVpnClientCertificateRevocationList, REQUEST)

#define ImportImageAsync(...)  SubmitAsync(&EC2Client::ImportImage, __VA_ARGS__)
#define ImportImageCallable(REQUEST)  SubmitCallable(&EC2Client::ImportImage, REQUEST)

#define ImportInstanceAsync(...)  SubmitAsync(&EC2Client::ImportInstance, __VA_ARGS__)
#define ImportInstanceCallable(REQUEST)  SubmitCallable(&EC2Client::ImportInstance, REQUEST)

#define ImportKeyPairAsync(...)  SubmitAsync(&EC2Client::ImportKeyPair, __VA_ARGS__)
#define ImportKeyPairCallable(REQUEST)  SubmitCallable(&EC2Client::ImportKeyPair, REQUEST)

#define ImportSnapshotAsync(...)  SubmitAsync(&EC2Client::ImportSnapshot, __VA_ARGS__)
#define ImportSnapshotCallable(REQUEST)  SubmitCallable(&EC2Client::ImportSnapshot, REQUEST)

#define ImportVolumeAsync(...)  SubmitAsync(&EC2Client::ImportVolume, __VA_ARGS__)
#define ImportVolumeCallable(REQUEST)  SubmitCallable(&EC2Client::ImportVolume, REQUEST)

#define ListImagesInRecycleBinAsync(...)  SubmitAsync(&EC2Client::ListImagesInRecycleBin, __VA_ARGS__)
#define ListImagesInRecycleBinCallable(REQUEST)  SubmitCallable(&EC2Client::ListImagesInRecycleBin, REQUEST)

#define ListSnapshotsInRecycleBinAsync(...)  SubmitAsync(&EC2Client::ListSnapshotsInRecycleBin, __VA_ARGS__)
#define ListSnapshotsInRecycleBinCallable(REQUEST)  SubmitCallable(&EC2Client::ListSnapshotsInRecycleBin, REQUEST)

#define ModifyAddressAttributeAsync(...)  SubmitAsync(&EC2Client::ModifyAddressAttribute, __VA_ARGS__)
#define ModifyAddressAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyAddressAttribute, REQUEST)

#define ModifyAvailabilityZoneGroupAsync(...)  SubmitAsync(&EC2Client::ModifyAvailabilityZoneGroup, __VA_ARGS__)
#define ModifyAvailabilityZoneGroupCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyAvailabilityZoneGroup, REQUEST)

#define ModifyCapacityReservationAsync(...)  SubmitAsync(&EC2Client::ModifyCapacityReservation, __VA_ARGS__)
#define ModifyCapacityReservationCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyCapacityReservation, REQUEST)

#define ModifyCapacityReservationFleetAsync(...)  SubmitAsync(&EC2Client::ModifyCapacityReservationFleet, __VA_ARGS__)
#define ModifyCapacityReservationFleetCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyCapacityReservationFleet, REQUEST)

#define ModifyClientVpnEndpointAsync(...)  SubmitAsync(&EC2Client::ModifyClientVpnEndpoint, __VA_ARGS__)
#define ModifyClientVpnEndpointCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyClientVpnEndpoint, REQUEST)

#define ModifyDefaultCreditSpecificationAsync(...)  SubmitAsync(&EC2Client::ModifyDefaultCreditSpecification, __VA_ARGS__)
#define ModifyDefaultCreditSpecificationCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyDefaultCreditSpecification, REQUEST)

#define ModifyEbsDefaultKmsKeyIdAsync(...)  SubmitAsync(&EC2Client::ModifyEbsDefaultKmsKeyId, __VA_ARGS__)
#define ModifyEbsDefaultKmsKeyIdCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyEbsDefaultKmsKeyId, REQUEST)

#define ModifyFleetAsync(...)  SubmitAsync(&EC2Client::ModifyFleet, __VA_ARGS__)
#define ModifyFleetCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyFleet, REQUEST)

#define ModifyFpgaImageAttributeAsync(...)  SubmitAsync(&EC2Client::ModifyFpgaImageAttribute, __VA_ARGS__)
#define ModifyFpgaImageAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyFpgaImageAttribute, REQUEST)

#define ModifyHostsAsync(...)  SubmitAsync(&EC2Client::ModifyHosts, __VA_ARGS__)
#define ModifyHostsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyHosts, REQUEST)

#define ModifyIdFormatAsync(...)  SubmitAsync(&EC2Client::ModifyIdFormat, __VA_ARGS__)
#define ModifyIdFormatCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyIdFormat, REQUEST)

#define ModifyIdentityIdFormatAsync(...)  SubmitAsync(&EC2Client::ModifyIdentityIdFormat, __VA_ARGS__)
#define ModifyIdentityIdFormatCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyIdentityIdFormat, REQUEST)

#define ModifyImageAttributeAsync(...)  SubmitAsync(&EC2Client::ModifyImageAttribute, __VA_ARGS__)
#define ModifyImageAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyImageAttribute, REQUEST)

#define ModifyInstanceAttributeAsync(...)  SubmitAsync(&EC2Client::ModifyInstanceAttribute, __VA_ARGS__)
#define ModifyInstanceAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstanceAttribute, REQUEST)

#define ModifyInstanceCapacityReservationAttributesAsync(...)  SubmitAsync(&EC2Client::ModifyInstanceCapacityReservationAttributes, __VA_ARGS__)
#define ModifyInstanceCapacityReservationAttributesCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstanceCapacityReservationAttributes, REQUEST)

#define ModifyInstanceCreditSpecificationAsync(...)  SubmitAsync(&EC2Client::ModifyInstanceCreditSpecification, __VA_ARGS__)
#define ModifyInstanceCreditSpecificationCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstanceCreditSpecification, REQUEST)

#define ModifyInstanceEventStartTimeAsync(...)  SubmitAsync(&EC2Client::ModifyInstanceEventStartTime, __VA_ARGS__)
#define ModifyInstanceEventStartTimeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstanceEventStartTime, REQUEST)

#define ModifyInstanceEventWindowAsync(...)  SubmitAsync(&EC2Client::ModifyInstanceEventWindow, __VA_ARGS__)
#define ModifyInstanceEventWindowCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstanceEventWindow, REQUEST)

#define ModifyInstanceMaintenanceOptionsAsync(...)  SubmitAsync(&EC2Client::ModifyInstanceMaintenanceOptions, __VA_ARGS__)
#define ModifyInstanceMaintenanceOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstanceMaintenanceOptions, REQUEST)

#define ModifyInstanceMetadataOptionsAsync(...)  SubmitAsync(&EC2Client::ModifyInstanceMetadataOptions, __VA_ARGS__)
#define ModifyInstanceMetadataOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstanceMetadataOptions, REQUEST)

#define ModifyInstancePlacementAsync(...)  SubmitAsync(&EC2Client::ModifyInstancePlacement, __VA_ARGS__)
#define ModifyInstancePlacementCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyInstancePlacement, REQUEST)

#define ModifyIpamAsync(...)  SubmitAsync(&EC2Client::ModifyIpam, __VA_ARGS__)
#define ModifyIpamCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyIpam, REQUEST)

#define ModifyIpamPoolAsync(...)  SubmitAsync(&EC2Client::ModifyIpamPool, __VA_ARGS__)
#define ModifyIpamPoolCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyIpamPool, REQUEST)

#define ModifyIpamResourceCidrAsync(...)  SubmitAsync(&EC2Client::ModifyIpamResourceCidr, __VA_ARGS__)
#define ModifyIpamResourceCidrCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyIpamResourceCidr, REQUEST)

#define ModifyIpamScopeAsync(...)  SubmitAsync(&EC2Client::ModifyIpamScope, __VA_ARGS__)
#define ModifyIpamScopeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyIpamScope, REQUEST)

#define ModifyLaunchTemplateAsync(...)  SubmitAsync(&EC2Client::ModifyLaunchTemplate, __VA_ARGS__)
#define ModifyLaunchTemplateCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyLaunchTemplate, REQUEST)

#define ModifyLocalGatewayRouteAsync(...)  SubmitAsync(&EC2Client::ModifyLocalGatewayRoute, __VA_ARGS__)
#define ModifyLocalGatewayRouteCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyLocalGatewayRoute, REQUEST)

#define ModifyManagedPrefixListAsync(...)  SubmitAsync(&EC2Client::ModifyManagedPrefixList, __VA_ARGS__)
#define ModifyManagedPrefixListCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyManagedPrefixList, REQUEST)

#define ModifyNetworkInterfaceAttributeAsync(...)  SubmitAsync(&EC2Client::ModifyNetworkInterfaceAttribute, __VA_ARGS__)
#define ModifyNetworkInterfaceAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyNetworkInterfaceAttribute, REQUEST)

#define ModifyPrivateDnsNameOptionsAsync(...)  SubmitAsync(&EC2Client::ModifyPrivateDnsNameOptions, __VA_ARGS__)
#define ModifyPrivateDnsNameOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyPrivateDnsNameOptions, REQUEST)

#define ModifyReservedInstancesAsync(...)  SubmitAsync(&EC2Client::ModifyReservedInstances, __VA_ARGS__)
#define ModifyReservedInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyReservedInstances, REQUEST)

#define ModifySecurityGroupRulesAsync(...)  SubmitAsync(&EC2Client::ModifySecurityGroupRules, __VA_ARGS__)
#define ModifySecurityGroupRulesCallable(REQUEST)  SubmitCallable(&EC2Client::ModifySecurityGroupRules, REQUEST)

#define ModifySnapshotAttributeAsync(...)  SubmitAsync(&EC2Client::ModifySnapshotAttribute, __VA_ARGS__)
#define ModifySnapshotAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifySnapshotAttribute, REQUEST)

#define ModifySnapshotTierAsync(...)  SubmitAsync(&EC2Client::ModifySnapshotTier, __VA_ARGS__)
#define ModifySnapshotTierCallable(REQUEST)  SubmitCallable(&EC2Client::ModifySnapshotTier, REQUEST)

#define ModifySpotFleetRequestAsync(...)  SubmitAsync(&EC2Client::ModifySpotFleetRequest, __VA_ARGS__)
#define ModifySpotFleetRequestCallable(REQUEST)  SubmitCallable(&EC2Client::ModifySpotFleetRequest, REQUEST)

#define ModifySubnetAttributeAsync(...)  SubmitAsync(&EC2Client::ModifySubnetAttribute, __VA_ARGS__)
#define ModifySubnetAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifySubnetAttribute, REQUEST)

#define ModifyTrafficMirrorFilterNetworkServicesAsync(...)  SubmitAsync(&EC2Client::ModifyTrafficMirrorFilterNetworkServices, __VA_ARGS__)
#define ModifyTrafficMirrorFilterNetworkServicesCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyTrafficMirrorFilterNetworkServices, REQUEST)

#define ModifyTrafficMirrorFilterRuleAsync(...)  SubmitAsync(&EC2Client::ModifyTrafficMirrorFilterRule, __VA_ARGS__)
#define ModifyTrafficMirrorFilterRuleCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyTrafficMirrorFilterRule, REQUEST)

#define ModifyTrafficMirrorSessionAsync(...)  SubmitAsync(&EC2Client::ModifyTrafficMirrorSession, __VA_ARGS__)
#define ModifyTrafficMirrorSessionCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyTrafficMirrorSession, REQUEST)

#define ModifyTransitGatewayAsync(...)  SubmitAsync(&EC2Client::ModifyTransitGateway, __VA_ARGS__)
#define ModifyTransitGatewayCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyTransitGateway, REQUEST)

#define ModifyTransitGatewayPrefixListReferenceAsync(...)  SubmitAsync(&EC2Client::ModifyTransitGatewayPrefixListReference, __VA_ARGS__)
#define ModifyTransitGatewayPrefixListReferenceCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyTransitGatewayPrefixListReference, REQUEST)

#define ModifyTransitGatewayVpcAttachmentAsync(...)  SubmitAsync(&EC2Client::ModifyTransitGatewayVpcAttachment, __VA_ARGS__)
#define ModifyTransitGatewayVpcAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyTransitGatewayVpcAttachment, REQUEST)

#define ModifyVolumeAsync(...)  SubmitAsync(&EC2Client::ModifyVolume, __VA_ARGS__)
#define ModifyVolumeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVolume, REQUEST)

#define ModifyVolumeAttributeAsync(...)  SubmitAsync(&EC2Client::ModifyVolumeAttribute, __VA_ARGS__)
#define ModifyVolumeAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVolumeAttribute, REQUEST)

#define ModifyVpcAttributeAsync(...)  SubmitAsync(&EC2Client::ModifyVpcAttribute, __VA_ARGS__)
#define ModifyVpcAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcAttribute, REQUEST)

#define ModifyVpcEndpointAsync(...)  SubmitAsync(&EC2Client::ModifyVpcEndpoint, __VA_ARGS__)
#define ModifyVpcEndpointCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcEndpoint, REQUEST)

#define ModifyVpcEndpointConnectionNotificationAsync(...)  SubmitAsync(&EC2Client::ModifyVpcEndpointConnectionNotification, __VA_ARGS__)
#define ModifyVpcEndpointConnectionNotificationCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcEndpointConnectionNotification, REQUEST)

#define ModifyVpcEndpointServiceConfigurationAsync(...)  SubmitAsync(&EC2Client::ModifyVpcEndpointServiceConfiguration, __VA_ARGS__)
#define ModifyVpcEndpointServiceConfigurationCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcEndpointServiceConfiguration, REQUEST)

#define ModifyVpcEndpointServicePayerResponsibilityAsync(...)  SubmitAsync(&EC2Client::ModifyVpcEndpointServicePayerResponsibility, __VA_ARGS__)
#define ModifyVpcEndpointServicePayerResponsibilityCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcEndpointServicePayerResponsibility, REQUEST)

#define ModifyVpcEndpointServicePermissionsAsync(...)  SubmitAsync(&EC2Client::ModifyVpcEndpointServicePermissions, __VA_ARGS__)
#define ModifyVpcEndpointServicePermissionsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcEndpointServicePermissions, REQUEST)

#define ModifyVpcPeeringConnectionOptionsAsync(...)  SubmitAsync(&EC2Client::ModifyVpcPeeringConnectionOptions, __VA_ARGS__)
#define ModifyVpcPeeringConnectionOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcPeeringConnectionOptions, REQUEST)

#define ModifyVpcTenancyAsync(...)  SubmitAsync(&EC2Client::ModifyVpcTenancy, __VA_ARGS__)
#define ModifyVpcTenancyCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpcTenancy, REQUEST)

#define ModifyVpnConnectionAsync(...)  SubmitAsync(&EC2Client::ModifyVpnConnection, __VA_ARGS__)
#define ModifyVpnConnectionCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpnConnection, REQUEST)

#define ModifyVpnConnectionOptionsAsync(...)  SubmitAsync(&EC2Client::ModifyVpnConnectionOptions, __VA_ARGS__)
#define ModifyVpnConnectionOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpnConnectionOptions, REQUEST)

#define ModifyVpnTunnelCertificateAsync(...)  SubmitAsync(&EC2Client::ModifyVpnTunnelCertificate, __VA_ARGS__)
#define ModifyVpnTunnelCertificateCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpnTunnelCertificate, REQUEST)

#define ModifyVpnTunnelOptionsAsync(...)  SubmitAsync(&EC2Client::ModifyVpnTunnelOptions, __VA_ARGS__)
#define ModifyVpnTunnelOptionsCallable(REQUEST)  SubmitCallable(&EC2Client::ModifyVpnTunnelOptions, REQUEST)

#define MonitorInstancesAsync(...)  SubmitAsync(&EC2Client::MonitorInstances, __VA_ARGS__)
#define MonitorInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::MonitorInstances, REQUEST)

#define MoveAddressToVpcAsync(...)  SubmitAsync(&EC2Client::MoveAddressToVpc, __VA_ARGS__)
#define MoveAddressToVpcCallable(REQUEST)  SubmitCallable(&EC2Client::MoveAddressToVpc, REQUEST)

#define MoveByoipCidrToIpamAsync(...)  SubmitAsync(&EC2Client::MoveByoipCidrToIpam, __VA_ARGS__)
#define MoveByoipCidrToIpamCallable(REQUEST)  SubmitCallable(&EC2Client::MoveByoipCidrToIpam, REQUEST)

#define ProvisionByoipCidrAsync(...)  SubmitAsync(&EC2Client::ProvisionByoipCidr, __VA_ARGS__)
#define ProvisionByoipCidrCallable(REQUEST)  SubmitCallable(&EC2Client::ProvisionByoipCidr, REQUEST)

#define ProvisionIpamPoolCidrAsync(...)  SubmitAsync(&EC2Client::ProvisionIpamPoolCidr, __VA_ARGS__)
#define ProvisionIpamPoolCidrCallable(REQUEST)  SubmitCallable(&EC2Client::ProvisionIpamPoolCidr, REQUEST)

#define ProvisionPublicIpv4PoolCidrAsync(...)  SubmitAsync(&EC2Client::ProvisionPublicIpv4PoolCidr, __VA_ARGS__)
#define ProvisionPublicIpv4PoolCidrCallable(REQUEST)  SubmitCallable(&EC2Client::ProvisionPublicIpv4PoolCidr, REQUEST)

#define PurchaseHostReservationAsync(...)  SubmitAsync(&EC2Client::PurchaseHostReservation, __VA_ARGS__)
#define PurchaseHostReservationCallable(REQUEST)  SubmitCallable(&EC2Client::PurchaseHostReservation, REQUEST)

#define PurchaseReservedInstancesOfferingAsync(...)  SubmitAsync(&EC2Client::PurchaseReservedInstancesOffering, __VA_ARGS__)
#define PurchaseReservedInstancesOfferingCallable(REQUEST)  SubmitCallable(&EC2Client::PurchaseReservedInstancesOffering, REQUEST)

#define PurchaseScheduledInstancesAsync(...)  SubmitAsync(&EC2Client::PurchaseScheduledInstances, __VA_ARGS__)
#define PurchaseScheduledInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::PurchaseScheduledInstances, REQUEST)

#define RebootInstancesAsync(...)  SubmitAsync(&EC2Client::RebootInstances, __VA_ARGS__)
#define RebootInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::RebootInstances, REQUEST)

#define RegisterImageAsync(...)  SubmitAsync(&EC2Client::RegisterImage, __VA_ARGS__)
#define RegisterImageCallable(REQUEST)  SubmitCallable(&EC2Client::RegisterImage, REQUEST)

#define RegisterInstanceEventNotificationAttributesAsync(...)  SubmitAsync(&EC2Client::RegisterInstanceEventNotificationAttributes, __VA_ARGS__)
#define RegisterInstanceEventNotificationAttributesCallable(REQUEST)  SubmitCallable(&EC2Client::RegisterInstanceEventNotificationAttributes, REQUEST)

#define RegisterTransitGatewayMulticastGroupMembersAsync(...)  SubmitAsync(&EC2Client::RegisterTransitGatewayMulticastGroupMembers, __VA_ARGS__)
#define RegisterTransitGatewayMulticastGroupMembersCallable(REQUEST)  SubmitCallable(&EC2Client::RegisterTransitGatewayMulticastGroupMembers, REQUEST)

#define RegisterTransitGatewayMulticastGroupSourcesAsync(...)  SubmitAsync(&EC2Client::RegisterTransitGatewayMulticastGroupSources, __VA_ARGS__)
#define RegisterTransitGatewayMulticastGroupSourcesCallable(REQUEST)  SubmitCallable(&EC2Client::RegisterTransitGatewayMulticastGroupSources, REQUEST)

#define RejectTransitGatewayMulticastDomainAssociationsAsync(...)  SubmitAsync(&EC2Client::RejectTransitGatewayMulticastDomainAssociations, __VA_ARGS__)
#define RejectTransitGatewayMulticastDomainAssociationsCallable(REQUEST)  SubmitCallable(&EC2Client::RejectTransitGatewayMulticastDomainAssociations, REQUEST)

#define RejectTransitGatewayPeeringAttachmentAsync(...)  SubmitAsync(&EC2Client::RejectTransitGatewayPeeringAttachment, __VA_ARGS__)
#define RejectTransitGatewayPeeringAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::RejectTransitGatewayPeeringAttachment, REQUEST)

#define RejectTransitGatewayVpcAttachmentAsync(...)  SubmitAsync(&EC2Client::RejectTransitGatewayVpcAttachment, __VA_ARGS__)
#define RejectTransitGatewayVpcAttachmentCallable(REQUEST)  SubmitCallable(&EC2Client::RejectTransitGatewayVpcAttachment, REQUEST)

#define RejectVpcEndpointConnectionsAsync(...)  SubmitAsync(&EC2Client::RejectVpcEndpointConnections, __VA_ARGS__)
#define RejectVpcEndpointConnectionsCallable(REQUEST)  SubmitCallable(&EC2Client::RejectVpcEndpointConnections, REQUEST)

#define RejectVpcPeeringConnectionAsync(...)  SubmitAsync(&EC2Client::RejectVpcPeeringConnection, __VA_ARGS__)
#define RejectVpcPeeringConnectionCallable(REQUEST)  SubmitCallable(&EC2Client::RejectVpcPeeringConnection, REQUEST)

#define ReleaseAddressAsync(...)  SubmitAsync(&EC2Client::ReleaseAddress, __VA_ARGS__)
#define ReleaseAddressCallable(REQUEST)  SubmitCallable(&EC2Client::ReleaseAddress, REQUEST)

#define ReleaseHostsAsync(...)  SubmitAsync(&EC2Client::ReleaseHosts, __VA_ARGS__)
#define ReleaseHostsCallable(REQUEST)  SubmitCallable(&EC2Client::ReleaseHosts, REQUEST)

#define ReleaseIpamPoolAllocationAsync(...)  SubmitAsync(&EC2Client::ReleaseIpamPoolAllocation, __VA_ARGS__)
#define ReleaseIpamPoolAllocationCallable(REQUEST)  SubmitCallable(&EC2Client::ReleaseIpamPoolAllocation, REQUEST)

#define ReplaceIamInstanceProfileAssociationAsync(...)  SubmitAsync(&EC2Client::ReplaceIamInstanceProfileAssociation, __VA_ARGS__)
#define ReplaceIamInstanceProfileAssociationCallable(REQUEST)  SubmitCallable(&EC2Client::ReplaceIamInstanceProfileAssociation, REQUEST)

#define ReplaceNetworkAclAssociationAsync(...)  SubmitAsync(&EC2Client::ReplaceNetworkAclAssociation, __VA_ARGS__)
#define ReplaceNetworkAclAssociationCallable(REQUEST)  SubmitCallable(&EC2Client::ReplaceNetworkAclAssociation, REQUEST)

#define ReplaceNetworkAclEntryAsync(...)  SubmitAsync(&EC2Client::ReplaceNetworkAclEntry, __VA_ARGS__)
#define ReplaceNetworkAclEntryCallable(REQUEST)  SubmitCallable(&EC2Client::ReplaceNetworkAclEntry, REQUEST)

#define ReplaceRouteAsync(...)  SubmitAsync(&EC2Client::ReplaceRoute, __VA_ARGS__)
#define ReplaceRouteCallable(REQUEST)  SubmitCallable(&EC2Client::ReplaceRoute, REQUEST)

#define ReplaceRouteTableAssociationAsync(...)  SubmitAsync(&EC2Client::ReplaceRouteTableAssociation, __VA_ARGS__)
#define ReplaceRouteTableAssociationCallable(REQUEST)  SubmitCallable(&EC2Client::ReplaceRouteTableAssociation, REQUEST)

#define ReplaceTransitGatewayRouteAsync(...)  SubmitAsync(&EC2Client::ReplaceTransitGatewayRoute, __VA_ARGS__)
#define ReplaceTransitGatewayRouteCallable(REQUEST)  SubmitCallable(&EC2Client::ReplaceTransitGatewayRoute, REQUEST)

#define ReportInstanceStatusAsync(...)  SubmitAsync(&EC2Client::ReportInstanceStatus, __VA_ARGS__)
#define ReportInstanceStatusCallable(REQUEST)  SubmitCallable(&EC2Client::ReportInstanceStatus, REQUEST)

#define RequestSpotFleetAsync(...)  SubmitAsync(&EC2Client::RequestSpotFleet, __VA_ARGS__)
#define RequestSpotFleetCallable(REQUEST)  SubmitCallable(&EC2Client::RequestSpotFleet, REQUEST)

#define RequestSpotInstancesAsync(...)  SubmitAsync(&EC2Client::RequestSpotInstances, __VA_ARGS__)
#define RequestSpotInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::RequestSpotInstances, REQUEST)

#define ResetAddressAttributeAsync(...)  SubmitAsync(&EC2Client::ResetAddressAttribute, __VA_ARGS__)
#define ResetAddressAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ResetAddressAttribute, REQUEST)

#define ResetEbsDefaultKmsKeyIdAsync(...)  SubmitAsync(&EC2Client::ResetEbsDefaultKmsKeyId, __VA_ARGS__)
#define ResetEbsDefaultKmsKeyIdCallable(REQUEST)  SubmitCallable(&EC2Client::ResetEbsDefaultKmsKeyId, REQUEST)

#define ResetFpgaImageAttributeAsync(...)  SubmitAsync(&EC2Client::ResetFpgaImageAttribute, __VA_ARGS__)
#define ResetFpgaImageAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ResetFpgaImageAttribute, REQUEST)

#define ResetImageAttributeAsync(...)  SubmitAsync(&EC2Client::ResetImageAttribute, __VA_ARGS__)
#define ResetImageAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ResetImageAttribute, REQUEST)

#define ResetInstanceAttributeAsync(...)  SubmitAsync(&EC2Client::ResetInstanceAttribute, __VA_ARGS__)
#define ResetInstanceAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ResetInstanceAttribute, REQUEST)

#define ResetNetworkInterfaceAttributeAsync(...)  SubmitAsync(&EC2Client::ResetNetworkInterfaceAttribute, __VA_ARGS__)
#define ResetNetworkInterfaceAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ResetNetworkInterfaceAttribute, REQUEST)

#define ResetSnapshotAttributeAsync(...)  SubmitAsync(&EC2Client::ResetSnapshotAttribute, __VA_ARGS__)
#define ResetSnapshotAttributeCallable(REQUEST)  SubmitCallable(&EC2Client::ResetSnapshotAttribute, REQUEST)

#define RestoreAddressToClassicAsync(...)  SubmitAsync(&EC2Client::RestoreAddressToClassic, __VA_ARGS__)
#define RestoreAddressToClassicCallable(REQUEST)  SubmitCallable(&EC2Client::RestoreAddressToClassic, REQUEST)

#define RestoreImageFromRecycleBinAsync(...)  SubmitAsync(&EC2Client::RestoreImageFromRecycleBin, __VA_ARGS__)
#define RestoreImageFromRecycleBinCallable(REQUEST)  SubmitCallable(&EC2Client::RestoreImageFromRecycleBin, REQUEST)

#define RestoreManagedPrefixListVersionAsync(...)  SubmitAsync(&EC2Client::RestoreManagedPrefixListVersion, __VA_ARGS__)
#define RestoreManagedPrefixListVersionCallable(REQUEST)  SubmitCallable(&EC2Client::RestoreManagedPrefixListVersion, REQUEST)

#define RestoreSnapshotFromRecycleBinAsync(...)  SubmitAsync(&EC2Client::RestoreSnapshotFromRecycleBin, __VA_ARGS__)
#define RestoreSnapshotFromRecycleBinCallable(REQUEST)  SubmitCallable(&EC2Client::RestoreSnapshotFromRecycleBin, REQUEST)

#define RestoreSnapshotTierAsync(...)  SubmitAsync(&EC2Client::RestoreSnapshotTier, __VA_ARGS__)
#define RestoreSnapshotTierCallable(REQUEST)  SubmitCallable(&EC2Client::RestoreSnapshotTier, REQUEST)

#define RevokeClientVpnIngressAsync(...)  SubmitAsync(&EC2Client::RevokeClientVpnIngress, __VA_ARGS__)
#define RevokeClientVpnIngressCallable(REQUEST)  SubmitCallable(&EC2Client::RevokeClientVpnIngress, REQUEST)

#define RevokeSecurityGroupEgressAsync(...)  SubmitAsync(&EC2Client::RevokeSecurityGroupEgress, __VA_ARGS__)
#define RevokeSecurityGroupEgressCallable(REQUEST)  SubmitCallable(&EC2Client::RevokeSecurityGroupEgress, REQUEST)

#define RevokeSecurityGroupIngressAsync(...)  SubmitAsync(&EC2Client::RevokeSecurityGroupIngress, __VA_ARGS__)
#define RevokeSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&EC2Client::RevokeSecurityGroupIngress, REQUEST)

#define RunInstancesAsync(...)  SubmitAsync(&EC2Client::RunInstances, __VA_ARGS__)
#define RunInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::RunInstances, REQUEST)

#define RunScheduledInstancesAsync(...)  SubmitAsync(&EC2Client::RunScheduledInstances, __VA_ARGS__)
#define RunScheduledInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::RunScheduledInstances, REQUEST)

#define SearchLocalGatewayRoutesAsync(...)  SubmitAsync(&EC2Client::SearchLocalGatewayRoutes, __VA_ARGS__)
#define SearchLocalGatewayRoutesCallable(REQUEST)  SubmitCallable(&EC2Client::SearchLocalGatewayRoutes, REQUEST)

#define SearchTransitGatewayMulticastGroupsAsync(...)  SubmitAsync(&EC2Client::SearchTransitGatewayMulticastGroups, __VA_ARGS__)
#define SearchTransitGatewayMulticastGroupsCallable(REQUEST)  SubmitCallable(&EC2Client::SearchTransitGatewayMulticastGroups, REQUEST)

#define SearchTransitGatewayRoutesAsync(...)  SubmitAsync(&EC2Client::SearchTransitGatewayRoutes, __VA_ARGS__)
#define SearchTransitGatewayRoutesCallable(REQUEST)  SubmitCallable(&EC2Client::SearchTransitGatewayRoutes, REQUEST)

#define SendDiagnosticInterruptAsync(...)  SubmitAsync(&EC2Client::SendDiagnosticInterrupt, __VA_ARGS__)
#define SendDiagnosticInterruptCallable(REQUEST)  SubmitCallable(&EC2Client::SendDiagnosticInterrupt, REQUEST)

#define StartInstancesAsync(...)  SubmitAsync(&EC2Client::StartInstances, __VA_ARGS__)
#define StartInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::StartInstances, REQUEST)

#define StartNetworkInsightsAccessScopeAnalysisAsync(...)  SubmitAsync(&EC2Client::StartNetworkInsightsAccessScopeAnalysis, __VA_ARGS__)
#define StartNetworkInsightsAccessScopeAnalysisCallable(REQUEST)  SubmitCallable(&EC2Client::StartNetworkInsightsAccessScopeAnalysis, REQUEST)

#define StartNetworkInsightsAnalysisAsync(...)  SubmitAsync(&EC2Client::StartNetworkInsightsAnalysis, __VA_ARGS__)
#define StartNetworkInsightsAnalysisCallable(REQUEST)  SubmitCallable(&EC2Client::StartNetworkInsightsAnalysis, REQUEST)

#define StartVpcEndpointServicePrivateDnsVerificationAsync(...)  SubmitAsync(&EC2Client::StartVpcEndpointServicePrivateDnsVerification, __VA_ARGS__)
#define StartVpcEndpointServicePrivateDnsVerificationCallable(REQUEST)  SubmitCallable(&EC2Client::StartVpcEndpointServicePrivateDnsVerification, REQUEST)

#define StopInstancesAsync(...)  SubmitAsync(&EC2Client::StopInstances, __VA_ARGS__)
#define StopInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::StopInstances, REQUEST)

#define TerminateClientVpnConnectionsAsync(...)  SubmitAsync(&EC2Client::TerminateClientVpnConnections, __VA_ARGS__)
#define TerminateClientVpnConnectionsCallable(REQUEST)  SubmitCallable(&EC2Client::TerminateClientVpnConnections, REQUEST)

#define TerminateInstancesAsync(...)  SubmitAsync(&EC2Client::TerminateInstances, __VA_ARGS__)
#define TerminateInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::TerminateInstances, REQUEST)

#define UnassignIpv6AddressesAsync(...)  SubmitAsync(&EC2Client::UnassignIpv6Addresses, __VA_ARGS__)
#define UnassignIpv6AddressesCallable(REQUEST)  SubmitCallable(&EC2Client::UnassignIpv6Addresses, REQUEST)

#define UnassignPrivateIpAddressesAsync(...)  SubmitAsync(&EC2Client::UnassignPrivateIpAddresses, __VA_ARGS__)
#define UnassignPrivateIpAddressesCallable(REQUEST)  SubmitCallable(&EC2Client::UnassignPrivateIpAddresses, REQUEST)

#define UnmonitorInstancesAsync(...)  SubmitAsync(&EC2Client::UnmonitorInstances, __VA_ARGS__)
#define UnmonitorInstancesCallable(REQUEST)  SubmitCallable(&EC2Client::UnmonitorInstances, REQUEST)

#define UpdateSecurityGroupRuleDescriptionsEgressAsync(...)  SubmitAsync(&EC2Client::UpdateSecurityGroupRuleDescriptionsEgress, __VA_ARGS__)
#define UpdateSecurityGroupRuleDescriptionsEgressCallable(REQUEST)  SubmitCallable(&EC2Client::UpdateSecurityGroupRuleDescriptionsEgress, REQUEST)

#define UpdateSecurityGroupRuleDescriptionsIngressAsync(...)  SubmitAsync(&EC2Client::UpdateSecurityGroupRuleDescriptionsIngress, __VA_ARGS__)
#define UpdateSecurityGroupRuleDescriptionsIngressCallable(REQUEST)  SubmitCallable(&EC2Client::UpdateSecurityGroupRuleDescriptionsIngress, REQUEST)

#define WithdrawByoipCidrAsync(...)  SubmitAsync(&EC2Client::WithdrawByoipCidr, __VA_ARGS__)
#define WithdrawByoipCidrCallable(REQUEST)  SubmitCallable(&EC2Client::WithdrawByoipCidr, REQUEST)

