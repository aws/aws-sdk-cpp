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
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/EC2Endpoint.h>
#include <aws/ec2/EC2ErrorMarshaller.h>
#include <aws/ec2/model/AcceptVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/AllocateAddressRequest.h>
#include <aws/ec2/model/AllocateHostsRequest.h>
#include <aws/ec2/model/AssignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/AssociateAddressRequest.h>
#include <aws/ec2/model/AssociateDhcpOptionsRequest.h>
#include <aws/ec2/model/AssociateRouteTableRequest.h>
#include <aws/ec2/model/AttachClassicLinkVpcRequest.h>
#include <aws/ec2/model/AttachInternetGatewayRequest.h>
#include <aws/ec2/model/AttachNetworkInterfaceRequest.h>
#include <aws/ec2/model/AttachVolumeRequest.h>
#include <aws/ec2/model/AttachVpnGatewayRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/BundleInstanceRequest.h>
#include <aws/ec2/model/CancelBundleTaskRequest.h>
#include <aws/ec2/model/CancelConversionTaskRequest.h>
#include <aws/ec2/model/CancelExportTaskRequest.h>
#include <aws/ec2/model/CancelImportTaskRequest.h>
#include <aws/ec2/model/CancelReservedInstancesListingRequest.h>
#include <aws/ec2/model/CancelSpotFleetRequestsRequest.h>
#include <aws/ec2/model/CancelSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/ConfirmProductInstanceRequest.h>
#include <aws/ec2/model/CopyImageRequest.h>
#include <aws/ec2/model/CopySnapshotRequest.h>
#include <aws/ec2/model/CreateCustomerGatewayRequest.h>
#include <aws/ec2/model/CreateDhcpOptionsRequest.h>
#include <aws/ec2/model/CreateFlowLogsRequest.h>
#include <aws/ec2/model/CreateImageRequest.h>
#include <aws/ec2/model/CreateInstanceExportTaskRequest.h>
#include <aws/ec2/model/CreateInternetGatewayRequest.h>
#include <aws/ec2/model/CreateKeyPairRequest.h>
#include <aws/ec2/model/CreateNatGatewayRequest.h>
#include <aws/ec2/model/CreateNetworkAclRequest.h>
#include <aws/ec2/model/CreateNetworkAclEntryRequest.h>
#include <aws/ec2/model/CreateNetworkInterfaceRequest.h>
#include <aws/ec2/model/CreatePlacementGroupRequest.h>
#include <aws/ec2/model/CreateReservedInstancesListingRequest.h>
#include <aws/ec2/model/CreateRouteRequest.h>
#include <aws/ec2/model/CreateRouteTableRequest.h>
#include <aws/ec2/model/CreateSecurityGroupRequest.h>
#include <aws/ec2/model/CreateSnapshotRequest.h>
#include <aws/ec2/model/CreateSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/CreateSubnetRequest.h>
#include <aws/ec2/model/CreateTagsRequest.h>
#include <aws/ec2/model/CreateVolumeRequest.h>
#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/ec2/model/CreateVpcEndpointRequest.h>
#include <aws/ec2/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRouteRequest.h>
#include <aws/ec2/model/CreateVpnGatewayRequest.h>
#include <aws/ec2/model/DeleteCustomerGatewayRequest.h>
#include <aws/ec2/model/DeleteDhcpOptionsRequest.h>
#include <aws/ec2/model/DeleteFlowLogsRequest.h>
#include <aws/ec2/model/DeleteInternetGatewayRequest.h>
#include <aws/ec2/model/DeleteKeyPairRequest.h>
#include <aws/ec2/model/DeleteNatGatewayRequest.h>
#include <aws/ec2/model/DeleteNetworkAclRequest.h>
#include <aws/ec2/model/DeleteNetworkAclEntryRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfaceRequest.h>
#include <aws/ec2/model/DeletePlacementGroupRequest.h>
#include <aws/ec2/model/DeleteRouteRequest.h>
#include <aws/ec2/model/DeleteRouteTableRequest.h>
#include <aws/ec2/model/DeleteSecurityGroupRequest.h>
#include <aws/ec2/model/DeleteSnapshotRequest.h>
#include <aws/ec2/model/DeleteSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DeleteSubnetRequest.h>
#include <aws/ec2/model/DeleteTagsRequest.h>
#include <aws/ec2/model/DeleteVolumeRequest.h>
#include <aws/ec2/model/DeleteVpcRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointsRequest.h>
#include <aws/ec2/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRouteRequest.h>
#include <aws/ec2/model/DeleteVpnGatewayRequest.h>
#include <aws/ec2/model/DeregisterImageRequest.h>
#include <aws/ec2/model/DescribeAccountAttributesRequest.h>
#include <aws/ec2/model/DescribeAddressesRequest.h>
#include <aws/ec2/model/DescribeAvailabilityZonesRequest.h>
#include <aws/ec2/model/DescribeBundleTasksRequest.h>
#include <aws/ec2/model/DescribeClassicLinkInstancesRequest.h>
#include <aws/ec2/model/DescribeConversionTasksRequest.h>
#include <aws/ec2/model/DescribeCustomerGatewaysRequest.h>
#include <aws/ec2/model/DescribeDhcpOptionsRequest.h>
#include <aws/ec2/model/DescribeExportTasksRequest.h>
#include <aws/ec2/model/DescribeFlowLogsRequest.h>
#include <aws/ec2/model/DescribeHostsRequest.h>
#include <aws/ec2/model/DescribeIdFormatRequest.h>
#include <aws/ec2/model/DescribeImageAttributeRequest.h>
#include <aws/ec2/model/DescribeImagesRequest.h>
#include <aws/ec2/model/DescribeImportImageTasksRequest.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksRequest.h>
#include <aws/ec2/model/DescribeInstanceAttributeRequest.h>
#include <aws/ec2/model/DescribeInstanceStatusRequest.h>
#include <aws/ec2/model/DescribeInstancesRequest.h>
#include <aws/ec2/model/DescribeInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeKeyPairsRequest.h>
#include <aws/ec2/model/DescribeMovingAddressesRequest.h>
#include <aws/ec2/model/DescribeNatGatewaysRequest.h>
#include <aws/ec2/model/DescribeNetworkAclsRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfacesRequest.h>
#include <aws/ec2/model/DescribePlacementGroupsRequest.h>
#include <aws/ec2/model/DescribePrefixListsRequest.h>
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
#include <aws/ec2/model/DescribeVolumeAttributeRequest.h>
#include <aws/ec2/model/DescribeVolumeStatusRequest.h>
#include <aws/ec2/model/DescribeVolumesRequest.h>
#include <aws/ec2/model/DescribeVpcAttributeRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportRequest.h>
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
#include <aws/ec2/model/DisableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/DisassociateAddressRequest.h>
#include <aws/ec2/model/DisassociateRouteTableRequest.h>
#include <aws/ec2/model/EnableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/EnableVolumeIORequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkRequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/GetConsoleOutputRequest.h>
#include <aws/ec2/model/GetConsoleScreenshotRequest.h>
#include <aws/ec2/model/GetPasswordDataRequest.h>
#include <aws/ec2/model/ImportImageRequest.h>
#include <aws/ec2/model/ImportInstanceRequest.h>
#include <aws/ec2/model/ImportKeyPairRequest.h>
#include <aws/ec2/model/ImportSnapshotRequest.h>
#include <aws/ec2/model/ImportVolumeRequest.h>
#include <aws/ec2/model/ModifyHostsRequest.h>
#include <aws/ec2/model/ModifyIdFormatRequest.h>
#include <aws/ec2/model/ModifyImageAttributeRequest.h>
#include <aws/ec2/model/ModifyInstanceAttributeRequest.h>
#include <aws/ec2/model/ModifyInstancePlacementRequest.h>
#include <aws/ec2/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/ModifyReservedInstancesRequest.h>
#include <aws/ec2/model/ModifySnapshotAttributeRequest.h>
#include <aws/ec2/model/ModifySpotFleetRequestRequest.h>
#include <aws/ec2/model/ModifySubnetAttributeRequest.h>
#include <aws/ec2/model/ModifyVolumeAttributeRequest.h>
#include <aws/ec2/model/ModifyVpcAttributeRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointRequest.h>
#include <aws/ec2/model/ModifyVpcPeeringConnectionOptionsRequest.h>
#include <aws/ec2/model/MonitorInstancesRequest.h>
#include <aws/ec2/model/MoveAddressToVpcRequest.h>
#include <aws/ec2/model/PurchaseReservedInstancesOfferingRequest.h>
#include <aws/ec2/model/PurchaseScheduledInstancesRequest.h>
#include <aws/ec2/model/RebootInstancesRequest.h>
#include <aws/ec2/model/RegisterImageRequest.h>
#include <aws/ec2/model/RejectVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/ReleaseAddressRequest.h>
#include <aws/ec2/model/ReleaseHostsRequest.h>
#include <aws/ec2/model/ReplaceNetworkAclAssociationRequest.h>
#include <aws/ec2/model/ReplaceNetworkAclEntryRequest.h>
#include <aws/ec2/model/ReplaceRouteRequest.h>
#include <aws/ec2/model/ReplaceRouteTableAssociationRequest.h>
#include <aws/ec2/model/ReportInstanceStatusRequest.h>
#include <aws/ec2/model/RequestSpotFleetRequest.h>
#include <aws/ec2/model/RequestSpotInstancesRequest.h>
#include <aws/ec2/model/ResetImageAttributeRequest.h>
#include <aws/ec2/model/ResetInstanceAttributeRequest.h>
#include <aws/ec2/model/ResetNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/ResetSnapshotAttributeRequest.h>
#include <aws/ec2/model/RestoreAddressToClassicRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/RunInstancesRequest.h>
#include <aws/ec2/model/RunScheduledInstancesRequest.h>
#include <aws/ec2/model/StartInstancesRequest.h>
#include <aws/ec2/model/StopInstancesRequest.h>
#include <aws/ec2/model/TerminateInstancesRequest.h>
#include <aws/ec2/model/UnassignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/UnmonitorInstancesRequest.h>

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
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2Client::EC2Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2Client::EC2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << EC2Endpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AcceptVpcPeeringConnectionOutcome EC2Client::AcceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AcceptVpcPeeringConnection, this, request);
}

