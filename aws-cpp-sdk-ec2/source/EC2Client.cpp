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

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/ec2/EC2Client.h>
#include <aws/ec2/EC2Endpoint.h>
#include <aws/ec2/EC2ErrorMarshaller.h>
#include <aws/ec2/model/AcceptReservedInstancesExchangeQuoteRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/AcceptVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/AcceptVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/AdvertiseByoipCidrRequest.h>
#include <aws/ec2/model/AllocateAddressRequest.h>
#include <aws/ec2/model/AllocateHostsRequest.h>
#include <aws/ec2/model/ApplySecurityGroupsToClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/AssignIpv6AddressesRequest.h>
#include <aws/ec2/model/AssignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/AssociateAddressRequest.h>
#include <aws/ec2/model/AssociateClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/AssociateDhcpOptionsRequest.h>
#include <aws/ec2/model/AssociateIamInstanceProfileRequest.h>
#include <aws/ec2/model/AssociateRouteTableRequest.h>
#include <aws/ec2/model/AssociateSubnetCidrBlockRequest.h>
#include <aws/ec2/model/AssociateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/AssociateVpcCidrBlockRequest.h>
#include <aws/ec2/model/AttachClassicLinkVpcRequest.h>
#include <aws/ec2/model/AttachInternetGatewayRequest.h>
#include <aws/ec2/model/AttachNetworkInterfaceRequest.h>
#include <aws/ec2/model/AttachVolumeRequest.h>
#include <aws/ec2/model/AttachVpnGatewayRequest.h>
#include <aws/ec2/model/AuthorizeClientVpnIngressRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/BundleInstanceRequest.h>
#include <aws/ec2/model/CancelBundleTaskRequest.h>
#include <aws/ec2/model/CancelCapacityReservationRequest.h>
#include <aws/ec2/model/CancelConversionTaskRequest.h>
#include <aws/ec2/model/CancelExportTaskRequest.h>
#include <aws/ec2/model/CancelImportTaskRequest.h>
#include <aws/ec2/model/CancelReservedInstancesListingRequest.h>
#include <aws/ec2/model/CancelSpotFleetRequestsRequest.h>
#include <aws/ec2/model/CancelSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/ConfirmProductInstanceRequest.h>
#include <aws/ec2/model/CopyFpgaImageRequest.h>
#include <aws/ec2/model/CopyImageRequest.h>
#include <aws/ec2/model/CopySnapshotRequest.h>
#include <aws/ec2/model/CreateCapacityReservationRequest.h>
#include <aws/ec2/model/CreateClientVpnEndpointRequest.h>
#include <aws/ec2/model/CreateClientVpnRouteRequest.h>
#include <aws/ec2/model/CreateCustomerGatewayRequest.h>
#include <aws/ec2/model/CreateDefaultSubnetRequest.h>
#include <aws/ec2/model/CreateDefaultVpcRequest.h>
#include <aws/ec2/model/CreateDhcpOptionsRequest.h>
#include <aws/ec2/model/CreateEgressOnlyInternetGatewayRequest.h>
#include <aws/ec2/model/CreateFleetRequest.h>
#include <aws/ec2/model/CreateFlowLogsRequest.h>
#include <aws/ec2/model/CreateFpgaImageRequest.h>
#include <aws/ec2/model/CreateImageRequest.h>
#include <aws/ec2/model/CreateInstanceExportTaskRequest.h>
#include <aws/ec2/model/CreateInternetGatewayRequest.h>
#include <aws/ec2/model/CreateKeyPairRequest.h>
#include <aws/ec2/model/CreateLaunchTemplateRequest.h>
#include <aws/ec2/model/CreateLaunchTemplateVersionRequest.h>
#include <aws/ec2/model/CreateNatGatewayRequest.h>
#include <aws/ec2/model/CreateNetworkAclRequest.h>
#include <aws/ec2/model/CreateNetworkAclEntryRequest.h>
#include <aws/ec2/model/CreateNetworkInterfaceRequest.h>
#include <aws/ec2/model/CreateNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/CreatePlacementGroupRequest.h>
#include <aws/ec2/model/CreateReservedInstancesListingRequest.h>
#include <aws/ec2/model/CreateRouteRequest.h>
#include <aws/ec2/model/CreateRouteTableRequest.h>
#include <aws/ec2/model/CreateSecurityGroupRequest.h>
#include <aws/ec2/model/CreateSnapshotRequest.h>
#include <aws/ec2/model/CreateSnapshotsRequest.h>
#include <aws/ec2/model/CreateSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/CreateSubnetRequest.h>
#include <aws/ec2/model/CreateTagsRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/CreateTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/CreateVolumeRequest.h>
#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/ec2/model/CreateVpcEndpointRequest.h>
#include <aws/ec2/model/CreateVpcEndpointConnectionNotificationRequest.h>
#include <aws/ec2/model/CreateVpcEndpointServiceConfigurationRequest.h>
#include <aws/ec2/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRouteRequest.h>
#include <aws/ec2/model/CreateVpnGatewayRequest.h>
#include <aws/ec2/model/DeleteClientVpnEndpointRequest.h>
#include <aws/ec2/model/DeleteClientVpnRouteRequest.h>
#include <aws/ec2/model/DeleteCustomerGatewayRequest.h>
#include <aws/ec2/model/DeleteDhcpOptionsRequest.h>
#include <aws/ec2/model/DeleteEgressOnlyInternetGatewayRequest.h>
#include <aws/ec2/model/DeleteFleetsRequest.h>
#include <aws/ec2/model/DeleteFlowLogsRequest.h>
#include <aws/ec2/model/DeleteFpgaImageRequest.h>
#include <aws/ec2/model/DeleteInternetGatewayRequest.h>
#include <aws/ec2/model/DeleteKeyPairRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateVersionsRequest.h>
#include <aws/ec2/model/DeleteNatGatewayRequest.h>
#include <aws/ec2/model/DeleteNetworkAclRequest.h>
#include <aws/ec2/model/DeleteNetworkAclEntryRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfaceRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/DeletePlacementGroupRequest.h>
#include <aws/ec2/model/DeleteRouteRequest.h>
#include <aws/ec2/model/DeleteRouteTableRequest.h>
#include <aws/ec2/model/DeleteSecurityGroupRequest.h>
#include <aws/ec2/model/DeleteSnapshotRequest.h>
#include <aws/ec2/model/DeleteSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DeleteSubnetRequest.h>
#include <aws/ec2/model/DeleteTagsRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/DeleteVolumeRequest.h>
#include <aws/ec2/model/DeleteVpcRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointConnectionNotificationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointServiceConfigurationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointsRequest.h>
#include <aws/ec2/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRouteRequest.h>
#include <aws/ec2/model/DeleteVpnGatewayRequest.h>
#include <aws/ec2/model/DeprovisionByoipCidrRequest.h>
#include <aws/ec2/model/DeregisterImageRequest.h>
#include <aws/ec2/model/DescribeAccountAttributesRequest.h>
#include <aws/ec2/model/DescribeAddressesRequest.h>
#include <aws/ec2/model/DescribeAggregateIdFormatRequest.h>
#include <aws/ec2/model/DescribeAvailabilityZonesRequest.h>
#include <aws/ec2/model/DescribeBundleTasksRequest.h>
#include <aws/ec2/model/DescribeByoipCidrsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationsRequest.h>
#include <aws/ec2/model/DescribeClassicLinkInstancesRequest.h>
#include <aws/ec2/model/DescribeClientVpnAuthorizationRulesRequest.h>
#include <aws/ec2/model/DescribeClientVpnConnectionsRequest.h>
#include <aws/ec2/model/DescribeClientVpnEndpointsRequest.h>
#include <aws/ec2/model/DescribeClientVpnRoutesRequest.h>
#include <aws/ec2/model/DescribeClientVpnTargetNetworksRequest.h>
#include <aws/ec2/model/DescribeConversionTasksRequest.h>
#include <aws/ec2/model/DescribeCustomerGatewaysRequest.h>
#include <aws/ec2/model/DescribeDhcpOptionsRequest.h>
#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeElasticGpusRequest.h>
#include <aws/ec2/model/DescribeExportTasksRequest.h>
#include <aws/ec2/model/DescribeFleetHistoryRequest.h>
#include <aws/ec2/model/DescribeFleetInstancesRequest.h>
#include <aws/ec2/model/DescribeFleetsRequest.h>
#include <aws/ec2/model/DescribeFlowLogsRequest.h>
#include <aws/ec2/model/DescribeFpgaImageAttributeRequest.h>
#include <aws/ec2/model/DescribeFpgaImagesRequest.h>
#include <aws/ec2/model/DescribeHostReservationOfferingsRequest.h>
#include <aws/ec2/model/DescribeHostReservationsRequest.h>
#include <aws/ec2/model/DescribeHostsRequest.h>
#include <aws/ec2/model/DescribeIamInstanceProfileAssociationsRequest.h>
#include <aws/ec2/model/DescribeIdFormatRequest.h>
#include <aws/ec2/model/DescribeIdentityIdFormatRequest.h>
#include <aws/ec2/model/DescribeImageAttributeRequest.h>
#include <aws/ec2/model/DescribeImagesRequest.h>
#include <aws/ec2/model/DescribeImportImageTasksRequest.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksRequest.h>
#include <aws/ec2/model/DescribeInstanceAttributeRequest.h>
#include <aws/ec2/model/DescribeInstanceCreditSpecificationsRequest.h>
#include <aws/ec2/model/DescribeInstanceStatusRequest.h>
#include <aws/ec2/model/DescribeInstancesRequest.h>
#include <aws/ec2/model/DescribeInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeKeyPairsRequest.h>
#include <aws/ec2/model/DescribeLaunchTemplateVersionsRequest.h>
#include <aws/ec2/model/DescribeLaunchTemplatesRequest.h>
#include <aws/ec2/model/DescribeMovingAddressesRequest.h>
#include <aws/ec2/model/DescribeNatGatewaysRequest.h>
#include <aws/ec2/model/DescribeNetworkAclsRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfacePermissionsRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfacesRequest.h>
#include <aws/ec2/model/DescribePlacementGroupsRequest.h>
#include <aws/ec2/model/DescribePrefixListsRequest.h>
#include <aws/ec2/model/DescribePrincipalIdFormatRequest.h>
#include <aws/ec2/model/DescribePublicIpv4PoolsRequest.h>
#include <aws/ec2/model/DescribeRegionsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesListingsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesModificationsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesOfferingsRequest.h>
#include <aws/ec2/model/DescribeRouteTablesRequest.h>
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityRequest.h>
#include <aws/ec2/model/DescribeScheduledInstancesRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupReferencesRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeSnapshotAttributeRequest.h>
#include <aws/ec2/model/DescribeSnapshotsRequest.h>
#include <aws/ec2/model/DescribeSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DescribeSpotFleetInstancesRequest.h>
#include <aws/ec2/model/DescribeSpotFleetRequestHistoryRequest.h>
#include <aws/ec2/model/DescribeSpotFleetRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryRequest.h>
#include <aws/ec2/model/DescribeStaleSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeSubnetsRequest.h>
#include <aws/ec2/model/DescribeTagsRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorFiltersRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorSessionsRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorTargetsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayAttachmentsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayRouteTablesRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayVpcAttachmentsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewaysRequest.h>
#include <aws/ec2/model/DescribeVolumeAttributeRequest.h>
#include <aws/ec2/model/DescribeVolumeStatusRequest.h>
#include <aws/ec2/model/DescribeVolumesRequest.h>
#include <aws/ec2/model/DescribeVolumesModificationsRequest.h>
#include <aws/ec2/model/DescribeVpcAttributeRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionNotificationsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServiceConfigurationsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServicePermissionsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServicesRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointsRequest.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpcsRequest.h>
#include <aws/ec2/model/DescribeVpnConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpnGatewaysRequest.h>
#include <aws/ec2/model/DetachClassicLinkVpcRequest.h>
#include <aws/ec2/model/DetachInternetGatewayRequest.h>
#include <aws/ec2/model/DetachNetworkInterfaceRequest.h>
#include <aws/ec2/model/DetachVolumeRequest.h>
#include <aws/ec2/model/DetachVpnGatewayRequest.h>
#include <aws/ec2/model/DisableEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/DisableTransitGatewayRouteTablePropagationRequest.h>
#include <aws/ec2/model/DisableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/DisassociateAddressRequest.h>
#include <aws/ec2/model/DisassociateClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/DisassociateIamInstanceProfileRequest.h>
#include <aws/ec2/model/DisassociateRouteTableRequest.h>
#include <aws/ec2/model/DisassociateSubnetCidrBlockRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DisassociateVpcCidrBlockRequest.h>
#include <aws/ec2/model/EnableEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/EnableTransitGatewayRouteTablePropagationRequest.h>
#include <aws/ec2/model/EnableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/EnableVolumeIORequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkRequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/ExportClientVpnClientCertificateRevocationListRequest.h>
#include <aws/ec2/model/ExportClientVpnClientConfigurationRequest.h>
#include <aws/ec2/model/ExportTransitGatewayRoutesRequest.h>
#include <aws/ec2/model/GetConsoleOutputRequest.h>
#include <aws/ec2/model/GetConsoleScreenshotRequest.h>
#include <aws/ec2/model/GetEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/GetEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/GetHostReservationPurchasePreviewRequest.h>
#include <aws/ec2/model/GetLaunchTemplateDataRequest.h>
#include <aws/ec2/model/GetPasswordDataRequest.h>
#include <aws/ec2/model/GetReservedInstancesExchangeQuoteRequest.h>
#include <aws/ec2/model/GetTransitGatewayAttachmentPropagationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayRouteTableAssociationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayRouteTablePropagationsRequest.h>
#include <aws/ec2/model/ImportClientVpnClientCertificateRevocationListRequest.h>
#include <aws/ec2/model/ImportImageRequest.h>
#include <aws/ec2/model/ImportInstanceRequest.h>
#include <aws/ec2/model/ImportKeyPairRequest.h>
#include <aws/ec2/model/ImportSnapshotRequest.h>
#include <aws/ec2/model/ImportVolumeRequest.h>
#include <aws/ec2/model/ModifyCapacityReservationRequest.h>
#include <aws/ec2/model/ModifyClientVpnEndpointRequest.h>
#include <aws/ec2/model/ModifyEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/ModifyFleetRequest.h>
#include <aws/ec2/model/ModifyFpgaImageAttributeRequest.h>
#include <aws/ec2/model/ModifyHostsRequest.h>
#include <aws/ec2/model/ModifyIdFormatRequest.h>
#include <aws/ec2/model/ModifyIdentityIdFormatRequest.h>
#include <aws/ec2/model/ModifyImageAttributeRequest.h>
#include <aws/ec2/model/ModifyInstanceAttributeRequest.h>
#include <aws/ec2/model/ModifyInstanceCapacityReservationAttributesRequest.h>
#include <aws/ec2/model/ModifyInstanceCreditSpecificationRequest.h>
#include <aws/ec2/model/ModifyInstanceEventStartTimeRequest.h>
#include <aws/ec2/model/ModifyInstancePlacementRequest.h>
#include <aws/ec2/model/ModifyLaunchTemplateRequest.h>
#include <aws/ec2/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/ModifyReservedInstancesRequest.h>
#include <aws/ec2/model/ModifySnapshotAttributeRequest.h>
#include <aws/ec2/model/ModifySpotFleetRequestRequest.h>
#include <aws/ec2/model/ModifySubnetAttributeRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterNetworkServicesRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/ModifyVolumeRequest.h>
#include <aws/ec2/model/ModifyVolumeAttributeRequest.h>
#include <aws/ec2/model/ModifyVpcAttributeRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointConnectionNotificationRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServiceConfigurationRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServicePermissionsRequest.h>
#include <aws/ec2/model/ModifyVpcPeeringConnectionOptionsRequest.h>
#include <aws/ec2/model/ModifyVpcTenancyRequest.h>
#include <aws/ec2/model/ModifyVpnConnectionRequest.h>
#include <aws/ec2/model/MonitorInstancesRequest.h>
#include <aws/ec2/model/MoveAddressToVpcRequest.h>
#include <aws/ec2/model/ProvisionByoipCidrRequest.h>
#include <aws/ec2/model/PurchaseHostReservationRequest.h>
#include <aws/ec2/model/PurchaseReservedInstancesOfferingRequest.h>
#include <aws/ec2/model/PurchaseScheduledInstancesRequest.h>
#include <aws/ec2/model/RebootInstancesRequest.h>
#include <aws/ec2/model/RegisterImageRequest.h>
#include <aws/ec2/model/RejectTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/RejectVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/RejectVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/ReleaseAddressRequest.h>
#include <aws/ec2/model/ReleaseHostsRequest.h>
#include <aws/ec2/model/ReplaceIamInstanceProfileAssociationRequest.h>
#include <aws/ec2/model/ReplaceNetworkAclAssociationRequest.h>
#include <aws/ec2/model/ReplaceNetworkAclEntryRequest.h>
#include <aws/ec2/model/ReplaceRouteRequest.h>
#include <aws/ec2/model/ReplaceRouteTableAssociationRequest.h>
#include <aws/ec2/model/ReplaceTransitGatewayRouteRequest.h>
#include <aws/ec2/model/ReportInstanceStatusRequest.h>
#include <aws/ec2/model/RequestSpotFleetRequest.h>
#include <aws/ec2/model/RequestSpotInstancesRequest.h>
#include <aws/ec2/model/ResetEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/ResetFpgaImageAttributeRequest.h>
#include <aws/ec2/model/ResetImageAttributeRequest.h>
#include <aws/ec2/model/ResetInstanceAttributeRequest.h>
#include <aws/ec2/model/ResetNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/ResetSnapshotAttributeRequest.h>
#include <aws/ec2/model/RestoreAddressToClassicRequest.h>
#include <aws/ec2/model/RevokeClientVpnIngressRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/RunInstancesRequest.h>
#include <aws/ec2/model/RunScheduledInstancesRequest.h>
#include <aws/ec2/model/SearchTransitGatewayRoutesRequest.h>
#include <aws/ec2/model/StartInstancesRequest.h>
#include <aws/ec2/model/StopInstancesRequest.h>
#include <aws/ec2/model/TerminateClientVpnConnectionsRequest.h>
#include <aws/ec2/model/TerminateInstancesRequest.h>
#include <aws/ec2/model/UnassignIpv6AddressesRequest.h>
#include <aws/ec2/model/UnassignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/UnmonitorInstancesRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsEgressRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsIngressRequest.h>
#include <aws/ec2/model/WithdrawByoipCidrRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2;
using namespace Aws::EC2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "ec2";
static const char* ALLOCATION_TAG = "EC2Client";


EC2Client::EC2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2Client::EC2Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2Client::EC2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2Client::~EC2Client()
{
}

void EC2Client::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EC2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EC2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AcceptReservedInstancesExchangeQuoteOutcome EC2Client::AcceptReservedInstancesExchangeQuote(const AcceptReservedInstancesExchangeQuoteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AcceptReservedInstancesExchangeQuoteOutcome(AcceptReservedInstancesExchangeQuoteResponse(outcome.GetResult()));
  }
  else
  {
    return AcceptReservedInstancesExchangeQuoteOutcome(outcome.GetError());
  }
}

AcceptReservedInstancesExchangeQuoteOutcomeCallable EC2Client::AcceptReservedInstancesExchangeQuoteCallable(const AcceptReservedInstancesExchangeQuoteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptReservedInstancesExchangeQuoteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptReservedInstancesExchangeQuote(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AcceptReservedInstancesExchangeQuoteAsync(const AcceptReservedInstancesExchangeQuoteRequest& request, const AcceptReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptReservedInstancesExchangeQuoteAsyncHelper( request, handler, context ); } );
}

void EC2Client::AcceptReservedInstancesExchangeQuoteAsyncHelper(const AcceptReservedInstancesExchangeQuoteRequest& request, const AcceptReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptReservedInstancesExchangeQuote(request), context);
}

AcceptTransitGatewayVpcAttachmentOutcome EC2Client::AcceptTransitGatewayVpcAttachment(const AcceptTransitGatewayVpcAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AcceptTransitGatewayVpcAttachmentOutcome(AcceptTransitGatewayVpcAttachmentResponse(outcome.GetResult()));
  }
  else
  {
    return AcceptTransitGatewayVpcAttachmentOutcome(outcome.GetError());
  }
}

AcceptTransitGatewayVpcAttachmentOutcomeCallable EC2Client::AcceptTransitGatewayVpcAttachmentCallable(const AcceptTransitGatewayVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptTransitGatewayVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AcceptTransitGatewayVpcAttachmentAsync(const AcceptTransitGatewayVpcAttachmentRequest& request, const AcceptTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptTransitGatewayVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void EC2Client::AcceptTransitGatewayVpcAttachmentAsyncHelper(const AcceptTransitGatewayVpcAttachmentRequest& request, const AcceptTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptTransitGatewayVpcAttachment(request), context);
}

AcceptVpcEndpointConnectionsOutcome EC2Client::AcceptVpcEndpointConnections(const AcceptVpcEndpointConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AcceptVpcEndpointConnectionsOutcome(AcceptVpcEndpointConnectionsResponse(outcome.GetResult()));
  }
  else
  {
    return AcceptVpcEndpointConnectionsOutcome(outcome.GetError());
  }
}

AcceptVpcEndpointConnectionsOutcomeCallable EC2Client::AcceptVpcEndpointConnectionsCallable(const AcceptVpcEndpointConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptVpcEndpointConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptVpcEndpointConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AcceptVpcEndpointConnectionsAsync(const AcceptVpcEndpointConnectionsRequest& request, const AcceptVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptVpcEndpointConnectionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::AcceptVpcEndpointConnectionsAsyncHelper(const AcceptVpcEndpointConnectionsRequest& request, const AcceptVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptVpcEndpointConnections(request), context);
}

AcceptVpcPeeringConnectionOutcome EC2Client::AcceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AcceptVpcPeeringConnectionOutcome(AcceptVpcPeeringConnectionResponse(outcome.GetResult()));
  }
  else
  {
    return AcceptVpcPeeringConnectionOutcome(outcome.GetError());
  }
}

AcceptVpcPeeringConnectionOutcomeCallable EC2Client::AcceptVpcPeeringConnectionCallable(const AcceptVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AcceptVpcPeeringConnectionAsync(const AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptVpcPeeringConnectionAsyncHelper( request, handler, context ); } );
}

void EC2Client::AcceptVpcPeeringConnectionAsyncHelper(const AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptVpcPeeringConnection(request), context);
}

AdvertiseByoipCidrOutcome EC2Client::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AdvertiseByoipCidrOutcome(AdvertiseByoipCidrResponse(outcome.GetResult()));
  }
  else
  {
    return AdvertiseByoipCidrOutcome(outcome.GetError());
  }
}

AdvertiseByoipCidrOutcomeCallable EC2Client::AdvertiseByoipCidrCallable(const AdvertiseByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdvertiseByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdvertiseByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AdvertiseByoipCidrAsync(const AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdvertiseByoipCidrAsyncHelper( request, handler, context ); } );
}

void EC2Client::AdvertiseByoipCidrAsyncHelper(const AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdvertiseByoipCidr(request), context);
}

AllocateAddressOutcome EC2Client::AllocateAddress(const AllocateAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AllocateAddressOutcome(AllocateAddressResponse(outcome.GetResult()));
  }
  else
  {
    return AllocateAddressOutcome(outcome.GetError());
  }
}

AllocateAddressOutcomeCallable EC2Client::AllocateAddressCallable(const AllocateAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AllocateAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllocateAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AllocateAddressAsync(const AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AllocateAddressAsyncHelper( request, handler, context ); } );
}

void EC2Client::AllocateAddressAsyncHelper(const AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateAddress(request), context);
}

AllocateHostsOutcome EC2Client::AllocateHosts(const AllocateHostsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AllocateHostsOutcome(AllocateHostsResponse(outcome.GetResult()));
  }
  else
  {
    return AllocateHostsOutcome(outcome.GetError());
  }
}

AllocateHostsOutcomeCallable EC2Client::AllocateHostsCallable(const AllocateHostsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AllocateHostsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllocateHosts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AllocateHostsAsync(const AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AllocateHostsAsyncHelper( request, handler, context ); } );
}

void EC2Client::AllocateHostsAsyncHelper(const AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateHosts(request), context);
}

ApplySecurityGroupsToClientVpnTargetNetworkOutcome EC2Client::ApplySecurityGroupsToClientVpnTargetNetwork(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ApplySecurityGroupsToClientVpnTargetNetworkOutcome(ApplySecurityGroupsToClientVpnTargetNetworkResponse(outcome.GetResult()));
  }
  else
  {
    return ApplySecurityGroupsToClientVpnTargetNetworkOutcome(outcome.GetError());
  }
}

ApplySecurityGroupsToClientVpnTargetNetworkOutcomeCallable EC2Client::ApplySecurityGroupsToClientVpnTargetNetworkCallable(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplySecurityGroupsToClientVpnTargetNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplySecurityGroupsToClientVpnTargetNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ApplySecurityGroupsToClientVpnTargetNetworkAsync(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request, const ApplySecurityGroupsToClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplySecurityGroupsToClientVpnTargetNetworkAsyncHelper( request, handler, context ); } );
}

void EC2Client::ApplySecurityGroupsToClientVpnTargetNetworkAsyncHelper(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request, const ApplySecurityGroupsToClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplySecurityGroupsToClientVpnTargetNetwork(request), context);
}

AssignIpv6AddressesOutcome EC2Client::AssignIpv6Addresses(const AssignIpv6AddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssignIpv6AddressesOutcome(AssignIpv6AddressesResponse(outcome.GetResult()));
  }
  else
  {
    return AssignIpv6AddressesOutcome(outcome.GetError());
  }
}

AssignIpv6AddressesOutcomeCallable EC2Client::AssignIpv6AddressesCallable(const AssignIpv6AddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignIpv6AddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignIpv6Addresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssignIpv6AddressesAsync(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssignIpv6AddressesAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssignIpv6AddressesAsyncHelper(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignIpv6Addresses(request), context);
}

AssignPrivateIpAddressesOutcome EC2Client::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssignPrivateIpAddressesOutcome(AssignPrivateIpAddressesResponse(outcome.GetResult()));
  }
  else
  {
    return AssignPrivateIpAddressesOutcome(outcome.GetError());
  }
}

AssignPrivateIpAddressesOutcomeCallable EC2Client::AssignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignPrivateIpAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignPrivateIpAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssignPrivateIpAddressesAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssignPrivateIpAddressesAsyncHelper(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignPrivateIpAddresses(request), context);
}

AssociateAddressOutcome EC2Client::AssociateAddress(const AssociateAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateAddressOutcome(AssociateAddressResponse(outcome.GetResult()));
  }
  else
  {
    return AssociateAddressOutcome(outcome.GetError());
  }
}

AssociateAddressOutcomeCallable EC2Client::AssociateAddressCallable(const AssociateAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateAddressAsync(const AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateAddressAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateAddressAsyncHelper(const AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateAddress(request), context);
}

AssociateClientVpnTargetNetworkOutcome EC2Client::AssociateClientVpnTargetNetwork(const AssociateClientVpnTargetNetworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateClientVpnTargetNetworkOutcome(AssociateClientVpnTargetNetworkResponse(outcome.GetResult()));
  }
  else
  {
    return AssociateClientVpnTargetNetworkOutcome(outcome.GetError());
  }
}

AssociateClientVpnTargetNetworkOutcomeCallable EC2Client::AssociateClientVpnTargetNetworkCallable(const AssociateClientVpnTargetNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateClientVpnTargetNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateClientVpnTargetNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateClientVpnTargetNetworkAsync(const AssociateClientVpnTargetNetworkRequest& request, const AssociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateClientVpnTargetNetworkAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateClientVpnTargetNetworkAsyncHelper(const AssociateClientVpnTargetNetworkRequest& request, const AssociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateClientVpnTargetNetwork(request), context);
}

AssociateDhcpOptionsOutcome EC2Client::AssociateDhcpOptions(const AssociateDhcpOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateDhcpOptionsOutcome(NoResult());
  }
  else
  {
    return AssociateDhcpOptionsOutcome(outcome.GetError());
  }
}

AssociateDhcpOptionsOutcomeCallable EC2Client::AssociateDhcpOptionsCallable(const AssociateDhcpOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDhcpOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateDhcpOptionsAsync(const AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDhcpOptionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateDhcpOptionsAsyncHelper(const AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDhcpOptions(request), context);
}

AssociateIamInstanceProfileOutcome EC2Client::AssociateIamInstanceProfile(const AssociateIamInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateIamInstanceProfileOutcome(AssociateIamInstanceProfileResponse(outcome.GetResult()));
  }
  else
  {
    return AssociateIamInstanceProfileOutcome(outcome.GetError());
  }
}

AssociateIamInstanceProfileOutcomeCallable EC2Client::AssociateIamInstanceProfileCallable(const AssociateIamInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateIamInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateIamInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateIamInstanceProfileAsync(const AssociateIamInstanceProfileRequest& request, const AssociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateIamInstanceProfileAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateIamInstanceProfileAsyncHelper(const AssociateIamInstanceProfileRequest& request, const AssociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateIamInstanceProfile(request), context);
}

AssociateRouteTableOutcome EC2Client::AssociateRouteTable(const AssociateRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateRouteTableOutcome(AssociateRouteTableResponse(outcome.GetResult()));
  }
  else
  {
    return AssociateRouteTableOutcome(outcome.GetError());
  }
}

AssociateRouteTableOutcomeCallable EC2Client::AssociateRouteTableCallable(const AssociateRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateRouteTableAsync(const AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateRouteTableAsyncHelper(const AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateRouteTable(request), context);
}

AssociateSubnetCidrBlockOutcome EC2Client::AssociateSubnetCidrBlock(const AssociateSubnetCidrBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateSubnetCidrBlockOutcome(AssociateSubnetCidrBlockResponse(outcome.GetResult()));
  }
  else
  {
    return AssociateSubnetCidrBlockOutcome(outcome.GetError());
  }
}

