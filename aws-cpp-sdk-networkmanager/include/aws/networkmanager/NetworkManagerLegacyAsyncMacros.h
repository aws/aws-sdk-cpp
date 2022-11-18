/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::AcceptAttachment, __VA_ARGS__)
#define AcceptAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::AcceptAttachment, REQUEST)

#define AssociateConnectPeerAsync(...)  SubmitAsync(&NetworkManagerClient::AssociateConnectPeer, __VA_ARGS__)
#define AssociateConnectPeerCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::AssociateConnectPeer, REQUEST)

#define AssociateCustomerGatewayAsync(...)  SubmitAsync(&NetworkManagerClient::AssociateCustomerGateway, __VA_ARGS__)
#define AssociateCustomerGatewayCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::AssociateCustomerGateway, REQUEST)

#define AssociateLinkAsync(...)  SubmitAsync(&NetworkManagerClient::AssociateLink, __VA_ARGS__)
#define AssociateLinkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::AssociateLink, REQUEST)

#define AssociateTransitGatewayConnectPeerAsync(...)  SubmitAsync(&NetworkManagerClient::AssociateTransitGatewayConnectPeer, __VA_ARGS__)
#define AssociateTransitGatewayConnectPeerCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::AssociateTransitGatewayConnectPeer, REQUEST)

#define CreateConnectAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::CreateConnectAttachment, __VA_ARGS__)
#define CreateConnectAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateConnectAttachment, REQUEST)

#define CreateConnectPeerAsync(...)  SubmitAsync(&NetworkManagerClient::CreateConnectPeer, __VA_ARGS__)
#define CreateConnectPeerCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateConnectPeer, REQUEST)

#define CreateConnectionAsync(...)  SubmitAsync(&NetworkManagerClient::CreateConnection, __VA_ARGS__)
#define CreateConnectionCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateConnection, REQUEST)

#define CreateCoreNetworkAsync(...)  SubmitAsync(&NetworkManagerClient::CreateCoreNetwork, __VA_ARGS__)
#define CreateCoreNetworkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateCoreNetwork, REQUEST)

#define CreateDeviceAsync(...)  SubmitAsync(&NetworkManagerClient::CreateDevice, __VA_ARGS__)
#define CreateDeviceCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateDevice, REQUEST)

#define CreateGlobalNetworkAsync(...)  SubmitAsync(&NetworkManagerClient::CreateGlobalNetwork, __VA_ARGS__)
#define CreateGlobalNetworkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateGlobalNetwork, REQUEST)

#define CreateLinkAsync(...)  SubmitAsync(&NetworkManagerClient::CreateLink, __VA_ARGS__)
#define CreateLinkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateLink, REQUEST)

#define CreateSiteAsync(...)  SubmitAsync(&NetworkManagerClient::CreateSite, __VA_ARGS__)
#define CreateSiteCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateSite, REQUEST)

#define CreateSiteToSiteVpnAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::CreateSiteToSiteVpnAttachment, __VA_ARGS__)
#define CreateSiteToSiteVpnAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateSiteToSiteVpnAttachment, REQUEST)

#define CreateTransitGatewayPeeringAsync(...)  SubmitAsync(&NetworkManagerClient::CreateTransitGatewayPeering, __VA_ARGS__)
#define CreateTransitGatewayPeeringCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateTransitGatewayPeering, REQUEST)

#define CreateTransitGatewayRouteTableAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::CreateTransitGatewayRouteTableAttachment, __VA_ARGS__)
#define CreateTransitGatewayRouteTableAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateTransitGatewayRouteTableAttachment, REQUEST)

#define CreateVpcAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::CreateVpcAttachment, __VA_ARGS__)
#define CreateVpcAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::CreateVpcAttachment, REQUEST)

#define DeleteAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteAttachment, __VA_ARGS__)
#define DeleteAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteAttachment, REQUEST)

#define DeleteConnectPeerAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteConnectPeer, __VA_ARGS__)
#define DeleteConnectPeerCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteConnectPeer, REQUEST)

#define DeleteConnectionAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteConnection, REQUEST)

#define DeleteCoreNetworkAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteCoreNetwork, __VA_ARGS__)
#define DeleteCoreNetworkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteCoreNetwork, REQUEST)

#define DeleteCoreNetworkPolicyVersionAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteCoreNetworkPolicyVersion, __VA_ARGS__)
#define DeleteCoreNetworkPolicyVersionCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteCoreNetworkPolicyVersion, REQUEST)

#define DeleteDeviceAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteDevice, __VA_ARGS__)
#define DeleteDeviceCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteDevice, REQUEST)

#define DeleteGlobalNetworkAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteGlobalNetwork, __VA_ARGS__)
#define DeleteGlobalNetworkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteGlobalNetwork, REQUEST)

#define DeleteLinkAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteLink, __VA_ARGS__)
#define DeleteLinkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteLink, REQUEST)

#define DeletePeeringAsync(...)  SubmitAsync(&NetworkManagerClient::DeletePeering, __VA_ARGS__)
#define DeletePeeringCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeletePeering, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteResourcePolicy, REQUEST)

#define DeleteSiteAsync(...)  SubmitAsync(&NetworkManagerClient::DeleteSite, __VA_ARGS__)
#define DeleteSiteCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeleteSite, REQUEST)

#define DeregisterTransitGatewayAsync(...)  SubmitAsync(&NetworkManagerClient::DeregisterTransitGateway, __VA_ARGS__)
#define DeregisterTransitGatewayCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DeregisterTransitGateway, REQUEST)

#define DescribeGlobalNetworksAsync(...)  SubmitAsync(&NetworkManagerClient::DescribeGlobalNetworks, __VA_ARGS__)
#define DescribeGlobalNetworksCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DescribeGlobalNetworks, REQUEST)

#define DisassociateConnectPeerAsync(...)  SubmitAsync(&NetworkManagerClient::DisassociateConnectPeer, __VA_ARGS__)
#define DisassociateConnectPeerCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DisassociateConnectPeer, REQUEST)

#define DisassociateCustomerGatewayAsync(...)  SubmitAsync(&NetworkManagerClient::DisassociateCustomerGateway, __VA_ARGS__)
#define DisassociateCustomerGatewayCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DisassociateCustomerGateway, REQUEST)

#define DisassociateLinkAsync(...)  SubmitAsync(&NetworkManagerClient::DisassociateLink, __VA_ARGS__)
#define DisassociateLinkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DisassociateLink, REQUEST)

#define DisassociateTransitGatewayConnectPeerAsync(...)  SubmitAsync(&NetworkManagerClient::DisassociateTransitGatewayConnectPeer, __VA_ARGS__)
#define DisassociateTransitGatewayConnectPeerCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::DisassociateTransitGatewayConnectPeer, REQUEST)

#define ExecuteCoreNetworkChangeSetAsync(...)  SubmitAsync(&NetworkManagerClient::ExecuteCoreNetworkChangeSet, __VA_ARGS__)
#define ExecuteCoreNetworkChangeSetCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ExecuteCoreNetworkChangeSet, REQUEST)

#define GetConnectAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::GetConnectAttachment, __VA_ARGS__)
#define GetConnectAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetConnectAttachment, REQUEST)

#define GetConnectPeerAsync(...)  SubmitAsync(&NetworkManagerClient::GetConnectPeer, __VA_ARGS__)
#define GetConnectPeerCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetConnectPeer, REQUEST)

#define GetConnectPeerAssociationsAsync(...)  SubmitAsync(&NetworkManagerClient::GetConnectPeerAssociations, __VA_ARGS__)
#define GetConnectPeerAssociationsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetConnectPeerAssociations, REQUEST)

#define GetConnectionsAsync(...)  SubmitAsync(&NetworkManagerClient::GetConnections, __VA_ARGS__)
#define GetConnectionsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetConnections, REQUEST)

#define GetCoreNetworkAsync(...)  SubmitAsync(&NetworkManagerClient::GetCoreNetwork, __VA_ARGS__)
#define GetCoreNetworkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetCoreNetwork, REQUEST)

#define GetCoreNetworkChangeEventsAsync(...)  SubmitAsync(&NetworkManagerClient::GetCoreNetworkChangeEvents, __VA_ARGS__)
#define GetCoreNetworkChangeEventsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetCoreNetworkChangeEvents, REQUEST)

#define GetCoreNetworkChangeSetAsync(...)  SubmitAsync(&NetworkManagerClient::GetCoreNetworkChangeSet, __VA_ARGS__)
#define GetCoreNetworkChangeSetCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetCoreNetworkChangeSet, REQUEST)

#define GetCoreNetworkPolicyAsync(...)  SubmitAsync(&NetworkManagerClient::GetCoreNetworkPolicy, __VA_ARGS__)
#define GetCoreNetworkPolicyCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetCoreNetworkPolicy, REQUEST)

#define GetCustomerGatewayAssociationsAsync(...)  SubmitAsync(&NetworkManagerClient::GetCustomerGatewayAssociations, __VA_ARGS__)
#define GetCustomerGatewayAssociationsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetCustomerGatewayAssociations, REQUEST)

#define GetDevicesAsync(...)  SubmitAsync(&NetworkManagerClient::GetDevices, __VA_ARGS__)
#define GetDevicesCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetDevices, REQUEST)

#define GetLinkAssociationsAsync(...)  SubmitAsync(&NetworkManagerClient::GetLinkAssociations, __VA_ARGS__)
#define GetLinkAssociationsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetLinkAssociations, REQUEST)

#define GetLinksAsync(...)  SubmitAsync(&NetworkManagerClient::GetLinks, __VA_ARGS__)
#define GetLinksCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetLinks, REQUEST)

#define GetNetworkResourceCountsAsync(...)  SubmitAsync(&NetworkManagerClient::GetNetworkResourceCounts, __VA_ARGS__)
#define GetNetworkResourceCountsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetNetworkResourceCounts, REQUEST)

#define GetNetworkResourceRelationshipsAsync(...)  SubmitAsync(&NetworkManagerClient::GetNetworkResourceRelationships, __VA_ARGS__)
#define GetNetworkResourceRelationshipsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetNetworkResourceRelationships, REQUEST)

#define GetNetworkResourcesAsync(...)  SubmitAsync(&NetworkManagerClient::GetNetworkResources, __VA_ARGS__)
#define GetNetworkResourcesCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetNetworkResources, REQUEST)

#define GetNetworkRoutesAsync(...)  SubmitAsync(&NetworkManagerClient::GetNetworkRoutes, __VA_ARGS__)
#define GetNetworkRoutesCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetNetworkRoutes, REQUEST)

#define GetNetworkTelemetryAsync(...)  SubmitAsync(&NetworkManagerClient::GetNetworkTelemetry, __VA_ARGS__)
#define GetNetworkTelemetryCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetNetworkTelemetry, REQUEST)

#define GetResourcePolicyAsync(...)  SubmitAsync(&NetworkManagerClient::GetResourcePolicy, __VA_ARGS__)
#define GetResourcePolicyCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetResourcePolicy, REQUEST)

#define GetRouteAnalysisAsync(...)  SubmitAsync(&NetworkManagerClient::GetRouteAnalysis, __VA_ARGS__)
#define GetRouteAnalysisCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetRouteAnalysis, REQUEST)

#define GetSiteToSiteVpnAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::GetSiteToSiteVpnAttachment, __VA_ARGS__)
#define GetSiteToSiteVpnAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetSiteToSiteVpnAttachment, REQUEST)

#define GetSitesAsync(...)  SubmitAsync(&NetworkManagerClient::GetSites, __VA_ARGS__)
#define GetSitesCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetSites, REQUEST)

#define GetTransitGatewayConnectPeerAssociationsAsync(...)  SubmitAsync(&NetworkManagerClient::GetTransitGatewayConnectPeerAssociations, __VA_ARGS__)
#define GetTransitGatewayConnectPeerAssociationsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetTransitGatewayConnectPeerAssociations, REQUEST)

#define GetTransitGatewayPeeringAsync(...)  SubmitAsync(&NetworkManagerClient::GetTransitGatewayPeering, __VA_ARGS__)
#define GetTransitGatewayPeeringCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetTransitGatewayPeering, REQUEST)

#define GetTransitGatewayRegistrationsAsync(...)  SubmitAsync(&NetworkManagerClient::GetTransitGatewayRegistrations, __VA_ARGS__)
#define GetTransitGatewayRegistrationsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetTransitGatewayRegistrations, REQUEST)

#define GetTransitGatewayRouteTableAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::GetTransitGatewayRouteTableAttachment, __VA_ARGS__)
#define GetTransitGatewayRouteTableAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetTransitGatewayRouteTableAttachment, REQUEST)

#define GetVpcAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::GetVpcAttachment, __VA_ARGS__)
#define GetVpcAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::GetVpcAttachment, REQUEST)