void EC2Client::AcceptVpcPeeringConnectionAsync(const AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AcceptVpcPeeringConnectionAsyncHelper, this, request, handler, context);
}

void EC2Client::AcceptVpcPeeringConnectionAsyncHelper(const AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptVpcPeeringConnection(request), context);
}

AllocateAddressOutcome EC2Client::AllocateAddress(const AllocateAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AllocateAddress, this, request);
}

void EC2Client::AllocateAddressAsync(const AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AllocateAddressAsyncHelper, this, request, handler, context);
}

void EC2Client::AllocateAddressAsyncHelper(const AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateAddress(request), context);
}

AllocateHostsOutcome EC2Client::AllocateHosts(const AllocateHostsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AllocateHosts, this, request);
}

void EC2Client::AllocateHostsAsync(const AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AllocateHostsAsyncHelper, this, request, handler, context);
}

void EC2Client::AllocateHostsAsyncHelper(const AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateHosts(request), context);
}

AssignPrivateIpAddressesOutcome EC2Client::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssignPrivateIpAddressesOutcome(NoResult());
  }
  else
  {
    return AssignPrivateIpAddressesOutcome(outcome.GetError());
  }
}

AssignPrivateIpAddressesOutcomeCallable EC2Client::AssignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest& request) const
{
  return std::async(std::launch::async, &EC2Client::AssignPrivateIpAddresses, this, request);
}

void EC2Client::AssignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AssignPrivateIpAddressesAsyncHelper, this, request, handler, context);
}

void EC2Client::AssignPrivateIpAddressesAsyncHelper(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignPrivateIpAddresses(request), context);
}

AssociateAddressOutcome EC2Client::AssociateAddress(const AssociateAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AssociateAddress, this, request);
}

void EC2Client::AssociateAddressAsync(const AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AssociateAddressAsyncHelper, this, request, handler, context);
}

void EC2Client::AssociateAddressAsyncHelper(const AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateAddress(request), context);
}

AssociateDhcpOptionsOutcome EC2Client::AssociateDhcpOptions(const AssociateDhcpOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AssociateDhcpOptions, this, request);
}

void EC2Client::AssociateDhcpOptionsAsync(const AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AssociateDhcpOptionsAsyncHelper, this, request, handler, context);
}

void EC2Client::AssociateDhcpOptionsAsyncHelper(const AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDhcpOptions(request), context);
}

AssociateRouteTableOutcome EC2Client::AssociateRouteTable(const AssociateRouteTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AssociateRouteTable, this, request);
}

void EC2Client::AssociateRouteTableAsync(const AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AssociateRouteTableAsyncHelper, this, request, handler, context);
}

void EC2Client::AssociateRouteTableAsyncHelper(const AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateRouteTable(request), context);
}

AttachClassicLinkVpcOutcome EC2Client::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AttachClassicLinkVpc, this, request);
}

void EC2Client::AttachClassicLinkVpcAsync(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AttachClassicLinkVpcAsyncHelper, this, request, handler, context);
}

void EC2Client::AttachClassicLinkVpcAsyncHelper(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachClassicLinkVpc(request), context);
}

AttachInternetGatewayOutcome EC2Client::AttachInternetGateway(const AttachInternetGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AttachInternetGateway, this, request);
}

void EC2Client::AttachInternetGatewayAsync(const AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AttachInternetGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::AttachInternetGatewayAsyncHelper(const AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachInternetGateway(request), context);
}

AttachNetworkInterfaceOutcome EC2Client::AttachNetworkInterface(const AttachNetworkInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AttachNetworkInterface, this, request);
}

void EC2Client::AttachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AttachNetworkInterfaceAsyncHelper, this, request, handler, context);
}

void EC2Client::AttachNetworkInterfaceAsyncHelper(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachNetworkInterface(request), context);
}

AttachVolumeOutcome EC2Client::AttachVolume(const AttachVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AttachVolume, this, request);
}

void EC2Client::AttachVolumeAsync(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AttachVolumeAsyncHelper, this, request, handler, context);
}

void EC2Client::AttachVolumeAsyncHelper(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachVolume(request), context);
}

AttachVpnGatewayOutcome EC2Client::AttachVpnGateway(const AttachVpnGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AttachVpnGateway, this, request);
}

void EC2Client::AttachVpnGatewayAsync(const AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AttachVpnGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::AttachVpnGatewayAsyncHelper(const AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachVpnGateway(request), context);
}

AuthorizeSecurityGroupEgressOutcome EC2Client::AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AuthorizeSecurityGroupEgress, this, request);
}

void EC2Client::AuthorizeSecurityGroupEgressAsync(const AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AuthorizeSecurityGroupEgressAsyncHelper, this, request, handler, context);
}

void EC2Client::AuthorizeSecurityGroupEgressAsyncHelper(const AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeSecurityGroupEgress(request), context);
}

AuthorizeSecurityGroupIngressOutcome EC2Client::AuthorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::AuthorizeSecurityGroupIngress, this, request);
}

void EC2Client::AuthorizeSecurityGroupIngressAsync(const AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::AuthorizeSecurityGroupIngressAsyncHelper, this, request, handler, context);
}

void EC2Client::AuthorizeSecurityGroupIngressAsyncHelper(const AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeSecurityGroupIngress(request), context);
}

BundleInstanceOutcome EC2Client::BundleInstance(const BundleInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::BundleInstance, this, request);
}

void EC2Client::BundleInstanceAsync(const BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::BundleInstanceAsyncHelper, this, request, handler, context);
}

void EC2Client::BundleInstanceAsyncHelper(const BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BundleInstance(request), context);
}

CancelBundleTaskOutcome EC2Client::CancelBundleTask(const CancelBundleTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CancelBundleTask, this, request);
}

void EC2Client::CancelBundleTaskAsync(const CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CancelBundleTaskAsyncHelper, this, request, handler, context);
}

void EC2Client::CancelBundleTaskAsyncHelper(const CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelBundleTask(request), context);
}

CancelConversionTaskOutcome EC2Client::CancelConversionTask(const CancelConversionTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CancelConversionTask, this, request);
}

void EC2Client::CancelConversionTaskAsync(const CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CancelConversionTaskAsyncHelper, this, request, handler, context);
}

void EC2Client::CancelConversionTaskAsyncHelper(const CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelConversionTask(request), context);
}

CancelExportTaskOutcome EC2Client::CancelExportTask(const CancelExportTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CancelExportTask, this, request);
}

void EC2Client::CancelExportTaskAsync(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CancelExportTaskAsyncHelper, this, request, handler, context);
}

void EC2Client::CancelExportTaskAsyncHelper(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelExportTask(request), context);
}

CancelImportTaskOutcome EC2Client::CancelImportTask(const CancelImportTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CancelImportTask, this, request);
}

void EC2Client::CancelImportTaskAsync(const CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CancelImportTaskAsyncHelper, this, request, handler, context);
}

void EC2Client::CancelImportTaskAsyncHelper(const CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelImportTask(request), context);
}

CancelReservedInstancesListingOutcome EC2Client::CancelReservedInstancesListing(const CancelReservedInstancesListingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CancelReservedInstancesListing, this, request);
}

void EC2Client::CancelReservedInstancesListingAsync(const CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CancelReservedInstancesListingAsyncHelper, this, request, handler, context);
}

void EC2Client::CancelReservedInstancesListingAsyncHelper(const CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelReservedInstancesListing(request), context);
}

CancelSpotFleetRequestsOutcome EC2Client::CancelSpotFleetRequests(const CancelSpotFleetRequestsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CancelSpotFleetRequests, this, request);
}

void EC2Client::CancelSpotFleetRequestsAsync(const CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CancelSpotFleetRequestsAsyncHelper, this, request, handler, context);
}

void EC2Client::CancelSpotFleetRequestsAsyncHelper(const CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSpotFleetRequests(request), context);
}

CancelSpotInstanceRequestsOutcome EC2Client::CancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CancelSpotInstanceRequests, this, request);
}

void EC2Client::CancelSpotInstanceRequestsAsync(const CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CancelSpotInstanceRequestsAsyncHelper, this, request, handler, context);
}

void EC2Client::CancelSpotInstanceRequestsAsyncHelper(const CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSpotInstanceRequests(request), context);
}

ConfirmProductInstanceOutcome EC2Client::ConfirmProductInstance(const ConfirmProductInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ConfirmProductInstance, this, request);
}

void EC2Client::ConfirmProductInstanceAsync(const ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ConfirmProductInstanceAsyncHelper, this, request, handler, context);
}