AssociateSubnetCidrBlockOutcomeCallable EC2Client::AssociateSubnetCidrBlockCallable(const AssociateSubnetCidrBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSubnetCidrBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSubnetCidrBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateSubnetCidrBlockAsync(const AssociateSubnetCidrBlockRequest& request, const AssociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSubnetCidrBlockAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateSubnetCidrBlockAsyncHelper(const AssociateSubnetCidrBlockRequest& request, const AssociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSubnetCidrBlock(request), context);
}

AssociateTransitGatewayRouteTableOutcome EC2Client::AssociateTransitGatewayRouteTable(const AssociateTransitGatewayRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateTransitGatewayRouteTableOutcome(AssociateTransitGatewayRouteTableResponse(outcome.GetResult()));
  }
  else
  {
    return AssociateTransitGatewayRouteTableOutcome(outcome.GetError());
  }
}

AssociateTransitGatewayRouteTableOutcomeCallable EC2Client::AssociateTransitGatewayRouteTableCallable(const AssociateTransitGatewayRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTransitGatewayRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateTransitGatewayRouteTableAsync(const AssociateTransitGatewayRouteTableRequest& request, const AssociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateTransitGatewayRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateTransitGatewayRouteTableAsyncHelper(const AssociateTransitGatewayRouteTableRequest& request, const AssociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateTransitGatewayRouteTable(request), context);
}

AssociateVpcCidrBlockOutcome EC2Client::AssociateVpcCidrBlock(const AssociateVpcCidrBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateVpcCidrBlockOutcome(AssociateVpcCidrBlockResponse(outcome.GetResult()));
  }
  else
  {
    return AssociateVpcCidrBlockOutcome(outcome.GetError());
  }
}

AssociateVpcCidrBlockOutcomeCallable EC2Client::AssociateVpcCidrBlockCallable(const AssociateVpcCidrBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateVpcCidrBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateVpcCidrBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AssociateVpcCidrBlockAsync(const AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateVpcCidrBlockAsyncHelper( request, handler, context ); } );
}

void EC2Client::AssociateVpcCidrBlockAsyncHelper(const AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateVpcCidrBlock(request), context);
}

AttachClassicLinkVpcOutcome EC2Client::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachClassicLinkVpcOutcome(AttachClassicLinkVpcResponse(outcome.GetResult()));
  }
  else
  {
    return AttachClassicLinkVpcOutcome(outcome.GetError());
  }
}

AttachClassicLinkVpcOutcomeCallable EC2Client::AttachClassicLinkVpcCallable(const AttachClassicLinkVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachClassicLinkVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachClassicLinkVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AttachClassicLinkVpcAsync(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachClassicLinkVpcAsyncHelper( request, handler, context ); } );
}

void EC2Client::AttachClassicLinkVpcAsyncHelper(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachClassicLinkVpc(request), context);
}

AttachInternetGatewayOutcome EC2Client::AttachInternetGateway(const AttachInternetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachInternetGatewayOutcome(NoResult());
  }
  else
  {
    return AttachInternetGatewayOutcome(outcome.GetError());
  }
}

AttachInternetGatewayOutcomeCallable EC2Client::AttachInternetGatewayCallable(const AttachInternetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachInternetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AttachInternetGatewayAsync(const AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachInternetGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::AttachInternetGatewayAsyncHelper(const AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachInternetGateway(request), context);
}

AttachNetworkInterfaceOutcome EC2Client::AttachNetworkInterface(const AttachNetworkInterfaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachNetworkInterfaceOutcome(AttachNetworkInterfaceResponse(outcome.GetResult()));
  }
  else
  {
    return AttachNetworkInterfaceOutcome(outcome.GetError());
  }
}

AttachNetworkInterfaceOutcomeCallable EC2Client::AttachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachNetworkInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AttachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachNetworkInterfaceAsyncHelper( request, handler, context ); } );
}

void EC2Client::AttachNetworkInterfaceAsyncHelper(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachNetworkInterface(request), context);
}

AttachVolumeOutcome EC2Client::AttachVolume(const AttachVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachVolumeOutcome(AttachVolumeResponse(outcome.GetResult()));
  }
  else
  {
    return AttachVolumeOutcome(outcome.GetError());
  }
}

AttachVolumeOutcomeCallable EC2Client::AttachVolumeCallable(const AttachVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AttachVolumeAsync(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachVolumeAsyncHelper( request, handler, context ); } );
}

void EC2Client::AttachVolumeAsyncHelper(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachVolume(request), context);
}

AttachVpnGatewayOutcome EC2Client::AttachVpnGateway(const AttachVpnGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachVpnGatewayOutcome(AttachVpnGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return AttachVpnGatewayOutcome(outcome.GetError());
  }
}

AttachVpnGatewayOutcomeCallable EC2Client::AttachVpnGatewayCallable(const AttachVpnGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachVpnGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AttachVpnGatewayAsync(const AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachVpnGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::AttachVpnGatewayAsyncHelper(const AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachVpnGateway(request), context);
}

AuthorizeClientVpnIngressOutcome EC2Client::AuthorizeClientVpnIngress(const AuthorizeClientVpnIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AuthorizeClientVpnIngressOutcome(AuthorizeClientVpnIngressResponse(outcome.GetResult()));
  }
  else
  {
    return AuthorizeClientVpnIngressOutcome(outcome.GetError());
  }
}

AuthorizeClientVpnIngressOutcomeCallable EC2Client::AuthorizeClientVpnIngressCallable(const AuthorizeClientVpnIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeClientVpnIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeClientVpnIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AuthorizeClientVpnIngressAsync(const AuthorizeClientVpnIngressRequest& request, const AuthorizeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AuthorizeClientVpnIngressAsyncHelper( request, handler, context ); } );
}

void EC2Client::AuthorizeClientVpnIngressAsyncHelper(const AuthorizeClientVpnIngressRequest& request, const AuthorizeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeClientVpnIngress(request), context);
}

AuthorizeSecurityGroupEgressOutcome EC2Client::AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AuthorizeSecurityGroupEgressOutcome(NoResult());
  }
  else
  {
    return AuthorizeSecurityGroupEgressOutcome(outcome.GetError());
  }
}

AuthorizeSecurityGroupEgressOutcomeCallable EC2Client::AuthorizeSecurityGroupEgressCallable(const AuthorizeSecurityGroupEgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeSecurityGroupEgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeSecurityGroupEgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AuthorizeSecurityGroupEgressAsync(const AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AuthorizeSecurityGroupEgressAsyncHelper( request, handler, context ); } );
}

void EC2Client::AuthorizeSecurityGroupEgressAsyncHelper(const AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeSecurityGroupEgress(request), context);
}

AuthorizeSecurityGroupIngressOutcome EC2Client::AuthorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AuthorizeSecurityGroupIngressOutcome(NoResult());
  }
  else
  {
    return AuthorizeSecurityGroupIngressOutcome(outcome.GetError());
  }
}

AuthorizeSecurityGroupIngressOutcomeCallable EC2Client::AuthorizeSecurityGroupIngressCallable(const AuthorizeSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::AuthorizeSecurityGroupIngressAsync(const AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AuthorizeSecurityGroupIngressAsyncHelper( request, handler, context ); } );
}

void EC2Client::AuthorizeSecurityGroupIngressAsyncHelper(const AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeSecurityGroupIngress(request), context);
}

BundleInstanceOutcome EC2Client::BundleInstance(const BundleInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BundleInstanceOutcome(BundleInstanceResponse(outcome.GetResult()));
  }
  else
  {
    return BundleInstanceOutcome(outcome.GetError());
  }
}

BundleInstanceOutcomeCallable EC2Client::BundleInstanceCallable(const BundleInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BundleInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BundleInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::BundleInstanceAsync(const BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BundleInstanceAsyncHelper( request, handler, context ); } );
}

void EC2Client::BundleInstanceAsyncHelper(const BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BundleInstance(request), context);
}

CancelBundleTaskOutcome EC2Client::CancelBundleTask(const CancelBundleTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelBundleTaskOutcome(CancelBundleTaskResponse(outcome.GetResult()));
  }
  else
  {
    return CancelBundleTaskOutcome(outcome.GetError());
  }
}

CancelBundleTaskOutcomeCallable EC2Client::CancelBundleTaskCallable(const CancelBundleTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelBundleTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelBundleTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelBundleTaskAsync(const CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelBundleTaskAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelBundleTaskAsyncHelper(const CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelBundleTask(request), context);
}

CancelCapacityReservationOutcome EC2Client::CancelCapacityReservation(const CancelCapacityReservationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelCapacityReservationOutcome(CancelCapacityReservationResponse(outcome.GetResult()));
  }
  else
  {
    return CancelCapacityReservationOutcome(outcome.GetError());
  }
}

CancelCapacityReservationOutcomeCallable EC2Client::CancelCapacityReservationCallable(const CancelCapacityReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelCapacityReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelCapacityReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelCapacityReservationAsync(const CancelCapacityReservationRequest& request, const CancelCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelCapacityReservationAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelCapacityReservationAsyncHelper(const CancelCapacityReservationRequest& request, const CancelCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelCapacityReservation(request), context);
}

CancelConversionTaskOutcome EC2Client::CancelConversionTask(const CancelConversionTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelConversionTaskOutcome(NoResult());
  }
  else
  {
    return CancelConversionTaskOutcome(outcome.GetError());
  }
}

CancelConversionTaskOutcomeCallable EC2Client::CancelConversionTaskCallable(const CancelConversionTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelConversionTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelConversionTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelConversionTaskAsync(const CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelConversionTaskAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelConversionTaskAsyncHelper(const CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelConversionTask(request), context);
}

CancelExportTaskOutcome EC2Client::CancelExportTask(const CancelExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelExportTaskOutcome(NoResult());
  }
  else
  {
    return CancelExportTaskOutcome(outcome.GetError());
  }
}

CancelExportTaskOutcomeCallable EC2Client::CancelExportTaskCallable(const CancelExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelExportTaskAsync(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelExportTaskAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelExportTaskAsyncHelper(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelExportTask(request), context);
}

CancelImportTaskOutcome EC2Client::CancelImportTask(const CancelImportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelImportTaskOutcome(CancelImportTaskResponse(outcome.GetResult()));
  }
  else
  {
    return CancelImportTaskOutcome(outcome.GetError());
  }
}

CancelImportTaskOutcomeCallable EC2Client::CancelImportTaskCallable(const CancelImportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelImportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelImportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelImportTaskAsync(const CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelImportTaskAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelImportTaskAsyncHelper(const CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelImportTask(request), context);
}

CancelReservedInstancesListingOutcome EC2Client::CancelReservedInstancesListing(const CancelReservedInstancesListingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelReservedInstancesListingOutcome(CancelReservedInstancesListingResponse(outcome.GetResult()));
  }
  else
  {
    return CancelReservedInstancesListingOutcome(outcome.GetError());
  }
}

CancelReservedInstancesListingOutcomeCallable EC2Client::CancelReservedInstancesListingCallable(const CancelReservedInstancesListingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelReservedInstancesListingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelReservedInstancesListing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelReservedInstancesListingAsync(const CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelReservedInstancesListingAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelReservedInstancesListingAsyncHelper(const CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelReservedInstancesListing(request), context);
}

CancelSpotFleetRequestsOutcome EC2Client::CancelSpotFleetRequests(const CancelSpotFleetRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelSpotFleetRequestsOutcome(CancelSpotFleetRequestsResponse(outcome.GetResult()));
  }
  else
  {
    return CancelSpotFleetRequestsOutcome(outcome.GetError());
  }
}

CancelSpotFleetRequestsOutcomeCallable EC2Client::CancelSpotFleetRequestsCallable(const CancelSpotFleetRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSpotFleetRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSpotFleetRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelSpotFleetRequestsAsync(const CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelSpotFleetRequestsAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelSpotFleetRequestsAsyncHelper(const CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSpotFleetRequests(request), context);
}

CancelSpotInstanceRequestsOutcome EC2Client::CancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelSpotInstanceRequestsOutcome(CancelSpotInstanceRequestsResponse(outcome.GetResult()));
  }
  else
  {
    return CancelSpotInstanceRequestsOutcome(outcome.GetError());
  }
}

CancelSpotInstanceRequestsOutcomeCallable EC2Client::CancelSpotInstanceRequestsCallable(const CancelSpotInstanceRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSpotInstanceRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSpotInstanceRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CancelSpotInstanceRequestsAsync(const CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelSpotInstanceRequestsAsyncHelper( request, handler, context ); } );
}

void EC2Client::CancelSpotInstanceRequestsAsyncHelper(const CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSpotInstanceRequests(request), context);
}

ConfirmProductInstanceOutcome EC2Client::ConfirmProductInstance(const ConfirmProductInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfirmProductInstanceOutcome(ConfirmProductInstanceResponse(outcome.GetResult()));
  }
  else
  {
    return ConfirmProductInstanceOutcome(outcome.GetError());
  }
}

ConfirmProductInstanceOutcomeCallable EC2Client::ConfirmProductInstanceCallable(const ConfirmProductInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmProductInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmProductInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ConfirmProductInstanceAsync(const ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmProductInstanceAsyncHelper( request, handler, context ); } );
}

void EC2Client::ConfirmProductInstanceAsyncHelper(const ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmProductInstance(request), context);
}

CopyFpgaImageOutcome EC2Client::CopyFpgaImage(const CopyFpgaImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopyFpgaImageOutcome(CopyFpgaImageResponse(outcome.GetResult()));
  }
  else
  {
    return CopyFpgaImageOutcome(outcome.GetError());
  }
}

CopyFpgaImageOutcomeCallable EC2Client::CopyFpgaImageCallable(const CopyFpgaImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyFpgaImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyFpgaImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CopyFpgaImageAsync(const CopyFpgaImageRequest& request, const CopyFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyFpgaImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::CopyFpgaImageAsyncHelper(const CopyFpgaImageRequest& request, const CopyFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyFpgaImage(request), context);
}

CopyImageOutcome EC2Client::CopyImage(const CopyImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopyImageOutcome(CopyImageResponse(outcome.GetResult()));
  }
  else
  {
    return CopyImageOutcome(outcome.GetError());
  }
}

CopyImageOutcomeCallable EC2Client::CopyImageCallable(const CopyImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CopyImageAsync(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::CopyImageAsyncHelper(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyImage(request), context);
}

CopySnapshotOutcome EC2Client::CopySnapshot(const CopySnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CopySnapshotOutcome(CopySnapshotResponse(outcome.GetResult()));
  }
  else
  {
    return CopySnapshotOutcome(outcome.GetError());
  }
}

CopySnapshotOutcomeCallable EC2Client::CopySnapshotCallable(const CopySnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopySnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopySnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopySnapshotAsyncHelper( request, handler, context ); } );
}

void EC2Client::CopySnapshotAsyncHelper(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopySnapshot(request), context);
}

CreateCapacityReservationOutcome EC2Client::CreateCapacityReservation(const CreateCapacityReservationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCapacityReservationOutcome(CreateCapacityReservationResponse(outcome.GetResult()));
  }
  else
  {
    return CreateCapacityReservationOutcome(outcome.GetError());
  }
}

CreateCapacityReservationOutcomeCallable EC2Client::CreateCapacityReservationCallable(const CreateCapacityReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCapacityReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCapacityReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateCapacityReservationAsync(const CreateCapacityReservationRequest& request, const CreateCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCapacityReservationAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateCapacityReservationAsyncHelper(const CreateCapacityReservationRequest& request, const CreateCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCapacityReservation(request), context);
}

CreateClientVpnEndpointOutcome EC2Client::CreateClientVpnEndpoint(const CreateClientVpnEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClientVpnEndpointOutcome(CreateClientVpnEndpointResponse(outcome.GetResult()));
  }
  else
  {
    return CreateClientVpnEndpointOutcome(outcome.GetError());
  }
}

CreateClientVpnEndpointOutcomeCallable EC2Client::CreateClientVpnEndpointCallable(const CreateClientVpnEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClientVpnEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClientVpnEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateClientVpnEndpointAsync(const CreateClientVpnEndpointRequest& request, const CreateClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateClientVpnEndpointAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateClientVpnEndpointAsyncHelper(const CreateClientVpnEndpointRequest& request, const CreateClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateClientVpnEndpoint(request), context);
}

CreateClientVpnRouteOutcome EC2Client::CreateClientVpnRoute(const CreateClientVpnRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClientVpnRouteOutcome(CreateClientVpnRouteResponse(outcome.GetResult()));
  }
  else
  {
    return CreateClientVpnRouteOutcome(outcome.GetError());
  }
}

CreateClientVpnRouteOutcomeCallable EC2Client::CreateClientVpnRouteCallable(const CreateClientVpnRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClientVpnRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClientVpnRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateClientVpnRouteAsync(const CreateClientVpnRouteRequest& request, const CreateClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateClientVpnRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateClientVpnRouteAsyncHelper(const CreateClientVpnRouteRequest& request, const CreateClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateClientVpnRoute(request), context);
}

CreateCustomerGatewayOutcome EC2Client::CreateCustomerGateway(const CreateCustomerGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCustomerGatewayOutcome(CreateCustomerGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return CreateCustomerGatewayOutcome(outcome.GetError());
  }
}

CreateCustomerGatewayOutcomeCallable EC2Client::CreateCustomerGatewayCallable(const CreateCustomerGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomerGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomerGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomerGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateCustomerGatewayAsyncHelper(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomerGateway(request), context);
}

CreateDefaultSubnetOutcome EC2Client::CreateDefaultSubnet(const CreateDefaultSubnetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDefaultSubnetOutcome(CreateDefaultSubnetResponse(outcome.GetResult()));
  }
  else
  {
    return CreateDefaultSubnetOutcome(outcome.GetError());
  }
}

CreateDefaultSubnetOutcomeCallable EC2Client::CreateDefaultSubnetCallable(const CreateDefaultSubnetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDefaultSubnetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDefaultSubnet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateDefaultSubnetAsync(const CreateDefaultSubnetRequest& request, const CreateDefaultSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDefaultSubnetAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateDefaultSubnetAsyncHelper(const CreateDefaultSubnetRequest& request, const CreateDefaultSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDefaultSubnet(request), context);
}

CreateDefaultVpcOutcome EC2Client::CreateDefaultVpc(const CreateDefaultVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDefaultVpcOutcome(CreateDefaultVpcResponse(outcome.GetResult()));
  }
  else
  {
    return CreateDefaultVpcOutcome(outcome.GetError());
  }
}

CreateDefaultVpcOutcomeCallable EC2Client::CreateDefaultVpcCallable(const CreateDefaultVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDefaultVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDefaultVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateDefaultVpcAsync(const CreateDefaultVpcRequest& request, const CreateDefaultVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDefaultVpcAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateDefaultVpcAsyncHelper(const CreateDefaultVpcRequest& request, const CreateDefaultVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDefaultVpc(request), context);
}

CreateDhcpOptionsOutcome EC2Client::CreateDhcpOptions(const CreateDhcpOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDhcpOptionsOutcome(CreateDhcpOptionsResponse(outcome.GetResult()));
  }
  else
  {
    return CreateDhcpOptionsOutcome(outcome.GetError());
  }
}

CreateDhcpOptionsOutcomeCallable EC2Client::CreateDhcpOptionsCallable(const CreateDhcpOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDhcpOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateDhcpOptionsAsync(const CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDhcpOptionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateDhcpOptionsAsyncHelper(const CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDhcpOptions(request), context);
}

CreateEgressOnlyInternetGatewayOutcome EC2Client::CreateEgressOnlyInternetGateway(const CreateEgressOnlyInternetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateEgressOnlyInternetGatewayOutcome(CreateEgressOnlyInternetGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return CreateEgressOnlyInternetGatewayOutcome(outcome.GetError());
  }
}

CreateEgressOnlyInternetGatewayOutcomeCallable EC2Client::CreateEgressOnlyInternetGatewayCallable(const CreateEgressOnlyInternetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEgressOnlyInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEgressOnlyInternetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateEgressOnlyInternetGatewayAsync(const CreateEgressOnlyInternetGatewayRequest& request, const CreateEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEgressOnlyInternetGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateEgressOnlyInternetGatewayAsyncHelper(const CreateEgressOnlyInternetGatewayRequest& request, const CreateEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEgressOnlyInternetGateway(request), context);
}

CreateFleetOutcome EC2Client::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFleetOutcome(CreateFleetResponse(outcome.GetResult()));
  }
  else
  {
    return CreateFleetOutcome(outcome.GetError());
  }
}

CreateFleetOutcomeCallable EC2Client::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFleetAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateFleetAsyncHelper(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFleet(request), context);
}

CreateFlowLogsOutcome EC2Client::CreateFlowLogs(const CreateFlowLogsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFlowLogsOutcome(CreateFlowLogsResponse(outcome.GetResult()));
  }
  else
  {
    return CreateFlowLogsOutcome(outcome.GetError());
  }
}

CreateFlowLogsOutcomeCallable EC2Client::CreateFlowLogsCallable(const CreateFlowLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlowLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateFlowLogsAsync(const CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFlowLogsAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateFlowLogsAsyncHelper(const CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFlowLogs(request), context);
}

CreateFpgaImageOutcome EC2Client::CreateFpgaImage(const CreateFpgaImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFpgaImageOutcome(CreateFpgaImageResponse(outcome.GetResult()));
  }
  else
  {
    return CreateFpgaImageOutcome(outcome.GetError());
  }
}

CreateFpgaImageOutcomeCallable EC2Client::CreateFpgaImageCallable(const CreateFpgaImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFpgaImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFpgaImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateFpgaImageAsync(const CreateFpgaImageRequest& request, const CreateFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFpgaImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateFpgaImageAsyncHelper(const CreateFpgaImageRequest& request, const CreateFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFpgaImage(request), context);
}

CreateImageOutcome EC2Client::CreateImage(const CreateImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateImageOutcome(CreateImageResponse(outcome.GetResult()));
  }
  else
  {
    return CreateImageOutcome(outcome.GetError());
  }
}

CreateImageOutcomeCallable EC2Client::CreateImageCallable(const CreateImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateImageAsync(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateImageAsyncHelper(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateImage(request), context);
}

CreateInstanceExportTaskOutcome EC2Client::CreateInstanceExportTask(const CreateInstanceExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInstanceExportTaskOutcome(CreateInstanceExportTaskResponse(outcome.GetResult()));
  }
  else
  {
    return CreateInstanceExportTaskOutcome(outcome.GetError());
  }
}

CreateInstanceExportTaskOutcomeCallable EC2Client::CreateInstanceExportTaskCallable(const CreateInstanceExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateInstanceExportTaskAsync(const CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstanceExportTaskAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateInstanceExportTaskAsyncHelper(const CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstanceExportTask(request), context);
}

CreateInternetGatewayOutcome EC2Client::CreateInternetGateway(const CreateInternetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInternetGatewayOutcome(CreateInternetGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return CreateInternetGatewayOutcome(outcome.GetError());
  }
}

CreateInternetGatewayOutcomeCallable EC2Client::CreateInternetGatewayCallable(const CreateInternetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInternetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateInternetGatewayAsync(const CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInternetGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateInternetGatewayAsyncHelper(const CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInternetGateway(request), context);
}

CreateKeyPairOutcome EC2Client::CreateKeyPair(const CreateKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateKeyPairOutcome(CreateKeyPairResponse(outcome.GetResult()));
  }
  else
  {
    return CreateKeyPairOutcome(outcome.GetError());
  }
}

CreateKeyPairOutcomeCallable EC2Client::CreateKeyPairCallable(const CreateKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateKeyPairAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateKeyPairAsyncHelper(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeyPair(request), context);
}

CreateLaunchTemplateOutcome EC2Client::CreateLaunchTemplate(const CreateLaunchTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLaunchTemplateOutcome(CreateLaunchTemplateResponse(outcome.GetResult()));
  }
  else
  {
    return CreateLaunchTemplateOutcome(outcome.GetError());
  }
}

CreateLaunchTemplateOutcomeCallable EC2Client::CreateLaunchTemplateCallable(const CreateLaunchTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunchTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateLaunchTemplateAsync(const CreateLaunchTemplateRequest& request, const CreateLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLaunchTemplateAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateLaunchTemplateAsyncHelper(const CreateLaunchTemplateRequest& request, const CreateLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLaunchTemplate(request), context);
}

CreateLaunchTemplateVersionOutcome EC2Client::CreateLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLaunchTemplateVersionOutcome(CreateLaunchTemplateVersionResponse(outcome.GetResult()));
  }
  else
  {
    return CreateLaunchTemplateVersionOutcome(outcome.GetError());
  }
}

CreateLaunchTemplateVersionOutcomeCallable EC2Client::CreateLaunchTemplateVersionCallable(const CreateLaunchTemplateVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunchTemplateVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateLaunchTemplateVersionAsync(const CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLaunchTemplateVersionAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateLaunchTemplateVersionAsyncHelper(const CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLaunchTemplateVersion(request), context);
}

CreateNatGatewayOutcome EC2Client::CreateNatGateway(const CreateNatGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateNatGatewayOutcome(CreateNatGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return CreateNatGatewayOutcome(outcome.GetError());
  }
}

CreateNatGatewayOutcomeCallable EC2Client::CreateNatGatewayCallable(const CreateNatGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNatGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNatGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNatGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateNatGatewayAsyncHelper(const CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNatGateway(request), context);
}

CreateNetworkAclOutcome EC2Client::CreateNetworkAcl(const CreateNetworkAclRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateNetworkAclOutcome(CreateNetworkAclResponse(outcome.GetResult()));
  }
  else
  {
    return CreateNetworkAclOutcome(outcome.GetError());
  }
}

CreateNetworkAclOutcomeCallable EC2Client::CreateNetworkAclCallable(const CreateNetworkAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateNetworkAclAsync(const CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkAclAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateNetworkAclAsyncHelper(const CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkAcl(request), context);
}

CreateNetworkAclEntryOutcome EC2Client::CreateNetworkAclEntry(const CreateNetworkAclEntryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateNetworkAclEntryOutcome(NoResult());
  }
  else
  {
    return CreateNetworkAclEntryOutcome(outcome.GetError());
  }
}

CreateNetworkAclEntryOutcomeCallable EC2Client::CreateNetworkAclEntryCallable(const CreateNetworkAclEntryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkAclEntryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkAclEntry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateNetworkAclEntryAsync(const CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkAclEntryAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateNetworkAclEntryAsyncHelper(const CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkAclEntry(request), context);
}

CreateNetworkInterfaceOutcome EC2Client::CreateNetworkInterface(const CreateNetworkInterfaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateNetworkInterfaceOutcome(CreateNetworkInterfaceResponse(outcome.GetResult()));
  }
  else
  {
    return CreateNetworkInterfaceOutcome(outcome.GetError());
  }
}

CreateNetworkInterfaceOutcomeCallable EC2Client::CreateNetworkInterfaceCallable(const CreateNetworkInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkInterfaceAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateNetworkInterfaceAsyncHelper(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkInterface(request), context);
}

CreateNetworkInterfacePermissionOutcome EC2Client::CreateNetworkInterfacePermission(const CreateNetworkInterfacePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateNetworkInterfacePermissionOutcome(CreateNetworkInterfacePermissionResponse(outcome.GetResult()));
  }
  else
  {
    return CreateNetworkInterfacePermissionOutcome(outcome.GetError());
  }
}

CreateNetworkInterfacePermissionOutcomeCallable EC2Client::CreateNetworkInterfacePermissionCallable(const CreateNetworkInterfacePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkInterfacePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkInterfacePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateNetworkInterfacePermissionAsync(const CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkInterfacePermissionAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateNetworkInterfacePermissionAsyncHelper(const CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkInterfacePermission(request), context);
}

CreatePlacementGroupOutcome EC2Client::CreatePlacementGroup(const CreatePlacementGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePlacementGroupOutcome(NoResult());
  }
  else
  {
    return CreatePlacementGroupOutcome(outcome.GetError());
  }
}

CreatePlacementGroupOutcomeCallable EC2Client::CreatePlacementGroupCallable(const CreatePlacementGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlacementGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlacementGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreatePlacementGroupAsync(const CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePlacementGroupAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreatePlacementGroupAsyncHelper(const CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlacementGroup(request), context);
}

CreateReservedInstancesListingOutcome EC2Client::CreateReservedInstancesListing(const CreateReservedInstancesListingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateReservedInstancesListingOutcome(CreateReservedInstancesListingResponse(outcome.GetResult()));
  }
  else
  {
    return CreateReservedInstancesListingOutcome(outcome.GetError());
  }
}

CreateReservedInstancesListingOutcomeCallable EC2Client::CreateReservedInstancesListingCallable(const CreateReservedInstancesListingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReservedInstancesListingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReservedInstancesListing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateReservedInstancesListingAsync(const CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReservedInstancesListingAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateReservedInstancesListingAsyncHelper(const CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReservedInstancesListing(request), context);
}

CreateRouteOutcome EC2Client::CreateRoute(const CreateRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateRouteOutcome(CreateRouteResponse(outcome.GetResult()));
  }
  else
  {
    return CreateRouteOutcome(outcome.GetError());
  }
}

CreateRouteOutcomeCallable EC2Client::CreateRouteCallable(const CreateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateRouteAsyncHelper(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoute(request), context);
}

CreateRouteTableOutcome EC2Client::CreateRouteTable(const CreateRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateRouteTableOutcome(CreateRouteTableResponse(outcome.GetResult()));
  }
  else
  {
    return CreateRouteTableOutcome(outcome.GetError());
  }
}

CreateRouteTableOutcomeCallable EC2Client::CreateRouteTableCallable(const CreateRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateRouteTableAsyncHelper(const CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRouteTable(request), context);
}

CreateSecurityGroupOutcome EC2Client::CreateSecurityGroup(const CreateSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSecurityGroupOutcome(CreateSecurityGroupResponse(outcome.GetResult()));
  }
  else
  {
    return CreateSecurityGroupOutcome(outcome.GetError());
  }
}

CreateSecurityGroupOutcomeCallable EC2Client::CreateSecurityGroupCallable(const CreateSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSecurityGroupAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateSecurityGroupAsyncHelper(const CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSecurityGroup(request), context);
}

CreateSnapshotOutcome EC2Client::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSnapshotOutcome(CreateSnapshotResponse(outcome.GetResult()));
  }
  else
  {
    return CreateSnapshotOutcome(outcome.GetError());
  }
}

CreateSnapshotOutcomeCallable EC2Client::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateSnapshotsOutcome EC2Client::CreateSnapshots(const CreateSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSnapshotsOutcome(CreateSnapshotsResponse(outcome.GetResult()));
  }
  else
  {
    return CreateSnapshotsOutcome(outcome.GetError());
  }
}