#define ListAttachmentsAsync(...)  SubmitAsync(&NetworkManagerClient::ListAttachments, __VA_ARGS__)
#define ListAttachmentsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ListAttachments, REQUEST)

#define ListConnectPeersAsync(...)  SubmitAsync(&NetworkManagerClient::ListConnectPeers, __VA_ARGS__)
#define ListConnectPeersCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ListConnectPeers, REQUEST)

#define ListCoreNetworkPolicyVersionsAsync(...)  SubmitAsync(&NetworkManagerClient::ListCoreNetworkPolicyVersions, __VA_ARGS__)
#define ListCoreNetworkPolicyVersionsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ListCoreNetworkPolicyVersions, REQUEST)

#define ListCoreNetworksAsync(...)  SubmitAsync(&NetworkManagerClient::ListCoreNetworks, __VA_ARGS__)
#define ListCoreNetworksCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ListCoreNetworks, REQUEST)

#define ListOrganizationServiceAccessStatusAsync(...)  SubmitAsync(&NetworkManagerClient::ListOrganizationServiceAccessStatus, __VA_ARGS__)
#define ListOrganizationServiceAccessStatusCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ListOrganizationServiceAccessStatus, REQUEST)

#define ListPeeringsAsync(...)  SubmitAsync(&NetworkManagerClient::ListPeerings, __VA_ARGS__)
#define ListPeeringsCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ListPeerings, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&NetworkManagerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::ListTagsForResource, REQUEST)

#define PutCoreNetworkPolicyAsync(...)  SubmitAsync(&NetworkManagerClient::PutCoreNetworkPolicy, __VA_ARGS__)
#define PutCoreNetworkPolicyCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::PutCoreNetworkPolicy, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&NetworkManagerClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::PutResourcePolicy, REQUEST)

#define RegisterTransitGatewayAsync(...)  SubmitAsync(&NetworkManagerClient::RegisterTransitGateway, __VA_ARGS__)
#define RegisterTransitGatewayCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::RegisterTransitGateway, REQUEST)

#define RejectAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::RejectAttachment, __VA_ARGS__)
#define RejectAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::RejectAttachment, REQUEST)

#define RestoreCoreNetworkPolicyVersionAsync(...)  SubmitAsync(&NetworkManagerClient::RestoreCoreNetworkPolicyVersion, __VA_ARGS__)
#define RestoreCoreNetworkPolicyVersionCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::RestoreCoreNetworkPolicyVersion, REQUEST)

#define StartOrganizationServiceAccessUpdateAsync(...)  SubmitAsync(&NetworkManagerClient::StartOrganizationServiceAccessUpdate, __VA_ARGS__)
#define StartOrganizationServiceAccessUpdateCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::StartOrganizationServiceAccessUpdate, REQUEST)

#define StartRouteAnalysisAsync(...)  SubmitAsync(&NetworkManagerClient::StartRouteAnalysis, __VA_ARGS__)
#define StartRouteAnalysisCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::StartRouteAnalysis, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&NetworkManagerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&NetworkManagerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UntagResource, REQUEST)

#define UpdateConnectionAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateConnection, __VA_ARGS__)
#define UpdateConnectionCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateConnection, REQUEST)

#define UpdateCoreNetworkAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateCoreNetwork, __VA_ARGS__)
#define UpdateCoreNetworkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateCoreNetwork, REQUEST)

#define UpdateDeviceAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateDevice, __VA_ARGS__)
#define UpdateDeviceCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateDevice, REQUEST)

#define UpdateGlobalNetworkAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateGlobalNetwork, __VA_ARGS__)
#define UpdateGlobalNetworkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateGlobalNetwork, REQUEST)

#define UpdateLinkAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateLink, __VA_ARGS__)
#define UpdateLinkCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateLink, REQUEST)

#define UpdateNetworkResourceMetadataAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateNetworkResourceMetadata, __VA_ARGS__)
#define UpdateNetworkResourceMetadataCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateNetworkResourceMetadata, REQUEST)

#define UpdateSiteAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateSite, __VA_ARGS__)
#define UpdateSiteCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateSite, REQUEST)

#define UpdateVpcAttachmentAsync(...)  SubmitAsync(&NetworkManagerClient::UpdateVpcAttachment, __VA_ARGS__)
#define UpdateVpcAttachmentCallable(REQUEST)  SubmitCallable(&NetworkManagerClient::UpdateVpcAttachment, REQUEST)