void EC2Client::ConfirmProductInstanceAsyncHelper(const ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmProductInstance(request), context);
}

CopyImageOutcome EC2Client::CopyImage(const CopyImageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CopyImage, this, request);
}

void EC2Client::CopyImageAsync(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CopyImageAsyncHelper, this, request, handler, context);
}

void EC2Client::CopyImageAsyncHelper(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyImage(request), context);
}

CopySnapshotOutcome EC2Client::CopySnapshot(const CopySnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CopySnapshot, this, request);
}

void EC2Client::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CopySnapshotAsyncHelper, this, request, handler, context);
}

void EC2Client::CopySnapshotAsyncHelper(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopySnapshot(request), context);
}

CreateCustomerGatewayOutcome EC2Client::CreateCustomerGateway(const CreateCustomerGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateCustomerGateway, this, request);
}

void EC2Client::CreateCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateCustomerGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateCustomerGatewayAsyncHelper(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomerGateway(request), context);
}

CreateDhcpOptionsOutcome EC2Client::CreateDhcpOptions(const CreateDhcpOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateDhcpOptions, this, request);
}

void EC2Client::CreateDhcpOptionsAsync(const CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateDhcpOptionsAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateDhcpOptionsAsyncHelper(const CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDhcpOptions(request), context);
}

CreateFlowLogsOutcome EC2Client::CreateFlowLogs(const CreateFlowLogsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateFlowLogs, this, request);
}

void EC2Client::CreateFlowLogsAsync(const CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateFlowLogsAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateFlowLogsAsyncHelper(const CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFlowLogs(request), context);
}

CreateImageOutcome EC2Client::CreateImage(const CreateImageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateImage, this, request);
}

void EC2Client::CreateImageAsync(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateImageAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateImageAsyncHelper(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateImage(request), context);
}

CreateInstanceExportTaskOutcome EC2Client::CreateInstanceExportTask(const CreateInstanceExportTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateInstanceExportTask, this, request);
}

void EC2Client::CreateInstanceExportTaskAsync(const CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateInstanceExportTaskAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateInstanceExportTaskAsyncHelper(const CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstanceExportTask(request), context);
}

CreateInternetGatewayOutcome EC2Client::CreateInternetGateway(const CreateInternetGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateInternetGateway, this, request);
}

void EC2Client::CreateInternetGatewayAsync(const CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateInternetGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateInternetGatewayAsyncHelper(const CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInternetGateway(request), context);
}

CreateKeyPairOutcome EC2Client::CreateKeyPair(const CreateKeyPairRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateKeyPair, this, request);
}

void EC2Client::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateKeyPairAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateKeyPairAsyncHelper(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeyPair(request), context);
}

CreateNatGatewayOutcome EC2Client::CreateNatGateway(const CreateNatGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateNatGateway, this, request);
}

void EC2Client::CreateNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateNatGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateNatGatewayAsyncHelper(const CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNatGateway(request), context);
}

CreateNetworkAclOutcome EC2Client::CreateNetworkAcl(const CreateNetworkAclRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateNetworkAcl, this, request);
}

void EC2Client::CreateNetworkAclAsync(const CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateNetworkAclAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateNetworkAclAsyncHelper(const CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkAcl(request), context);
}

CreateNetworkAclEntryOutcome EC2Client::CreateNetworkAclEntry(const CreateNetworkAclEntryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateNetworkAclEntry, this, request);
}

void EC2Client::CreateNetworkAclEntryAsync(const CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateNetworkAclEntryAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateNetworkAclEntryAsyncHelper(const CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkAclEntry(request), context);
}

CreateNetworkInterfaceOutcome EC2Client::CreateNetworkInterface(const CreateNetworkInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateNetworkInterface, this, request);
}

void EC2Client::CreateNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateNetworkInterfaceAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateNetworkInterfaceAsyncHelper(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkInterface(request), context);
}

CreatePlacementGroupOutcome EC2Client::CreatePlacementGroup(const CreatePlacementGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreatePlacementGroup, this, request);
}

void EC2Client::CreatePlacementGroupAsync(const CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreatePlacementGroupAsyncHelper, this, request, handler, context);
}

void EC2Client::CreatePlacementGroupAsyncHelper(const CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlacementGroup(request), context);
}

CreateReservedInstancesListingOutcome EC2Client::CreateReservedInstancesListing(const CreateReservedInstancesListingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateReservedInstancesListing, this, request);
}

void EC2Client::CreateReservedInstancesListingAsync(const CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateReservedInstancesListingAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateReservedInstancesListingAsyncHelper(const CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReservedInstancesListing(request), context);
}

CreateRouteOutcome EC2Client::CreateRoute(const CreateRouteRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateRoute, this, request);
}

void EC2Client::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateRouteAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateRouteAsyncHelper(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoute(request), context);
}

CreateRouteTableOutcome EC2Client::CreateRouteTable(const CreateRouteTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateRouteTable, this, request);
}

void EC2Client::CreateRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateRouteTableAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateRouteTableAsyncHelper(const CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRouteTable(request), context);
}

CreateSecurityGroupOutcome EC2Client::CreateSecurityGroup(const CreateSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateSecurityGroup, this, request);
}

void EC2Client::CreateSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateSecurityGroupAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateSecurityGroupAsyncHelper(const CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSecurityGroup(request), context);
}

CreateSnapshotOutcome EC2Client::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateSnapshot, this, request);
}

void EC2Client::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateSnapshotAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateSpotDatafeedSubscriptionOutcome EC2Client::CreateSpotDatafeedSubscription(const CreateSpotDatafeedSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateSpotDatafeedSubscription, this, request);
}

void EC2Client::CreateSpotDatafeedSubscriptionAsync(const CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateSpotDatafeedSubscriptionAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateSpotDatafeedSubscriptionAsyncHelper(const CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSpotDatafeedSubscription(request), context);
}

CreateSubnetOutcome EC2Client::CreateSubnet(const CreateSubnetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateSubnet, this, request);
}

void EC2Client::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateSubnetAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateSubnetAsyncHelper(const CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSubnet(request), context);
}

CreateTagsOutcome EC2Client::CreateTags(const CreateTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateTags, this, request);
}

void EC2Client::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateTagsAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

CreateVolumeOutcome EC2Client::CreateVolume(const CreateVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateVolume, this, request);
}

void EC2Client::CreateVolumeAsync(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateVolumeAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateVolumeAsyncHelper(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVolume(request), context);
}

CreateVpcOutcome EC2Client::CreateVpc(const CreateVpcRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateVpc, this, request);
}

void EC2Client::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateVpcAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateVpcAsyncHelper(const CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpc(request), context);
}

CreateVpcEndpointOutcome EC2Client::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateVpcEndpoint, this, request);
}

void EC2Client::CreateVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateVpcEndpointAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateVpcEndpointAsyncHelper(const CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcEndpoint(request), context);
}

CreateVpcPeeringConnectionOutcome EC2Client::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateVpcPeeringConnection, this, request);
}

void EC2Client::CreateVpcPeeringConnectionAsync(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateVpcPeeringConnectionAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateVpcPeeringConnectionAsyncHelper(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcPeeringConnection(request), context);
}

CreateVpnConnectionOutcome EC2Client::CreateVpnConnection(const CreateVpnConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateVpnConnection, this, request);
}

void EC2Client::CreateVpnConnectionAsync(const CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateVpnConnectionAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateVpnConnectionAsyncHelper(const CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpnConnection(request), context);
}

CreateVpnConnectionRouteOutcome EC2Client::CreateVpnConnectionRoute(const CreateVpnConnectionRouteRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateVpnConnectionRoute, this, request);
}

void EC2Client::CreateVpnConnectionRouteAsync(const CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateVpnConnectionRouteAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateVpnConnectionRouteAsyncHelper(const CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpnConnectionRoute(request), context);
}

CreateVpnGatewayOutcome EC2Client::CreateVpnGateway(const CreateVpnGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::CreateVpnGateway, this, request);
}

void EC2Client::CreateVpnGatewayAsync(const CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::CreateVpnGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::CreateVpnGatewayAsyncHelper(const CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpnGateway(request), context);
}

DeleteCustomerGatewayOutcome EC2Client::DeleteCustomerGateway(const DeleteCustomerGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteCustomerGateway, this, request);
}

void EC2Client::DeleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteCustomerGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteCustomerGatewayAsyncHelper(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomerGateway(request), context);
}

DeleteDhcpOptionsOutcome EC2Client::DeleteDhcpOptions(const DeleteDhcpOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteDhcpOptions, this, request);
}

void EC2Client::DeleteDhcpOptionsAsync(const DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteDhcpOptionsAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteDhcpOptionsAsyncHelper(const DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDhcpOptions(request), context);
}

DeleteFlowLogsOutcome EC2Client::DeleteFlowLogs(const DeleteFlowLogsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteFlowLogs, this, request);
}

void EC2Client::DeleteFlowLogsAsync(const DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteFlowLogsAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteFlowLogsAsyncHelper(const DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFlowLogs(request), context);
}

DeleteInternetGatewayOutcome EC2Client::DeleteInternetGateway(const DeleteInternetGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteInternetGateway, this, request);
}

void EC2Client::DeleteInternetGatewayAsync(const DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteInternetGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteInternetGatewayAsyncHelper(const DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInternetGateway(request), context);
}