CreateSnapshotsOutcomeCallable EC2Client::CreateSnapshotsCallable(const CreateSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateSnapshotsAsync(const CreateSnapshotsRequest& request, const CreateSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotsAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateSnapshotsAsyncHelper(const CreateSnapshotsRequest& request, const CreateSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshots(request), context);
}

CreateSpotDatafeedSubscriptionOutcome EC2Client::CreateSpotDatafeedSubscription(const CreateSpotDatafeedSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSpotDatafeedSubscriptionOutcome(CreateSpotDatafeedSubscriptionResponse(outcome.GetResult()));
  }
  else
  {
    return CreateSpotDatafeedSubscriptionOutcome(outcome.GetError());
  }
}

CreateSpotDatafeedSubscriptionOutcomeCallable EC2Client::CreateSpotDatafeedSubscriptionCallable(const CreateSpotDatafeedSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSpotDatafeedSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSpotDatafeedSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateSpotDatafeedSubscriptionAsync(const CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSpotDatafeedSubscriptionAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateSpotDatafeedSubscriptionAsyncHelper(const CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSpotDatafeedSubscription(request), context);
}

CreateSubnetOutcome EC2Client::CreateSubnet(const CreateSubnetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSubnetOutcome(CreateSubnetResponse(outcome.GetResult()));
  }
  else
  {
    return CreateSubnetOutcome(outcome.GetError());
  }
}

CreateSubnetOutcomeCallable EC2Client::CreateSubnetCallable(const CreateSubnetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubnetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubnet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSubnetAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateSubnetAsyncHelper(const CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSubnet(request), context);
}

CreateTagsOutcome EC2Client::CreateTags(const CreateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTagsOutcome(NoResult());
  }
  else
  {
    return CreateTagsOutcome(outcome.GetError());
  }
}