DeleteKeyPairOutcome EC2Client::DeleteKeyPair(const DeleteKeyPairRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteKeyPair, this, request);
}

void EC2Client::DeleteKeyPairAsync(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteKeyPairAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteKeyPairAsyncHelper(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKeyPair(request), context);
}

DeleteNatGatewayOutcome EC2Client::DeleteNatGateway(const DeleteNatGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteNatGateway, this, request);
}

void EC2Client::DeleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteNatGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteNatGatewayAsyncHelper(const DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNatGateway(request), context);
}

DeleteNetworkAclOutcome EC2Client::DeleteNetworkAcl(const DeleteNetworkAclRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteNetworkAcl, this, request);
}

void EC2Client::DeleteNetworkAclAsync(const DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteNetworkAclAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteNetworkAclAsyncHelper(const DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkAcl(request), context);
}

DeleteNetworkAclEntryOutcome EC2Client::DeleteNetworkAclEntry(const DeleteNetworkAclEntryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteNetworkAclEntry, this, request);
}

void EC2Client::DeleteNetworkAclEntryAsync(const DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteNetworkAclEntryAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteNetworkAclEntryAsyncHelper(const DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkAclEntry(request), context);
}

DeleteNetworkInterfaceOutcome EC2Client::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteNetworkInterface, this, request);
}

void EC2Client::DeleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteNetworkInterfaceAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteNetworkInterfaceAsyncHelper(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkInterface(request), context);
}

DeletePlacementGroupOutcome EC2Client::DeletePlacementGroup(const DeletePlacementGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeletePlacementGroup, this, request);
}

void EC2Client::DeletePlacementGroupAsync(const DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeletePlacementGroupAsyncHelper, this, request, handler, context);
}

void EC2Client::DeletePlacementGroupAsyncHelper(const DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePlacementGroup(request), context);
}

DeleteRouteOutcome EC2Client::DeleteRoute(const DeleteRouteRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteRoute, this, request);
}

void EC2Client::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteRouteAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteRouteAsyncHelper(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoute(request), context);
}

DeleteRouteTableOutcome EC2Client::DeleteRouteTable(const DeleteRouteTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteRouteTable, this, request);
}

void EC2Client::DeleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteRouteTableAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteRouteTableAsyncHelper(const DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRouteTable(request), context);
}

DeleteSecurityGroupOutcome EC2Client::DeleteSecurityGroup(const DeleteSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteSecurityGroup, this, request);
}

void EC2Client::DeleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteSecurityGroupAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteSecurityGroupAsyncHelper(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSecurityGroup(request), context);
}

DeleteSnapshotOutcome EC2Client::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteSnapshot, this, request);
}

void EC2Client::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteSnapshotAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshot(request), context);
}

DeleteSpotDatafeedSubscriptionOutcome EC2Client::DeleteSpotDatafeedSubscription(const DeleteSpotDatafeedSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteSpotDatafeedSubscription, this, request);
}

void EC2Client::DeleteSpotDatafeedSubscriptionAsync(const DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteSpotDatafeedSubscriptionAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteSpotDatafeedSubscriptionAsyncHelper(const DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSpotDatafeedSubscription(request), context);
}

DeleteSubnetOutcome EC2Client::DeleteSubnet(const DeleteSubnetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteSubnet, this, request);
}

void EC2Client::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteSubnetAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteSubnetAsyncHelper(const DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSubnet(request), context);
}

DeleteTagsOutcome EC2Client::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteTags, this, request);
}

void EC2Client::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteTagsAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DeleteVolumeOutcome EC2Client::DeleteVolume(const DeleteVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteVolume, this, request);
}

void EC2Client::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteVolumeAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteVolumeAsyncHelper(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVolume(request), context);
}

DeleteVpcOutcome EC2Client::DeleteVpc(const DeleteVpcRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteVpc, this, request);
}

void EC2Client::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteVpcAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteVpcAsyncHelper(const DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpc(request), context);
}

DeleteVpcEndpointsOutcome EC2Client::DeleteVpcEndpoints(const DeleteVpcEndpointsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteVpcEndpoints, this, request);
}

void EC2Client::DeleteVpcEndpointsAsync(const DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteVpcEndpointsAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteVpcEndpointsAsyncHelper(const DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcEndpoints(request), context);
}

DeleteVpcPeeringConnectionOutcome EC2Client::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteVpcPeeringConnection, this, request);
}

void EC2Client::DeleteVpcPeeringConnectionAsync(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteVpcPeeringConnectionAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteVpcPeeringConnectionAsyncHelper(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcPeeringConnection(request), context);
}

DeleteVpnConnectionOutcome EC2Client::DeleteVpnConnection(const DeleteVpnConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteVpnConnection, this, request);
}

void EC2Client::DeleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteVpnConnectionAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteVpnConnectionAsyncHelper(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpnConnection(request), context);
}

DeleteVpnConnectionRouteOutcome EC2Client::DeleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteVpnConnectionRoute, this, request);
}

void EC2Client::DeleteVpnConnectionRouteAsync(const DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteVpnConnectionRouteAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteVpnConnectionRouteAsyncHelper(const DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpnConnectionRoute(request), context);
}

DeleteVpnGatewayOutcome EC2Client::DeleteVpnGateway(const DeleteVpnGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeleteVpnGateway, this, request);
}

void EC2Client::DeleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeleteVpnGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::DeleteVpnGatewayAsyncHelper(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpnGateway(request), context);
}

DeregisterImageOutcome EC2Client::DeregisterImage(const DeregisterImageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DeregisterImage, this, request);
}

void EC2Client::DeregisterImageAsync(const DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DeregisterImageAsyncHelper, this, request, handler, context);
}

void EC2Client::DeregisterImageAsyncHelper(const DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterImage(request), context);
}

DescribeAccountAttributesOutcome EC2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeAccountAttributes, this, request);
}

void EC2Client::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeAccountAttributesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeAccountAttributesAsyncHelper(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAttributes(request), context);
}

DescribeAddressesOutcome EC2Client::DescribeAddresses(const DescribeAddressesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeAddresses, this, request);
}

void EC2Client::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeAddressesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeAddressesAsyncHelper(const DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAddresses(request), context);
}

DescribeAvailabilityZonesOutcome EC2Client::DescribeAvailabilityZones(const DescribeAvailabilityZonesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeAvailabilityZones, this, request);
}

void EC2Client::DescribeAvailabilityZonesAsync(const DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeAvailabilityZonesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeAvailabilityZonesAsyncHelper(const DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAvailabilityZones(request), context);
}

DescribeBundleTasksOutcome EC2Client::DescribeBundleTasks(const DescribeBundleTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeBundleTasks, this, request);
}

void EC2Client::DescribeBundleTasksAsync(const DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeBundleTasksAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeBundleTasksAsyncHelper(const DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBundleTasks(request), context);
}

DescribeClassicLinkInstancesOutcome EC2Client::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeClassicLinkInstances, this, request);
}

void EC2Client::DescribeClassicLinkInstancesAsync(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeClassicLinkInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeClassicLinkInstancesAsyncHelper(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClassicLinkInstances(request), context);
}

DescribeConversionTasksOutcome EC2Client::DescribeConversionTasks(const DescribeConversionTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeConversionTasks, this, request);
}

void EC2Client::DescribeConversionTasksAsync(const DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeConversionTasksAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeConversionTasksAsyncHelper(const DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConversionTasks(request), context);
}

DescribeCustomerGatewaysOutcome EC2Client::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeCustomerGateways, this, request);
}

void EC2Client::DescribeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeCustomerGatewaysAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeCustomerGatewaysAsyncHelper(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomerGateways(request), context);
}

DescribeDhcpOptionsOutcome EC2Client::DescribeDhcpOptions(const DescribeDhcpOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeDhcpOptions, this, request);
}

void EC2Client::DescribeDhcpOptionsAsync(const DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeDhcpOptionsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeDhcpOptionsAsyncHelper(const DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDhcpOptions(request), context);
}

DescribeExportTasksOutcome EC2Client::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeExportTasks, this, request);
}

void EC2Client::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeExportTasksAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeExportTasksAsyncHelper(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExportTasks(request), context);
}

DescribeFlowLogsOutcome EC2Client::DescribeFlowLogs(const DescribeFlowLogsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeFlowLogs, this, request);
}

void EC2Client::DescribeFlowLogsAsync(const DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeFlowLogsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeFlowLogsAsyncHelper(const DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFlowLogs(request), context);
}

DescribeHostsOutcome EC2Client::DescribeHosts(const DescribeHostsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeHosts, this, request);
}

void EC2Client::DescribeHostsAsync(const DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeHostsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeHostsAsyncHelper(const DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHosts(request), context);
}

DescribeIdFormatOutcome EC2Client::DescribeIdFormat(const DescribeIdFormatRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeIdFormat, this, request);
}

void EC2Client::DescribeIdFormatAsync(const DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeIdFormatAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeIdFormatAsyncHelper(const DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdFormat(request), context);
}

DescribeImageAttributeOutcome EC2Client::DescribeImageAttribute(const DescribeImageAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeImageAttribute, this, request);
}

void EC2Client::DescribeImageAttributeAsync(const DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeImageAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeImageAttributeAsyncHelper(const DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImageAttribute(request), context);
}

DescribeImagesOutcome EC2Client::DescribeImages(const DescribeImagesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeImages, this, request);
}

void EC2Client::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeImagesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeImagesAsyncHelper(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImages(request), context);
}

DescribeImportImageTasksOutcome EC2Client::DescribeImportImageTasks(const DescribeImportImageTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeImportImageTasks, this, request);
}

void EC2Client::DescribeImportImageTasksAsync(const DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeImportImageTasksAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeImportImageTasksAsyncHelper(const DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImportImageTasks(request), context);
}

DescribeImportSnapshotTasksOutcome EC2Client::DescribeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeImportSnapshotTasks, this, request);
}

void EC2Client::DescribeImportSnapshotTasksAsync(const DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeImportSnapshotTasksAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeImportSnapshotTasksAsyncHelper(const DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImportSnapshotTasks(request), context);
}

DescribeInstanceAttributeOutcome EC2Client::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeInstanceAttribute, this, request);
}

void EC2Client::DescribeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeInstanceAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeInstanceAttributeAsyncHelper(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceAttribute(request), context);
}

DescribeInstanceStatusOutcome EC2Client::DescribeInstanceStatus(const DescribeInstanceStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeInstanceStatus, this, request);
}

void EC2Client::DescribeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeInstanceStatusAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeInstanceStatusAsyncHelper(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceStatus(request), context);
}

DescribeInstancesOutcome EC2Client::DescribeInstances(const DescribeInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeInstances, this, request);
}

void EC2Client::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeInstancesAsyncHelper(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstances(request), context);
}

DescribeInternetGatewaysOutcome EC2Client::DescribeInternetGateways(const DescribeInternetGatewaysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeInternetGateways, this, request);
}

void EC2Client::DescribeInternetGatewaysAsync(const DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeInternetGatewaysAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeInternetGatewaysAsyncHelper(const DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInternetGateways(request), context);
}

DescribeKeyPairsOutcome EC2Client::DescribeKeyPairs(const DescribeKeyPairsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeKeyPairs, this, request);
}

void EC2Client::DescribeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeKeyPairsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeKeyPairsAsyncHelper(const DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeKeyPairs(request), context);
}

DescribeMovingAddressesOutcome EC2Client::DescribeMovingAddresses(const DescribeMovingAddressesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeMovingAddresses, this, request);
}

void EC2Client::DescribeMovingAddressesAsync(const DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeMovingAddressesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeMovingAddressesAsyncHelper(const DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMovingAddresses(request), context);
}

DescribeNatGatewaysOutcome EC2Client::DescribeNatGateways(const DescribeNatGatewaysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeNatGateways, this, request);
}

void EC2Client::DescribeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeNatGatewaysAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeNatGatewaysAsyncHelper(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNatGateways(request), context);
}

DescribeNetworkAclsOutcome EC2Client::DescribeNetworkAcls(const DescribeNetworkAclsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeNetworkAcls, this, request);
}

void EC2Client::DescribeNetworkAclsAsync(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeNetworkAclsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeNetworkAclsAsyncHelper(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNetworkAcls(request), context);
}

DescribeNetworkInterfaceAttributeOutcome EC2Client::DescribeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeNetworkInterfaceAttribute, this, request);
}

void EC2Client::DescribeNetworkInterfaceAttributeAsync(const DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeNetworkInterfaceAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeNetworkInterfaceAttributeAsyncHelper(const DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNetworkInterfaceAttribute(request), context);
}

DescribeNetworkInterfacesOutcome EC2Client::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeNetworkInterfaces, this, request);
}

void EC2Client::DescribeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeNetworkInterfacesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeNetworkInterfacesAsyncHelper(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNetworkInterfaces(request), context);
}

DescribePlacementGroupsOutcome EC2Client::DescribePlacementGroups(const DescribePlacementGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribePlacementGroups, this, request);
}

void EC2Client::DescribePlacementGroupsAsync(const DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribePlacementGroupsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribePlacementGroupsAsyncHelper(const DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePlacementGroups(request), context);
}

DescribePrefixListsOutcome EC2Client::DescribePrefixLists(const DescribePrefixListsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribePrefixLists, this, request);
}

void EC2Client::DescribePrefixListsAsync(const DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribePrefixListsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribePrefixListsAsyncHelper(const DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePrefixLists(request), context);
}

DescribeRegionsOutcome EC2Client::DescribeRegions(const DescribeRegionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeRegions, this, request);
}

void EC2Client::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeRegionsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeRegionsAsyncHelper(const DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRegions(request), context);
}

DescribeReservedInstancesOutcome EC2Client::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeReservedInstances, this, request);
}

void EC2Client::DescribeReservedInstancesAsync(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeReservedInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeReservedInstancesAsyncHelper(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstances(request), context);
}

DescribeReservedInstancesListingsOutcome EC2Client::DescribeReservedInstancesListings(const DescribeReservedInstancesListingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeReservedInstancesListings, this, request);
}

void EC2Client::DescribeReservedInstancesListingsAsync(const DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeReservedInstancesListingsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeReservedInstancesListingsAsyncHelper(const DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstancesListings(request), context);
}

DescribeReservedInstancesModificationsOutcome EC2Client::DescribeReservedInstancesModifications(const DescribeReservedInstancesModificationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeReservedInstancesModifications, this, request);
}

void EC2Client::DescribeReservedInstancesModificationsAsync(const DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeReservedInstancesModificationsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeReservedInstancesModificationsAsyncHelper(const DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstancesModifications(request), context);
}

DescribeReservedInstancesOfferingsOutcome EC2Client::DescribeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeReservedInstancesOfferings, this, request);
}

void EC2Client::DescribeReservedInstancesOfferingsAsync(const DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeReservedInstancesOfferingsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeReservedInstancesOfferingsAsyncHelper(const DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservedInstancesOfferings(request), context);
}

DescribeRouteTablesOutcome EC2Client::DescribeRouteTables(const DescribeRouteTablesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeRouteTables, this, request);
}

void EC2Client::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeRouteTablesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeRouteTablesAsyncHelper(const DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRouteTables(request), context);
}

DescribeScheduledInstanceAvailabilityOutcome EC2Client::DescribeScheduledInstanceAvailability(const DescribeScheduledInstanceAvailabilityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeScheduledInstanceAvailability, this, request);
}

void EC2Client::DescribeScheduledInstanceAvailabilityAsync(const DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeScheduledInstanceAvailabilityAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeScheduledInstanceAvailabilityAsyncHelper(const DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScheduledInstanceAvailability(request), context);
}

DescribeScheduledInstancesOutcome EC2Client::DescribeScheduledInstances(const DescribeScheduledInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeScheduledInstances, this, request);
}

void EC2Client::DescribeScheduledInstancesAsync(const DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeScheduledInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeScheduledInstancesAsyncHelper(const DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScheduledInstances(request), context);
}

DescribeSecurityGroupReferencesOutcome EC2Client::DescribeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSecurityGroupReferences, this, request);
}

void EC2Client::DescribeSecurityGroupReferencesAsync(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSecurityGroupReferencesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSecurityGroupReferencesAsyncHelper(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityGroupReferences(request), context);
}

DescribeSecurityGroupsOutcome EC2Client::DescribeSecurityGroups(const DescribeSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSecurityGroups, this, request);
}

void EC2Client::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSecurityGroupsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSecurityGroupsAsyncHelper(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityGroups(request), context);
}

DescribeSnapshotAttributeOutcome EC2Client::DescribeSnapshotAttribute(const DescribeSnapshotAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSnapshotAttribute, this, request);
}

void EC2Client::DescribeSnapshotAttributeAsync(const DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSnapshotAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSnapshotAttributeAsyncHelper(const DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshotAttribute(request), context);
}

DescribeSnapshotsOutcome EC2Client::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSnapshots, this, request);
}

void EC2Client::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSnapshotsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSnapshotsAsyncHelper(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshots(request), context);
}

DescribeSpotDatafeedSubscriptionOutcome EC2Client::DescribeSpotDatafeedSubscription(const DescribeSpotDatafeedSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSpotDatafeedSubscription, this, request);
}

void EC2Client::DescribeSpotDatafeedSubscriptionAsync(const DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSpotDatafeedSubscriptionAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSpotDatafeedSubscriptionAsyncHelper(const DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotDatafeedSubscription(request), context);
}

DescribeSpotFleetInstancesOutcome EC2Client::DescribeSpotFleetInstances(const DescribeSpotFleetInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSpotFleetInstances, this, request);
}

void EC2Client::DescribeSpotFleetInstancesAsync(const DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSpotFleetInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSpotFleetInstancesAsyncHelper(const DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotFleetInstances(request), context);
}

DescribeSpotFleetRequestHistoryOutcome EC2Client::DescribeSpotFleetRequestHistory(const DescribeSpotFleetRequestHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSpotFleetRequestHistory, this, request);
}

void EC2Client::DescribeSpotFleetRequestHistoryAsync(const DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSpotFleetRequestHistoryAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSpotFleetRequestHistoryAsyncHelper(const DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotFleetRequestHistory(request), context);
}

DescribeSpotFleetRequestsOutcome EC2Client::DescribeSpotFleetRequests(const DescribeSpotFleetRequestsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSpotFleetRequests, this, request);
}

void EC2Client::DescribeSpotFleetRequestsAsync(const DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSpotFleetRequestsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSpotFleetRequestsAsyncHelper(const DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotFleetRequests(request), context);
}

DescribeSpotInstanceRequestsOutcome EC2Client::DescribeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSpotInstanceRequests, this, request);
}