CreateTagsOutcomeCallable EC2Client::CreateTagsCallable(const CreateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTagsAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

CreateTrafficMirrorFilterOutcome EC2Client::CreateTrafficMirrorFilter(const CreateTrafficMirrorFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrafficMirrorFilterOutcome(CreateTrafficMirrorFilterResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTrafficMirrorFilterOutcome(outcome.GetError());
  }
}

CreateTrafficMirrorFilterOutcomeCallable EC2Client::CreateTrafficMirrorFilterCallable(const CreateTrafficMirrorFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficMirrorFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTrafficMirrorFilterAsync(const CreateTrafficMirrorFilterRequest& request, const CreateTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficMirrorFilterAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTrafficMirrorFilterAsyncHelper(const CreateTrafficMirrorFilterRequest& request, const CreateTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficMirrorFilter(request), context);
}

CreateTrafficMirrorFilterRuleOutcome EC2Client::CreateTrafficMirrorFilterRule(const CreateTrafficMirrorFilterRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrafficMirrorFilterRuleOutcome(CreateTrafficMirrorFilterRuleResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTrafficMirrorFilterRuleOutcome(outcome.GetError());
  }
}

CreateTrafficMirrorFilterRuleOutcomeCallable EC2Client::CreateTrafficMirrorFilterRuleCallable(const CreateTrafficMirrorFilterRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorFilterRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficMirrorFilterRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTrafficMirrorFilterRuleAsync(const CreateTrafficMirrorFilterRuleRequest& request, const CreateTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficMirrorFilterRuleAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTrafficMirrorFilterRuleAsyncHelper(const CreateTrafficMirrorFilterRuleRequest& request, const CreateTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficMirrorFilterRule(request), context);
}

CreateTrafficMirrorSessionOutcome EC2Client::CreateTrafficMirrorSession(const CreateTrafficMirrorSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrafficMirrorSessionOutcome(CreateTrafficMirrorSessionResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTrafficMirrorSessionOutcome(outcome.GetError());
  }
}

CreateTrafficMirrorSessionOutcomeCallable EC2Client::CreateTrafficMirrorSessionCallable(const CreateTrafficMirrorSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficMirrorSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTrafficMirrorSessionAsync(const CreateTrafficMirrorSessionRequest& request, const CreateTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficMirrorSessionAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTrafficMirrorSessionAsyncHelper(const CreateTrafficMirrorSessionRequest& request, const CreateTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficMirrorSession(request), context);
}

CreateTrafficMirrorTargetOutcome EC2Client::CreateTrafficMirrorTarget(const CreateTrafficMirrorTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrafficMirrorTargetOutcome(CreateTrafficMirrorTargetResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTrafficMirrorTargetOutcome(outcome.GetError());
  }
}

CreateTrafficMirrorTargetOutcomeCallable EC2Client::CreateTrafficMirrorTargetCallable(const CreateTrafficMirrorTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficMirrorTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTrafficMirrorTargetAsync(const CreateTrafficMirrorTargetRequest& request, const CreateTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficMirrorTargetAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTrafficMirrorTargetAsyncHelper(const CreateTrafficMirrorTargetRequest& request, const CreateTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficMirrorTarget(request), context);
}

CreateTransitGatewayOutcome EC2Client::CreateTransitGateway(const CreateTransitGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTransitGatewayOutcome(CreateTransitGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTransitGatewayOutcome(outcome.GetError());
  }
}

CreateTransitGatewayOutcomeCallable EC2Client::CreateTransitGatewayCallable(const CreateTransitGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransitGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTransitGatewayAsync(const CreateTransitGatewayRequest& request, const CreateTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransitGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTransitGatewayAsyncHelper(const CreateTransitGatewayRequest& request, const CreateTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransitGateway(request), context);
}

CreateTransitGatewayRouteOutcome EC2Client::CreateTransitGatewayRoute(const CreateTransitGatewayRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTransitGatewayRouteOutcome(CreateTransitGatewayRouteResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTransitGatewayRouteOutcome(outcome.GetError());
  }
}

CreateTransitGatewayRouteOutcomeCallable EC2Client::CreateTransitGatewayRouteCallable(const CreateTransitGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransitGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTransitGatewayRouteAsync(const CreateTransitGatewayRouteRequest& request, const CreateTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransitGatewayRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTransitGatewayRouteAsyncHelper(const CreateTransitGatewayRouteRequest& request, const CreateTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransitGatewayRoute(request), context);
}

CreateTransitGatewayRouteTableOutcome EC2Client::CreateTransitGatewayRouteTable(const CreateTransitGatewayRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTransitGatewayRouteTableOutcome(CreateTransitGatewayRouteTableResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTransitGatewayRouteTableOutcome(outcome.GetError());
  }
}

CreateTransitGatewayRouteTableOutcomeCallable EC2Client::CreateTransitGatewayRouteTableCallable(const CreateTransitGatewayRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransitGatewayRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTransitGatewayRouteTableAsync(const CreateTransitGatewayRouteTableRequest& request, const CreateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransitGatewayRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTransitGatewayRouteTableAsyncHelper(const CreateTransitGatewayRouteTableRequest& request, const CreateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransitGatewayRouteTable(request), context);
}

CreateTransitGatewayVpcAttachmentOutcome EC2Client::CreateTransitGatewayVpcAttachment(const CreateTransitGatewayVpcAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTransitGatewayVpcAttachmentOutcome(CreateTransitGatewayVpcAttachmentResponse(outcome.GetResult()));
  }
  else
  {
    return CreateTransitGatewayVpcAttachmentOutcome(outcome.GetError());
  }
}

CreateTransitGatewayVpcAttachmentOutcomeCallable EC2Client::CreateTransitGatewayVpcAttachmentCallable(const CreateTransitGatewayVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransitGatewayVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateTransitGatewayVpcAttachmentAsync(const CreateTransitGatewayVpcAttachmentRequest& request, const CreateTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransitGatewayVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateTransitGatewayVpcAttachmentAsyncHelper(const CreateTransitGatewayVpcAttachmentRequest& request, const CreateTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransitGatewayVpcAttachment(request), context);
}

CreateVolumeOutcome EC2Client::CreateVolume(const CreateVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVolumeOutcome(CreateVolumeResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVolumeOutcome(outcome.GetError());
  }
}

CreateVolumeOutcomeCallable EC2Client::CreateVolumeCallable(const CreateVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVolumeAsync(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVolumeAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVolumeAsyncHelper(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVolume(request), context);
}

CreateVpcOutcome EC2Client::CreateVpc(const CreateVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpcOutcome(CreateVpcResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVpcOutcome(outcome.GetError());
  }
}

CreateVpcOutcomeCallable EC2Client::CreateVpcCallable(const CreateVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpcAsyncHelper(const CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpc(request), context);
}

CreateVpcEndpointOutcome EC2Client::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpcEndpointOutcome(CreateVpcEndpointResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVpcEndpointOutcome(outcome.GetError());
  }
}

CreateVpcEndpointOutcomeCallable EC2Client::CreateVpcEndpointCallable(const CreateVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcEndpointAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpcEndpointAsyncHelper(const CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcEndpoint(request), context);
}

CreateVpcEndpointConnectionNotificationOutcome EC2Client::CreateVpcEndpointConnectionNotification(const CreateVpcEndpointConnectionNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpcEndpointConnectionNotificationOutcome(CreateVpcEndpointConnectionNotificationResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVpcEndpointConnectionNotificationOutcome(outcome.GetError());
  }
}

CreateVpcEndpointConnectionNotificationOutcomeCallable EC2Client::CreateVpcEndpointConnectionNotificationCallable(const CreateVpcEndpointConnectionNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointConnectionNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcEndpointConnectionNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpcEndpointConnectionNotificationAsync(const CreateVpcEndpointConnectionNotificationRequest& request, const CreateVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcEndpointConnectionNotificationAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpcEndpointConnectionNotificationAsyncHelper(const CreateVpcEndpointConnectionNotificationRequest& request, const CreateVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcEndpointConnectionNotification(request), context);
}

CreateVpcEndpointServiceConfigurationOutcome EC2Client::CreateVpcEndpointServiceConfiguration(const CreateVpcEndpointServiceConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpcEndpointServiceConfigurationOutcome(CreateVpcEndpointServiceConfigurationResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVpcEndpointServiceConfigurationOutcome(outcome.GetError());
  }
}

CreateVpcEndpointServiceConfigurationOutcomeCallable EC2Client::CreateVpcEndpointServiceConfigurationCallable(const CreateVpcEndpointServiceConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointServiceConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcEndpointServiceConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpcEndpointServiceConfigurationAsync(const CreateVpcEndpointServiceConfigurationRequest& request, const CreateVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcEndpointServiceConfigurationAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpcEndpointServiceConfigurationAsyncHelper(const CreateVpcEndpointServiceConfigurationRequest& request, const CreateVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcEndpointServiceConfiguration(request), context);
}

CreateVpcPeeringConnectionOutcome EC2Client::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpcPeeringConnectionOutcome(CreateVpcPeeringConnectionResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVpcPeeringConnectionOutcome(outcome.GetError());
  }
}

CreateVpcPeeringConnectionOutcomeCallable EC2Client::CreateVpcPeeringConnectionCallable(const CreateVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpcPeeringConnectionAsync(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcPeeringConnectionAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpcPeeringConnectionAsyncHelper(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcPeeringConnection(request), context);
}

CreateVpnConnectionOutcome EC2Client::CreateVpnConnection(const CreateVpnConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpnConnectionOutcome(CreateVpnConnectionResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVpnConnectionOutcome(outcome.GetError());
  }
}

CreateVpnConnectionOutcomeCallable EC2Client::CreateVpnConnectionCallable(const CreateVpnConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpnConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpnConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpnConnectionAsync(const CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpnConnectionAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpnConnectionAsyncHelper(const CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpnConnection(request), context);
}

CreateVpnConnectionRouteOutcome EC2Client::CreateVpnConnectionRoute(const CreateVpnConnectionRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpnConnectionRouteOutcome(NoResult());
  }
  else
  {
    return CreateVpnConnectionRouteOutcome(outcome.GetError());
  }
}

CreateVpnConnectionRouteOutcomeCallable EC2Client::CreateVpnConnectionRouteCallable(const CreateVpnConnectionRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpnConnectionRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpnConnectionRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpnConnectionRouteAsync(const CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpnConnectionRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpnConnectionRouteAsyncHelper(const CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpnConnectionRoute(request), context);
}

CreateVpnGatewayOutcome EC2Client::CreateVpnGateway(const CreateVpnGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVpnGatewayOutcome(CreateVpnGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return CreateVpnGatewayOutcome(outcome.GetError());
  }
}

CreateVpnGatewayOutcomeCallable EC2Client::CreateVpnGatewayCallable(const CreateVpnGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpnGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::CreateVpnGatewayAsync(const CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpnGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::CreateVpnGatewayAsyncHelper(const CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpnGateway(request), context);
}

DeleteClientVpnEndpointOutcome EC2Client::DeleteClientVpnEndpoint(const DeleteClientVpnEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClientVpnEndpointOutcome(DeleteClientVpnEndpointResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteClientVpnEndpointOutcome(outcome.GetError());
  }
}

DeleteClientVpnEndpointOutcomeCallable EC2Client::DeleteClientVpnEndpointCallable(const DeleteClientVpnEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClientVpnEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClientVpnEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteClientVpnEndpointAsync(const DeleteClientVpnEndpointRequest& request, const DeleteClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteClientVpnEndpointAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteClientVpnEndpointAsyncHelper(const DeleteClientVpnEndpointRequest& request, const DeleteClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteClientVpnEndpoint(request), context);
}

DeleteClientVpnRouteOutcome EC2Client::DeleteClientVpnRoute(const DeleteClientVpnRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClientVpnRouteOutcome(DeleteClientVpnRouteResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteClientVpnRouteOutcome(outcome.GetError());
  }
}

DeleteClientVpnRouteOutcomeCallable EC2Client::DeleteClientVpnRouteCallable(const DeleteClientVpnRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClientVpnRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClientVpnRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteClientVpnRouteAsync(const DeleteClientVpnRouteRequest& request, const DeleteClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteClientVpnRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteClientVpnRouteAsyncHelper(const DeleteClientVpnRouteRequest& request, const DeleteClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteClientVpnRoute(request), context);
}

DeleteCustomerGatewayOutcome EC2Client::DeleteCustomerGateway(const DeleteCustomerGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCustomerGatewayOutcome(NoResult());
  }
  else
  {
    return DeleteCustomerGatewayOutcome(outcome.GetError());
  }
}

DeleteCustomerGatewayOutcomeCallable EC2Client::DeleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomerGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomerGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomerGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteCustomerGatewayAsyncHelper(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomerGateway(request), context);
}

DeleteDhcpOptionsOutcome EC2Client::DeleteDhcpOptions(const DeleteDhcpOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDhcpOptionsOutcome(NoResult());
  }
  else
  {
    return DeleteDhcpOptionsOutcome(outcome.GetError());
  }
}

DeleteDhcpOptionsOutcomeCallable EC2Client::DeleteDhcpOptionsCallable(const DeleteDhcpOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDhcpOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteDhcpOptionsAsync(const DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDhcpOptionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteDhcpOptionsAsyncHelper(const DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDhcpOptions(request), context);
}

DeleteEgressOnlyInternetGatewayOutcome EC2Client::DeleteEgressOnlyInternetGateway(const DeleteEgressOnlyInternetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteEgressOnlyInternetGatewayOutcome(DeleteEgressOnlyInternetGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteEgressOnlyInternetGatewayOutcome(outcome.GetError());
  }
}

DeleteEgressOnlyInternetGatewayOutcomeCallable EC2Client::DeleteEgressOnlyInternetGatewayCallable(const DeleteEgressOnlyInternetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEgressOnlyInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEgressOnlyInternetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteEgressOnlyInternetGatewayAsync(const DeleteEgressOnlyInternetGatewayRequest& request, const DeleteEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEgressOnlyInternetGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteEgressOnlyInternetGatewayAsyncHelper(const DeleteEgressOnlyInternetGatewayRequest& request, const DeleteEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEgressOnlyInternetGateway(request), context);
}

DeleteFleetsOutcome EC2Client::DeleteFleets(const DeleteFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteFleetsOutcome(DeleteFleetsResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteFleetsOutcome(outcome.GetError());
  }
}

DeleteFleetsOutcomeCallable EC2Client::DeleteFleetsCallable(const DeleteFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteFleetsAsync(const DeleteFleetsRequest& request, const DeleteFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFleetsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteFleetsAsyncHelper(const DeleteFleetsRequest& request, const DeleteFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFleets(request), context);
}

DeleteFlowLogsOutcome EC2Client::DeleteFlowLogs(const DeleteFlowLogsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteFlowLogsOutcome(DeleteFlowLogsResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteFlowLogsOutcome(outcome.GetError());
  }
}

DeleteFlowLogsOutcomeCallable EC2Client::DeleteFlowLogsCallable(const DeleteFlowLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlowLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteFlowLogsAsync(const DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFlowLogsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteFlowLogsAsyncHelper(const DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFlowLogs(request), context);
}

DeleteFpgaImageOutcome EC2Client::DeleteFpgaImage(const DeleteFpgaImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteFpgaImageOutcome(DeleteFpgaImageResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteFpgaImageOutcome(outcome.GetError());
  }
}

DeleteFpgaImageOutcomeCallable EC2Client::DeleteFpgaImageCallable(const DeleteFpgaImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFpgaImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFpgaImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteFpgaImageAsync(const DeleteFpgaImageRequest& request, const DeleteFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFpgaImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteFpgaImageAsyncHelper(const DeleteFpgaImageRequest& request, const DeleteFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFpgaImage(request), context);
}

DeleteInternetGatewayOutcome EC2Client::DeleteInternetGateway(const DeleteInternetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteInternetGatewayOutcome(NoResult());
  }
  else
  {
    return DeleteInternetGatewayOutcome(outcome.GetError());
  }
}

DeleteInternetGatewayOutcomeCallable EC2Client::DeleteInternetGatewayCallable(const DeleteInternetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInternetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteInternetGatewayAsync(const DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInternetGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteInternetGatewayAsyncHelper(const DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInternetGateway(request), context);
}

DeleteKeyPairOutcome EC2Client::DeleteKeyPair(const DeleteKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteKeyPairOutcome(NoResult());
  }
  else
  {
    return DeleteKeyPairOutcome(outcome.GetError());
  }
}

DeleteKeyPairOutcomeCallable EC2Client::DeleteKeyPairCallable(const DeleteKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteKeyPairAsync(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteKeyPairAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteKeyPairAsyncHelper(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKeyPair(request), context);
}

DeleteLaunchTemplateOutcome EC2Client::DeleteLaunchTemplate(const DeleteLaunchTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLaunchTemplateOutcome(DeleteLaunchTemplateResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteLaunchTemplateOutcome(outcome.GetError());
  }
}

DeleteLaunchTemplateOutcomeCallable EC2Client::DeleteLaunchTemplateCallable(const DeleteLaunchTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteLaunchTemplateAsync(const DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLaunchTemplateAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteLaunchTemplateAsyncHelper(const DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLaunchTemplate(request), context);
}

DeleteLaunchTemplateVersionsOutcome EC2Client::DeleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLaunchTemplateVersionsOutcome(DeleteLaunchTemplateVersionsResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteLaunchTemplateVersionsOutcome(outcome.GetError());
  }
}

DeleteLaunchTemplateVersionsOutcomeCallable EC2Client::DeleteLaunchTemplateVersionsCallable(const DeleteLaunchTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteLaunchTemplateVersionsAsync(const DeleteLaunchTemplateVersionsRequest& request, const DeleteLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLaunchTemplateVersionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteLaunchTemplateVersionsAsyncHelper(const DeleteLaunchTemplateVersionsRequest& request, const DeleteLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLaunchTemplateVersions(request), context);
}

DeleteNatGatewayOutcome EC2Client::DeleteNatGateway(const DeleteNatGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteNatGatewayOutcome(DeleteNatGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteNatGatewayOutcome(outcome.GetError());
  }
}

DeleteNatGatewayOutcomeCallable EC2Client::DeleteNatGatewayCallable(const DeleteNatGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNatGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNatGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNatGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteNatGatewayAsyncHelper(const DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNatGateway(request), context);
}

DeleteNetworkAclOutcome EC2Client::DeleteNetworkAcl(const DeleteNetworkAclRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteNetworkAclOutcome(NoResult());
  }
  else
  {
    return DeleteNetworkAclOutcome(outcome.GetError());
  }
}

DeleteNetworkAclOutcomeCallable EC2Client::DeleteNetworkAclCallable(const DeleteNetworkAclRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkAclOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkAcl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteNetworkAclAsync(const DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkAclAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteNetworkAclAsyncHelper(const DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkAcl(request), context);
}

DeleteNetworkAclEntryOutcome EC2Client::DeleteNetworkAclEntry(const DeleteNetworkAclEntryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteNetworkAclEntryOutcome(NoResult());
  }
  else
  {
    return DeleteNetworkAclEntryOutcome(outcome.GetError());
  }
}

DeleteNetworkAclEntryOutcomeCallable EC2Client::DeleteNetworkAclEntryCallable(const DeleteNetworkAclEntryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkAclEntryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkAclEntry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteNetworkAclEntryAsync(const DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkAclEntryAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteNetworkAclEntryAsyncHelper(const DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkAclEntry(request), context);
}

DeleteNetworkInterfaceOutcome EC2Client::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteNetworkInterfaceOutcome(NoResult());
  }
  else
  {
    return DeleteNetworkInterfaceOutcome(outcome.GetError());
  }
}

DeleteNetworkInterfaceOutcomeCallable EC2Client::DeleteNetworkInterfaceCallable(const DeleteNetworkInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkInterfaceAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteNetworkInterfaceAsyncHelper(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkInterface(request), context);
}

DeleteNetworkInterfacePermissionOutcome EC2Client::DeleteNetworkInterfacePermission(const DeleteNetworkInterfacePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteNetworkInterfacePermissionOutcome(DeleteNetworkInterfacePermissionResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteNetworkInterfacePermissionOutcome(outcome.GetError());
  }
}

DeleteNetworkInterfacePermissionOutcomeCallable EC2Client::DeleteNetworkInterfacePermissionCallable(const DeleteNetworkInterfacePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInterfacePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkInterfacePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteNetworkInterfacePermissionAsync(const DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkInterfacePermissionAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteNetworkInterfacePermissionAsyncHelper(const DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkInterfacePermission(request), context);
}

DeletePlacementGroupOutcome EC2Client::DeletePlacementGroup(const DeletePlacementGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePlacementGroupOutcome(NoResult());
  }
  else
  {
    return DeletePlacementGroupOutcome(outcome.GetError());
  }
}

DeletePlacementGroupOutcomeCallable EC2Client::DeletePlacementGroupCallable(const DeletePlacementGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlacementGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlacementGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeletePlacementGroupAsync(const DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePlacementGroupAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeletePlacementGroupAsyncHelper(const DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePlacementGroup(request), context);
}

DeleteRouteOutcome EC2Client::DeleteRoute(const DeleteRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRouteOutcome(NoResult());
  }
  else
  {
    return DeleteRouteOutcome(outcome.GetError());
  }
}

DeleteRouteOutcomeCallable EC2Client::DeleteRouteCallable(const DeleteRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteRouteAsyncHelper(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoute(request), context);
}

DeleteRouteTableOutcome EC2Client::DeleteRouteTable(const DeleteRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRouteTableOutcome(NoResult());
  }
  else
  {
    return DeleteRouteTableOutcome(outcome.GetError());
  }
}

DeleteRouteTableOutcomeCallable EC2Client::DeleteRouteTableCallable(const DeleteRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteRouteTableAsyncHelper(const DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRouteTable(request), context);
}

DeleteSecurityGroupOutcome EC2Client::DeleteSecurityGroup(const DeleteSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSecurityGroupOutcome(NoResult());
  }
  else
  {
    return DeleteSecurityGroupOutcome(outcome.GetError());
  }
}

DeleteSecurityGroupOutcomeCallable EC2Client::DeleteSecurityGroupCallable(const DeleteSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSecurityGroupAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteSecurityGroupAsyncHelper(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSecurityGroup(request), context);
}

DeleteSnapshotOutcome EC2Client::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSnapshotOutcome(NoResult());
  }
  else
  {
    return DeleteSnapshotOutcome(outcome.GetError());
  }
}

DeleteSnapshotOutcomeCallable EC2Client::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSnapshotAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshot(request), context);
}

DeleteSpotDatafeedSubscriptionOutcome EC2Client::DeleteSpotDatafeedSubscription(const DeleteSpotDatafeedSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSpotDatafeedSubscriptionOutcome(NoResult());
  }
  else
  {
    return DeleteSpotDatafeedSubscriptionOutcome(outcome.GetError());
  }
}

DeleteSpotDatafeedSubscriptionOutcomeCallable EC2Client::DeleteSpotDatafeedSubscriptionCallable(const DeleteSpotDatafeedSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSpotDatafeedSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSpotDatafeedSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteSpotDatafeedSubscriptionAsync(const DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSpotDatafeedSubscriptionAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteSpotDatafeedSubscriptionAsyncHelper(const DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSpotDatafeedSubscription(request), context);
}

DeleteSubnetOutcome EC2Client::DeleteSubnet(const DeleteSubnetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSubnetOutcome(NoResult());
  }
  else
  {
    return DeleteSubnetOutcome(outcome.GetError());
  }
}

DeleteSubnetOutcomeCallable EC2Client::DeleteSubnetCallable(const DeleteSubnetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubnetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubnet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSubnetAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteSubnetAsyncHelper(const DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSubnet(request), context);
}

DeleteTagsOutcome EC2Client::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(NoResult());
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable EC2Client::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DeleteTrafficMirrorFilterOutcome EC2Client::DeleteTrafficMirrorFilter(const DeleteTrafficMirrorFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTrafficMirrorFilterOutcome(DeleteTrafficMirrorFilterResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTrafficMirrorFilterOutcome(outcome.GetError());
  }
}

DeleteTrafficMirrorFilterOutcomeCallable EC2Client::DeleteTrafficMirrorFilterCallable(const DeleteTrafficMirrorFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficMirrorFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTrafficMirrorFilterAsync(const DeleteTrafficMirrorFilterRequest& request, const DeleteTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficMirrorFilterAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTrafficMirrorFilterAsyncHelper(const DeleteTrafficMirrorFilterRequest& request, const DeleteTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficMirrorFilter(request), context);
}

DeleteTrafficMirrorFilterRuleOutcome EC2Client::DeleteTrafficMirrorFilterRule(const DeleteTrafficMirrorFilterRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTrafficMirrorFilterRuleOutcome(DeleteTrafficMirrorFilterRuleResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTrafficMirrorFilterRuleOutcome(outcome.GetError());
  }
}

DeleteTrafficMirrorFilterRuleOutcomeCallable EC2Client::DeleteTrafficMirrorFilterRuleCallable(const DeleteTrafficMirrorFilterRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorFilterRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficMirrorFilterRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTrafficMirrorFilterRuleAsync(const DeleteTrafficMirrorFilterRuleRequest& request, const DeleteTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficMirrorFilterRuleAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTrafficMirrorFilterRuleAsyncHelper(const DeleteTrafficMirrorFilterRuleRequest& request, const DeleteTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficMirrorFilterRule(request), context);
}

DeleteTrafficMirrorSessionOutcome EC2Client::DeleteTrafficMirrorSession(const DeleteTrafficMirrorSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTrafficMirrorSessionOutcome(DeleteTrafficMirrorSessionResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTrafficMirrorSessionOutcome(outcome.GetError());
  }
}

DeleteTrafficMirrorSessionOutcomeCallable EC2Client::DeleteTrafficMirrorSessionCallable(const DeleteTrafficMirrorSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficMirrorSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTrafficMirrorSessionAsync(const DeleteTrafficMirrorSessionRequest& request, const DeleteTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficMirrorSessionAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTrafficMirrorSessionAsyncHelper(const DeleteTrafficMirrorSessionRequest& request, const DeleteTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficMirrorSession(request), context);
}

DeleteTrafficMirrorTargetOutcome EC2Client::DeleteTrafficMirrorTarget(const DeleteTrafficMirrorTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTrafficMirrorTargetOutcome(DeleteTrafficMirrorTargetResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTrafficMirrorTargetOutcome(outcome.GetError());
  }
}

DeleteTrafficMirrorTargetOutcomeCallable EC2Client::DeleteTrafficMirrorTargetCallable(const DeleteTrafficMirrorTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficMirrorTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTrafficMirrorTargetAsync(const DeleteTrafficMirrorTargetRequest& request, const DeleteTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficMirrorTargetAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTrafficMirrorTargetAsyncHelper(const DeleteTrafficMirrorTargetRequest& request, const DeleteTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficMirrorTarget(request), context);
}

DeleteTransitGatewayOutcome EC2Client::DeleteTransitGateway(const DeleteTransitGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTransitGatewayOutcome(DeleteTransitGatewayResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTransitGatewayOutcome(outcome.GetError());
  }
}

DeleteTransitGatewayOutcomeCallable EC2Client::DeleteTransitGatewayCallable(const DeleteTransitGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTransitGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTransitGatewayAsync(const DeleteTransitGatewayRequest& request, const DeleteTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTransitGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTransitGatewayAsyncHelper(const DeleteTransitGatewayRequest& request, const DeleteTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTransitGateway(request), context);
}

DeleteTransitGatewayRouteOutcome EC2Client::DeleteTransitGatewayRoute(const DeleteTransitGatewayRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTransitGatewayRouteOutcome(DeleteTransitGatewayRouteResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTransitGatewayRouteOutcome(outcome.GetError());
  }
}

DeleteTransitGatewayRouteOutcomeCallable EC2Client::DeleteTransitGatewayRouteCallable(const DeleteTransitGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTransitGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTransitGatewayRouteAsync(const DeleteTransitGatewayRouteRequest& request, const DeleteTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTransitGatewayRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTransitGatewayRouteAsyncHelper(const DeleteTransitGatewayRouteRequest& request, const DeleteTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTransitGatewayRoute(request), context);
}

DeleteTransitGatewayRouteTableOutcome EC2Client::DeleteTransitGatewayRouteTable(const DeleteTransitGatewayRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTransitGatewayRouteTableOutcome(DeleteTransitGatewayRouteTableResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTransitGatewayRouteTableOutcome(outcome.GetError());
  }
}

DeleteTransitGatewayRouteTableOutcomeCallable EC2Client::DeleteTransitGatewayRouteTableCallable(const DeleteTransitGatewayRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTransitGatewayRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTransitGatewayRouteTableAsync(const DeleteTransitGatewayRouteTableRequest& request, const DeleteTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTransitGatewayRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTransitGatewayRouteTableAsyncHelper(const DeleteTransitGatewayRouteTableRequest& request, const DeleteTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTransitGatewayRouteTable(request), context);
}

DeleteTransitGatewayVpcAttachmentOutcome EC2Client::DeleteTransitGatewayVpcAttachment(const DeleteTransitGatewayVpcAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTransitGatewayVpcAttachmentOutcome(DeleteTransitGatewayVpcAttachmentResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteTransitGatewayVpcAttachmentOutcome(outcome.GetError());
  }
}

DeleteTransitGatewayVpcAttachmentOutcomeCallable EC2Client::DeleteTransitGatewayVpcAttachmentCallable(const DeleteTransitGatewayVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTransitGatewayVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteTransitGatewayVpcAttachmentAsync(const DeleteTransitGatewayVpcAttachmentRequest& request, const DeleteTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTransitGatewayVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteTransitGatewayVpcAttachmentAsyncHelper(const DeleteTransitGatewayVpcAttachmentRequest& request, const DeleteTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTransitGatewayVpcAttachment(request), context);
}

DeleteVolumeOutcome EC2Client::DeleteVolume(const DeleteVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVolumeOutcome(NoResult());
  }
  else
  {
    return DeleteVolumeOutcome(outcome.GetError());
  }
}

DeleteVolumeOutcomeCallable EC2Client::DeleteVolumeCallable(const DeleteVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVolumeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVolumeAsyncHelper(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVolume(request), context);
}

DeleteVpcOutcome EC2Client::DeleteVpc(const DeleteVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpcOutcome(NoResult());
  }
  else
  {
    return DeleteVpcOutcome(outcome.GetError());
  }
}

DeleteVpcOutcomeCallable EC2Client::DeleteVpcCallable(const DeleteVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpcAsyncHelper(const DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpc(request), context);
}

DeleteVpcEndpointConnectionNotificationsOutcome EC2Client::DeleteVpcEndpointConnectionNotifications(const DeleteVpcEndpointConnectionNotificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpcEndpointConnectionNotificationsOutcome(DeleteVpcEndpointConnectionNotificationsResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteVpcEndpointConnectionNotificationsOutcome(outcome.GetError());
  }
}

DeleteVpcEndpointConnectionNotificationsOutcomeCallable EC2Client::DeleteVpcEndpointConnectionNotificationsCallable(const DeleteVpcEndpointConnectionNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointConnectionNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcEndpointConnectionNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpcEndpointConnectionNotificationsAsync(const DeleteVpcEndpointConnectionNotificationsRequest& request, const DeleteVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcEndpointConnectionNotificationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpcEndpointConnectionNotificationsAsyncHelper(const DeleteVpcEndpointConnectionNotificationsRequest& request, const DeleteVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcEndpointConnectionNotifications(request), context);
}

DeleteVpcEndpointServiceConfigurationsOutcome EC2Client::DeleteVpcEndpointServiceConfigurations(const DeleteVpcEndpointServiceConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpcEndpointServiceConfigurationsOutcome(DeleteVpcEndpointServiceConfigurationsResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteVpcEndpointServiceConfigurationsOutcome(outcome.GetError());
  }
}

DeleteVpcEndpointServiceConfigurationsOutcomeCallable EC2Client::DeleteVpcEndpointServiceConfigurationsCallable(const DeleteVpcEndpointServiceConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointServiceConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcEndpointServiceConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpcEndpointServiceConfigurationsAsync(const DeleteVpcEndpointServiceConfigurationsRequest& request, const DeleteVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcEndpointServiceConfigurationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpcEndpointServiceConfigurationsAsyncHelper(const DeleteVpcEndpointServiceConfigurationsRequest& request, const DeleteVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcEndpointServiceConfigurations(request), context);
}

DeleteVpcEndpointsOutcome EC2Client::DeleteVpcEndpoints(const DeleteVpcEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpcEndpointsOutcome(DeleteVpcEndpointsResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteVpcEndpointsOutcome(outcome.GetError());
  }
}

DeleteVpcEndpointsOutcomeCallable EC2Client::DeleteVpcEndpointsCallable(const DeleteVpcEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpcEndpointsAsync(const DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcEndpointsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpcEndpointsAsyncHelper(const DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcEndpoints(request), context);
}

DeleteVpcPeeringConnectionOutcome EC2Client::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpcPeeringConnectionOutcome(DeleteVpcPeeringConnectionResponse(outcome.GetResult()));
  }
  else
  {
    return DeleteVpcPeeringConnectionOutcome(outcome.GetError());
  }
}

DeleteVpcPeeringConnectionOutcomeCallable EC2Client::DeleteVpcPeeringConnectionCallable(const DeleteVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpcPeeringConnectionAsync(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcPeeringConnectionAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpcPeeringConnectionAsyncHelper(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcPeeringConnection(request), context);
}

DeleteVpnConnectionOutcome EC2Client::DeleteVpnConnection(const DeleteVpnConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpnConnectionOutcome(NoResult());
  }
  else
  {
    return DeleteVpnConnectionOutcome(outcome.GetError());
  }
}

DeleteVpnConnectionOutcomeCallable EC2Client::DeleteVpnConnectionCallable(const DeleteVpnConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpnConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpnConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpnConnectionAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpnConnectionAsyncHelper(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpnConnection(request), context);
}

DeleteVpnConnectionRouteOutcome EC2Client::DeleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpnConnectionRouteOutcome(NoResult());
  }
  else
  {
    return DeleteVpnConnectionRouteOutcome(outcome.GetError());
  }
}

DeleteVpnConnectionRouteOutcomeCallable EC2Client::DeleteVpnConnectionRouteCallable(const DeleteVpnConnectionRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpnConnectionRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpnConnectionRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpnConnectionRouteAsync(const DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpnConnectionRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpnConnectionRouteAsyncHelper(const DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpnConnectionRoute(request), context);
}

DeleteVpnGatewayOutcome EC2Client::DeleteVpnGateway(const DeleteVpnGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVpnGatewayOutcome(NoResult());
  }
  else
  {
    return DeleteVpnGatewayOutcome(outcome.GetError());
  }
}

DeleteVpnGatewayOutcomeCallable EC2Client::DeleteVpnGatewayCallable(const DeleteVpnGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpnGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpnGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeleteVpnGatewayAsyncHelper(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpnGateway(request), context);
}

DeprovisionByoipCidrOutcome EC2Client::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeprovisionByoipCidrOutcome(DeprovisionByoipCidrResponse(outcome.GetResult()));
  }
  else
  {
    return DeprovisionByoipCidrOutcome(outcome.GetError());
  }
}

DeprovisionByoipCidrOutcomeCallable EC2Client::DeprovisionByoipCidrCallable(const DeprovisionByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprovisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprovisionByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeprovisionByoipCidrAsync(const DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprovisionByoipCidrAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeprovisionByoipCidrAsyncHelper(const DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprovisionByoipCidr(request), context);
}

DeregisterImageOutcome EC2Client::DeregisterImage(const DeregisterImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterImageOutcome(NoResult());
  }
  else
  {
    return DeregisterImageOutcome(outcome.GetError());
  }
}

DeregisterImageOutcomeCallable EC2Client::DeregisterImageCallable(const DeregisterImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DeregisterImageAsync(const DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::DeregisterImageAsyncHelper(const DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterImage(request), context);
}

DescribeAccountAttributesOutcome EC2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAccountAttributesOutcome(DescribeAccountAttributesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeAccountAttributesOutcome(outcome.GetError());
  }
}

DescribeAccountAttributesOutcomeCallable EC2Client::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountAttributesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeAccountAttributesAsyncHelper(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAttributes(request), context);
}

DescribeAddressesOutcome EC2Client::DescribeAddresses(const DescribeAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAddressesOutcome(DescribeAddressesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeAddressesOutcome(outcome.GetError());
  }
}

DescribeAddressesOutcomeCallable EC2Client::DescribeAddressesCallable(const DescribeAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAddressesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeAddressesAsyncHelper(const DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAddresses(request), context);
}

DescribeAggregateIdFormatOutcome EC2Client::DescribeAggregateIdFormat(const DescribeAggregateIdFormatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAggregateIdFormatOutcome(DescribeAggregateIdFormatResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeAggregateIdFormatOutcome(outcome.GetError());
  }
}

DescribeAggregateIdFormatOutcomeCallable EC2Client::DescribeAggregateIdFormatCallable(const DescribeAggregateIdFormatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAggregateIdFormatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAggregateIdFormat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeAggregateIdFormatAsync(const DescribeAggregateIdFormatRequest& request, const DescribeAggregateIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAggregateIdFormatAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeAggregateIdFormatAsyncHelper(const DescribeAggregateIdFormatRequest& request, const DescribeAggregateIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAggregateIdFormat(request), context);
}

DescribeAvailabilityZonesOutcome EC2Client::DescribeAvailabilityZones(const DescribeAvailabilityZonesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAvailabilityZonesOutcome(DescribeAvailabilityZonesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeAvailabilityZonesOutcome(outcome.GetError());
  }
}

DescribeAvailabilityZonesOutcomeCallable EC2Client::DescribeAvailabilityZonesCallable(const DescribeAvailabilityZonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailabilityZonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAvailabilityZones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeAvailabilityZonesAsync(const DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAvailabilityZonesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeAvailabilityZonesAsyncHelper(const DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAvailabilityZones(request), context);
}

DescribeBundleTasksOutcome EC2Client::DescribeBundleTasks(const DescribeBundleTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeBundleTasksOutcome(DescribeBundleTasksResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeBundleTasksOutcome(outcome.GetError());
  }
}

DescribeBundleTasksOutcomeCallable EC2Client::DescribeBundleTasksCallable(const DescribeBundleTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBundleTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBundleTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeBundleTasksAsync(const DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBundleTasksAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeBundleTasksAsyncHelper(const DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBundleTasks(request), context);
}

DescribeByoipCidrsOutcome EC2Client::DescribeByoipCidrs(const DescribeByoipCidrsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeByoipCidrsOutcome(DescribeByoipCidrsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeByoipCidrsOutcome(outcome.GetError());
  }
}

DescribeByoipCidrsOutcomeCallable EC2Client::DescribeByoipCidrsCallable(const DescribeByoipCidrsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeByoipCidrsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeByoipCidrs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeByoipCidrsAsync(const DescribeByoipCidrsRequest& request, const DescribeByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeByoipCidrsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeByoipCidrsAsyncHelper(const DescribeByoipCidrsRequest& request, const DescribeByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeByoipCidrs(request), context);
}

DescribeCapacityReservationsOutcome EC2Client::DescribeCapacityReservations(const DescribeCapacityReservationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCapacityReservationsOutcome(DescribeCapacityReservationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeCapacityReservationsOutcome(outcome.GetError());
  }
}

DescribeCapacityReservationsOutcomeCallable EC2Client::DescribeCapacityReservationsCallable(const DescribeCapacityReservationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCapacityReservationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCapacityReservations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeCapacityReservationsAsync(const DescribeCapacityReservationsRequest& request, const DescribeCapacityReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCapacityReservationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeCapacityReservationsAsyncHelper(const DescribeCapacityReservationsRequest& request, const DescribeCapacityReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCapacityReservations(request), context);
}

DescribeClassicLinkInstancesOutcome EC2Client::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClassicLinkInstancesOutcome(DescribeClassicLinkInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeClassicLinkInstancesOutcome(outcome.GetError());
  }
}

DescribeClassicLinkInstancesOutcomeCallable EC2Client::DescribeClassicLinkInstancesCallable(const DescribeClassicLinkInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClassicLinkInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClassicLinkInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeClassicLinkInstancesAsync(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClassicLinkInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeClassicLinkInstancesAsyncHelper(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClassicLinkInstances(request), context);
}

DescribeClientVpnAuthorizationRulesOutcome EC2Client::DescribeClientVpnAuthorizationRules(const DescribeClientVpnAuthorizationRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClientVpnAuthorizationRulesOutcome(DescribeClientVpnAuthorizationRulesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeClientVpnAuthorizationRulesOutcome(outcome.GetError());
  }
}

DescribeClientVpnAuthorizationRulesOutcomeCallable EC2Client::DescribeClientVpnAuthorizationRulesCallable(const DescribeClientVpnAuthorizationRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnAuthorizationRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientVpnAuthorizationRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeClientVpnAuthorizationRulesAsync(const DescribeClientVpnAuthorizationRulesRequest& request, const DescribeClientVpnAuthorizationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClientVpnAuthorizationRulesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeClientVpnAuthorizationRulesAsyncHelper(const DescribeClientVpnAuthorizationRulesRequest& request, const DescribeClientVpnAuthorizationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClientVpnAuthorizationRules(request), context);
}

DescribeClientVpnConnectionsOutcome EC2Client::DescribeClientVpnConnections(const DescribeClientVpnConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClientVpnConnectionsOutcome(DescribeClientVpnConnectionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeClientVpnConnectionsOutcome(outcome.GetError());
  }
}

DescribeClientVpnConnectionsOutcomeCallable EC2Client::DescribeClientVpnConnectionsCallable(const DescribeClientVpnConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientVpnConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeClientVpnConnectionsAsync(const DescribeClientVpnConnectionsRequest& request, const DescribeClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClientVpnConnectionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeClientVpnConnectionsAsyncHelper(const DescribeClientVpnConnectionsRequest& request, const DescribeClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClientVpnConnections(request), context);
}

DescribeClientVpnEndpointsOutcome EC2Client::DescribeClientVpnEndpoints(const DescribeClientVpnEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClientVpnEndpointsOutcome(DescribeClientVpnEndpointsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeClientVpnEndpointsOutcome(outcome.GetError());
  }
}

DescribeClientVpnEndpointsOutcomeCallable EC2Client::DescribeClientVpnEndpointsCallable(const DescribeClientVpnEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientVpnEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeClientVpnEndpointsAsync(const DescribeClientVpnEndpointsRequest& request, const DescribeClientVpnEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClientVpnEndpointsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeClientVpnEndpointsAsyncHelper(const DescribeClientVpnEndpointsRequest& request, const DescribeClientVpnEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClientVpnEndpoints(request), context);
}

DescribeClientVpnRoutesOutcome EC2Client::DescribeClientVpnRoutes(const DescribeClientVpnRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClientVpnRoutesOutcome(DescribeClientVpnRoutesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeClientVpnRoutesOutcome(outcome.GetError());
  }
}

DescribeClientVpnRoutesOutcomeCallable EC2Client::DescribeClientVpnRoutesCallable(const DescribeClientVpnRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientVpnRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeClientVpnRoutesAsync(const DescribeClientVpnRoutesRequest& request, const DescribeClientVpnRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClientVpnRoutesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeClientVpnRoutesAsyncHelper(const DescribeClientVpnRoutesRequest& request, const DescribeClientVpnRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClientVpnRoutes(request), context);
}

DescribeClientVpnTargetNetworksOutcome EC2Client::DescribeClientVpnTargetNetworks(const DescribeClientVpnTargetNetworksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClientVpnTargetNetworksOutcome(DescribeClientVpnTargetNetworksResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeClientVpnTargetNetworksOutcome(outcome.GetError());
  }
}

DescribeClientVpnTargetNetworksOutcomeCallable EC2Client::DescribeClientVpnTargetNetworksCallable(const DescribeClientVpnTargetNetworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnTargetNetworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientVpnTargetNetworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeClientVpnTargetNetworksAsync(const DescribeClientVpnTargetNetworksRequest& request, const DescribeClientVpnTargetNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClientVpnTargetNetworksAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeClientVpnTargetNetworksAsyncHelper(const DescribeClientVpnTargetNetworksRequest& request, const DescribeClientVpnTargetNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClientVpnTargetNetworks(request), context);
}

DescribeConversionTasksOutcome EC2Client::DescribeConversionTasks(const DescribeConversionTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConversionTasksOutcome(DescribeConversionTasksResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeConversionTasksOutcome(outcome.GetError());
  }
}

DescribeConversionTasksOutcomeCallable EC2Client::DescribeConversionTasksCallable(const DescribeConversionTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConversionTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConversionTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeConversionTasksAsync(const DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConversionTasksAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeConversionTasksAsyncHelper(const DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConversionTasks(request), context);
}

DescribeCustomerGatewaysOutcome EC2Client::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCustomerGatewaysOutcome(DescribeCustomerGatewaysResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeCustomerGatewaysOutcome(outcome.GetError());
  }
}

DescribeCustomerGatewaysOutcomeCallable EC2Client::DescribeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomerGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomerGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomerGatewaysAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeCustomerGatewaysAsyncHelper(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomerGateways(request), context);
}

DescribeDhcpOptionsOutcome EC2Client::DescribeDhcpOptions(const DescribeDhcpOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDhcpOptionsOutcome(DescribeDhcpOptionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeDhcpOptionsOutcome(outcome.GetError());
  }
}

DescribeDhcpOptionsOutcomeCallable EC2Client::DescribeDhcpOptionsCallable(const DescribeDhcpOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDhcpOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeDhcpOptionsAsync(const DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDhcpOptionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeDhcpOptionsAsyncHelper(const DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDhcpOptions(request), context);
}

DescribeEgressOnlyInternetGatewaysOutcome EC2Client::DescribeEgressOnlyInternetGateways(const DescribeEgressOnlyInternetGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEgressOnlyInternetGatewaysOutcome(DescribeEgressOnlyInternetGatewaysResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeEgressOnlyInternetGatewaysOutcome(outcome.GetError());
  }
}

DescribeEgressOnlyInternetGatewaysOutcomeCallable EC2Client::DescribeEgressOnlyInternetGatewaysCallable(const DescribeEgressOnlyInternetGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEgressOnlyInternetGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEgressOnlyInternetGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeEgressOnlyInternetGatewaysAsync(const DescribeEgressOnlyInternetGatewaysRequest& request, const DescribeEgressOnlyInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEgressOnlyInternetGatewaysAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeEgressOnlyInternetGatewaysAsyncHelper(const DescribeEgressOnlyInternetGatewaysRequest& request, const DescribeEgressOnlyInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEgressOnlyInternetGateways(request), context);
}

DescribeElasticGpusOutcome EC2Client::DescribeElasticGpus(const DescribeElasticGpusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeElasticGpusOutcome(DescribeElasticGpusResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticGpusOutcome(outcome.GetError());
  }
}

DescribeElasticGpusOutcomeCallable EC2Client::DescribeElasticGpusCallable(const DescribeElasticGpusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticGpusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticGpus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeElasticGpusAsync(const DescribeElasticGpusRequest& request, const DescribeElasticGpusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticGpusAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeElasticGpusAsyncHelper(const DescribeElasticGpusRequest& request, const DescribeElasticGpusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticGpus(request), context);
}

DescribeExportTasksOutcome EC2Client::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeExportTasksOutcome(DescribeExportTasksResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeExportTasksOutcome(outcome.GetError());
  }
}

DescribeExportTasksOutcomeCallable EC2Client::DescribeExportTasksCallable(const DescribeExportTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExportTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExportTasksAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeExportTasksAsyncHelper(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExportTasks(request), context);
}

DescribeFleetHistoryOutcome EC2Client::DescribeFleetHistory(const DescribeFleetHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFleetHistoryOutcome(DescribeFleetHistoryResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetHistoryOutcome(outcome.GetError());
  }
}

DescribeFleetHistoryOutcomeCallable EC2Client::DescribeFleetHistoryCallable(const DescribeFleetHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeFleetHistoryAsync(const DescribeFleetHistoryRequest& request, const DescribeFleetHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetHistoryAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeFleetHistoryAsyncHelper(const DescribeFleetHistoryRequest& request, const DescribeFleetHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetHistory(request), context);
}

DescribeFleetInstancesOutcome EC2Client::DescribeFleetInstances(const DescribeFleetInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFleetInstancesOutcome(DescribeFleetInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetInstancesOutcome(outcome.GetError());
  }
}

DescribeFleetInstancesOutcomeCallable EC2Client::DescribeFleetInstancesCallable(const DescribeFleetInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeFleetInstancesAsync(const DescribeFleetInstancesRequest& request, const DescribeFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeFleetInstancesAsyncHelper(const DescribeFleetInstancesRequest& request, const DescribeFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetInstances(request), context);
}

DescribeFleetsOutcome EC2Client::DescribeFleets(const DescribeFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFleetsOutcome(DescribeFleetsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetsOutcome(outcome.GetError());
  }
}

DescribeFleetsOutcomeCallable EC2Client::DescribeFleetsCallable(const DescribeFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeFleetsAsync(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeFleetsAsyncHelper(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleets(request), context);
}

DescribeFlowLogsOutcome EC2Client::DescribeFlowLogs(const DescribeFlowLogsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFlowLogsOutcome(DescribeFlowLogsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeFlowLogsOutcome(outcome.GetError());
  }
}

DescribeFlowLogsOutcomeCallable EC2Client::DescribeFlowLogsCallable(const DescribeFlowLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlowLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeFlowLogsAsync(const DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFlowLogsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeFlowLogsAsyncHelper(const DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFlowLogs(request), context);
}

DescribeFpgaImageAttributeOutcome EC2Client::DescribeFpgaImageAttribute(const DescribeFpgaImageAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFpgaImageAttributeOutcome(DescribeFpgaImageAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeFpgaImageAttributeOutcome(outcome.GetError());
  }
}

DescribeFpgaImageAttributeOutcomeCallable EC2Client::DescribeFpgaImageAttributeCallable(const DescribeFpgaImageAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFpgaImageAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFpgaImageAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeFpgaImageAttributeAsync(const DescribeFpgaImageAttributeRequest& request, const DescribeFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFpgaImageAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeFpgaImageAttributeAsyncHelper(const DescribeFpgaImageAttributeRequest& request, const DescribeFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFpgaImageAttribute(request), context);
}

DescribeFpgaImagesOutcome EC2Client::DescribeFpgaImages(const DescribeFpgaImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFpgaImagesOutcome(DescribeFpgaImagesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeFpgaImagesOutcome(outcome.GetError());
  }
}

DescribeFpgaImagesOutcomeCallable EC2Client::DescribeFpgaImagesCallable(const DescribeFpgaImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFpgaImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFpgaImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeFpgaImagesAsync(const DescribeFpgaImagesRequest& request, const DescribeFpgaImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFpgaImagesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeFpgaImagesAsyncHelper(const DescribeFpgaImagesRequest& request, const DescribeFpgaImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFpgaImages(request), context);
}

DescribeHostReservationOfferingsOutcome EC2Client::DescribeHostReservationOfferings(const DescribeHostReservationOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeHostReservationOfferingsOutcome(DescribeHostReservationOfferingsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeHostReservationOfferingsOutcome(outcome.GetError());
  }
}

DescribeHostReservationOfferingsOutcomeCallable EC2Client::DescribeHostReservationOfferingsCallable(const DescribeHostReservationOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHostReservationOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHostReservationOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeHostReservationOfferingsAsync(const DescribeHostReservationOfferingsRequest& request, const DescribeHostReservationOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHostReservationOfferingsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeHostReservationOfferingsAsyncHelper(const DescribeHostReservationOfferingsRequest& request, const DescribeHostReservationOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHostReservationOfferings(request), context);
}

DescribeHostReservationsOutcome EC2Client::DescribeHostReservations(const DescribeHostReservationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeHostReservationsOutcome(DescribeHostReservationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeHostReservationsOutcome(outcome.GetError());
  }
}

DescribeHostReservationsOutcomeCallable EC2Client::DescribeHostReservationsCallable(const DescribeHostReservationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHostReservationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHostReservations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeHostReservationsAsync(const DescribeHostReservationsRequest& request, const DescribeHostReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHostReservationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeHostReservationsAsyncHelper(const DescribeHostReservationsRequest& request, const DescribeHostReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHostReservations(request), context);
}

DescribeHostsOutcome EC2Client::DescribeHosts(const DescribeHostsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeHostsOutcome(DescribeHostsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeHostsOutcome(outcome.GetError());
  }
}

DescribeHostsOutcomeCallable EC2Client::DescribeHostsCallable(const DescribeHostsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHostsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHosts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeHostsAsync(const DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHostsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeHostsAsyncHelper(const DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHosts(request), context);
}

DescribeIamInstanceProfileAssociationsOutcome EC2Client::DescribeIamInstanceProfileAssociations(const DescribeIamInstanceProfileAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeIamInstanceProfileAssociationsOutcome(DescribeIamInstanceProfileAssociationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeIamInstanceProfileAssociationsOutcome(outcome.GetError());
  }
}

DescribeIamInstanceProfileAssociationsOutcomeCallable EC2Client::DescribeIamInstanceProfileAssociationsCallable(const DescribeIamInstanceProfileAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIamInstanceProfileAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIamInstanceProfileAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeIamInstanceProfileAssociationsAsync(const DescribeIamInstanceProfileAssociationsRequest& request, const DescribeIamInstanceProfileAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIamInstanceProfileAssociationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeIamInstanceProfileAssociationsAsyncHelper(const DescribeIamInstanceProfileAssociationsRequest& request, const DescribeIamInstanceProfileAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIamInstanceProfileAssociations(request), context);
}

DescribeIdFormatOutcome EC2Client::DescribeIdFormat(const DescribeIdFormatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeIdFormatOutcome(DescribeIdFormatResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeIdFormatOutcome(outcome.GetError());
  }
}

DescribeIdFormatOutcomeCallable EC2Client::DescribeIdFormatCallable(const DescribeIdFormatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdFormatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdFormat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeIdFormatAsync(const DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIdFormatAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeIdFormatAsyncHelper(const DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdFormat(request), context);
}

DescribeIdentityIdFormatOutcome EC2Client::DescribeIdentityIdFormat(const DescribeIdentityIdFormatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeIdentityIdFormatOutcome(DescribeIdentityIdFormatResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeIdentityIdFormatOutcome(outcome.GetError());
  }
}

DescribeIdentityIdFormatOutcomeCallable EC2Client::DescribeIdentityIdFormatCallable(const DescribeIdentityIdFormatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityIdFormatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityIdFormat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeIdentityIdFormatAsync(const DescribeIdentityIdFormatRequest& request, const DescribeIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIdentityIdFormatAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeIdentityIdFormatAsyncHelper(const DescribeIdentityIdFormatRequest& request, const DescribeIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityIdFormat(request), context);
}

DescribeImageAttributeOutcome EC2Client::DescribeImageAttribute(const DescribeImageAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeImageAttributeOutcome(DescribeImageAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeImageAttributeOutcome(outcome.GetError());
  }
}

DescribeImageAttributeOutcomeCallable EC2Client::DescribeImageAttributeCallable(const DescribeImageAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeImageAttributeAsync(const DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImageAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeImageAttributeAsyncHelper(const DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImageAttribute(request), context);
}

DescribeImagesOutcome EC2Client::DescribeImages(const DescribeImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeImagesOutcome(DescribeImagesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeImagesOutcome(outcome.GetError());
  }
}

DescribeImagesOutcomeCallable EC2Client::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImagesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeImagesAsyncHelper(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImages(request), context);
}

DescribeImportImageTasksOutcome EC2Client::DescribeImportImageTasks(const DescribeImportImageTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeImportImageTasksOutcome(DescribeImportImageTasksResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeImportImageTasksOutcome(outcome.GetError());
  }
}

DescribeImportImageTasksOutcomeCallable EC2Client::DescribeImportImageTasksCallable(const DescribeImportImageTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImportImageTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImportImageTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeImportImageTasksAsync(const DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImportImageTasksAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeImportImageTasksAsyncHelper(const DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImportImageTasks(request), context);
}

DescribeImportSnapshotTasksOutcome EC2Client::DescribeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeImportSnapshotTasksOutcome(DescribeImportSnapshotTasksResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeImportSnapshotTasksOutcome(outcome.GetError());
  }
}

DescribeImportSnapshotTasksOutcomeCallable EC2Client::DescribeImportSnapshotTasksCallable(const DescribeImportSnapshotTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImportSnapshotTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImportSnapshotTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeImportSnapshotTasksAsync(const DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImportSnapshotTasksAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeImportSnapshotTasksAsyncHelper(const DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImportSnapshotTasks(request), context);
}

DescribeInstanceAttributeOutcome EC2Client::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceAttributeOutcome(DescribeInstanceAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceAttributeOutcome(outcome.GetError());
  }
}

DescribeInstanceAttributeOutcomeCallable EC2Client::DescribeInstanceAttributeCallable(const DescribeInstanceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeInstanceAttributeAsyncHelper(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceAttribute(request), context);
}

DescribeInstanceCreditSpecificationsOutcome EC2Client::DescribeInstanceCreditSpecifications(const DescribeInstanceCreditSpecificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceCreditSpecificationsOutcome(DescribeInstanceCreditSpecificationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceCreditSpecificationsOutcome(outcome.GetError());
  }
}

DescribeInstanceCreditSpecificationsOutcomeCallable EC2Client::DescribeInstanceCreditSpecificationsCallable(const DescribeInstanceCreditSpecificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceCreditSpecificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceCreditSpecifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeInstanceCreditSpecificationsAsync(const DescribeInstanceCreditSpecificationsRequest& request, const DescribeInstanceCreditSpecificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceCreditSpecificationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeInstanceCreditSpecificationsAsyncHelper(const DescribeInstanceCreditSpecificationsRequest& request, const DescribeInstanceCreditSpecificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceCreditSpecifications(request), context);
}

DescribeInstanceStatusOutcome EC2Client::DescribeInstanceStatus(const DescribeInstanceStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceStatusOutcome(DescribeInstanceStatusResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceStatusOutcome(outcome.GetError());
  }
}

DescribeInstanceStatusOutcomeCallable EC2Client::DescribeInstanceStatusCallable(const DescribeInstanceStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceStatusAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeInstanceStatusAsyncHelper(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceStatus(request), context);
}

DescribeInstancesOutcome EC2Client::DescribeInstances(const DescribeInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstancesOutcome(DescribeInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeInstancesOutcome(outcome.GetError());
  }
}

DescribeInstancesOutcomeCallable EC2Client::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeInstancesAsyncHelper(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstances(request), context);
}

DescribeInternetGatewaysOutcome EC2Client::DescribeInternetGateways(const DescribeInternetGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInternetGatewaysOutcome(DescribeInternetGatewaysResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeInternetGatewaysOutcome(outcome.GetError());
  }
}

DescribeInternetGatewaysOutcomeCallable EC2Client::DescribeInternetGatewaysCallable(const DescribeInternetGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInternetGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInternetGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeInternetGatewaysAsync(const DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInternetGatewaysAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeInternetGatewaysAsyncHelper(const DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInternetGateways(request), context);
}

DescribeKeyPairsOutcome EC2Client::DescribeKeyPairs(const DescribeKeyPairsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeKeyPairsOutcome(DescribeKeyPairsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeKeyPairsOutcome(outcome.GetError());
  }
}

DescribeKeyPairsOutcomeCallable EC2Client::DescribeKeyPairsCallable(const DescribeKeyPairsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeKeyPairsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeKeyPairs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeKeyPairsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeKeyPairsAsyncHelper(const DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeKeyPairs(request), context);
}

DescribeLaunchTemplateVersionsOutcome EC2Client::DescribeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLaunchTemplateVersionsOutcome(DescribeLaunchTemplateVersionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeLaunchTemplateVersionsOutcome(outcome.GetError());
  }
}

DescribeLaunchTemplateVersionsOutcomeCallable EC2Client::DescribeLaunchTemplateVersionsCallable(const DescribeLaunchTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLaunchTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeLaunchTemplateVersionsAsync(const DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLaunchTemplateVersionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeLaunchTemplateVersionsAsyncHelper(const DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLaunchTemplateVersions(request), context);
}

DescribeLaunchTemplatesOutcome EC2Client::DescribeLaunchTemplates(const DescribeLaunchTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLaunchTemplatesOutcome(DescribeLaunchTemplatesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeLaunchTemplatesOutcome(outcome.GetError());
  }
}

DescribeLaunchTemplatesOutcomeCallable EC2Client::DescribeLaunchTemplatesCallable(const DescribeLaunchTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLaunchTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeLaunchTemplatesAsync(const DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLaunchTemplatesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeLaunchTemplatesAsyncHelper(const DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLaunchTemplates(request), context);
}

DescribeMovingAddressesOutcome EC2Client::DescribeMovingAddresses(const DescribeMovingAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMovingAddressesOutcome(DescribeMovingAddressesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeMovingAddressesOutcome(outcome.GetError());
  }
}

DescribeMovingAddressesOutcomeCallable EC2Client::DescribeMovingAddressesCallable(const DescribeMovingAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMovingAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMovingAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeMovingAddressesAsync(const DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMovingAddressesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeMovingAddressesAsyncHelper(const DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMovingAddresses(request), context);
}

DescribeNatGatewaysOutcome EC2Client::DescribeNatGateways(const DescribeNatGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeNatGatewaysOutcome(DescribeNatGatewaysResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeNatGatewaysOutcome(outcome.GetError());
  }
}

DescribeNatGatewaysOutcomeCallable EC2Client::DescribeNatGatewaysCallable(const DescribeNatGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNatGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNatGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNatGatewaysAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeNatGatewaysAsyncHelper(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNatGateways(request), context);
}

DescribeNetworkAclsOutcome EC2Client::DescribeNetworkAcls(const DescribeNetworkAclsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeNetworkAclsOutcome(DescribeNetworkAclsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeNetworkAclsOutcome(outcome.GetError());
  }
}

DescribeNetworkAclsOutcomeCallable EC2Client::DescribeNetworkAclsCallable(const DescribeNetworkAclsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkAclsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNetworkAcls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeNetworkAclsAsync(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNetworkAclsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeNetworkAclsAsyncHelper(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNetworkAcls(request), context);
}

DescribeNetworkInterfaceAttributeOutcome EC2Client::DescribeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeNetworkInterfaceAttributeOutcome(DescribeNetworkInterfaceAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeNetworkInterfaceAttributeOutcome(outcome.GetError());
  }
}

DescribeNetworkInterfaceAttributeOutcomeCallable EC2Client::DescribeNetworkInterfaceAttributeCallable(const DescribeNetworkInterfaceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInterfaceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNetworkInterfaceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeNetworkInterfaceAttributeAsync(const DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNetworkInterfaceAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeNetworkInterfaceAttributeAsyncHelper(const DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNetworkInterfaceAttribute(request), context);
}

DescribeNetworkInterfacePermissionsOutcome EC2Client::DescribeNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeNetworkInterfacePermissionsOutcome(DescribeNetworkInterfacePermissionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeNetworkInterfacePermissionsOutcome(outcome.GetError());
  }
}

DescribeNetworkInterfacePermissionsOutcomeCallable EC2Client::DescribeNetworkInterfacePermissionsCallable(const DescribeNetworkInterfacePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInterfacePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNetworkInterfacePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeNetworkInterfacePermissionsAsync(const DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNetworkInterfacePermissionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeNetworkInterfacePermissionsAsyncHelper(const DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNetworkInterfacePermissions(request), context);
}

DescribeNetworkInterfacesOutcome EC2Client::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeNetworkInterfacesOutcome(DescribeNetworkInterfacesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeNetworkInterfacesOutcome(outcome.GetError());
  }
}

DescribeNetworkInterfacesOutcomeCallable EC2Client::DescribeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInterfacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNetworkInterfaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNetworkInterfacesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeNetworkInterfacesAsyncHelper(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNetworkInterfaces(request), context);
}

DescribePlacementGroupsOutcome EC2Client::DescribePlacementGroups(const DescribePlacementGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePlacementGroupsOutcome(DescribePlacementGroupsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribePlacementGroupsOutcome(outcome.GetError());
  }
}

DescribePlacementGroupsOutcomeCallable EC2Client::DescribePlacementGroupsCallable(const DescribePlacementGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePlacementGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePlacementGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribePlacementGroupsAsync(const DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePlacementGroupsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribePlacementGroupsAsyncHelper(const DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePlacementGroups(request), context);
}

DescribePrefixListsOutcome EC2Client::DescribePrefixLists(const DescribePrefixListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePrefixListsOutcome(DescribePrefixListsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribePrefixListsOutcome(outcome.GetError());
  }
}

DescribePrefixListsOutcomeCallable EC2Client::DescribePrefixListsCallable(const DescribePrefixListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePrefixListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePrefixLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribePrefixListsAsync(const DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePrefixListsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribePrefixListsAsyncHelper(const DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePrefixLists(request), context);
}

DescribePrincipalIdFormatOutcome EC2Client::DescribePrincipalIdFormat(const DescribePrincipalIdFormatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePrincipalIdFormatOutcome(DescribePrincipalIdFormatResponse(outcome.GetResult()));
  }
  else
  {
    return DescribePrincipalIdFormatOutcome(outcome.GetError());
  }
}

DescribePrincipalIdFormatOutcomeCallable EC2Client::DescribePrincipalIdFormatCallable(const DescribePrincipalIdFormatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePrincipalIdFormatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePrincipalIdFormat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribePrincipalIdFormatAsync(const DescribePrincipalIdFormatRequest& request, const DescribePrincipalIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePrincipalIdFormatAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribePrincipalIdFormatAsyncHelper(const DescribePrincipalIdFormatRequest& request, const DescribePrincipalIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePrincipalIdFormat(request), context);
}

DescribePublicIpv4PoolsOutcome EC2Client::DescribePublicIpv4Pools(const DescribePublicIpv4PoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribePublicIpv4PoolsOutcome(DescribePublicIpv4PoolsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribePublicIpv4PoolsOutcome(outcome.GetError());
  }
}

DescribePublicIpv4PoolsOutcomeCallable EC2Client::DescribePublicIpv4PoolsCallable(const DescribePublicIpv4PoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePublicIpv4PoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePublicIpv4Pools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribePublicIpv4PoolsAsync(const DescribePublicIpv4PoolsRequest& request, const DescribePublicIpv4PoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePublicIpv4PoolsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribePublicIpv4PoolsAsyncHelper(const DescribePublicIpv4PoolsRequest& request, const DescribePublicIpv4PoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePublicIpv4Pools(request), context);
}

DescribeRegionsOutcome EC2Client::DescribeRegions(const DescribeRegionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRegionsOutcome(DescribeRegionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeRegionsOutcome(outcome.GetError());
  }
}

DescribeRegionsOutcomeCallable EC2Client::DescribeRegionsCallable(const DescribeRegionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRegions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRegionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeRegionsAsyncHelper(const DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRegions(request), context);
}

DescribeReservedInstancesOutcome EC2Client::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedInstancesOutcome(DescribeReservedInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedInstancesOutcome(outcome.GetError());
  }
}

DescribeReservedInstancesOutcomeCallable EC2Client::DescribeReservedInstancesCallable(const DescribeReservedInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeReservedInstancesAsync(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeReservedInstancesAsyncHelper(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstances(request), context);
}

DescribeReservedInstancesListingsOutcome EC2Client::DescribeReservedInstancesListings(const DescribeReservedInstancesListingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedInstancesListingsOutcome(DescribeReservedInstancesListingsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedInstancesListingsOutcome(outcome.GetError());
  }
}

DescribeReservedInstancesListingsOutcomeCallable EC2Client::DescribeReservedInstancesListingsCallable(const DescribeReservedInstancesListingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesListingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstancesListings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeReservedInstancesListingsAsync(const DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedInstancesListingsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeReservedInstancesListingsAsyncHelper(const DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstancesListings(request), context);
}

DescribeReservedInstancesModificationsOutcome EC2Client::DescribeReservedInstancesModifications(const DescribeReservedInstancesModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedInstancesModificationsOutcome(DescribeReservedInstancesModificationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedInstancesModificationsOutcome(outcome.GetError());
  }
}

DescribeReservedInstancesModificationsOutcomeCallable EC2Client::DescribeReservedInstancesModificationsCallable(const DescribeReservedInstancesModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstancesModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeReservedInstancesModificationsAsync(const DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedInstancesModificationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeReservedInstancesModificationsAsyncHelper(const DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstancesModifications(request), context);
}

DescribeReservedInstancesOfferingsOutcome EC2Client::DescribeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReservedInstancesOfferingsOutcome(DescribeReservedInstancesOfferingsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeReservedInstancesOfferingsOutcome(outcome.GetError());
  }
}

DescribeReservedInstancesOfferingsOutcomeCallable EC2Client::DescribeReservedInstancesOfferingsCallable(const DescribeReservedInstancesOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservedInstancesOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeReservedInstancesOfferingsAsync(const DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservedInstancesOfferingsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeReservedInstancesOfferingsAsyncHelper(const DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstancesOfferings(request), context);
}

DescribeRouteTablesOutcome EC2Client::DescribeRouteTables(const DescribeRouteTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRouteTablesOutcome(DescribeRouteTablesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeRouteTablesOutcome(outcome.GetError());
  }
}

DescribeRouteTablesOutcomeCallable EC2Client::DescribeRouteTablesCallable(const DescribeRouteTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRouteTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRouteTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRouteTablesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeRouteTablesAsyncHelper(const DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRouteTables(request), context);
}

DescribeScheduledInstanceAvailabilityOutcome EC2Client::DescribeScheduledInstanceAvailability(const DescribeScheduledInstanceAvailabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScheduledInstanceAvailabilityOutcome(DescribeScheduledInstanceAvailabilityResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeScheduledInstanceAvailabilityOutcome(outcome.GetError());
  }
}

DescribeScheduledInstanceAvailabilityOutcomeCallable EC2Client::DescribeScheduledInstanceAvailabilityCallable(const DescribeScheduledInstanceAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledInstanceAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledInstanceAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeScheduledInstanceAvailabilityAsync(const DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScheduledInstanceAvailabilityAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeScheduledInstanceAvailabilityAsyncHelper(const DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScheduledInstanceAvailability(request), context);
}

DescribeScheduledInstancesOutcome EC2Client::DescribeScheduledInstances(const DescribeScheduledInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScheduledInstancesOutcome(DescribeScheduledInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeScheduledInstancesOutcome(outcome.GetError());
  }
}

DescribeScheduledInstancesOutcomeCallable EC2Client::DescribeScheduledInstancesCallable(const DescribeScheduledInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeScheduledInstancesAsync(const DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScheduledInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeScheduledInstancesAsyncHelper(const DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScheduledInstances(request), context);
}

DescribeSecurityGroupReferencesOutcome EC2Client::DescribeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSecurityGroupReferencesOutcome(DescribeSecurityGroupReferencesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSecurityGroupReferencesOutcome(outcome.GetError());
  }
}

DescribeSecurityGroupReferencesOutcomeCallable EC2Client::DescribeSecurityGroupReferencesCallable(const DescribeSecurityGroupReferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityGroupReferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityGroupReferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSecurityGroupReferencesAsync(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSecurityGroupReferencesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSecurityGroupReferencesAsyncHelper(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityGroupReferences(request), context);
}

DescribeSecurityGroupsOutcome EC2Client::DescribeSecurityGroups(const DescribeSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSecurityGroupsOutcome(DescribeSecurityGroupsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSecurityGroupsOutcome(outcome.GetError());
  }
}

DescribeSecurityGroupsOutcomeCallable EC2Client::DescribeSecurityGroupsCallable(const DescribeSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSecurityGroupsAsyncHelper(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityGroups(request), context);
}

DescribeSnapshotAttributeOutcome EC2Client::DescribeSnapshotAttribute(const DescribeSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSnapshotAttributeOutcome(DescribeSnapshotAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSnapshotAttributeOutcome(outcome.GetError());
  }
}

DescribeSnapshotAttributeOutcomeCallable EC2Client::DescribeSnapshotAttributeCallable(const DescribeSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSnapshotAttributeAsync(const DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSnapshotAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSnapshotAttributeAsyncHelper(const DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshotAttribute(request), context);
}

DescribeSnapshotsOutcome EC2Client::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSnapshotsOutcome(DescribeSnapshotsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSnapshotsOutcome(outcome.GetError());
  }
}

DescribeSnapshotsOutcomeCallable EC2Client::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSnapshotsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSnapshotsAsyncHelper(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshots(request), context);
}

DescribeSpotDatafeedSubscriptionOutcome EC2Client::DescribeSpotDatafeedSubscription(const DescribeSpotDatafeedSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSpotDatafeedSubscriptionOutcome(DescribeSpotDatafeedSubscriptionResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSpotDatafeedSubscriptionOutcome(outcome.GetError());
  }
}

DescribeSpotDatafeedSubscriptionOutcomeCallable EC2Client::DescribeSpotDatafeedSubscriptionCallable(const DescribeSpotDatafeedSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotDatafeedSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpotDatafeedSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSpotDatafeedSubscriptionAsync(const DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpotDatafeedSubscriptionAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSpotDatafeedSubscriptionAsyncHelper(const DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotDatafeedSubscription(request), context);
}

DescribeSpotFleetInstancesOutcome EC2Client::DescribeSpotFleetInstances(const DescribeSpotFleetInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSpotFleetInstancesOutcome(DescribeSpotFleetInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSpotFleetInstancesOutcome(outcome.GetError());
  }
}

DescribeSpotFleetInstancesOutcomeCallable EC2Client::DescribeSpotFleetInstancesCallable(const DescribeSpotFleetInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotFleetInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpotFleetInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSpotFleetInstancesAsync(const DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpotFleetInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSpotFleetInstancesAsyncHelper(const DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotFleetInstances(request), context);
}

DescribeSpotFleetRequestHistoryOutcome EC2Client::DescribeSpotFleetRequestHistory(const DescribeSpotFleetRequestHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSpotFleetRequestHistoryOutcome(DescribeSpotFleetRequestHistoryResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSpotFleetRequestHistoryOutcome(outcome.GetError());
  }
}

DescribeSpotFleetRequestHistoryOutcomeCallable EC2Client::DescribeSpotFleetRequestHistoryCallable(const DescribeSpotFleetRequestHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotFleetRequestHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpotFleetRequestHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSpotFleetRequestHistoryAsync(const DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpotFleetRequestHistoryAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSpotFleetRequestHistoryAsyncHelper(const DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotFleetRequestHistory(request), context);
}

DescribeSpotFleetRequestsOutcome EC2Client::DescribeSpotFleetRequests(const DescribeSpotFleetRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSpotFleetRequestsOutcome(DescribeSpotFleetRequestsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSpotFleetRequestsOutcome(outcome.GetError());
  }
}

DescribeSpotFleetRequestsOutcomeCallable EC2Client::DescribeSpotFleetRequestsCallable(const DescribeSpotFleetRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotFleetRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpotFleetRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSpotFleetRequestsAsync(const DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpotFleetRequestsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSpotFleetRequestsAsyncHelper(const DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotFleetRequests(request), context);
}

DescribeSpotInstanceRequestsOutcome EC2Client::DescribeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSpotInstanceRequestsOutcome(DescribeSpotInstanceRequestsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSpotInstanceRequestsOutcome(outcome.GetError());
  }
}

DescribeSpotInstanceRequestsOutcomeCallable EC2Client::DescribeSpotInstanceRequestsCallable(const DescribeSpotInstanceRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotInstanceRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpotInstanceRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSpotInstanceRequestsAsync(const DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpotInstanceRequestsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSpotInstanceRequestsAsyncHelper(const DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotInstanceRequests(request), context);
}

DescribeSpotPriceHistoryOutcome EC2Client::DescribeSpotPriceHistory(const DescribeSpotPriceHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSpotPriceHistoryOutcome(DescribeSpotPriceHistoryResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSpotPriceHistoryOutcome(outcome.GetError());
  }
}

DescribeSpotPriceHistoryOutcomeCallable EC2Client::DescribeSpotPriceHistoryCallable(const DescribeSpotPriceHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotPriceHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpotPriceHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSpotPriceHistoryAsync(const DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpotPriceHistoryAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSpotPriceHistoryAsyncHelper(const DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotPriceHistory(request), context);
}

DescribeStaleSecurityGroupsOutcome EC2Client::DescribeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStaleSecurityGroupsOutcome(DescribeStaleSecurityGroupsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeStaleSecurityGroupsOutcome(outcome.GetError());
  }
}

DescribeStaleSecurityGroupsOutcomeCallable EC2Client::DescribeStaleSecurityGroupsCallable(const DescribeStaleSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStaleSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStaleSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeStaleSecurityGroupsAsync(const DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStaleSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeStaleSecurityGroupsAsyncHelper(const DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStaleSecurityGroups(request), context);
}

DescribeSubnetsOutcome EC2Client::DescribeSubnets(const DescribeSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSubnetsOutcome(DescribeSubnetsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeSubnetsOutcome(outcome.GetError());
  }
}

DescribeSubnetsOutcomeCallable EC2Client::DescribeSubnetsCallable(const DescribeSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSubnetsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeSubnetsAsyncHelper(const DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSubnets(request), context);
}

DescribeTagsOutcome EC2Client::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable EC2Client::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DescribeTrafficMirrorFiltersOutcome EC2Client::DescribeTrafficMirrorFilters(const DescribeTrafficMirrorFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrafficMirrorFiltersOutcome(DescribeTrafficMirrorFiltersResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTrafficMirrorFiltersOutcome(outcome.GetError());
  }
}

DescribeTrafficMirrorFiltersOutcomeCallable EC2Client::DescribeTrafficMirrorFiltersCallable(const DescribeTrafficMirrorFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrafficMirrorFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrafficMirrorFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTrafficMirrorFiltersAsync(const DescribeTrafficMirrorFiltersRequest& request, const DescribeTrafficMirrorFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrafficMirrorFiltersAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTrafficMirrorFiltersAsyncHelper(const DescribeTrafficMirrorFiltersRequest& request, const DescribeTrafficMirrorFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrafficMirrorFilters(request), context);
}

DescribeTrafficMirrorSessionsOutcome EC2Client::DescribeTrafficMirrorSessions(const DescribeTrafficMirrorSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrafficMirrorSessionsOutcome(DescribeTrafficMirrorSessionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTrafficMirrorSessionsOutcome(outcome.GetError());
  }
}

DescribeTrafficMirrorSessionsOutcomeCallable EC2Client::DescribeTrafficMirrorSessionsCallable(const DescribeTrafficMirrorSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrafficMirrorSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrafficMirrorSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTrafficMirrorSessionsAsync(const DescribeTrafficMirrorSessionsRequest& request, const DescribeTrafficMirrorSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrafficMirrorSessionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTrafficMirrorSessionsAsyncHelper(const DescribeTrafficMirrorSessionsRequest& request, const DescribeTrafficMirrorSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrafficMirrorSessions(request), context);
}

DescribeTrafficMirrorTargetsOutcome EC2Client::DescribeTrafficMirrorTargets(const DescribeTrafficMirrorTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrafficMirrorTargetsOutcome(DescribeTrafficMirrorTargetsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTrafficMirrorTargetsOutcome(outcome.GetError());
  }
}

DescribeTrafficMirrorTargetsOutcomeCallable EC2Client::DescribeTrafficMirrorTargetsCallable(const DescribeTrafficMirrorTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrafficMirrorTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrafficMirrorTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTrafficMirrorTargetsAsync(const DescribeTrafficMirrorTargetsRequest& request, const DescribeTrafficMirrorTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrafficMirrorTargetsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTrafficMirrorTargetsAsyncHelper(const DescribeTrafficMirrorTargetsRequest& request, const DescribeTrafficMirrorTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrafficMirrorTargets(request), context);
}

DescribeTransitGatewayAttachmentsOutcome EC2Client::DescribeTransitGatewayAttachments(const DescribeTransitGatewayAttachmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTransitGatewayAttachmentsOutcome(DescribeTransitGatewayAttachmentsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTransitGatewayAttachmentsOutcome(outcome.GetError());
  }
}

DescribeTransitGatewayAttachmentsOutcomeCallable EC2Client::DescribeTransitGatewayAttachmentsCallable(const DescribeTransitGatewayAttachmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayAttachmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransitGatewayAttachments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTransitGatewayAttachmentsAsync(const DescribeTransitGatewayAttachmentsRequest& request, const DescribeTransitGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTransitGatewayAttachmentsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTransitGatewayAttachmentsAsyncHelper(const DescribeTransitGatewayAttachmentsRequest& request, const DescribeTransitGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTransitGatewayAttachments(request), context);
}

DescribeTransitGatewayRouteTablesOutcome EC2Client::DescribeTransitGatewayRouteTables(const DescribeTransitGatewayRouteTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTransitGatewayRouteTablesOutcome(DescribeTransitGatewayRouteTablesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTransitGatewayRouteTablesOutcome(outcome.GetError());
  }
}

DescribeTransitGatewayRouteTablesOutcomeCallable EC2Client::DescribeTransitGatewayRouteTablesCallable(const DescribeTransitGatewayRouteTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayRouteTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransitGatewayRouteTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTransitGatewayRouteTablesAsync(const DescribeTransitGatewayRouteTablesRequest& request, const DescribeTransitGatewayRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTransitGatewayRouteTablesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTransitGatewayRouteTablesAsyncHelper(const DescribeTransitGatewayRouteTablesRequest& request, const DescribeTransitGatewayRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTransitGatewayRouteTables(request), context);
}

DescribeTransitGatewayVpcAttachmentsOutcome EC2Client::DescribeTransitGatewayVpcAttachments(const DescribeTransitGatewayVpcAttachmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTransitGatewayVpcAttachmentsOutcome(DescribeTransitGatewayVpcAttachmentsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTransitGatewayVpcAttachmentsOutcome(outcome.GetError());
  }
}

DescribeTransitGatewayVpcAttachmentsOutcomeCallable EC2Client::DescribeTransitGatewayVpcAttachmentsCallable(const DescribeTransitGatewayVpcAttachmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayVpcAttachmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransitGatewayVpcAttachments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTransitGatewayVpcAttachmentsAsync(const DescribeTransitGatewayVpcAttachmentsRequest& request, const DescribeTransitGatewayVpcAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTransitGatewayVpcAttachmentsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTransitGatewayVpcAttachmentsAsyncHelper(const DescribeTransitGatewayVpcAttachmentsRequest& request, const DescribeTransitGatewayVpcAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTransitGatewayVpcAttachments(request), context);
}

DescribeTransitGatewaysOutcome EC2Client::DescribeTransitGateways(const DescribeTransitGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTransitGatewaysOutcome(DescribeTransitGatewaysResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeTransitGatewaysOutcome(outcome.GetError());
  }
}

DescribeTransitGatewaysOutcomeCallable EC2Client::DescribeTransitGatewaysCallable(const DescribeTransitGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransitGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeTransitGatewaysAsync(const DescribeTransitGatewaysRequest& request, const DescribeTransitGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTransitGatewaysAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeTransitGatewaysAsyncHelper(const DescribeTransitGatewaysRequest& request, const DescribeTransitGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTransitGateways(request), context);
}

DescribeVolumeAttributeOutcome EC2Client::DescribeVolumeAttribute(const DescribeVolumeAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVolumeAttributeOutcome(DescribeVolumeAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVolumeAttributeOutcome(outcome.GetError());
  }
}

DescribeVolumeAttributeOutcomeCallable EC2Client::DescribeVolumeAttributeCallable(const DescribeVolumeAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumeAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumeAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVolumeAttributeAsync(const DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVolumeAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVolumeAttributeAsyncHelper(const DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumeAttribute(request), context);
}

DescribeVolumeStatusOutcome EC2Client::DescribeVolumeStatus(const DescribeVolumeStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVolumeStatusOutcome(DescribeVolumeStatusResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVolumeStatusOutcome(outcome.GetError());
  }
}

DescribeVolumeStatusOutcomeCallable EC2Client::DescribeVolumeStatusCallable(const DescribeVolumeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVolumeStatusAsync(const DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVolumeStatusAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVolumeStatusAsyncHelper(const DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumeStatus(request), context);
}

DescribeVolumesOutcome EC2Client::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVolumesOutcome(DescribeVolumesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVolumesOutcome(outcome.GetError());
  }
}

DescribeVolumesOutcomeCallable EC2Client::DescribeVolumesCallable(const DescribeVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVolumesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVolumesAsyncHelper(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumes(request), context);
}

DescribeVolumesModificationsOutcome EC2Client::DescribeVolumesModifications(const DescribeVolumesModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVolumesModificationsOutcome(DescribeVolumesModificationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVolumesModificationsOutcome(outcome.GetError());
  }
}

DescribeVolumesModificationsOutcomeCallable EC2Client::DescribeVolumesModificationsCallable(const DescribeVolumesModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumesModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVolumesModificationsAsync(const DescribeVolumesModificationsRequest& request, const DescribeVolumesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVolumesModificationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVolumesModificationsAsyncHelper(const DescribeVolumesModificationsRequest& request, const DescribeVolumesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumesModifications(request), context);
}

DescribeVpcAttributeOutcome EC2Client::DescribeVpcAttribute(const DescribeVpcAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcAttributeOutcome(DescribeVpcAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcAttributeOutcome(outcome.GetError());
  }
}

DescribeVpcAttributeOutcomeCallable EC2Client::DescribeVpcAttributeCallable(const DescribeVpcAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcAttributeAsync(const DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcAttributeAsyncHelper(const DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcAttribute(request), context);
}

DescribeVpcClassicLinkOutcome EC2Client::DescribeVpcClassicLink(const DescribeVpcClassicLinkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcClassicLinkOutcome(DescribeVpcClassicLinkResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcClassicLinkOutcome(outcome.GetError());
  }
}

DescribeVpcClassicLinkOutcomeCallable EC2Client::DescribeVpcClassicLinkCallable(const DescribeVpcClassicLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcClassicLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcClassicLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcClassicLinkAsync(const DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcClassicLinkAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcClassicLinkAsyncHelper(const DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcClassicLink(request), context);
}

DescribeVpcClassicLinkDnsSupportOutcome EC2Client::DescribeVpcClassicLinkDnsSupport(const DescribeVpcClassicLinkDnsSupportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcClassicLinkDnsSupportOutcome(DescribeVpcClassicLinkDnsSupportResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcClassicLinkDnsSupportOutcome(outcome.GetError());
  }
}

DescribeVpcClassicLinkDnsSupportOutcomeCallable EC2Client::DescribeVpcClassicLinkDnsSupportCallable(const DescribeVpcClassicLinkDnsSupportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcClassicLinkDnsSupportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcClassicLinkDnsSupport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcClassicLinkDnsSupportAsync(const DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcClassicLinkDnsSupportAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcClassicLinkDnsSupportAsyncHelper(const DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcClassicLinkDnsSupport(request), context);
}

DescribeVpcEndpointConnectionNotificationsOutcome EC2Client::DescribeVpcEndpointConnectionNotifications(const DescribeVpcEndpointConnectionNotificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcEndpointConnectionNotificationsOutcome(DescribeVpcEndpointConnectionNotificationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcEndpointConnectionNotificationsOutcome(outcome.GetError());
  }
}

DescribeVpcEndpointConnectionNotificationsOutcomeCallable EC2Client::DescribeVpcEndpointConnectionNotificationsCallable(const DescribeVpcEndpointConnectionNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointConnectionNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpointConnectionNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcEndpointConnectionNotificationsAsync(const DescribeVpcEndpointConnectionNotificationsRequest& request, const DescribeVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcEndpointConnectionNotificationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcEndpointConnectionNotificationsAsyncHelper(const DescribeVpcEndpointConnectionNotificationsRequest& request, const DescribeVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpointConnectionNotifications(request), context);
}

DescribeVpcEndpointConnectionsOutcome EC2Client::DescribeVpcEndpointConnections(const DescribeVpcEndpointConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcEndpointConnectionsOutcome(DescribeVpcEndpointConnectionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcEndpointConnectionsOutcome(outcome.GetError());
  }
}

DescribeVpcEndpointConnectionsOutcomeCallable EC2Client::DescribeVpcEndpointConnectionsCallable(const DescribeVpcEndpointConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpointConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcEndpointConnectionsAsync(const DescribeVpcEndpointConnectionsRequest& request, const DescribeVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcEndpointConnectionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcEndpointConnectionsAsyncHelper(const DescribeVpcEndpointConnectionsRequest& request, const DescribeVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpointConnections(request), context);
}

DescribeVpcEndpointServiceConfigurationsOutcome EC2Client::DescribeVpcEndpointServiceConfigurations(const DescribeVpcEndpointServiceConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcEndpointServiceConfigurationsOutcome(DescribeVpcEndpointServiceConfigurationsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcEndpointServiceConfigurationsOutcome(outcome.GetError());
  }
}

DescribeVpcEndpointServiceConfigurationsOutcomeCallable EC2Client::DescribeVpcEndpointServiceConfigurationsCallable(const DescribeVpcEndpointServiceConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointServiceConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpointServiceConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcEndpointServiceConfigurationsAsync(const DescribeVpcEndpointServiceConfigurationsRequest& request, const DescribeVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcEndpointServiceConfigurationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcEndpointServiceConfigurationsAsyncHelper(const DescribeVpcEndpointServiceConfigurationsRequest& request, const DescribeVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpointServiceConfigurations(request), context);
}

DescribeVpcEndpointServicePermissionsOutcome EC2Client::DescribeVpcEndpointServicePermissions(const DescribeVpcEndpointServicePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcEndpointServicePermissionsOutcome(DescribeVpcEndpointServicePermissionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcEndpointServicePermissionsOutcome(outcome.GetError());
  }
}

DescribeVpcEndpointServicePermissionsOutcomeCallable EC2Client::DescribeVpcEndpointServicePermissionsCallable(const DescribeVpcEndpointServicePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointServicePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpointServicePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcEndpointServicePermissionsAsync(const DescribeVpcEndpointServicePermissionsRequest& request, const DescribeVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcEndpointServicePermissionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcEndpointServicePermissionsAsyncHelper(const DescribeVpcEndpointServicePermissionsRequest& request, const DescribeVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpointServicePermissions(request), context);
}

DescribeVpcEndpointServicesOutcome EC2Client::DescribeVpcEndpointServices(const DescribeVpcEndpointServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcEndpointServicesOutcome(DescribeVpcEndpointServicesResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcEndpointServicesOutcome(outcome.GetError());
  }
}

DescribeVpcEndpointServicesOutcomeCallable EC2Client::DescribeVpcEndpointServicesCallable(const DescribeVpcEndpointServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpointServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcEndpointServicesAsync(const DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcEndpointServicesAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcEndpointServicesAsyncHelper(const DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpointServices(request), context);
}

DescribeVpcEndpointsOutcome EC2Client::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcEndpointsOutcome(DescribeVpcEndpointsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcEndpointsOutcome(outcome.GetError());
  }
}

DescribeVpcEndpointsOutcomeCallable EC2Client::DescribeVpcEndpointsCallable(const DescribeVpcEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcEndpointsAsync(const DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcEndpointsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcEndpointsAsyncHelper(const DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpoints(request), context);
}

DescribeVpcPeeringConnectionsOutcome EC2Client::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcPeeringConnectionsOutcome(DescribeVpcPeeringConnectionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcPeeringConnectionsOutcome(outcome.GetError());
  }
}

DescribeVpcPeeringConnectionsOutcomeCallable EC2Client::DescribeVpcPeeringConnectionsCallable(const DescribeVpcPeeringConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcPeeringConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcPeeringConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcPeeringConnectionsAsync(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcPeeringConnectionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcPeeringConnectionsAsyncHelper(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcPeeringConnections(request), context);
}

DescribeVpcsOutcome EC2Client::DescribeVpcs(const DescribeVpcsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpcsOutcome(DescribeVpcsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcsOutcome(outcome.GetError());
  }
}

DescribeVpcsOutcomeCallable EC2Client::DescribeVpcsCallable(const DescribeVpcsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpcsAsyncHelper(const DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcs(request), context);
}

DescribeVpnConnectionsOutcome EC2Client::DescribeVpnConnections(const DescribeVpnConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpnConnectionsOutcome(DescribeVpnConnectionsResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpnConnectionsOutcome(outcome.GetError());
  }
}

DescribeVpnConnectionsOutcomeCallable EC2Client::DescribeVpnConnectionsCallable(const DescribeVpnConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpnConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpnConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpnConnectionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpnConnectionsAsyncHelper(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpnConnections(request), context);
}

DescribeVpnGatewaysOutcome EC2Client::DescribeVpnGateways(const DescribeVpnGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVpnGatewaysOutcome(DescribeVpnGatewaysResponse(outcome.GetResult()));
  }
  else
  {
    return DescribeVpnGatewaysOutcome(outcome.GetError());
  }
}

DescribeVpnGatewaysOutcomeCallable EC2Client::DescribeVpnGatewaysCallable(const DescribeVpnGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpnGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpnGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DescribeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpnGatewaysAsyncHelper( request, handler, context ); } );
}

void EC2Client::DescribeVpnGatewaysAsyncHelper(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpnGateways(request), context);
}

DetachClassicLinkVpcOutcome EC2Client::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachClassicLinkVpcOutcome(DetachClassicLinkVpcResponse(outcome.GetResult()));
  }
  else
  {
    return DetachClassicLinkVpcOutcome(outcome.GetError());
  }
}

DetachClassicLinkVpcOutcomeCallable EC2Client::DetachClassicLinkVpcCallable(const DetachClassicLinkVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachClassicLinkVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachClassicLinkVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DetachClassicLinkVpcAsync(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachClassicLinkVpcAsyncHelper( request, handler, context ); } );
}

void EC2Client::DetachClassicLinkVpcAsyncHelper(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachClassicLinkVpc(request), context);
}

DetachInternetGatewayOutcome EC2Client::DetachInternetGateway(const DetachInternetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachInternetGatewayOutcome(NoResult());
  }
  else
  {
    return DetachInternetGatewayOutcome(outcome.GetError());
  }
}

DetachInternetGatewayOutcomeCallable EC2Client::DetachInternetGatewayCallable(const DetachInternetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachInternetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DetachInternetGatewayAsync(const DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachInternetGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DetachInternetGatewayAsyncHelper(const DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachInternetGateway(request), context);
}

DetachNetworkInterfaceOutcome EC2Client::DetachNetworkInterface(const DetachNetworkInterfaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachNetworkInterfaceOutcome(NoResult());
  }
  else
  {
    return DetachNetworkInterfaceOutcome(outcome.GetError());
  }
}

DetachNetworkInterfaceOutcomeCallable EC2Client::DetachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachNetworkInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DetachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachNetworkInterfaceAsyncHelper( request, handler, context ); } );
}

void EC2Client::DetachNetworkInterfaceAsyncHelper(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachNetworkInterface(request), context);
}

DetachVolumeOutcome EC2Client::DetachVolume(const DetachVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachVolumeOutcome(DetachVolumeResponse(outcome.GetResult()));
  }
  else
  {
    return DetachVolumeOutcome(outcome.GetError());
  }
}

DetachVolumeOutcomeCallable EC2Client::DetachVolumeCallable(const DetachVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DetachVolumeAsync(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachVolumeAsyncHelper( request, handler, context ); } );
}

void EC2Client::DetachVolumeAsyncHelper(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachVolume(request), context);
}

DetachVpnGatewayOutcome EC2Client::DetachVpnGateway(const DetachVpnGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachVpnGatewayOutcome(NoResult());
  }
  else
  {
    return DetachVpnGatewayOutcome(outcome.GetError());
  }
}

DetachVpnGatewayOutcomeCallable EC2Client::DetachVpnGatewayCallable(const DetachVpnGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachVpnGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DetachVpnGatewayAsync(const DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachVpnGatewayAsyncHelper( request, handler, context ); } );
}

void EC2Client::DetachVpnGatewayAsyncHelper(const DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachVpnGateway(request), context);
}

DisableEbsEncryptionByDefaultOutcome EC2Client::DisableEbsEncryptionByDefault(const DisableEbsEncryptionByDefaultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableEbsEncryptionByDefaultOutcome(DisableEbsEncryptionByDefaultResponse(outcome.GetResult()));
  }
  else
  {
    return DisableEbsEncryptionByDefaultOutcome(outcome.GetError());
  }
}

DisableEbsEncryptionByDefaultOutcomeCallable EC2Client::DisableEbsEncryptionByDefaultCallable(const DisableEbsEncryptionByDefaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableEbsEncryptionByDefaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableEbsEncryptionByDefault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisableEbsEncryptionByDefaultAsync(const DisableEbsEncryptionByDefaultRequest& request, const DisableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableEbsEncryptionByDefaultAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisableEbsEncryptionByDefaultAsyncHelper(const DisableEbsEncryptionByDefaultRequest& request, const DisableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableEbsEncryptionByDefault(request), context);
}

DisableTransitGatewayRouteTablePropagationOutcome EC2Client::DisableTransitGatewayRouteTablePropagation(const DisableTransitGatewayRouteTablePropagationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableTransitGatewayRouteTablePropagationOutcome(DisableTransitGatewayRouteTablePropagationResponse(outcome.GetResult()));
  }
  else
  {
    return DisableTransitGatewayRouteTablePropagationOutcome(outcome.GetError());
  }
}

DisableTransitGatewayRouteTablePropagationOutcomeCallable EC2Client::DisableTransitGatewayRouteTablePropagationCallable(const DisableTransitGatewayRouteTablePropagationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableTransitGatewayRouteTablePropagationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableTransitGatewayRouteTablePropagation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisableTransitGatewayRouteTablePropagationAsync(const DisableTransitGatewayRouteTablePropagationRequest& request, const DisableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableTransitGatewayRouteTablePropagationAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisableTransitGatewayRouteTablePropagationAsyncHelper(const DisableTransitGatewayRouteTablePropagationRequest& request, const DisableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableTransitGatewayRouteTablePropagation(request), context);
}

DisableVgwRoutePropagationOutcome EC2Client::DisableVgwRoutePropagation(const DisableVgwRoutePropagationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableVgwRoutePropagationOutcome(NoResult());
  }
  else
  {
    return DisableVgwRoutePropagationOutcome(outcome.GetError());
  }
}

DisableVgwRoutePropagationOutcomeCallable EC2Client::DisableVgwRoutePropagationCallable(const DisableVgwRoutePropagationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableVgwRoutePropagationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableVgwRoutePropagation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisableVgwRoutePropagationAsync(const DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableVgwRoutePropagationAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisableVgwRoutePropagationAsyncHelper(const DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableVgwRoutePropagation(request), context);
}

DisableVpcClassicLinkOutcome EC2Client::DisableVpcClassicLink(const DisableVpcClassicLinkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableVpcClassicLinkOutcome(DisableVpcClassicLinkResponse(outcome.GetResult()));
  }
  else
  {
    return DisableVpcClassicLinkOutcome(outcome.GetError());
  }
}

DisableVpcClassicLinkOutcomeCallable EC2Client::DisableVpcClassicLinkCallable(const DisableVpcClassicLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableVpcClassicLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableVpcClassicLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisableVpcClassicLinkAsync(const DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableVpcClassicLinkAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisableVpcClassicLinkAsyncHelper(const DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableVpcClassicLink(request), context);
}

DisableVpcClassicLinkDnsSupportOutcome EC2Client::DisableVpcClassicLinkDnsSupport(const DisableVpcClassicLinkDnsSupportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableVpcClassicLinkDnsSupportOutcome(DisableVpcClassicLinkDnsSupportResponse(outcome.GetResult()));
  }
  else
  {
    return DisableVpcClassicLinkDnsSupportOutcome(outcome.GetError());
  }
}

DisableVpcClassicLinkDnsSupportOutcomeCallable EC2Client::DisableVpcClassicLinkDnsSupportCallable(const DisableVpcClassicLinkDnsSupportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableVpcClassicLinkDnsSupportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableVpcClassicLinkDnsSupport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisableVpcClassicLinkDnsSupportAsync(const DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableVpcClassicLinkDnsSupportAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisableVpcClassicLinkDnsSupportAsyncHelper(const DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableVpcClassicLinkDnsSupport(request), context);
}

DisassociateAddressOutcome EC2Client::DisassociateAddress(const DisassociateAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateAddressOutcome(NoResult());
  }
  else
  {
    return DisassociateAddressOutcome(outcome.GetError());
  }
}

DisassociateAddressOutcomeCallable EC2Client::DisassociateAddressCallable(const DisassociateAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisassociateAddressAsync(const DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateAddressAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisassociateAddressAsyncHelper(const DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateAddress(request), context);
}

DisassociateClientVpnTargetNetworkOutcome EC2Client::DisassociateClientVpnTargetNetwork(const DisassociateClientVpnTargetNetworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateClientVpnTargetNetworkOutcome(DisassociateClientVpnTargetNetworkResponse(outcome.GetResult()));
  }
  else
  {
    return DisassociateClientVpnTargetNetworkOutcome(outcome.GetError());
  }
}

DisassociateClientVpnTargetNetworkOutcomeCallable EC2Client::DisassociateClientVpnTargetNetworkCallable(const DisassociateClientVpnTargetNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateClientVpnTargetNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateClientVpnTargetNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisassociateClientVpnTargetNetworkAsync(const DisassociateClientVpnTargetNetworkRequest& request, const DisassociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateClientVpnTargetNetworkAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisassociateClientVpnTargetNetworkAsyncHelper(const DisassociateClientVpnTargetNetworkRequest& request, const DisassociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateClientVpnTargetNetwork(request), context);
}

DisassociateIamInstanceProfileOutcome EC2Client::DisassociateIamInstanceProfile(const DisassociateIamInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateIamInstanceProfileOutcome(DisassociateIamInstanceProfileResponse(outcome.GetResult()));
  }
  else
  {
    return DisassociateIamInstanceProfileOutcome(outcome.GetError());
  }
}

DisassociateIamInstanceProfileOutcomeCallable EC2Client::DisassociateIamInstanceProfileCallable(const DisassociateIamInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateIamInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateIamInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisassociateIamInstanceProfileAsync(const DisassociateIamInstanceProfileRequest& request, const DisassociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateIamInstanceProfileAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisassociateIamInstanceProfileAsyncHelper(const DisassociateIamInstanceProfileRequest& request, const DisassociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateIamInstanceProfile(request), context);
}

DisassociateRouteTableOutcome EC2Client::DisassociateRouteTable(const DisassociateRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateRouteTableOutcome(NoResult());
  }
  else
  {
    return DisassociateRouteTableOutcome(outcome.GetError());
  }
}

DisassociateRouteTableOutcomeCallable EC2Client::DisassociateRouteTableCallable(const DisassociateRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisassociateRouteTableAsync(const DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisassociateRouteTableAsyncHelper(const DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateRouteTable(request), context);
}

DisassociateSubnetCidrBlockOutcome EC2Client::DisassociateSubnetCidrBlock(const DisassociateSubnetCidrBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateSubnetCidrBlockOutcome(DisassociateSubnetCidrBlockResponse(outcome.GetResult()));
  }
  else
  {
    return DisassociateSubnetCidrBlockOutcome(outcome.GetError());
  }
}

DisassociateSubnetCidrBlockOutcomeCallable EC2Client::DisassociateSubnetCidrBlockCallable(const DisassociateSubnetCidrBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSubnetCidrBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSubnetCidrBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisassociateSubnetCidrBlockAsync(const DisassociateSubnetCidrBlockRequest& request, const DisassociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSubnetCidrBlockAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisassociateSubnetCidrBlockAsyncHelper(const DisassociateSubnetCidrBlockRequest& request, const DisassociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSubnetCidrBlock(request), context);
}

DisassociateTransitGatewayRouteTableOutcome EC2Client::DisassociateTransitGatewayRouteTable(const DisassociateTransitGatewayRouteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateTransitGatewayRouteTableOutcome(DisassociateTransitGatewayRouteTableResponse(outcome.GetResult()));
  }
  else
  {
    return DisassociateTransitGatewayRouteTableOutcome(outcome.GetError());
  }
}

DisassociateTransitGatewayRouteTableOutcomeCallable EC2Client::DisassociateTransitGatewayRouteTableCallable(const DisassociateTransitGatewayRouteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTransitGatewayRouteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisassociateTransitGatewayRouteTableAsync(const DisassociateTransitGatewayRouteTableRequest& request, const DisassociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateTransitGatewayRouteTableAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisassociateTransitGatewayRouteTableAsyncHelper(const DisassociateTransitGatewayRouteTableRequest& request, const DisassociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateTransitGatewayRouteTable(request), context);
}

DisassociateVpcCidrBlockOutcome EC2Client::DisassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateVpcCidrBlockOutcome(DisassociateVpcCidrBlockResponse(outcome.GetResult()));
  }
  else
  {
    return DisassociateVpcCidrBlockOutcome(outcome.GetError());
  }
}

DisassociateVpcCidrBlockOutcomeCallable EC2Client::DisassociateVpcCidrBlockCallable(const DisassociateVpcCidrBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateVpcCidrBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateVpcCidrBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::DisassociateVpcCidrBlockAsync(const DisassociateVpcCidrBlockRequest& request, const DisassociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateVpcCidrBlockAsyncHelper( request, handler, context ); } );
}

void EC2Client::DisassociateVpcCidrBlockAsyncHelper(const DisassociateVpcCidrBlockRequest& request, const DisassociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateVpcCidrBlock(request), context);
}

EnableEbsEncryptionByDefaultOutcome EC2Client::EnableEbsEncryptionByDefault(const EnableEbsEncryptionByDefaultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableEbsEncryptionByDefaultOutcome(EnableEbsEncryptionByDefaultResponse(outcome.GetResult()));
  }
  else
  {
    return EnableEbsEncryptionByDefaultOutcome(outcome.GetError());
  }
}

EnableEbsEncryptionByDefaultOutcomeCallable EC2Client::EnableEbsEncryptionByDefaultCallable(const EnableEbsEncryptionByDefaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableEbsEncryptionByDefaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableEbsEncryptionByDefault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::EnableEbsEncryptionByDefaultAsync(const EnableEbsEncryptionByDefaultRequest& request, const EnableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableEbsEncryptionByDefaultAsyncHelper( request, handler, context ); } );
}

void EC2Client::EnableEbsEncryptionByDefaultAsyncHelper(const EnableEbsEncryptionByDefaultRequest& request, const EnableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableEbsEncryptionByDefault(request), context);
}

EnableTransitGatewayRouteTablePropagationOutcome EC2Client::EnableTransitGatewayRouteTablePropagation(const EnableTransitGatewayRouteTablePropagationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableTransitGatewayRouteTablePropagationOutcome(EnableTransitGatewayRouteTablePropagationResponse(outcome.GetResult()));
  }
  else
  {
    return EnableTransitGatewayRouteTablePropagationOutcome(outcome.GetError());
  }
}

EnableTransitGatewayRouteTablePropagationOutcomeCallable EC2Client::EnableTransitGatewayRouteTablePropagationCallable(const EnableTransitGatewayRouteTablePropagationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableTransitGatewayRouteTablePropagationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableTransitGatewayRouteTablePropagation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::EnableTransitGatewayRouteTablePropagationAsync(const EnableTransitGatewayRouteTablePropagationRequest& request, const EnableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableTransitGatewayRouteTablePropagationAsyncHelper( request, handler, context ); } );
}

void EC2Client::EnableTransitGatewayRouteTablePropagationAsyncHelper(const EnableTransitGatewayRouteTablePropagationRequest& request, const EnableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableTransitGatewayRouteTablePropagation(request), context);
}

EnableVgwRoutePropagationOutcome EC2Client::EnableVgwRoutePropagation(const EnableVgwRoutePropagationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableVgwRoutePropagationOutcome(NoResult());
  }
  else
  {
    return EnableVgwRoutePropagationOutcome(outcome.GetError());
  }
}

EnableVgwRoutePropagationOutcomeCallable EC2Client::EnableVgwRoutePropagationCallable(const EnableVgwRoutePropagationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableVgwRoutePropagationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableVgwRoutePropagation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::EnableVgwRoutePropagationAsync(const EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableVgwRoutePropagationAsyncHelper( request, handler, context ); } );
}

void EC2Client::EnableVgwRoutePropagationAsyncHelper(const EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVgwRoutePropagation(request), context);
}

EnableVolumeIOOutcome EC2Client::EnableVolumeIO(const EnableVolumeIORequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableVolumeIOOutcome(NoResult());
  }
  else
  {
    return EnableVolumeIOOutcome(outcome.GetError());
  }
}

EnableVolumeIOOutcomeCallable EC2Client::EnableVolumeIOCallable(const EnableVolumeIORequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableVolumeIOOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableVolumeIO(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::EnableVolumeIOAsync(const EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableVolumeIOAsyncHelper( request, handler, context ); } );
}

void EC2Client::EnableVolumeIOAsyncHelper(const EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVolumeIO(request), context);
}

EnableVpcClassicLinkOutcome EC2Client::EnableVpcClassicLink(const EnableVpcClassicLinkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableVpcClassicLinkOutcome(EnableVpcClassicLinkResponse(outcome.GetResult()));
  }
  else
  {
    return EnableVpcClassicLinkOutcome(outcome.GetError());
  }
}

EnableVpcClassicLinkOutcomeCallable EC2Client::EnableVpcClassicLinkCallable(const EnableVpcClassicLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableVpcClassicLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableVpcClassicLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::EnableVpcClassicLinkAsync(const EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableVpcClassicLinkAsyncHelper( request, handler, context ); } );
}

void EC2Client::EnableVpcClassicLinkAsyncHelper(const EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVpcClassicLink(request), context);
}

EnableVpcClassicLinkDnsSupportOutcome EC2Client::EnableVpcClassicLinkDnsSupport(const EnableVpcClassicLinkDnsSupportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableVpcClassicLinkDnsSupportOutcome(EnableVpcClassicLinkDnsSupportResponse(outcome.GetResult()));
  }
  else
  {
    return EnableVpcClassicLinkDnsSupportOutcome(outcome.GetError());
  }
}

EnableVpcClassicLinkDnsSupportOutcomeCallable EC2Client::EnableVpcClassicLinkDnsSupportCallable(const EnableVpcClassicLinkDnsSupportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableVpcClassicLinkDnsSupportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableVpcClassicLinkDnsSupport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::EnableVpcClassicLinkDnsSupportAsync(const EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableVpcClassicLinkDnsSupportAsyncHelper( request, handler, context ); } );
}

void EC2Client::EnableVpcClassicLinkDnsSupportAsyncHelper(const EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVpcClassicLinkDnsSupport(request), context);
}

ExportClientVpnClientCertificateRevocationListOutcome EC2Client::ExportClientVpnClientCertificateRevocationList(const ExportClientVpnClientCertificateRevocationListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ExportClientVpnClientCertificateRevocationListOutcome(ExportClientVpnClientCertificateRevocationListResponse(outcome.GetResult()));
  }
  else
  {
    return ExportClientVpnClientCertificateRevocationListOutcome(outcome.GetError());
  }
}

ExportClientVpnClientCertificateRevocationListOutcomeCallable EC2Client::ExportClientVpnClientCertificateRevocationListCallable(const ExportClientVpnClientCertificateRevocationListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportClientVpnClientCertificateRevocationListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportClientVpnClientCertificateRevocationList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ExportClientVpnClientCertificateRevocationListAsync(const ExportClientVpnClientCertificateRevocationListRequest& request, const ExportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExportClientVpnClientCertificateRevocationListAsyncHelper( request, handler, context ); } );
}

void EC2Client::ExportClientVpnClientCertificateRevocationListAsyncHelper(const ExportClientVpnClientCertificateRevocationListRequest& request, const ExportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportClientVpnClientCertificateRevocationList(request), context);
}

ExportClientVpnClientConfigurationOutcome EC2Client::ExportClientVpnClientConfiguration(const ExportClientVpnClientConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ExportClientVpnClientConfigurationOutcome(ExportClientVpnClientConfigurationResponse(outcome.GetResult()));
  }
  else
  {
    return ExportClientVpnClientConfigurationOutcome(outcome.GetError());
  }
}

ExportClientVpnClientConfigurationOutcomeCallable EC2Client::ExportClientVpnClientConfigurationCallable(const ExportClientVpnClientConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportClientVpnClientConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportClientVpnClientConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ExportClientVpnClientConfigurationAsync(const ExportClientVpnClientConfigurationRequest& request, const ExportClientVpnClientConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExportClientVpnClientConfigurationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ExportClientVpnClientConfigurationAsyncHelper(const ExportClientVpnClientConfigurationRequest& request, const ExportClientVpnClientConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportClientVpnClientConfiguration(request), context);
}

ExportTransitGatewayRoutesOutcome EC2Client::ExportTransitGatewayRoutes(const ExportTransitGatewayRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ExportTransitGatewayRoutesOutcome(ExportTransitGatewayRoutesResponse(outcome.GetResult()));
  }
  else
  {
    return ExportTransitGatewayRoutesOutcome(outcome.GetError());
  }
}

ExportTransitGatewayRoutesOutcomeCallable EC2Client::ExportTransitGatewayRoutesCallable(const ExportTransitGatewayRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportTransitGatewayRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportTransitGatewayRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ExportTransitGatewayRoutesAsync(const ExportTransitGatewayRoutesRequest& request, const ExportTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExportTransitGatewayRoutesAsyncHelper( request, handler, context ); } );
}

void EC2Client::ExportTransitGatewayRoutesAsyncHelper(const ExportTransitGatewayRoutesRequest& request, const ExportTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportTransitGatewayRoutes(request), context);
}

GetConsoleOutputOutcome EC2Client::GetConsoleOutput(const GetConsoleOutputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetConsoleOutputOutcome(GetConsoleOutputResponse(outcome.GetResult()));
  }
  else
  {
    return GetConsoleOutputOutcome(outcome.GetError());
  }
}

GetConsoleOutputOutcomeCallable EC2Client::GetConsoleOutputCallable(const GetConsoleOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConsoleOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConsoleOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetConsoleOutputAsync(const GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConsoleOutputAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetConsoleOutputAsyncHelper(const GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConsoleOutput(request), context);
}

GetConsoleScreenshotOutcome EC2Client::GetConsoleScreenshot(const GetConsoleScreenshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetConsoleScreenshotOutcome(GetConsoleScreenshotResponse(outcome.GetResult()));
  }
  else
  {
    return GetConsoleScreenshotOutcome(outcome.GetError());
  }
}

GetConsoleScreenshotOutcomeCallable EC2Client::GetConsoleScreenshotCallable(const GetConsoleScreenshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConsoleScreenshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConsoleScreenshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetConsoleScreenshotAsync(const GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConsoleScreenshotAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetConsoleScreenshotAsyncHelper(const GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConsoleScreenshot(request), context);
}

GetEbsDefaultKmsKeyIdOutcome EC2Client::GetEbsDefaultKmsKeyId(const GetEbsDefaultKmsKeyIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetEbsDefaultKmsKeyIdOutcome(GetEbsDefaultKmsKeyIdResponse(outcome.GetResult()));
  }
  else
  {
    return GetEbsDefaultKmsKeyIdOutcome(outcome.GetError());
  }
}

GetEbsDefaultKmsKeyIdOutcomeCallable EC2Client::GetEbsDefaultKmsKeyIdCallable(const GetEbsDefaultKmsKeyIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEbsDefaultKmsKeyIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEbsDefaultKmsKeyId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetEbsDefaultKmsKeyIdAsync(const GetEbsDefaultKmsKeyIdRequest& request, const GetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEbsDefaultKmsKeyIdAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetEbsDefaultKmsKeyIdAsyncHelper(const GetEbsDefaultKmsKeyIdRequest& request, const GetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEbsDefaultKmsKeyId(request), context);
}

GetEbsEncryptionByDefaultOutcome EC2Client::GetEbsEncryptionByDefault(const GetEbsEncryptionByDefaultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetEbsEncryptionByDefaultOutcome(GetEbsEncryptionByDefaultResponse(outcome.GetResult()));
  }
  else
  {
    return GetEbsEncryptionByDefaultOutcome(outcome.GetError());
  }
}

GetEbsEncryptionByDefaultOutcomeCallable EC2Client::GetEbsEncryptionByDefaultCallable(const GetEbsEncryptionByDefaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEbsEncryptionByDefaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEbsEncryptionByDefault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetEbsEncryptionByDefaultAsync(const GetEbsEncryptionByDefaultRequest& request, const GetEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEbsEncryptionByDefaultAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetEbsEncryptionByDefaultAsyncHelper(const GetEbsEncryptionByDefaultRequest& request, const GetEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEbsEncryptionByDefault(request), context);
}

GetHostReservationPurchasePreviewOutcome EC2Client::GetHostReservationPurchasePreview(const GetHostReservationPurchasePreviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetHostReservationPurchasePreviewOutcome(GetHostReservationPurchasePreviewResponse(outcome.GetResult()));
  }
  else
  {
    return GetHostReservationPurchasePreviewOutcome(outcome.GetError());
  }
}

GetHostReservationPurchasePreviewOutcomeCallable EC2Client::GetHostReservationPurchasePreviewCallable(const GetHostReservationPurchasePreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostReservationPurchasePreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostReservationPurchasePreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetHostReservationPurchasePreviewAsync(const GetHostReservationPurchasePreviewRequest& request, const GetHostReservationPurchasePreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHostReservationPurchasePreviewAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetHostReservationPurchasePreviewAsyncHelper(const GetHostReservationPurchasePreviewRequest& request, const GetHostReservationPurchasePreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostReservationPurchasePreview(request), context);
}

GetLaunchTemplateDataOutcome EC2Client::GetLaunchTemplateData(const GetLaunchTemplateDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetLaunchTemplateDataOutcome(GetLaunchTemplateDataResponse(outcome.GetResult()));
  }
  else
  {
    return GetLaunchTemplateDataOutcome(outcome.GetError());
  }
}

GetLaunchTemplateDataOutcomeCallable EC2Client::GetLaunchTemplateDataCallable(const GetLaunchTemplateDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchTemplateDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchTemplateData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetLaunchTemplateDataAsync(const GetLaunchTemplateDataRequest& request, const GetLaunchTemplateDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLaunchTemplateDataAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetLaunchTemplateDataAsyncHelper(const GetLaunchTemplateDataRequest& request, const GetLaunchTemplateDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLaunchTemplateData(request), context);
}

GetPasswordDataOutcome EC2Client::GetPasswordData(const GetPasswordDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPasswordDataOutcome(GetPasswordDataResponse(outcome.GetResult()));
  }
  else
  {
    return GetPasswordDataOutcome(outcome.GetError());
  }
}

GetPasswordDataOutcomeCallable EC2Client::GetPasswordDataCallable(const GetPasswordDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPasswordDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPasswordData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetPasswordDataAsync(const GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPasswordDataAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetPasswordDataAsyncHelper(const GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPasswordData(request), context);
}

GetReservedInstancesExchangeQuoteOutcome EC2Client::GetReservedInstancesExchangeQuote(const GetReservedInstancesExchangeQuoteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetReservedInstancesExchangeQuoteOutcome(GetReservedInstancesExchangeQuoteResponse(outcome.GetResult()));
  }
  else
  {
    return GetReservedInstancesExchangeQuoteOutcome(outcome.GetError());
  }
}

GetReservedInstancesExchangeQuoteOutcomeCallable EC2Client::GetReservedInstancesExchangeQuoteCallable(const GetReservedInstancesExchangeQuoteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservedInstancesExchangeQuoteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservedInstancesExchangeQuote(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetReservedInstancesExchangeQuoteAsync(const GetReservedInstancesExchangeQuoteRequest& request, const GetReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReservedInstancesExchangeQuoteAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetReservedInstancesExchangeQuoteAsyncHelper(const GetReservedInstancesExchangeQuoteRequest& request, const GetReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReservedInstancesExchangeQuote(request), context);
}

GetTransitGatewayAttachmentPropagationsOutcome EC2Client::GetTransitGatewayAttachmentPropagations(const GetTransitGatewayAttachmentPropagationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTransitGatewayAttachmentPropagationsOutcome(GetTransitGatewayAttachmentPropagationsResponse(outcome.GetResult()));
  }
  else
  {
    return GetTransitGatewayAttachmentPropagationsOutcome(outcome.GetError());
  }
}

GetTransitGatewayAttachmentPropagationsOutcomeCallable EC2Client::GetTransitGatewayAttachmentPropagationsCallable(const GetTransitGatewayAttachmentPropagationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayAttachmentPropagationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTransitGatewayAttachmentPropagations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetTransitGatewayAttachmentPropagationsAsync(const GetTransitGatewayAttachmentPropagationsRequest& request, const GetTransitGatewayAttachmentPropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTransitGatewayAttachmentPropagationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetTransitGatewayAttachmentPropagationsAsyncHelper(const GetTransitGatewayAttachmentPropagationsRequest& request, const GetTransitGatewayAttachmentPropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTransitGatewayAttachmentPropagations(request), context);
}

GetTransitGatewayRouteTableAssociationsOutcome EC2Client::GetTransitGatewayRouteTableAssociations(const GetTransitGatewayRouteTableAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTransitGatewayRouteTableAssociationsOutcome(GetTransitGatewayRouteTableAssociationsResponse(outcome.GetResult()));
  }
  else
  {
    return GetTransitGatewayRouteTableAssociationsOutcome(outcome.GetError());
  }
}

GetTransitGatewayRouteTableAssociationsOutcomeCallable EC2Client::GetTransitGatewayRouteTableAssociationsCallable(const GetTransitGatewayRouteTableAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayRouteTableAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTransitGatewayRouteTableAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetTransitGatewayRouteTableAssociationsAsync(const GetTransitGatewayRouteTableAssociationsRequest& request, const GetTransitGatewayRouteTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTransitGatewayRouteTableAssociationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetTransitGatewayRouteTableAssociationsAsyncHelper(const GetTransitGatewayRouteTableAssociationsRequest& request, const GetTransitGatewayRouteTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTransitGatewayRouteTableAssociations(request), context);
}

GetTransitGatewayRouteTablePropagationsOutcome EC2Client::GetTransitGatewayRouteTablePropagations(const GetTransitGatewayRouteTablePropagationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTransitGatewayRouteTablePropagationsOutcome(GetTransitGatewayRouteTablePropagationsResponse(outcome.GetResult()));
  }
  else
  {
    return GetTransitGatewayRouteTablePropagationsOutcome(outcome.GetError());
  }
}

GetTransitGatewayRouteTablePropagationsOutcomeCallable EC2Client::GetTransitGatewayRouteTablePropagationsCallable(const GetTransitGatewayRouteTablePropagationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayRouteTablePropagationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTransitGatewayRouteTablePropagations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::GetTransitGatewayRouteTablePropagationsAsync(const GetTransitGatewayRouteTablePropagationsRequest& request, const GetTransitGatewayRouteTablePropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTransitGatewayRouteTablePropagationsAsyncHelper( request, handler, context ); } );
}

void EC2Client::GetTransitGatewayRouteTablePropagationsAsyncHelper(const GetTransitGatewayRouteTablePropagationsRequest& request, const GetTransitGatewayRouteTablePropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTransitGatewayRouteTablePropagations(request), context);
}

ImportClientVpnClientCertificateRevocationListOutcome EC2Client::ImportClientVpnClientCertificateRevocationList(const ImportClientVpnClientCertificateRevocationListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ImportClientVpnClientCertificateRevocationListOutcome(ImportClientVpnClientCertificateRevocationListResponse(outcome.GetResult()));
  }
  else
  {
    return ImportClientVpnClientCertificateRevocationListOutcome(outcome.GetError());
  }
}

ImportClientVpnClientCertificateRevocationListOutcomeCallable EC2Client::ImportClientVpnClientCertificateRevocationListCallable(const ImportClientVpnClientCertificateRevocationListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportClientVpnClientCertificateRevocationListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportClientVpnClientCertificateRevocationList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ImportClientVpnClientCertificateRevocationListAsync(const ImportClientVpnClientCertificateRevocationListRequest& request, const ImportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportClientVpnClientCertificateRevocationListAsyncHelper( request, handler, context ); } );
}

void EC2Client::ImportClientVpnClientCertificateRevocationListAsyncHelper(const ImportClientVpnClientCertificateRevocationListRequest& request, const ImportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportClientVpnClientCertificateRevocationList(request), context);
}

ImportImageOutcome EC2Client::ImportImage(const ImportImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ImportImageOutcome(ImportImageResponse(outcome.GetResult()));
  }
  else
  {
    return ImportImageOutcome(outcome.GetError());
  }
}

ImportImageOutcomeCallable EC2Client::ImportImageCallable(const ImportImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ImportImageAsync(const ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::ImportImageAsyncHelper(const ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportImage(request), context);
}

ImportInstanceOutcome EC2Client::ImportInstance(const ImportInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ImportInstanceOutcome(ImportInstanceResponse(outcome.GetResult()));
  }
  else
  {
    return ImportInstanceOutcome(outcome.GetError());
  }
}

ImportInstanceOutcomeCallable EC2Client::ImportInstanceCallable(const ImportInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ImportInstanceAsync(const ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportInstanceAsyncHelper( request, handler, context ); } );
}

void EC2Client::ImportInstanceAsyncHelper(const ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportInstance(request), context);
}

ImportKeyPairOutcome EC2Client::ImportKeyPair(const ImportKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ImportKeyPairOutcome(ImportKeyPairResponse(outcome.GetResult()));
  }
  else
  {
    return ImportKeyPairOutcome(outcome.GetError());
  }
}

ImportKeyPairOutcomeCallable EC2Client::ImportKeyPairCallable(const ImportKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportKeyPairAsyncHelper( request, handler, context ); } );
}

void EC2Client::ImportKeyPairAsyncHelper(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportKeyPair(request), context);
}

ImportSnapshotOutcome EC2Client::ImportSnapshot(const ImportSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ImportSnapshotOutcome(ImportSnapshotResponse(outcome.GetResult()));
  }
  else
  {
    return ImportSnapshotOutcome(outcome.GetError());
  }
}

ImportSnapshotOutcomeCallable EC2Client::ImportSnapshotCallable(const ImportSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ImportSnapshotAsync(const ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportSnapshotAsyncHelper( request, handler, context ); } );
}

void EC2Client::ImportSnapshotAsyncHelper(const ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportSnapshot(request), context);
}

ImportVolumeOutcome EC2Client::ImportVolume(const ImportVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ImportVolumeOutcome(ImportVolumeResponse(outcome.GetResult()));
  }
  else
  {
    return ImportVolumeOutcome(outcome.GetError());
  }
}

ImportVolumeOutcomeCallable EC2Client::ImportVolumeCallable(const ImportVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ImportVolumeAsync(const ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportVolumeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ImportVolumeAsyncHelper(const ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportVolume(request), context);
}

ModifyCapacityReservationOutcome EC2Client::ModifyCapacityReservation(const ModifyCapacityReservationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyCapacityReservationOutcome(ModifyCapacityReservationResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyCapacityReservationOutcome(outcome.GetError());
  }
}

ModifyCapacityReservationOutcomeCallable EC2Client::ModifyCapacityReservationCallable(const ModifyCapacityReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyCapacityReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCapacityReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyCapacityReservationAsync(const ModifyCapacityReservationRequest& request, const ModifyCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyCapacityReservationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyCapacityReservationAsyncHelper(const ModifyCapacityReservationRequest& request, const ModifyCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyCapacityReservation(request), context);
}

ModifyClientVpnEndpointOutcome EC2Client::ModifyClientVpnEndpoint(const ModifyClientVpnEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyClientVpnEndpointOutcome(ModifyClientVpnEndpointResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyClientVpnEndpointOutcome(outcome.GetError());
  }
}

ModifyClientVpnEndpointOutcomeCallable EC2Client::ModifyClientVpnEndpointCallable(const ModifyClientVpnEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClientVpnEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClientVpnEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyClientVpnEndpointAsync(const ModifyClientVpnEndpointRequest& request, const ModifyClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyClientVpnEndpointAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyClientVpnEndpointAsyncHelper(const ModifyClientVpnEndpointRequest& request, const ModifyClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyClientVpnEndpoint(request), context);
}

ModifyEbsDefaultKmsKeyIdOutcome EC2Client::ModifyEbsDefaultKmsKeyId(const ModifyEbsDefaultKmsKeyIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyEbsDefaultKmsKeyIdOutcome(ModifyEbsDefaultKmsKeyIdResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyEbsDefaultKmsKeyIdOutcome(outcome.GetError());
  }
}

ModifyEbsDefaultKmsKeyIdOutcomeCallable EC2Client::ModifyEbsDefaultKmsKeyIdCallable(const ModifyEbsDefaultKmsKeyIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEbsDefaultKmsKeyIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEbsDefaultKmsKeyId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyEbsDefaultKmsKeyIdAsync(const ModifyEbsDefaultKmsKeyIdRequest& request, const ModifyEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyEbsDefaultKmsKeyIdAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyEbsDefaultKmsKeyIdAsyncHelper(const ModifyEbsDefaultKmsKeyIdRequest& request, const ModifyEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyEbsDefaultKmsKeyId(request), context);
}

ModifyFleetOutcome EC2Client::ModifyFleet(const ModifyFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyFleetOutcome(ModifyFleetResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyFleetOutcome(outcome.GetError());
  }
}

ModifyFleetOutcomeCallable EC2Client::ModifyFleetCallable(const ModifyFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyFleetAsync(const ModifyFleetRequest& request, const ModifyFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyFleetAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyFleetAsyncHelper(const ModifyFleetRequest& request, const ModifyFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyFleet(request), context);
}

ModifyFpgaImageAttributeOutcome EC2Client::ModifyFpgaImageAttribute(const ModifyFpgaImageAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyFpgaImageAttributeOutcome(ModifyFpgaImageAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyFpgaImageAttributeOutcome(outcome.GetError());
  }
}

ModifyFpgaImageAttributeOutcomeCallable EC2Client::ModifyFpgaImageAttributeCallable(const ModifyFpgaImageAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyFpgaImageAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyFpgaImageAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyFpgaImageAttributeAsync(const ModifyFpgaImageAttributeRequest& request, const ModifyFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyFpgaImageAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyFpgaImageAttributeAsyncHelper(const ModifyFpgaImageAttributeRequest& request, const ModifyFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyFpgaImageAttribute(request), context);
}

ModifyHostsOutcome EC2Client::ModifyHosts(const ModifyHostsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyHostsOutcome(ModifyHostsResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyHostsOutcome(outcome.GetError());
  }
}

ModifyHostsOutcomeCallable EC2Client::ModifyHostsCallable(const ModifyHostsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyHostsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyHosts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyHostsAsync(const ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyHostsAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyHostsAsyncHelper(const ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyHosts(request), context);
}

ModifyIdFormatOutcome EC2Client::ModifyIdFormat(const ModifyIdFormatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyIdFormatOutcome(NoResult());
  }
  else
  {
    return ModifyIdFormatOutcome(outcome.GetError());
  }
}

ModifyIdFormatOutcomeCallable EC2Client::ModifyIdFormatCallable(const ModifyIdFormatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyIdFormatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyIdFormat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyIdFormatAsync(const ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyIdFormatAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyIdFormatAsyncHelper(const ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyIdFormat(request), context);
}

ModifyIdentityIdFormatOutcome EC2Client::ModifyIdentityIdFormat(const ModifyIdentityIdFormatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyIdentityIdFormatOutcome(NoResult());
  }
  else
  {
    return ModifyIdentityIdFormatOutcome(outcome.GetError());
  }
}

ModifyIdentityIdFormatOutcomeCallable EC2Client::ModifyIdentityIdFormatCallable(const ModifyIdentityIdFormatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyIdentityIdFormatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyIdentityIdFormat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyIdentityIdFormatAsync(const ModifyIdentityIdFormatRequest& request, const ModifyIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyIdentityIdFormatAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyIdentityIdFormatAsyncHelper(const ModifyIdentityIdFormatRequest& request, const ModifyIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyIdentityIdFormat(request), context);
}

ModifyImageAttributeOutcome EC2Client::ModifyImageAttribute(const ModifyImageAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyImageAttributeOutcome(NoResult());
  }
  else
  {
    return ModifyImageAttributeOutcome(outcome.GetError());
  }
}

ModifyImageAttributeOutcomeCallable EC2Client::ModifyImageAttributeCallable(const ModifyImageAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyImageAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyImageAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyImageAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyImageAttributeAsyncHelper(const ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyImageAttribute(request), context);
}

ModifyInstanceAttributeOutcome EC2Client::ModifyInstanceAttribute(const ModifyInstanceAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyInstanceAttributeOutcome(NoResult());
  }
  else
  {
    return ModifyInstanceAttributeOutcome(outcome.GetError());
  }
}

ModifyInstanceAttributeOutcomeCallable EC2Client::ModifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyInstanceAttributeAsyncHelper(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceAttribute(request), context);
}

ModifyInstanceCapacityReservationAttributesOutcome EC2Client::ModifyInstanceCapacityReservationAttributes(const ModifyInstanceCapacityReservationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyInstanceCapacityReservationAttributesOutcome(ModifyInstanceCapacityReservationAttributesResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyInstanceCapacityReservationAttributesOutcome(outcome.GetError());
  }
}

ModifyInstanceCapacityReservationAttributesOutcomeCallable EC2Client::ModifyInstanceCapacityReservationAttributesCallable(const ModifyInstanceCapacityReservationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceCapacityReservationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceCapacityReservationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyInstanceCapacityReservationAttributesAsync(const ModifyInstanceCapacityReservationAttributesRequest& request, const ModifyInstanceCapacityReservationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceCapacityReservationAttributesAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyInstanceCapacityReservationAttributesAsyncHelper(const ModifyInstanceCapacityReservationAttributesRequest& request, const ModifyInstanceCapacityReservationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceCapacityReservationAttributes(request), context);
}

ModifyInstanceCreditSpecificationOutcome EC2Client::ModifyInstanceCreditSpecification(const ModifyInstanceCreditSpecificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyInstanceCreditSpecificationOutcome(ModifyInstanceCreditSpecificationResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyInstanceCreditSpecificationOutcome(outcome.GetError());
  }
}

ModifyInstanceCreditSpecificationOutcomeCallable EC2Client::ModifyInstanceCreditSpecificationCallable(const ModifyInstanceCreditSpecificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceCreditSpecificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceCreditSpecification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyInstanceCreditSpecificationAsync(const ModifyInstanceCreditSpecificationRequest& request, const ModifyInstanceCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceCreditSpecificationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyInstanceCreditSpecificationAsyncHelper(const ModifyInstanceCreditSpecificationRequest& request, const ModifyInstanceCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceCreditSpecification(request), context);
}

ModifyInstanceEventStartTimeOutcome EC2Client::ModifyInstanceEventStartTime(const ModifyInstanceEventStartTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyInstanceEventStartTimeOutcome(ModifyInstanceEventStartTimeResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyInstanceEventStartTimeOutcome(outcome.GetError());
  }
}

ModifyInstanceEventStartTimeOutcomeCallable EC2Client::ModifyInstanceEventStartTimeCallable(const ModifyInstanceEventStartTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceEventStartTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceEventStartTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyInstanceEventStartTimeAsync(const ModifyInstanceEventStartTimeRequest& request, const ModifyInstanceEventStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceEventStartTimeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyInstanceEventStartTimeAsyncHelper(const ModifyInstanceEventStartTimeRequest& request, const ModifyInstanceEventStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceEventStartTime(request), context);
}

ModifyInstancePlacementOutcome EC2Client::ModifyInstancePlacement(const ModifyInstancePlacementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyInstancePlacementOutcome(ModifyInstancePlacementResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyInstancePlacementOutcome(outcome.GetError());
  }
}

ModifyInstancePlacementOutcomeCallable EC2Client::ModifyInstancePlacementCallable(const ModifyInstancePlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstancePlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstancePlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyInstancePlacementAsync(const ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstancePlacementAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyInstancePlacementAsyncHelper(const ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstancePlacement(request), context);
}

ModifyLaunchTemplateOutcome EC2Client::ModifyLaunchTemplate(const ModifyLaunchTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyLaunchTemplateOutcome(ModifyLaunchTemplateResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyLaunchTemplateOutcome(outcome.GetError());
  }
}

ModifyLaunchTemplateOutcomeCallable EC2Client::ModifyLaunchTemplateCallable(const ModifyLaunchTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLaunchTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLaunchTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyLaunchTemplateAsync(const ModifyLaunchTemplateRequest& request, const ModifyLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyLaunchTemplateAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyLaunchTemplateAsyncHelper(const ModifyLaunchTemplateRequest& request, const ModifyLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyLaunchTemplate(request), context);
}

ModifyNetworkInterfaceAttributeOutcome EC2Client::ModifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyNetworkInterfaceAttributeOutcome(NoResult());
  }
  else
  {
    return ModifyNetworkInterfaceAttributeOutcome(outcome.GetError());
  }
}

ModifyNetworkInterfaceAttributeOutcomeCallable EC2Client::ModifyNetworkInterfaceAttributeCallable(const ModifyNetworkInterfaceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyNetworkInterfaceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyNetworkInterfaceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyNetworkInterfaceAttributeAsync(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyNetworkInterfaceAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyNetworkInterfaceAttributeAsyncHelper(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyNetworkInterfaceAttribute(request), context);
}

ModifyReservedInstancesOutcome EC2Client::ModifyReservedInstances(const ModifyReservedInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyReservedInstancesOutcome(ModifyReservedInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyReservedInstancesOutcome(outcome.GetError());
  }
}

ModifyReservedInstancesOutcomeCallable EC2Client::ModifyReservedInstancesCallable(const ModifyReservedInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReservedInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReservedInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyReservedInstancesAsync(const ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyReservedInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyReservedInstancesAsyncHelper(const ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyReservedInstances(request), context);
}

ModifySnapshotAttributeOutcome EC2Client::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifySnapshotAttributeOutcome(NoResult());
  }
  else
  {
    return ModifySnapshotAttributeOutcome(outcome.GetError());
  }
}

ModifySnapshotAttributeOutcomeCallable EC2Client::ModifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifySnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifySnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifySnapshotAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifySnapshotAttributeAsyncHelper(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifySnapshotAttribute(request), context);
}

ModifySpotFleetRequestOutcome EC2Client::ModifySpotFleetRequest(const ModifySpotFleetRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifySpotFleetRequestOutcome(ModifySpotFleetRequestResponse(outcome.GetResult()));
  }
  else
  {
    return ModifySpotFleetRequestOutcome(outcome.GetError());
  }
}

ModifySpotFleetRequestOutcomeCallable EC2Client::ModifySpotFleetRequestCallable(const ModifySpotFleetRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifySpotFleetRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifySpotFleetRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifySpotFleetRequestAsync(const ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifySpotFleetRequestAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifySpotFleetRequestAsyncHelper(const ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifySpotFleetRequest(request), context);
}

ModifySubnetAttributeOutcome EC2Client::ModifySubnetAttribute(const ModifySubnetAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifySubnetAttributeOutcome(NoResult());
  }
  else
  {
    return ModifySubnetAttributeOutcome(outcome.GetError());
  }
}

ModifySubnetAttributeOutcomeCallable EC2Client::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifySubnetAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifySubnetAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifySubnetAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifySubnetAttributeAsyncHelper(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifySubnetAttribute(request), context);
}

ModifyTrafficMirrorFilterNetworkServicesOutcome EC2Client::ModifyTrafficMirrorFilterNetworkServices(const ModifyTrafficMirrorFilterNetworkServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyTrafficMirrorFilterNetworkServicesOutcome(ModifyTrafficMirrorFilterNetworkServicesResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyTrafficMirrorFilterNetworkServicesOutcome(outcome.GetError());
  }
}

ModifyTrafficMirrorFilterNetworkServicesOutcomeCallable EC2Client::ModifyTrafficMirrorFilterNetworkServicesCallable(const ModifyTrafficMirrorFilterNetworkServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTrafficMirrorFilterNetworkServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTrafficMirrorFilterNetworkServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyTrafficMirrorFilterNetworkServicesAsync(const ModifyTrafficMirrorFilterNetworkServicesRequest& request, const ModifyTrafficMirrorFilterNetworkServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyTrafficMirrorFilterNetworkServicesAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyTrafficMirrorFilterNetworkServicesAsyncHelper(const ModifyTrafficMirrorFilterNetworkServicesRequest& request, const ModifyTrafficMirrorFilterNetworkServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyTrafficMirrorFilterNetworkServices(request), context);
}

ModifyTrafficMirrorFilterRuleOutcome EC2Client::ModifyTrafficMirrorFilterRule(const ModifyTrafficMirrorFilterRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyTrafficMirrorFilterRuleOutcome(ModifyTrafficMirrorFilterRuleResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyTrafficMirrorFilterRuleOutcome(outcome.GetError());
  }
}

ModifyTrafficMirrorFilterRuleOutcomeCallable EC2Client::ModifyTrafficMirrorFilterRuleCallable(const ModifyTrafficMirrorFilterRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTrafficMirrorFilterRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTrafficMirrorFilterRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyTrafficMirrorFilterRuleAsync(const ModifyTrafficMirrorFilterRuleRequest& request, const ModifyTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyTrafficMirrorFilterRuleAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyTrafficMirrorFilterRuleAsyncHelper(const ModifyTrafficMirrorFilterRuleRequest& request, const ModifyTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyTrafficMirrorFilterRule(request), context);
}

ModifyTrafficMirrorSessionOutcome EC2Client::ModifyTrafficMirrorSession(const ModifyTrafficMirrorSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyTrafficMirrorSessionOutcome(ModifyTrafficMirrorSessionResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyTrafficMirrorSessionOutcome(outcome.GetError());
  }
}

ModifyTrafficMirrorSessionOutcomeCallable EC2Client::ModifyTrafficMirrorSessionCallable(const ModifyTrafficMirrorSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTrafficMirrorSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTrafficMirrorSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyTrafficMirrorSessionAsync(const ModifyTrafficMirrorSessionRequest& request, const ModifyTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyTrafficMirrorSessionAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyTrafficMirrorSessionAsyncHelper(const ModifyTrafficMirrorSessionRequest& request, const ModifyTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyTrafficMirrorSession(request), context);
}

ModifyTransitGatewayVpcAttachmentOutcome EC2Client::ModifyTransitGatewayVpcAttachment(const ModifyTransitGatewayVpcAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyTransitGatewayVpcAttachmentOutcome(ModifyTransitGatewayVpcAttachmentResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyTransitGatewayVpcAttachmentOutcome(outcome.GetError());
  }
}

ModifyTransitGatewayVpcAttachmentOutcomeCallable EC2Client::ModifyTransitGatewayVpcAttachmentCallable(const ModifyTransitGatewayVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTransitGatewayVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyTransitGatewayVpcAttachmentAsync(const ModifyTransitGatewayVpcAttachmentRequest& request, const ModifyTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyTransitGatewayVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyTransitGatewayVpcAttachmentAsyncHelper(const ModifyTransitGatewayVpcAttachmentRequest& request, const ModifyTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyTransitGatewayVpcAttachment(request), context);
}

ModifyVolumeOutcome EC2Client::ModifyVolume(const ModifyVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVolumeOutcome(ModifyVolumeResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVolumeOutcome(outcome.GetError());
  }
}

ModifyVolumeOutcomeCallable EC2Client::ModifyVolumeCallable(const ModifyVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVolumeAsync(const ModifyVolumeRequest& request, const ModifyVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVolumeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVolumeAsyncHelper(const ModifyVolumeRequest& request, const ModifyVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVolume(request), context);
}

ModifyVolumeAttributeOutcome EC2Client::ModifyVolumeAttribute(const ModifyVolumeAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVolumeAttributeOutcome(NoResult());
  }
  else
  {
    return ModifyVolumeAttributeOutcome(outcome.GetError());
  }
}

ModifyVolumeAttributeOutcomeCallable EC2Client::ModifyVolumeAttributeCallable(const ModifyVolumeAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVolumeAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVolumeAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVolumeAttributeAsync(const ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVolumeAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVolumeAttributeAsyncHelper(const ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVolumeAttribute(request), context);
}

ModifyVpcAttributeOutcome EC2Client::ModifyVpcAttribute(const ModifyVpcAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpcAttributeOutcome(NoResult());
  }
  else
  {
    return ModifyVpcAttributeOutcome(outcome.GetError());
  }
}

ModifyVpcAttributeOutcomeCallable EC2Client::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpcAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpcAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpcAttributeAsyncHelper(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcAttribute(request), context);
}

ModifyVpcEndpointOutcome EC2Client::ModifyVpcEndpoint(const ModifyVpcEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpcEndpointOutcome(ModifyVpcEndpointResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVpcEndpointOutcome(outcome.GetError());
  }
}

ModifyVpcEndpointOutcomeCallable EC2Client::ModifyVpcEndpointCallable(const ModifyVpcEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpcEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpcEndpointAsync(const ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpcEndpointAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpcEndpointAsyncHelper(const ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcEndpoint(request), context);
}

ModifyVpcEndpointConnectionNotificationOutcome EC2Client::ModifyVpcEndpointConnectionNotification(const ModifyVpcEndpointConnectionNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpcEndpointConnectionNotificationOutcome(ModifyVpcEndpointConnectionNotificationResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVpcEndpointConnectionNotificationOutcome(outcome.GetError());
  }
}

ModifyVpcEndpointConnectionNotificationOutcomeCallable EC2Client::ModifyVpcEndpointConnectionNotificationCallable(const ModifyVpcEndpointConnectionNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointConnectionNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpcEndpointConnectionNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpcEndpointConnectionNotificationAsync(const ModifyVpcEndpointConnectionNotificationRequest& request, const ModifyVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpcEndpointConnectionNotificationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpcEndpointConnectionNotificationAsyncHelper(const ModifyVpcEndpointConnectionNotificationRequest& request, const ModifyVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcEndpointConnectionNotification(request), context);
}

ModifyVpcEndpointServiceConfigurationOutcome EC2Client::ModifyVpcEndpointServiceConfiguration(const ModifyVpcEndpointServiceConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpcEndpointServiceConfigurationOutcome(ModifyVpcEndpointServiceConfigurationResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVpcEndpointServiceConfigurationOutcome(outcome.GetError());
  }
}

ModifyVpcEndpointServiceConfigurationOutcomeCallable EC2Client::ModifyVpcEndpointServiceConfigurationCallable(const ModifyVpcEndpointServiceConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointServiceConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpcEndpointServiceConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpcEndpointServiceConfigurationAsync(const ModifyVpcEndpointServiceConfigurationRequest& request, const ModifyVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpcEndpointServiceConfigurationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpcEndpointServiceConfigurationAsyncHelper(const ModifyVpcEndpointServiceConfigurationRequest& request, const ModifyVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcEndpointServiceConfiguration(request), context);
}

ModifyVpcEndpointServicePermissionsOutcome EC2Client::ModifyVpcEndpointServicePermissions(const ModifyVpcEndpointServicePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpcEndpointServicePermissionsOutcome(ModifyVpcEndpointServicePermissionsResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVpcEndpointServicePermissionsOutcome(outcome.GetError());
  }
}

ModifyVpcEndpointServicePermissionsOutcomeCallable EC2Client::ModifyVpcEndpointServicePermissionsCallable(const ModifyVpcEndpointServicePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointServicePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpcEndpointServicePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpcEndpointServicePermissionsAsync(const ModifyVpcEndpointServicePermissionsRequest& request, const ModifyVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpcEndpointServicePermissionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpcEndpointServicePermissionsAsyncHelper(const ModifyVpcEndpointServicePermissionsRequest& request, const ModifyVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcEndpointServicePermissions(request), context);
}

ModifyVpcPeeringConnectionOptionsOutcome EC2Client::ModifyVpcPeeringConnectionOptions(const ModifyVpcPeeringConnectionOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpcPeeringConnectionOptionsOutcome(ModifyVpcPeeringConnectionOptionsResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVpcPeeringConnectionOptionsOutcome(outcome.GetError());
  }
}

ModifyVpcPeeringConnectionOptionsOutcomeCallable EC2Client::ModifyVpcPeeringConnectionOptionsCallable(const ModifyVpcPeeringConnectionOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcPeeringConnectionOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpcPeeringConnectionOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpcPeeringConnectionOptionsAsync(const ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpcPeeringConnectionOptionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpcPeeringConnectionOptionsAsyncHelper(const ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcPeeringConnectionOptions(request), context);
}

ModifyVpcTenancyOutcome EC2Client::ModifyVpcTenancy(const ModifyVpcTenancyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpcTenancyOutcome(ModifyVpcTenancyResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVpcTenancyOutcome(outcome.GetError());
  }
}

ModifyVpcTenancyOutcomeCallable EC2Client::ModifyVpcTenancyCallable(const ModifyVpcTenancyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcTenancyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpcTenancy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpcTenancyAsync(const ModifyVpcTenancyRequest& request, const ModifyVpcTenancyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpcTenancyAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpcTenancyAsyncHelper(const ModifyVpcTenancyRequest& request, const ModifyVpcTenancyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcTenancy(request), context);
}

ModifyVpnConnectionOutcome EC2Client::ModifyVpnConnection(const ModifyVpnConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyVpnConnectionOutcome(ModifyVpnConnectionResponse(outcome.GetResult()));
  }
  else
  {
    return ModifyVpnConnectionOutcome(outcome.GetError());
  }
}

ModifyVpnConnectionOutcomeCallable EC2Client::ModifyVpnConnectionCallable(const ModifyVpnConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpnConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyVpnConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ModifyVpnConnectionAsync(const ModifyVpnConnectionRequest& request, const ModifyVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyVpnConnectionAsyncHelper( request, handler, context ); } );
}

void EC2Client::ModifyVpnConnectionAsyncHelper(const ModifyVpnConnectionRequest& request, const ModifyVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpnConnection(request), context);
}

MonitorInstancesOutcome EC2Client::MonitorInstances(const MonitorInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return MonitorInstancesOutcome(MonitorInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return MonitorInstancesOutcome(outcome.GetError());
  }
}

MonitorInstancesOutcomeCallable EC2Client::MonitorInstancesCallable(const MonitorInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MonitorInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MonitorInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::MonitorInstancesAsync(const MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->MonitorInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::MonitorInstancesAsyncHelper(const MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MonitorInstances(request), context);
}

MoveAddressToVpcOutcome EC2Client::MoveAddressToVpc(const MoveAddressToVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return MoveAddressToVpcOutcome(MoveAddressToVpcResponse(outcome.GetResult()));
  }
  else
  {
    return MoveAddressToVpcOutcome(outcome.GetError());
  }
}

MoveAddressToVpcOutcomeCallable EC2Client::MoveAddressToVpcCallable(const MoveAddressToVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MoveAddressToVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MoveAddressToVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::MoveAddressToVpcAsync(const MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->MoveAddressToVpcAsyncHelper( request, handler, context ); } );
}

void EC2Client::MoveAddressToVpcAsyncHelper(const MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MoveAddressToVpc(request), context);
}

ProvisionByoipCidrOutcome EC2Client::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ProvisionByoipCidrOutcome(ProvisionByoipCidrResponse(outcome.GetResult()));
  }
  else
  {
    return ProvisionByoipCidrOutcome(outcome.GetError());
  }
}

ProvisionByoipCidrOutcomeCallable EC2Client::ProvisionByoipCidrCallable(const ProvisionByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ProvisionByoipCidrAsync(const ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvisionByoipCidrAsyncHelper( request, handler, context ); } );
}

void EC2Client::ProvisionByoipCidrAsyncHelper(const ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvisionByoipCidr(request), context);
}

PurchaseHostReservationOutcome EC2Client::PurchaseHostReservation(const PurchaseHostReservationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PurchaseHostReservationOutcome(PurchaseHostReservationResponse(outcome.GetResult()));
  }
  else
  {
    return PurchaseHostReservationOutcome(outcome.GetError());
  }
}

PurchaseHostReservationOutcomeCallable EC2Client::PurchaseHostReservationCallable(const PurchaseHostReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseHostReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseHostReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::PurchaseHostReservationAsync(const PurchaseHostReservationRequest& request, const PurchaseHostReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseHostReservationAsyncHelper( request, handler, context ); } );
}

void EC2Client::PurchaseHostReservationAsyncHelper(const PurchaseHostReservationRequest& request, const PurchaseHostReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseHostReservation(request), context);
}

PurchaseReservedInstancesOfferingOutcome EC2Client::PurchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PurchaseReservedInstancesOfferingOutcome(PurchaseReservedInstancesOfferingResponse(outcome.GetResult()));
  }
  else
  {
    return PurchaseReservedInstancesOfferingOutcome(outcome.GetError());
  }
}