void EC2Client::DescribeSpotInstanceRequestsAsync(const DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSpotInstanceRequestsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSpotInstanceRequestsAsyncHelper(const DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotInstanceRequests(request), context);
}

DescribeSpotPriceHistoryOutcome EC2Client::DescribeSpotPriceHistory(const DescribeSpotPriceHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSpotPriceHistory, this, request);
}

void EC2Client::DescribeSpotPriceHistoryAsync(const DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSpotPriceHistoryAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSpotPriceHistoryAsyncHelper(const DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpotPriceHistory(request), context);
}

DescribeStaleSecurityGroupsOutcome EC2Client::DescribeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeStaleSecurityGroups, this, request);
}

void EC2Client::DescribeStaleSecurityGroupsAsync(const DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeStaleSecurityGroupsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeStaleSecurityGroupsAsyncHelper(const DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStaleSecurityGroups(request), context);
}

DescribeSubnetsOutcome EC2Client::DescribeSubnets(const DescribeSubnetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeSubnets, this, request);
}

void EC2Client::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeSubnetsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeSubnetsAsyncHelper(const DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSubnets(request), context);
}

DescribeTagsOutcome EC2Client::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeTags, this, request);
}

void EC2Client::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeTagsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DescribeVolumeAttributeOutcome EC2Client::DescribeVolumeAttribute(const DescribeVolumeAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVolumeAttribute, this, request);
}

void EC2Client::DescribeVolumeAttributeAsync(const DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVolumeAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVolumeAttributeAsyncHelper(const DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumeAttribute(request), context);
}

DescribeVolumeStatusOutcome EC2Client::DescribeVolumeStatus(const DescribeVolumeStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVolumeStatus, this, request);
}

void EC2Client::DescribeVolumeStatusAsync(const DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVolumeStatusAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVolumeStatusAsyncHelper(const DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumeStatus(request), context);
}

DescribeVolumesOutcome EC2Client::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVolumes, this, request);
}

void EC2Client::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVolumesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVolumesAsyncHelper(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumes(request), context);
}

DescribeVpcAttributeOutcome EC2Client::DescribeVpcAttribute(const DescribeVpcAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpcAttribute, this, request);
}

void EC2Client::DescribeVpcAttributeAsync(const DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpcAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpcAttributeAsyncHelper(const DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcAttribute(request), context);
}

DescribeVpcClassicLinkOutcome EC2Client::DescribeVpcClassicLink(const DescribeVpcClassicLinkRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpcClassicLink, this, request);
}

void EC2Client::DescribeVpcClassicLinkAsync(const DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpcClassicLinkAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpcClassicLinkAsyncHelper(const DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcClassicLink(request), context);
}

DescribeVpcClassicLinkDnsSupportOutcome EC2Client::DescribeVpcClassicLinkDnsSupport(const DescribeVpcClassicLinkDnsSupportRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpcClassicLinkDnsSupport, this, request);
}

void EC2Client::DescribeVpcClassicLinkDnsSupportAsync(const DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpcClassicLinkDnsSupportAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpcClassicLinkDnsSupportAsyncHelper(const DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcClassicLinkDnsSupport(request), context);
}

DescribeVpcEndpointServicesOutcome EC2Client::DescribeVpcEndpointServices(const DescribeVpcEndpointServicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpcEndpointServices, this, request);
}

void EC2Client::DescribeVpcEndpointServicesAsync(const DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpcEndpointServicesAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpcEndpointServicesAsyncHelper(const DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpointServices(request), context);
}

DescribeVpcEndpointsOutcome EC2Client::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpcEndpoints, this, request);
}

void EC2Client::DescribeVpcEndpointsAsync(const DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpcEndpointsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpcEndpointsAsyncHelper(const DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcEndpoints(request), context);
}

DescribeVpcPeeringConnectionsOutcome EC2Client::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpcPeeringConnections, this, request);
}

void EC2Client::DescribeVpcPeeringConnectionsAsync(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpcPeeringConnectionsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpcPeeringConnectionsAsyncHelper(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcPeeringConnections(request), context);
}

DescribeVpcsOutcome EC2Client::DescribeVpcs(const DescribeVpcsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpcs, this, request);
}

void EC2Client::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpcsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpcsAsyncHelper(const DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcs(request), context);
}

DescribeVpnConnectionsOutcome EC2Client::DescribeVpnConnections(const DescribeVpnConnectionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpnConnections, this, request);
}

void EC2Client::DescribeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpnConnectionsAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpnConnectionsAsyncHelper(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpnConnections(request), context);
}

DescribeVpnGatewaysOutcome EC2Client::DescribeVpnGateways(const DescribeVpnGatewaysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DescribeVpnGateways, this, request);
}

void EC2Client::DescribeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DescribeVpnGatewaysAsyncHelper, this, request, handler, context);
}

void EC2Client::DescribeVpnGatewaysAsyncHelper(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpnGateways(request), context);
}

DetachClassicLinkVpcOutcome EC2Client::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DetachClassicLinkVpc, this, request);
}

void EC2Client::DetachClassicLinkVpcAsync(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DetachClassicLinkVpcAsyncHelper, this, request, handler, context);
}

void EC2Client::DetachClassicLinkVpcAsyncHelper(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachClassicLinkVpc(request), context);
}

DetachInternetGatewayOutcome EC2Client::DetachInternetGateway(const DetachInternetGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DetachInternetGateway, this, request);
}

void EC2Client::DetachInternetGatewayAsync(const DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DetachInternetGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::DetachInternetGatewayAsyncHelper(const DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachInternetGateway(request), context);
}

DetachNetworkInterfaceOutcome EC2Client::DetachNetworkInterface(const DetachNetworkInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DetachNetworkInterface, this, request);
}

void EC2Client::DetachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DetachNetworkInterfaceAsyncHelper, this, request, handler, context);
}

void EC2Client::DetachNetworkInterfaceAsyncHelper(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachNetworkInterface(request), context);
}

DetachVolumeOutcome EC2Client::DetachVolume(const DetachVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DetachVolume, this, request);
}

void EC2Client::DetachVolumeAsync(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DetachVolumeAsyncHelper, this, request, handler, context);
}

void EC2Client::DetachVolumeAsyncHelper(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachVolume(request), context);
}

DetachVpnGatewayOutcome EC2Client::DetachVpnGateway(const DetachVpnGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DetachVpnGateway, this, request);
}

void EC2Client::DetachVpnGatewayAsync(const DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DetachVpnGatewayAsyncHelper, this, request, handler, context);
}

void EC2Client::DetachVpnGatewayAsyncHelper(const DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachVpnGateway(request), context);
}

DisableVgwRoutePropagationOutcome EC2Client::DisableVgwRoutePropagation(const DisableVgwRoutePropagationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DisableVgwRoutePropagation, this, request);
}

void EC2Client::DisableVgwRoutePropagationAsync(const DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DisableVgwRoutePropagationAsyncHelper, this, request, handler, context);
}

void EC2Client::DisableVgwRoutePropagationAsyncHelper(const DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableVgwRoutePropagation(request), context);
}

DisableVpcClassicLinkOutcome EC2Client::DisableVpcClassicLink(const DisableVpcClassicLinkRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DisableVpcClassicLink, this, request);
}

void EC2Client::DisableVpcClassicLinkAsync(const DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DisableVpcClassicLinkAsyncHelper, this, request, handler, context);
}

void EC2Client::DisableVpcClassicLinkAsyncHelper(const DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableVpcClassicLink(request), context);
}

DisableVpcClassicLinkDnsSupportOutcome EC2Client::DisableVpcClassicLinkDnsSupport(const DisableVpcClassicLinkDnsSupportRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DisableVpcClassicLinkDnsSupport, this, request);
}

void EC2Client::DisableVpcClassicLinkDnsSupportAsync(const DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DisableVpcClassicLinkDnsSupportAsyncHelper, this, request, handler, context);
}

void EC2Client::DisableVpcClassicLinkDnsSupportAsyncHelper(const DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableVpcClassicLinkDnsSupport(request), context);
}

DisassociateAddressOutcome EC2Client::DisassociateAddress(const DisassociateAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DisassociateAddress, this, request);
}

void EC2Client::DisassociateAddressAsync(const DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DisassociateAddressAsyncHelper, this, request, handler, context);
}

void EC2Client::DisassociateAddressAsyncHelper(const DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateAddress(request), context);
}

DisassociateRouteTableOutcome EC2Client::DisassociateRouteTable(const DisassociateRouteTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::DisassociateRouteTable, this, request);
}

void EC2Client::DisassociateRouteTableAsync(const DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::DisassociateRouteTableAsyncHelper, this, request, handler, context);
}

void EC2Client::DisassociateRouteTableAsyncHelper(const DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateRouteTable(request), context);
}

EnableVgwRoutePropagationOutcome EC2Client::EnableVgwRoutePropagation(const EnableVgwRoutePropagationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::EnableVgwRoutePropagation, this, request);
}

void EC2Client::EnableVgwRoutePropagationAsync(const EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::EnableVgwRoutePropagationAsyncHelper, this, request, handler, context);
}

void EC2Client::EnableVgwRoutePropagationAsyncHelper(const EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVgwRoutePropagation(request), context);
}

EnableVolumeIOOutcome EC2Client::EnableVolumeIO(const EnableVolumeIORequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::EnableVolumeIO, this, request);
}

void EC2Client::EnableVolumeIOAsync(const EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::EnableVolumeIOAsyncHelper, this, request, handler, context);
}

void EC2Client::EnableVolumeIOAsyncHelper(const EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVolumeIO(request), context);
}

EnableVpcClassicLinkOutcome EC2Client::EnableVpcClassicLink(const EnableVpcClassicLinkRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::EnableVpcClassicLink, this, request);
}

void EC2Client::EnableVpcClassicLinkAsync(const EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::EnableVpcClassicLinkAsyncHelper, this, request, handler, context);
}

void EC2Client::EnableVpcClassicLinkAsyncHelper(const EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVpcClassicLink(request), context);
}

EnableVpcClassicLinkDnsSupportOutcome EC2Client::EnableVpcClassicLinkDnsSupport(const EnableVpcClassicLinkDnsSupportRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::EnableVpcClassicLinkDnsSupport, this, request);
}

void EC2Client::EnableVpcClassicLinkDnsSupportAsync(const EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::EnableVpcClassicLinkDnsSupportAsyncHelper, this, request, handler, context);
}

void EC2Client::EnableVpcClassicLinkDnsSupportAsyncHelper(const EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableVpcClassicLinkDnsSupport(request), context);
}

GetConsoleOutputOutcome EC2Client::GetConsoleOutput(const GetConsoleOutputRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::GetConsoleOutput, this, request);
}

void EC2Client::GetConsoleOutputAsync(const GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::GetConsoleOutputAsyncHelper, this, request, handler, context);
}

void EC2Client::GetConsoleOutputAsyncHelper(const GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConsoleOutput(request), context);
}

GetConsoleScreenshotOutcome EC2Client::GetConsoleScreenshot(const GetConsoleScreenshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::GetConsoleScreenshot, this, request);
}

void EC2Client::GetConsoleScreenshotAsync(const GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::GetConsoleScreenshotAsyncHelper, this, request, handler, context);
}

void EC2Client::GetConsoleScreenshotAsyncHelper(const GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConsoleScreenshot(request), context);
}

GetPasswordDataOutcome EC2Client::GetPasswordData(const GetPasswordDataRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::GetPasswordData, this, request);
}

void EC2Client::GetPasswordDataAsync(const GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::GetPasswordDataAsyncHelper, this, request, handler, context);
}

void EC2Client::GetPasswordDataAsyncHelper(const GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPasswordData(request), context);
}

ImportImageOutcome EC2Client::ImportImage(const ImportImageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ImportImage, this, request);
}

void EC2Client::ImportImageAsync(const ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ImportImageAsyncHelper, this, request, handler, context);
}

void EC2Client::ImportImageAsyncHelper(const ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportImage(request), context);
}

ImportInstanceOutcome EC2Client::ImportInstance(const ImportInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ImportInstance, this, request);
}

void EC2Client::ImportInstanceAsync(const ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ImportInstanceAsyncHelper, this, request, handler, context);
}

void EC2Client::ImportInstanceAsyncHelper(const ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportInstance(request), context);
}

ImportKeyPairOutcome EC2Client::ImportKeyPair(const ImportKeyPairRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ImportKeyPair, this, request);
}

void EC2Client::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ImportKeyPairAsyncHelper, this, request, handler, context);
}

void EC2Client::ImportKeyPairAsyncHelper(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportKeyPair(request), context);
}

ImportSnapshotOutcome EC2Client::ImportSnapshot(const ImportSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ImportSnapshot, this, request);
}

void EC2Client::ImportSnapshotAsync(const ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ImportSnapshotAsyncHelper, this, request, handler, context);
}

void EC2Client::ImportSnapshotAsyncHelper(const ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportSnapshot(request), context);
}

ImportVolumeOutcome EC2Client::ImportVolume(const ImportVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ImportVolume, this, request);
}

void EC2Client::ImportVolumeAsync(const ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ImportVolumeAsyncHelper, this, request, handler, context);
}

void EC2Client::ImportVolumeAsyncHelper(const ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportVolume(request), context);
}

ModifyHostsOutcome EC2Client::ModifyHosts(const ModifyHostsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyHosts, this, request);
}

void EC2Client::ModifyHostsAsync(const ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyHostsAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyHostsAsyncHelper(const ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyHosts(request), context);
}

ModifyIdFormatOutcome EC2Client::ModifyIdFormat(const ModifyIdFormatRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyIdFormat, this, request);
}

void EC2Client::ModifyIdFormatAsync(const ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyIdFormatAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyIdFormatAsyncHelper(const ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyIdFormat(request), context);
}

ModifyImageAttributeOutcome EC2Client::ModifyImageAttribute(const ModifyImageAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyImageAttribute, this, request);
}

void EC2Client::ModifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyImageAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyImageAttributeAsyncHelper(const ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyImageAttribute(request), context);
}

ModifyInstanceAttributeOutcome EC2Client::ModifyInstanceAttribute(const ModifyInstanceAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyInstanceAttribute, this, request);
}

void EC2Client::ModifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyInstanceAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyInstanceAttributeAsyncHelper(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceAttribute(request), context);
}

ModifyInstancePlacementOutcome EC2Client::ModifyInstancePlacement(const ModifyInstancePlacementRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyInstancePlacement, this, request);
}

void EC2Client::ModifyInstancePlacementAsync(const ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyInstancePlacementAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyInstancePlacementAsyncHelper(const ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstancePlacement(request), context);
}

ModifyNetworkInterfaceAttributeOutcome EC2Client::ModifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyNetworkInterfaceAttribute, this, request);
}

void EC2Client::ModifyNetworkInterfaceAttributeAsync(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyNetworkInterfaceAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyNetworkInterfaceAttributeAsyncHelper(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyNetworkInterfaceAttribute(request), context);
}

ModifyReservedInstancesOutcome EC2Client::ModifyReservedInstances(const ModifyReservedInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyReservedInstances, this, request);
}

void EC2Client::ModifyReservedInstancesAsync(const ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyReservedInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyReservedInstancesAsyncHelper(const ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyReservedInstances(request), context);
}

ModifySnapshotAttributeOutcome EC2Client::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifySnapshotAttribute, this, request);
}

void EC2Client::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifySnapshotAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifySnapshotAttributeAsyncHelper(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifySnapshotAttribute(request), context);
}

ModifySpotFleetRequestOutcome EC2Client::ModifySpotFleetRequest(const ModifySpotFleetRequestRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifySpotFleetRequest, this, request);
}

void EC2Client::ModifySpotFleetRequestAsync(const ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifySpotFleetRequestAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifySpotFleetRequestAsyncHelper(const ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifySpotFleetRequest(request), context);
}

ModifySubnetAttributeOutcome EC2Client::ModifySubnetAttribute(const ModifySubnetAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifySubnetAttribute, this, request);
}

void EC2Client::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifySubnetAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifySubnetAttributeAsyncHelper(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifySubnetAttribute(request), context);
}

ModifyVolumeAttributeOutcome EC2Client::ModifyVolumeAttribute(const ModifyVolumeAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyVolumeAttribute, this, request);
}

void EC2Client::ModifyVolumeAttributeAsync(const ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyVolumeAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyVolumeAttributeAsyncHelper(const ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVolumeAttribute(request), context);
}

ModifyVpcAttributeOutcome EC2Client::ModifyVpcAttribute(const ModifyVpcAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyVpcAttribute, this, request);
}

void EC2Client::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyVpcAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyVpcAttributeAsyncHelper(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcAttribute(request), context);
}

ModifyVpcEndpointOutcome EC2Client::ModifyVpcEndpoint(const ModifyVpcEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyVpcEndpoint, this, request);
}

void EC2Client::ModifyVpcEndpointAsync(const ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyVpcEndpointAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyVpcEndpointAsyncHelper(const ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcEndpoint(request), context);
}

ModifyVpcPeeringConnectionOptionsOutcome EC2Client::ModifyVpcPeeringConnectionOptions(const ModifyVpcPeeringConnectionOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ModifyVpcPeeringConnectionOptions, this, request);
}

void EC2Client::ModifyVpcPeeringConnectionOptionsAsync(const ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ModifyVpcPeeringConnectionOptionsAsyncHelper, this, request, handler, context);
}

void EC2Client::ModifyVpcPeeringConnectionOptionsAsyncHelper(const ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyVpcPeeringConnectionOptions(request), context);
}

MonitorInstancesOutcome EC2Client::MonitorInstances(const MonitorInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::MonitorInstances, this, request);
}

void EC2Client::MonitorInstancesAsync(const MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::MonitorInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::MonitorInstancesAsyncHelper(const MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MonitorInstances(request), context);
}

MoveAddressToVpcOutcome EC2Client::MoveAddressToVpc(const MoveAddressToVpcRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::MoveAddressToVpc, this, request);
}

void EC2Client::MoveAddressToVpcAsync(const MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::MoveAddressToVpcAsyncHelper, this, request, handler, context);
}

void EC2Client::MoveAddressToVpcAsyncHelper(const MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MoveAddressToVpc(request), context);
}

PurchaseReservedInstancesOfferingOutcome EC2Client::PurchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::PurchaseReservedInstancesOffering, this, request);
}

void EC2Client::PurchaseReservedInstancesOfferingAsync(const PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::PurchaseReservedInstancesOfferingAsyncHelper, this, request, handler, context);
}

void EC2Client::PurchaseReservedInstancesOfferingAsyncHelper(const PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseReservedInstancesOffering(request), context);
}