PurchaseReservedInstancesOfferingOutcomeCallable EC2Client::PurchaseReservedInstancesOfferingCallable(const PurchaseReservedInstancesOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedInstancesOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseReservedInstancesOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::PurchaseReservedInstancesOfferingAsync(const PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseReservedInstancesOfferingAsyncHelper( request, handler, context ); } );
}

void EC2Client::PurchaseReservedInstancesOfferingAsyncHelper(const PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseReservedInstancesOffering(request), context);
}

PurchaseScheduledInstancesOutcome EC2Client::PurchaseScheduledInstances(const PurchaseScheduledInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PurchaseScheduledInstancesOutcome(PurchaseScheduledInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return PurchaseScheduledInstancesOutcome(outcome.GetError());
  }
}

PurchaseScheduledInstancesOutcomeCallable EC2Client::PurchaseScheduledInstancesCallable(const PurchaseScheduledInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseScheduledInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseScheduledInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::PurchaseScheduledInstancesAsync(const PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseScheduledInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::PurchaseScheduledInstancesAsyncHelper(const PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseScheduledInstances(request), context);
}

RebootInstancesOutcome EC2Client::RebootInstances(const RebootInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebootInstancesOutcome(NoResult());
  }
  else
  {
    return RebootInstancesOutcome(outcome.GetError());
  }
}