PurchaseScheduledInstancesOutcome EC2Client::PurchaseScheduledInstances(const PurchaseScheduledInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::PurchaseScheduledInstances, this, request);
}

void EC2Client::PurchaseScheduledInstancesAsync(const PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::PurchaseScheduledInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::PurchaseScheduledInstancesAsyncHelper(const PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseScheduledInstances(request), context);
}

RebootInstancesOutcome EC2Client::RebootInstances(const RebootInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RebootInstances, this, request);
}

void EC2Client::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RebootInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::RebootInstancesAsyncHelper(const RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootInstances(request), context);
}

RegisterImageOutcome EC2Client::RegisterImage(const RegisterImageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RegisterImage, this, request);
}

void EC2Client::RegisterImageAsync(const RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RegisterImageAsyncHelper, this, request, handler, context);
}

void EC2Client::RegisterImageAsyncHelper(const RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterImage(request), context);
}

RejectVpcPeeringConnectionOutcome EC2Client::RejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RejectVpcPeeringConnection, this, request);
}

void EC2Client::RejectVpcPeeringConnectionAsync(const RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RejectVpcPeeringConnectionAsyncHelper, this, request, handler, context);
}

void EC2Client::RejectVpcPeeringConnectionAsyncHelper(const RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectVpcPeeringConnection(request), context);
}

ReleaseAddressOutcome EC2Client::ReleaseAddress(const ReleaseAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ReleaseAddress, this, request);
}

void EC2Client::ReleaseAddressAsync(const ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ReleaseAddressAsyncHelper, this, request, handler, context);
}

void EC2Client::ReleaseAddressAsyncHelper(const ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReleaseAddress(request), context);
}

ReleaseHostsOutcome EC2Client::ReleaseHosts(const ReleaseHostsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ReleaseHosts, this, request);
}

void EC2Client::ReleaseHostsAsync(const ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ReleaseHostsAsyncHelper, this, request, handler, context);
}

void EC2Client::ReleaseHostsAsyncHelper(const ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReleaseHosts(request), context);
}

ReplaceNetworkAclAssociationOutcome EC2Client::ReplaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ReplaceNetworkAclAssociation, this, request);
}

void EC2Client::ReplaceNetworkAclAssociationAsync(const ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ReplaceNetworkAclAssociationAsyncHelper, this, request, handler, context);
}

void EC2Client::ReplaceNetworkAclAssociationAsyncHelper(const ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceNetworkAclAssociation(request), context);
}

ReplaceNetworkAclEntryOutcome EC2Client::ReplaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ReplaceNetworkAclEntry, this, request);
}

void EC2Client::ReplaceNetworkAclEntryAsync(const ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ReplaceNetworkAclEntryAsyncHelper, this, request, handler, context);
}

void EC2Client::ReplaceNetworkAclEntryAsyncHelper(const ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceNetworkAclEntry(request), context);
}

ReplaceRouteOutcome EC2Client::ReplaceRoute(const ReplaceRouteRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ReplaceRoute, this, request);
}

void EC2Client::ReplaceRouteAsync(const ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ReplaceRouteAsyncHelper, this, request, handler, context);
}

void EC2Client::ReplaceRouteAsyncHelper(const ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceRoute(request), context);
}

ReplaceRouteTableAssociationOutcome EC2Client::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ReplaceRouteTableAssociation, this, request);
}

void EC2Client::ReplaceRouteTableAssociationAsync(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ReplaceRouteTableAssociationAsyncHelper, this, request, handler, context);
}

void EC2Client::ReplaceRouteTableAssociationAsyncHelper(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceRouteTableAssociation(request), context);
}

ReportInstanceStatusOutcome EC2Client::ReportInstanceStatus(const ReportInstanceStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ReportInstanceStatus, this, request);
}

void EC2Client::ReportInstanceStatusAsync(const ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ReportInstanceStatusAsyncHelper, this, request, handler, context);
}

void EC2Client::ReportInstanceStatusAsyncHelper(const ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReportInstanceStatus(request), context);
}

RequestSpotFleetOutcome EC2Client::RequestSpotFleet(const RequestSpotFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RequestSpotFleet, this, request);
}

void EC2Client::RequestSpotFleetAsync(const RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RequestSpotFleetAsyncHelper, this, request, handler, context);
}

void EC2Client::RequestSpotFleetAsyncHelper(const RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestSpotFleet(request), context);
}

RequestSpotInstancesOutcome EC2Client::RequestSpotInstances(const RequestSpotInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RequestSpotInstances, this, request);
}

void EC2Client::RequestSpotInstancesAsync(const RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RequestSpotInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::RequestSpotInstancesAsyncHelper(const RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestSpotInstances(request), context);
}

ResetImageAttributeOutcome EC2Client::ResetImageAttribute(const ResetImageAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ResetImageAttribute, this, request);
}

void EC2Client::ResetImageAttributeAsync(const ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ResetImageAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ResetImageAttributeAsyncHelper(const ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetImageAttribute(request), context);
}

ResetInstanceAttributeOutcome EC2Client::ResetInstanceAttribute(const ResetInstanceAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ResetInstanceAttribute, this, request);
}

void EC2Client::ResetInstanceAttributeAsync(const ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ResetInstanceAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ResetInstanceAttributeAsyncHelper(const ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetInstanceAttribute(request), context);
}

ResetNetworkInterfaceAttributeOutcome EC2Client::ResetNetworkInterfaceAttribute(const ResetNetworkInterfaceAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ResetNetworkInterfaceAttribute, this, request);
}

void EC2Client::ResetNetworkInterfaceAttributeAsync(const ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ResetNetworkInterfaceAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ResetNetworkInterfaceAttributeAsyncHelper(const ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetNetworkInterfaceAttribute(request), context);
}

ResetSnapshotAttributeOutcome EC2Client::ResetSnapshotAttribute(const ResetSnapshotAttributeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::ResetSnapshotAttribute, this, request);
}

void EC2Client::ResetSnapshotAttributeAsync(const ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::ResetSnapshotAttributeAsyncHelper, this, request, handler, context);
}

void EC2Client::ResetSnapshotAttributeAsyncHelper(const ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetSnapshotAttribute(request), context);
}

RestoreAddressToClassicOutcome EC2Client::RestoreAddressToClassic(const RestoreAddressToClassicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RestoreAddressToClassic, this, request);
}

void EC2Client::RestoreAddressToClassicAsync(const RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RestoreAddressToClassicAsyncHelper, this, request, handler, context);
}

void EC2Client::RestoreAddressToClassicAsyncHelper(const RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreAddressToClassic(request), context);
}

RevokeSecurityGroupEgressOutcome EC2Client::RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RevokeSecurityGroupEgress, this, request);
}

void EC2Client::RevokeSecurityGroupEgressAsync(const RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RevokeSecurityGroupEgressAsyncHelper, this, request, handler, context);
}

void EC2Client::RevokeSecurityGroupEgressAsyncHelper(const RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeSecurityGroupEgress(request), context);
}

RevokeSecurityGroupIngressOutcome EC2Client::RevokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RevokeSecurityGroupIngress, this, request);
}

void EC2Client::RevokeSecurityGroupIngressAsync(const RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RevokeSecurityGroupIngressAsyncHelper, this, request, handler, context);
}

void EC2Client::RevokeSecurityGroupIngressAsyncHelper(const RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeSecurityGroupIngress(request), context);
}

RunInstancesOutcome EC2Client::RunInstances(const RunInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RunInstances, this, request);
}

void EC2Client::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RunInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::RunInstancesAsyncHelper(const RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunInstances(request), context);
}

RunScheduledInstancesOutcome EC2Client::RunScheduledInstances(const RunScheduledInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::RunScheduledInstances, this, request);
}

void EC2Client::RunScheduledInstancesAsync(const RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::RunScheduledInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::RunScheduledInstancesAsyncHelper(const RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunScheduledInstances(request), context);
}

StartInstancesOutcome EC2Client::StartInstances(const StartInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::StartInstances, this, request);
}

void EC2Client::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::StartInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::StartInstancesAsyncHelper(const StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartInstances(request), context);
}

StopInstancesOutcome EC2Client::StopInstances(const StopInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::StopInstances, this, request);
}

void EC2Client::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::StopInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::StopInstancesAsyncHelper(const StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopInstances(request), context);
}

TerminateInstancesOutcome EC2Client::TerminateInstances(const TerminateInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::TerminateInstances, this, request);
}

void EC2Client::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::TerminateInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::TerminateInstancesAsyncHelper(const TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateInstances(request), context);
}

UnassignPrivateIpAddressesOutcome EC2Client::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::UnassignPrivateIpAddresses, this, request);
}

void EC2Client::UnassignPrivateIpAddressesAsync(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::UnassignPrivateIpAddressesAsyncHelper, this, request, handler, context);
}

void EC2Client::UnassignPrivateIpAddressesAsyncHelper(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnassignPrivateIpAddresses(request), context);
}

UnmonitorInstancesOutcome EC2Client::UnmonitorInstances(const UnmonitorInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &EC2Client::UnmonitorInstances, this, request);
}

void EC2Client::UnmonitorInstancesAsync(const UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EC2Client::UnmonitorInstancesAsyncHelper, this, request, handler, context);
}

void EC2Client::UnmonitorInstancesAsyncHelper(const UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnmonitorInstances(request), context);
}