RebootInstancesOutcomeCallable EC2Client::RebootInstancesCallable(const RebootInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::RebootInstancesAsyncHelper(const RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootInstances(request), context);
}

RegisterImageOutcome EC2Client::RegisterImage(const RegisterImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterImageOutcome(RegisterImageResponse(outcome.GetResult()));
  }
  else
  {
    return RegisterImageOutcome(outcome.GetError());
  }
}

RegisterImageOutcomeCallable EC2Client::RegisterImageCallable(const RegisterImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RegisterImageAsync(const RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterImageAsyncHelper( request, handler, context ); } );
}

void EC2Client::RegisterImageAsyncHelper(const RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterImage(request), context);
}

RejectTransitGatewayVpcAttachmentOutcome EC2Client::RejectTransitGatewayVpcAttachment(const RejectTransitGatewayVpcAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RejectTransitGatewayVpcAttachmentOutcome(RejectTransitGatewayVpcAttachmentResponse(outcome.GetResult()));
  }
  else
  {
    return RejectTransitGatewayVpcAttachmentOutcome(outcome.GetError());
  }
}

RejectTransitGatewayVpcAttachmentOutcomeCallable EC2Client::RejectTransitGatewayVpcAttachmentCallable(const RejectTransitGatewayVpcAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectTransitGatewayVpcAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RejectTransitGatewayVpcAttachmentAsync(const RejectTransitGatewayVpcAttachmentRequest& request, const RejectTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectTransitGatewayVpcAttachmentAsyncHelper( request, handler, context ); } );
}

void EC2Client::RejectTransitGatewayVpcAttachmentAsyncHelper(const RejectTransitGatewayVpcAttachmentRequest& request, const RejectTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectTransitGatewayVpcAttachment(request), context);
}

RejectVpcEndpointConnectionsOutcome EC2Client::RejectVpcEndpointConnections(const RejectVpcEndpointConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RejectVpcEndpointConnectionsOutcome(RejectVpcEndpointConnectionsResponse(outcome.GetResult()));
  }
  else
  {
    return RejectVpcEndpointConnectionsOutcome(outcome.GetError());
  }
}

RejectVpcEndpointConnectionsOutcomeCallable EC2Client::RejectVpcEndpointConnectionsCallable(const RejectVpcEndpointConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectVpcEndpointConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectVpcEndpointConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RejectVpcEndpointConnectionsAsync(const RejectVpcEndpointConnectionsRequest& request, const RejectVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectVpcEndpointConnectionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::RejectVpcEndpointConnectionsAsyncHelper(const RejectVpcEndpointConnectionsRequest& request, const RejectVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectVpcEndpointConnections(request), context);
}

RejectVpcPeeringConnectionOutcome EC2Client::RejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RejectVpcPeeringConnectionOutcome(RejectVpcPeeringConnectionResponse(outcome.GetResult()));
  }
  else
  {
    return RejectVpcPeeringConnectionOutcome(outcome.GetError());
  }
}

RejectVpcPeeringConnectionOutcomeCallable EC2Client::RejectVpcPeeringConnectionCallable(const RejectVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RejectVpcPeeringConnectionAsync(const RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectVpcPeeringConnectionAsyncHelper( request, handler, context ); } );
}

void EC2Client::RejectVpcPeeringConnectionAsyncHelper(const RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectVpcPeeringConnection(request), context);
}

ReleaseAddressOutcome EC2Client::ReleaseAddress(const ReleaseAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReleaseAddressOutcome(NoResult());
  }
  else
  {
    return ReleaseAddressOutcome(outcome.GetError());
  }
}

ReleaseAddressOutcomeCallable EC2Client::ReleaseAddressCallable(const ReleaseAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReleaseAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReleaseAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReleaseAddressAsync(const ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReleaseAddressAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReleaseAddressAsyncHelper(const ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReleaseAddress(request), context);
}

ReleaseHostsOutcome EC2Client::ReleaseHosts(const ReleaseHostsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReleaseHostsOutcome(ReleaseHostsResponse(outcome.GetResult()));
  }
  else
  {
    return ReleaseHostsOutcome(outcome.GetError());
  }
}

ReleaseHostsOutcomeCallable EC2Client::ReleaseHostsCallable(const ReleaseHostsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReleaseHostsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReleaseHosts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReleaseHostsAsync(const ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReleaseHostsAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReleaseHostsAsyncHelper(const ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReleaseHosts(request), context);
}

ReplaceIamInstanceProfileAssociationOutcome EC2Client::ReplaceIamInstanceProfileAssociation(const ReplaceIamInstanceProfileAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReplaceIamInstanceProfileAssociationOutcome(ReplaceIamInstanceProfileAssociationResponse(outcome.GetResult()));
  }
  else
  {
    return ReplaceIamInstanceProfileAssociationOutcome(outcome.GetError());
  }
}

ReplaceIamInstanceProfileAssociationOutcomeCallable EC2Client::ReplaceIamInstanceProfileAssociationCallable(const ReplaceIamInstanceProfileAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceIamInstanceProfileAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceIamInstanceProfileAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReplaceIamInstanceProfileAssociationAsync(const ReplaceIamInstanceProfileAssociationRequest& request, const ReplaceIamInstanceProfileAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReplaceIamInstanceProfileAssociationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReplaceIamInstanceProfileAssociationAsyncHelper(const ReplaceIamInstanceProfileAssociationRequest& request, const ReplaceIamInstanceProfileAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceIamInstanceProfileAssociation(request), context);
}

ReplaceNetworkAclAssociationOutcome EC2Client::ReplaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReplaceNetworkAclAssociationOutcome(ReplaceNetworkAclAssociationResponse(outcome.GetResult()));
  }
  else
  {
    return ReplaceNetworkAclAssociationOutcome(outcome.GetError());
  }
}

ReplaceNetworkAclAssociationOutcomeCallable EC2Client::ReplaceNetworkAclAssociationCallable(const ReplaceNetworkAclAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceNetworkAclAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceNetworkAclAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReplaceNetworkAclAssociationAsync(const ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReplaceNetworkAclAssociationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReplaceNetworkAclAssociationAsyncHelper(const ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceNetworkAclAssociation(request), context);
}

ReplaceNetworkAclEntryOutcome EC2Client::ReplaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReplaceNetworkAclEntryOutcome(NoResult());
  }
  else
  {
    return ReplaceNetworkAclEntryOutcome(outcome.GetError());
  }
}

ReplaceNetworkAclEntryOutcomeCallable EC2Client::ReplaceNetworkAclEntryCallable(const ReplaceNetworkAclEntryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceNetworkAclEntryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceNetworkAclEntry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReplaceNetworkAclEntryAsync(const ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReplaceNetworkAclEntryAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReplaceNetworkAclEntryAsyncHelper(const ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceNetworkAclEntry(request), context);
}

ReplaceRouteOutcome EC2Client::ReplaceRoute(const ReplaceRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReplaceRouteOutcome(NoResult());
  }
  else
  {
    return ReplaceRouteOutcome(outcome.GetError());
  }
}

ReplaceRouteOutcomeCallable EC2Client::ReplaceRouteCallable(const ReplaceRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReplaceRouteAsync(const ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReplaceRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReplaceRouteAsyncHelper(const ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceRoute(request), context);
}

ReplaceRouteTableAssociationOutcome EC2Client::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReplaceRouteTableAssociationOutcome(ReplaceRouteTableAssociationResponse(outcome.GetResult()));
  }
  else
  {
    return ReplaceRouteTableAssociationOutcome(outcome.GetError());
  }
}

ReplaceRouteTableAssociationOutcomeCallable EC2Client::ReplaceRouteTableAssociationCallable(const ReplaceRouteTableAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceRouteTableAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceRouteTableAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReplaceRouteTableAssociationAsync(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReplaceRouteTableAssociationAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReplaceRouteTableAssociationAsyncHelper(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceRouteTableAssociation(request), context);
}

ReplaceTransitGatewayRouteOutcome EC2Client::ReplaceTransitGatewayRoute(const ReplaceTransitGatewayRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReplaceTransitGatewayRouteOutcome(ReplaceTransitGatewayRouteResponse(outcome.GetResult()));
  }
  else
  {
    return ReplaceTransitGatewayRouteOutcome(outcome.GetError());
  }
}

ReplaceTransitGatewayRouteOutcomeCallable EC2Client::ReplaceTransitGatewayRouteCallable(const ReplaceTransitGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceTransitGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceTransitGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReplaceTransitGatewayRouteAsync(const ReplaceTransitGatewayRouteRequest& request, const ReplaceTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReplaceTransitGatewayRouteAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReplaceTransitGatewayRouteAsyncHelper(const ReplaceTransitGatewayRouteRequest& request, const ReplaceTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceTransitGatewayRoute(request), context);
}

ReportInstanceStatusOutcome EC2Client::ReportInstanceStatus(const ReportInstanceStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReportInstanceStatusOutcome(NoResult());
  }
  else
  {
    return ReportInstanceStatusOutcome(outcome.GetError());
  }
}

ReportInstanceStatusOutcomeCallable EC2Client::ReportInstanceStatusCallable(const ReportInstanceStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReportInstanceStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReportInstanceStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ReportInstanceStatusAsync(const ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReportInstanceStatusAsyncHelper( request, handler, context ); } );
}

void EC2Client::ReportInstanceStatusAsyncHelper(const ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReportInstanceStatus(request), context);
}

RequestSpotFleetOutcome EC2Client::RequestSpotFleet(const RequestSpotFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RequestSpotFleetOutcome(RequestSpotFleetResponse(outcome.GetResult()));
  }
  else
  {
    return RequestSpotFleetOutcome(outcome.GetError());
  }
}

RequestSpotFleetOutcomeCallable EC2Client::RequestSpotFleetCallable(const RequestSpotFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestSpotFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestSpotFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RequestSpotFleetAsync(const RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RequestSpotFleetAsyncHelper( request, handler, context ); } );
}

void EC2Client::RequestSpotFleetAsyncHelper(const RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestSpotFleet(request), context);
}

RequestSpotInstancesOutcome EC2Client::RequestSpotInstances(const RequestSpotInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RequestSpotInstancesOutcome(RequestSpotInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return RequestSpotInstancesOutcome(outcome.GetError());
  }
}

RequestSpotInstancesOutcomeCallable EC2Client::RequestSpotInstancesCallable(const RequestSpotInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestSpotInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestSpotInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RequestSpotInstancesAsync(const RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RequestSpotInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::RequestSpotInstancesAsyncHelper(const RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestSpotInstances(request), context);
}

ResetEbsDefaultKmsKeyIdOutcome EC2Client::ResetEbsDefaultKmsKeyId(const ResetEbsDefaultKmsKeyIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetEbsDefaultKmsKeyIdOutcome(ResetEbsDefaultKmsKeyIdResponse(outcome.GetResult()));
  }
  else
  {
    return ResetEbsDefaultKmsKeyIdOutcome(outcome.GetError());
  }
}

ResetEbsDefaultKmsKeyIdOutcomeCallable EC2Client::ResetEbsDefaultKmsKeyIdCallable(const ResetEbsDefaultKmsKeyIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetEbsDefaultKmsKeyIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetEbsDefaultKmsKeyId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ResetEbsDefaultKmsKeyIdAsync(const ResetEbsDefaultKmsKeyIdRequest& request, const ResetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetEbsDefaultKmsKeyIdAsyncHelper( request, handler, context ); } );
}

void EC2Client::ResetEbsDefaultKmsKeyIdAsyncHelper(const ResetEbsDefaultKmsKeyIdRequest& request, const ResetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetEbsDefaultKmsKeyId(request), context);
}

ResetFpgaImageAttributeOutcome EC2Client::ResetFpgaImageAttribute(const ResetFpgaImageAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetFpgaImageAttributeOutcome(ResetFpgaImageAttributeResponse(outcome.GetResult()));
  }
  else
  {
    return ResetFpgaImageAttributeOutcome(outcome.GetError());
  }
}

ResetFpgaImageAttributeOutcomeCallable EC2Client::ResetFpgaImageAttributeCallable(const ResetFpgaImageAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetFpgaImageAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetFpgaImageAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ResetFpgaImageAttributeAsync(const ResetFpgaImageAttributeRequest& request, const ResetFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetFpgaImageAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ResetFpgaImageAttributeAsyncHelper(const ResetFpgaImageAttributeRequest& request, const ResetFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetFpgaImageAttribute(request), context);
}

ResetImageAttributeOutcome EC2Client::ResetImageAttribute(const ResetImageAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetImageAttributeOutcome(NoResult());
  }
  else
  {
    return ResetImageAttributeOutcome(outcome.GetError());
  }
}

ResetImageAttributeOutcomeCallable EC2Client::ResetImageAttributeCallable(const ResetImageAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetImageAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetImageAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ResetImageAttributeAsync(const ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetImageAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ResetImageAttributeAsyncHelper(const ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetImageAttribute(request), context);
}

ResetInstanceAttributeOutcome EC2Client::ResetInstanceAttribute(const ResetInstanceAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetInstanceAttributeOutcome(NoResult());
  }
  else
  {
    return ResetInstanceAttributeOutcome(outcome.GetError());
  }
}

ResetInstanceAttributeOutcomeCallable EC2Client::ResetInstanceAttributeCallable(const ResetInstanceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetInstanceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ResetInstanceAttributeAsync(const ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetInstanceAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ResetInstanceAttributeAsyncHelper(const ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetInstanceAttribute(request), context);
}

ResetNetworkInterfaceAttributeOutcome EC2Client::ResetNetworkInterfaceAttribute(const ResetNetworkInterfaceAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetNetworkInterfaceAttributeOutcome(NoResult());
  }
  else
  {
    return ResetNetworkInterfaceAttributeOutcome(outcome.GetError());
  }
}

ResetNetworkInterfaceAttributeOutcomeCallable EC2Client::ResetNetworkInterfaceAttributeCallable(const ResetNetworkInterfaceAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetNetworkInterfaceAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetNetworkInterfaceAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ResetNetworkInterfaceAttributeAsync(const ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetNetworkInterfaceAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ResetNetworkInterfaceAttributeAsyncHelper(const ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetNetworkInterfaceAttribute(request), context);
}

ResetSnapshotAttributeOutcome EC2Client::ResetSnapshotAttribute(const ResetSnapshotAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetSnapshotAttributeOutcome(NoResult());
  }
  else
  {
    return ResetSnapshotAttributeOutcome(outcome.GetError());
  }
}

ResetSnapshotAttributeOutcomeCallable EC2Client::ResetSnapshotAttributeCallable(const ResetSnapshotAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetSnapshotAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::ResetSnapshotAttributeAsync(const ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetSnapshotAttributeAsyncHelper( request, handler, context ); } );
}

void EC2Client::ResetSnapshotAttributeAsyncHelper(const ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetSnapshotAttribute(request), context);
}

RestoreAddressToClassicOutcome EC2Client::RestoreAddressToClassic(const RestoreAddressToClassicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestoreAddressToClassicOutcome(RestoreAddressToClassicResponse(outcome.GetResult()));
  }
  else
  {
    return RestoreAddressToClassicOutcome(outcome.GetError());
  }
}

RestoreAddressToClassicOutcomeCallable EC2Client::RestoreAddressToClassicCallable(const RestoreAddressToClassicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreAddressToClassicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreAddressToClassic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RestoreAddressToClassicAsync(const RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreAddressToClassicAsyncHelper( request, handler, context ); } );
}

void EC2Client::RestoreAddressToClassicAsyncHelper(const RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreAddressToClassic(request), context);
}

RevokeClientVpnIngressOutcome EC2Client::RevokeClientVpnIngress(const RevokeClientVpnIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeClientVpnIngressOutcome(RevokeClientVpnIngressResponse(outcome.GetResult()));
  }
  else
  {
    return RevokeClientVpnIngressOutcome(outcome.GetError());
  }
}

RevokeClientVpnIngressOutcomeCallable EC2Client::RevokeClientVpnIngressCallable(const RevokeClientVpnIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeClientVpnIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeClientVpnIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RevokeClientVpnIngressAsync(const RevokeClientVpnIngressRequest& request, const RevokeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeClientVpnIngressAsyncHelper( request, handler, context ); } );
}

void EC2Client::RevokeClientVpnIngressAsyncHelper(const RevokeClientVpnIngressRequest& request, const RevokeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeClientVpnIngress(request), context);
}

RevokeSecurityGroupEgressOutcome EC2Client::RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeSecurityGroupEgressOutcome(NoResult());
  }
  else
  {
    return RevokeSecurityGroupEgressOutcome(outcome.GetError());
  }
}

RevokeSecurityGroupEgressOutcomeCallable EC2Client::RevokeSecurityGroupEgressCallable(const RevokeSecurityGroupEgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeSecurityGroupEgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeSecurityGroupEgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RevokeSecurityGroupEgressAsync(const RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeSecurityGroupEgressAsyncHelper( request, handler, context ); } );
}

void EC2Client::RevokeSecurityGroupEgressAsyncHelper(const RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeSecurityGroupEgress(request), context);
}

RevokeSecurityGroupIngressOutcome EC2Client::RevokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeSecurityGroupIngressOutcome(NoResult());
  }
  else
  {
    return RevokeSecurityGroupIngressOutcome(outcome.GetError());
  }
}

RevokeSecurityGroupIngressOutcomeCallable EC2Client::RevokeSecurityGroupIngressCallable(const RevokeSecurityGroupIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeSecurityGroupIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RevokeSecurityGroupIngressAsync(const RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeSecurityGroupIngressAsyncHelper( request, handler, context ); } );
}

void EC2Client::RevokeSecurityGroupIngressAsyncHelper(const RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeSecurityGroupIngress(request), context);
}

RunInstancesOutcome EC2Client::RunInstances(const RunInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RunInstancesOutcome(RunInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return RunInstancesOutcome(outcome.GetError());
  }
}

RunInstancesOutcomeCallable EC2Client::RunInstancesCallable(const RunInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RunInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::RunInstancesAsyncHelper(const RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunInstances(request), context);
}

RunScheduledInstancesOutcome EC2Client::RunScheduledInstances(const RunScheduledInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RunScheduledInstancesOutcome(RunScheduledInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return RunScheduledInstancesOutcome(outcome.GetError());
  }
}

RunScheduledInstancesOutcomeCallable EC2Client::RunScheduledInstancesCallable(const RunScheduledInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunScheduledInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunScheduledInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::RunScheduledInstancesAsync(const RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RunScheduledInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::RunScheduledInstancesAsyncHelper(const RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunScheduledInstances(request), context);
}

SearchTransitGatewayRoutesOutcome EC2Client::SearchTransitGatewayRoutes(const SearchTransitGatewayRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SearchTransitGatewayRoutesOutcome(SearchTransitGatewayRoutesResponse(outcome.GetResult()));
  }
  else
  {
    return SearchTransitGatewayRoutesOutcome(outcome.GetError());
  }
}

SearchTransitGatewayRoutesOutcomeCallable EC2Client::SearchTransitGatewayRoutesCallable(const SearchTransitGatewayRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchTransitGatewayRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchTransitGatewayRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::SearchTransitGatewayRoutesAsync(const SearchTransitGatewayRoutesRequest& request, const SearchTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchTransitGatewayRoutesAsyncHelper( request, handler, context ); } );
}

void EC2Client::SearchTransitGatewayRoutesAsyncHelper(const SearchTransitGatewayRoutesRequest& request, const SearchTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchTransitGatewayRoutes(request), context);
}

StartInstancesOutcome EC2Client::StartInstances(const StartInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartInstancesOutcome(StartInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return StartInstancesOutcome(outcome.GetError());
  }
}

StartInstancesOutcomeCallable EC2Client::StartInstancesCallable(const StartInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::StartInstancesAsyncHelper(const StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartInstances(request), context);
}

StopInstancesOutcome EC2Client::StopInstances(const StopInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopInstancesOutcome(StopInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return StopInstancesOutcome(outcome.GetError());
  }
}

StopInstancesOutcomeCallable EC2Client::StopInstancesCallable(const StopInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::StopInstancesAsyncHelper(const StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopInstances(request), context);
}

TerminateClientVpnConnectionsOutcome EC2Client::TerminateClientVpnConnections(const TerminateClientVpnConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TerminateClientVpnConnectionsOutcome(TerminateClientVpnConnectionsResponse(outcome.GetResult()));
  }
  else
  {
    return TerminateClientVpnConnectionsOutcome(outcome.GetError());
  }
}

TerminateClientVpnConnectionsOutcomeCallable EC2Client::TerminateClientVpnConnectionsCallable(const TerminateClientVpnConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateClientVpnConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateClientVpnConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::TerminateClientVpnConnectionsAsync(const TerminateClientVpnConnectionsRequest& request, const TerminateClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateClientVpnConnectionsAsyncHelper( request, handler, context ); } );
}

void EC2Client::TerminateClientVpnConnectionsAsyncHelper(const TerminateClientVpnConnectionsRequest& request, const TerminateClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateClientVpnConnections(request), context);
}

TerminateInstancesOutcome EC2Client::TerminateInstances(const TerminateInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TerminateInstancesOutcome(TerminateInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return TerminateInstancesOutcome(outcome.GetError());
  }
}

TerminateInstancesOutcomeCallable EC2Client::TerminateInstancesCallable(const TerminateInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::TerminateInstancesAsyncHelper(const TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateInstances(request), context);
}

UnassignIpv6AddressesOutcome EC2Client::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnassignIpv6AddressesOutcome(UnassignIpv6AddressesResponse(outcome.GetResult()));
  }
  else
  {
    return UnassignIpv6AddressesOutcome(outcome.GetError());
  }
}

UnassignIpv6AddressesOutcomeCallable EC2Client::UnassignIpv6AddressesCallable(const UnassignIpv6AddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignIpv6AddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignIpv6Addresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::UnassignIpv6AddressesAsync(const UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnassignIpv6AddressesAsyncHelper( request, handler, context ); } );
}

void EC2Client::UnassignIpv6AddressesAsyncHelper(const UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnassignIpv6Addresses(request), context);
}

UnassignPrivateIpAddressesOutcome EC2Client::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnassignPrivateIpAddressesOutcome(NoResult());
  }
  else
  {
    return UnassignPrivateIpAddressesOutcome(outcome.GetError());
  }
}

UnassignPrivateIpAddressesOutcomeCallable EC2Client::UnassignPrivateIpAddressesCallable(const UnassignPrivateIpAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignPrivateIpAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignPrivateIpAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::UnassignPrivateIpAddressesAsync(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnassignPrivateIpAddressesAsyncHelper( request, handler, context ); } );
}

void EC2Client::UnassignPrivateIpAddressesAsyncHelper(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnassignPrivateIpAddresses(request), context);
}

UnmonitorInstancesOutcome EC2Client::UnmonitorInstances(const UnmonitorInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnmonitorInstancesOutcome(UnmonitorInstancesResponse(outcome.GetResult()));
  }
  else
  {
    return UnmonitorInstancesOutcome(outcome.GetError());
  }
}

UnmonitorInstancesOutcomeCallable EC2Client::UnmonitorInstancesCallable(const UnmonitorInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnmonitorInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnmonitorInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::UnmonitorInstancesAsync(const UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnmonitorInstancesAsyncHelper( request, handler, context ); } );
}

void EC2Client::UnmonitorInstancesAsyncHelper(const UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnmonitorInstances(request), context);
}

UpdateSecurityGroupRuleDescriptionsEgressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsEgress(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateSecurityGroupRuleDescriptionsEgressOutcome(UpdateSecurityGroupRuleDescriptionsEgressResponse(outcome.GetResult()));
  }
  else
  {
    return UpdateSecurityGroupRuleDescriptionsEgressOutcome(outcome.GetError());
  }
}

UpdateSecurityGroupRuleDescriptionsEgressOutcomeCallable EC2Client::UpdateSecurityGroupRuleDescriptionsEgressCallable(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityGroupRuleDescriptionsEgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecurityGroupRuleDescriptionsEgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::UpdateSecurityGroupRuleDescriptionsEgressAsync(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request, const UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSecurityGroupRuleDescriptionsEgressAsyncHelper( request, handler, context ); } );
}

void EC2Client::UpdateSecurityGroupRuleDescriptionsEgressAsyncHelper(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request, const UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSecurityGroupRuleDescriptionsEgress(request), context);
}

UpdateSecurityGroupRuleDescriptionsIngressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsIngress(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateSecurityGroupRuleDescriptionsIngressOutcome(UpdateSecurityGroupRuleDescriptionsIngressResponse(outcome.GetResult()));
  }
  else
  {
    return UpdateSecurityGroupRuleDescriptionsIngressOutcome(outcome.GetError());
  }
}

UpdateSecurityGroupRuleDescriptionsIngressOutcomeCallable EC2Client::UpdateSecurityGroupRuleDescriptionsIngressCallable(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityGroupRuleDescriptionsIngressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecurityGroupRuleDescriptionsIngress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::UpdateSecurityGroupRuleDescriptionsIngressAsync(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request, const UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSecurityGroupRuleDescriptionsIngressAsyncHelper( request, handler, context ); } );
}

void EC2Client::UpdateSecurityGroupRuleDescriptionsIngressAsyncHelper(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request, const UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSecurityGroupRuleDescriptionsIngress(request), context);
}

WithdrawByoipCidrOutcome EC2Client::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return WithdrawByoipCidrOutcome(WithdrawByoipCidrResponse(outcome.GetResult()));
  }
  else
  {
    return WithdrawByoipCidrOutcome(outcome.GetError());
  }
}

WithdrawByoipCidrOutcomeCallable EC2Client::WithdrawByoipCidrCallable(const WithdrawByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< WithdrawByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->WithdrawByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2Client::WithdrawByoipCidrAsync(const WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->WithdrawByoipCidrAsyncHelper( request, handler, context ); } );
}

void EC2Client::WithdrawByoipCidrAsyncHelper(const WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, WithdrawByoipCidr(request), context);
}



