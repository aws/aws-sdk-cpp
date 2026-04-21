/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/EC2EndpointProvider.h>
#include <aws/ec2/EC2ErrorMarshaller.h>
#include <aws/ec2/model/AcceptAddressTransferRequest.h>
#include <aws/ec2/model/AcceptCapacityReservationBillingOwnershipRequest.h>
#include <aws/ec2/model/AcceptReservedInstancesExchangeQuoteRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayClientVpnAttachmentRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayMulticastDomainAssociationsRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/AcceptVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/AcceptVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/AdvertiseByoipCidrRequest.h>
#include <aws/ec2/model/AllocateAddressRequest.h>
#include <aws/ec2/model/AllocateHostsRequest.h>
#include <aws/ec2/model/AllocateIpamPoolCidrRequest.h>
#include <aws/ec2/model/ApplySecurityGroupsToClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/AssignIpv6AddressesRequest.h>
#include <aws/ec2/model/AssignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/AssignPrivateNatGatewayAddressRequest.h>
#include <aws/ec2/model/AssociateAddressRequest.h>
#include <aws/ec2/model/AssociateCapacityReservationBillingOwnerRequest.h>
#include <aws/ec2/model/AssociateClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/AssociateDhcpOptionsRequest.h>
#include <aws/ec2/model/AssociateEnclaveCertificateIamRoleRequest.h>
#include <aws/ec2/model/AssociateIamInstanceProfileRequest.h>
#include <aws/ec2/model/AssociateInstanceEventWindowRequest.h>
#include <aws/ec2/model/AssociateIpamByoasnRequest.h>
#include <aws/ec2/model/AssociateIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/AssociateNatGatewayAddressRequest.h>
#include <aws/ec2/model/AssociateRouteServerRequest.h>
#include <aws/ec2/model/AssociateRouteTableRequest.h>
#include <aws/ec2/model/AssociateSecurityGroupVpcRequest.h>
#include <aws/ec2/model/AssociateSubnetCidrBlockRequest.h>
#include <aws/ec2/model/AssociateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/AssociateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/AssociateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/AssociateTrunkInterfaceRequest.h>
#include <aws/ec2/model/AssociateVpcCidrBlockRequest.h>
#include <aws/ec2/model/AttachClassicLinkVpcRequest.h>
#include <aws/ec2/model/AttachInternetGatewayRequest.h>
#include <aws/ec2/model/AttachNetworkInterfaceRequest.h>
#include <aws/ec2/model/AttachVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/AttachVolumeRequest.h>
#include <aws/ec2/model/AttachVpnGatewayRequest.h>
#include <aws/ec2/model/AuthorizeClientVpnIngressRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/BundleInstanceRequest.h>
#include <aws/ec2/model/CancelBundleTaskRequest.h>
#include <aws/ec2/model/CancelCapacityReservationFleetsRequest.h>
#include <aws/ec2/model/CancelCapacityReservationRequest.h>
#include <aws/ec2/model/CancelConversionTaskRequest.h>
#include <aws/ec2/model/CancelDeclarativePoliciesReportRequest.h>
#include <aws/ec2/model/CancelExportTaskRequest.h>
#include <aws/ec2/model/CancelImageLaunchPermissionRequest.h>
#include <aws/ec2/model/CancelImportTaskRequest.h>
#include <aws/ec2/model/CancelReservedInstancesListingRequest.h>
#include <aws/ec2/model/CancelSpotFleetRequestsRequest.h>
#include <aws/ec2/model/CancelSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/ConfirmProductInstanceRequest.h>
#include <aws/ec2/model/CopyFpgaImageRequest.h>
#include <aws/ec2/model/CopyImageRequest.h>
#include <aws/ec2/model/CopySnapshotRequest.h>
#include <aws/ec2/model/CopyVolumesRequest.h>
#include <aws/ec2/model/CreateCapacityManagerDataExportRequest.h>
#include <aws/ec2/model/CreateCapacityReservationBySplittingRequest.h>
#include <aws/ec2/model/CreateCapacityReservationFleetRequest.h>
#include <aws/ec2/model/CreateCapacityReservationRequest.h>
#include <aws/ec2/model/CreateCarrierGatewayRequest.h>
#include <aws/ec2/model/CreateClientVpnEndpointRequest.h>
#include <aws/ec2/model/CreateClientVpnRouteRequest.h>
#include <aws/ec2/model/CreateCoipCidrRequest.h>
#include <aws/ec2/model/CreateCoipPoolRequest.h>
#include <aws/ec2/model/CreateCustomerGatewayRequest.h>
#include <aws/ec2/model/CreateDefaultSubnetRequest.h>
#include <aws/ec2/model/CreateDefaultVpcRequest.h>
#include <aws/ec2/model/CreateDelegateMacVolumeOwnershipTaskRequest.h>
#include <aws/ec2/model/CreateDhcpOptionsRequest.h>
#include <aws/ec2/model/CreateEgressOnlyInternetGatewayRequest.h>
#include <aws/ec2/model/CreateFleetRequest.h>
#include <aws/ec2/model/CreateFlowLogsRequest.h>
#include <aws/ec2/model/CreateFpgaImageRequest.h>
#include <aws/ec2/model/CreateImageRequest.h>
#include <aws/ec2/model/CreateImageUsageReportRequest.h>
#include <aws/ec2/model/CreateInstanceConnectEndpointRequest.h>
#include <aws/ec2/model/CreateInstanceEventWindowRequest.h>
#include <aws/ec2/model/CreateInstanceExportTaskRequest.h>
#include <aws/ec2/model/CreateInternetGatewayRequest.h>
#include <aws/ec2/model/CreateInterruptibleCapacityReservationAllocationRequest.h>
#include <aws/ec2/model/CreateIpamExternalResourceVerificationTokenRequest.h>
#include <aws/ec2/model/CreateIpamPolicyRequest.h>
#include <aws/ec2/model/CreateIpamPoolRequest.h>
#include <aws/ec2/model/CreateIpamPrefixListResolverRequest.h>
#include <aws/ec2/model/CreateIpamPrefixListResolverTargetRequest.h>
#include <aws/ec2/model/CreateIpamRequest.h>
#include <aws/ec2/model/CreateIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/CreateIpamScopeRequest.h>
#include <aws/ec2/model/CreateKeyPairRequest.h>
#include <aws/ec2/model/CreateLaunchTemplateRequest.h>
#include <aws/ec2/model/CreateLaunchTemplateVersionRequest.h>
#include <aws/ec2/model/CreateLocalGatewayRouteRequest.h>
#include <aws/ec2/model/CreateLocalGatewayRouteTableRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2;
using namespace Aws::EC2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EC2 {
const char SERVICE_NAME[] = "ec2";
const char ALLOCATION_TAG[] = "EC2Client";
}  // namespace EC2
}  // namespace Aws
const char* EC2Client::GetServiceName() { return SERVICE_NAME; }
const char* EC2Client::GetAllocationTag() { return ALLOCATION_TAG; }

EC2Client::EC2Client(const EC2::EC2ClientConfiguration& clientConfiguration, std::shared_ptr<EC2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const AWSCredentials& credentials, std::shared_ptr<EC2EndpointProviderBase> endpointProvider,
                     const EC2::EC2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EC2EndpointProviderBase> endpointProvider, const EC2::EC2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EC2Client::EC2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EC2Client::~EC2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EC2EndpointProviderBase>& EC2Client::accessEndpointProvider() { return m_endpointProvider; }

void EC2Client::init(const EC2::EC2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("EC2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ec2");
}

void EC2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

EC2Client::InvokeOperationOutcome EC2Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AcceptAddressTransferOutcome EC2Client::AcceptAddressTransfer(const AcceptAddressTransferRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptAddressTransferOutcome(result.GetResultWithOwnership())
                            : AcceptAddressTransferOutcome(std::move(result.GetError()));
}

AcceptCapacityReservationBillingOwnershipOutcome EC2Client::AcceptCapacityReservationBillingOwnership(
    const AcceptCapacityReservationBillingOwnershipRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptCapacityReservationBillingOwnershipOutcome(result.GetResultWithOwnership())
                            : AcceptCapacityReservationBillingOwnershipOutcome(std::move(result.GetError()));
}

AcceptReservedInstancesExchangeQuoteOutcome EC2Client::AcceptReservedInstancesExchangeQuote(
    const AcceptReservedInstancesExchangeQuoteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptReservedInstancesExchangeQuoteOutcome(result.GetResultWithOwnership())
                            : AcceptReservedInstancesExchangeQuoteOutcome(std::move(result.GetError()));
}

AcceptTransitGatewayClientVpnAttachmentOutcome EC2Client::AcceptTransitGatewayClientVpnAttachment(
    const AcceptTransitGatewayClientVpnAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptTransitGatewayClientVpnAttachmentOutcome(result.GetResultWithOwnership())
                            : AcceptTransitGatewayClientVpnAttachmentOutcome(std::move(result.GetError()));
}

AcceptTransitGatewayMulticastDomainAssociationsOutcome EC2Client::AcceptTransitGatewayMulticastDomainAssociations(
    const AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptTransitGatewayMulticastDomainAssociationsOutcome(result.GetResultWithOwnership())
                            : AcceptTransitGatewayMulticastDomainAssociationsOutcome(std::move(result.GetError()));
}

AcceptTransitGatewayPeeringAttachmentOutcome EC2Client::AcceptTransitGatewayPeeringAttachment(
    const AcceptTransitGatewayPeeringAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptTransitGatewayPeeringAttachmentOutcome(result.GetResultWithOwnership())
                            : AcceptTransitGatewayPeeringAttachmentOutcome(std::move(result.GetError()));
}

AcceptTransitGatewayVpcAttachmentOutcome EC2Client::AcceptTransitGatewayVpcAttachment(
    const AcceptTransitGatewayVpcAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptTransitGatewayVpcAttachmentOutcome(result.GetResultWithOwnership())
                            : AcceptTransitGatewayVpcAttachmentOutcome(std::move(result.GetError()));
}

AcceptVpcEndpointConnectionsOutcome EC2Client::AcceptVpcEndpointConnections(const AcceptVpcEndpointConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptVpcEndpointConnectionsOutcome(result.GetResultWithOwnership())
                            : AcceptVpcEndpointConnectionsOutcome(std::move(result.GetError()));
}

AcceptVpcPeeringConnectionOutcome EC2Client::AcceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptVpcPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : AcceptVpcPeeringConnectionOutcome(std::move(result.GetError()));
}

AdvertiseByoipCidrOutcome EC2Client::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdvertiseByoipCidrOutcome(result.GetResultWithOwnership())
                            : AdvertiseByoipCidrOutcome(std::move(result.GetError()));
}

AllocateAddressOutcome EC2Client::AllocateAddress(const AllocateAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AllocateAddressOutcome(result.GetResultWithOwnership())
                            : AllocateAddressOutcome(std::move(result.GetError()));
}

AllocateHostsOutcome EC2Client::AllocateHosts(const AllocateHostsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AllocateHostsOutcome(result.GetResultWithOwnership()) : AllocateHostsOutcome(std::move(result.GetError()));
}

AllocateIpamPoolCidrOutcome EC2Client::AllocateIpamPoolCidr(const AllocateIpamPoolCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AllocateIpamPoolCidrOutcome(result.GetResultWithOwnership())
                            : AllocateIpamPoolCidrOutcome(std::move(result.GetError()));
}

ApplySecurityGroupsToClientVpnTargetNetworkOutcome EC2Client::ApplySecurityGroupsToClientVpnTargetNetwork(
    const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ApplySecurityGroupsToClientVpnTargetNetworkOutcome(result.GetResultWithOwnership())
                            : ApplySecurityGroupsToClientVpnTargetNetworkOutcome(std::move(result.GetError()));
}

AssignIpv6AddressesOutcome EC2Client::AssignIpv6Addresses(const AssignIpv6AddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssignIpv6AddressesOutcome(result.GetResultWithOwnership())
                            : AssignIpv6AddressesOutcome(std::move(result.GetError()));
}

AssignPrivateIpAddressesOutcome EC2Client::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssignPrivateIpAddressesOutcome(result.GetResultWithOwnership())
                            : AssignPrivateIpAddressesOutcome(std::move(result.GetError()));
}

AssignPrivateNatGatewayAddressOutcome EC2Client::AssignPrivateNatGatewayAddress(
    const AssignPrivateNatGatewayAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssignPrivateNatGatewayAddressOutcome(result.GetResultWithOwnership())
                            : AssignPrivateNatGatewayAddressOutcome(std::move(result.GetError()));
}

AssociateAddressOutcome EC2Client::AssociateAddress(const AssociateAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateAddressOutcome(result.GetResultWithOwnership())
                            : AssociateAddressOutcome(std::move(result.GetError()));
}

AssociateCapacityReservationBillingOwnerOutcome EC2Client::AssociateCapacityReservationBillingOwner(
    const AssociateCapacityReservationBillingOwnerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateCapacityReservationBillingOwnerOutcome(result.GetResultWithOwnership())
                            : AssociateCapacityReservationBillingOwnerOutcome(std::move(result.GetError()));
}

AssociateClientVpnTargetNetworkOutcome EC2Client::AssociateClientVpnTargetNetwork(
    const AssociateClientVpnTargetNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateClientVpnTargetNetworkOutcome(result.GetResultWithOwnership())
                            : AssociateClientVpnTargetNetworkOutcome(std::move(result.GetError()));
}

AssociateDhcpOptionsOutcome EC2Client::AssociateDhcpOptions(const AssociateDhcpOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateDhcpOptionsOutcome(result.GetResultWithOwnership())
                            : AssociateDhcpOptionsOutcome(std::move(result.GetError()));
}

AssociateEnclaveCertificateIamRoleOutcome EC2Client::AssociateEnclaveCertificateIamRole(
    const AssociateEnclaveCertificateIamRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateEnclaveCertificateIamRoleOutcome(result.GetResultWithOwnership())
                            : AssociateEnclaveCertificateIamRoleOutcome(std::move(result.GetError()));
}

AssociateIamInstanceProfileOutcome EC2Client::AssociateIamInstanceProfile(const AssociateIamInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateIamInstanceProfileOutcome(result.GetResultWithOwnership())
                            : AssociateIamInstanceProfileOutcome(std::move(result.GetError()));
}

AssociateInstanceEventWindowOutcome EC2Client::AssociateInstanceEventWindow(const AssociateInstanceEventWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateInstanceEventWindowOutcome(result.GetResultWithOwnership())
                            : AssociateInstanceEventWindowOutcome(std::move(result.GetError()));
}

AssociateIpamByoasnOutcome EC2Client::AssociateIpamByoasn(const AssociateIpamByoasnRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateIpamByoasnOutcome(result.GetResultWithOwnership())
                            : AssociateIpamByoasnOutcome(std::move(result.GetError()));
}

AssociateIpamResourceDiscoveryOutcome EC2Client::AssociateIpamResourceDiscovery(
    const AssociateIpamResourceDiscoveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateIpamResourceDiscoveryOutcome(result.GetResultWithOwnership())
                            : AssociateIpamResourceDiscoveryOutcome(std::move(result.GetError()));
}

AssociateNatGatewayAddressOutcome EC2Client::AssociateNatGatewayAddress(const AssociateNatGatewayAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateNatGatewayAddressOutcome(result.GetResultWithOwnership())
                            : AssociateNatGatewayAddressOutcome(std::move(result.GetError()));
}

AssociateRouteServerOutcome EC2Client::AssociateRouteServer(const AssociateRouteServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateRouteServerOutcome(result.GetResultWithOwnership())
                            : AssociateRouteServerOutcome(std::move(result.GetError()));
}

AssociateRouteTableOutcome EC2Client::AssociateRouteTable(const AssociateRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateRouteTableOutcome(result.GetResultWithOwnership())
                            : AssociateRouteTableOutcome(std::move(result.GetError()));
}

AssociateSecurityGroupVpcOutcome EC2Client::AssociateSecurityGroupVpc(const AssociateSecurityGroupVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSecurityGroupVpcOutcome(result.GetResultWithOwnership())
                            : AssociateSecurityGroupVpcOutcome(std::move(result.GetError()));
}

AssociateSubnetCidrBlockOutcome EC2Client::AssociateSubnetCidrBlock(const AssociateSubnetCidrBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSubnetCidrBlockOutcome(result.GetResultWithOwnership())
                            : AssociateSubnetCidrBlockOutcome(std::move(result.GetError()));
}

AssociateTransitGatewayMulticastDomainOutcome EC2Client::AssociateTransitGatewayMulticastDomain(
    const AssociateTransitGatewayMulticastDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateTransitGatewayMulticastDomainOutcome(result.GetResultWithOwnership())
                            : AssociateTransitGatewayMulticastDomainOutcome(std::move(result.GetError()));
}

AssociateTransitGatewayPolicyTableOutcome EC2Client::AssociateTransitGatewayPolicyTable(
    const AssociateTransitGatewayPolicyTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateTransitGatewayPolicyTableOutcome(result.GetResultWithOwnership())
                            : AssociateTransitGatewayPolicyTableOutcome(std::move(result.GetError()));
}

AssociateTransitGatewayRouteTableOutcome EC2Client::AssociateTransitGatewayRouteTable(
    const AssociateTransitGatewayRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateTransitGatewayRouteTableOutcome(result.GetResultWithOwnership())
                            : AssociateTransitGatewayRouteTableOutcome(std::move(result.GetError()));
}

AssociateTrunkInterfaceOutcome EC2Client::AssociateTrunkInterface(const AssociateTrunkInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateTrunkInterfaceOutcome(result.GetResultWithOwnership())
                            : AssociateTrunkInterfaceOutcome(std::move(result.GetError()));
}

AssociateVpcCidrBlockOutcome EC2Client::AssociateVpcCidrBlock(const AssociateVpcCidrBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateVpcCidrBlockOutcome(result.GetResultWithOwnership())
                            : AssociateVpcCidrBlockOutcome(std::move(result.GetError()));
}

AttachClassicLinkVpcOutcome EC2Client::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachClassicLinkVpcOutcome(result.GetResultWithOwnership())
                            : AttachClassicLinkVpcOutcome(std::move(result.GetError()));
}

AttachInternetGatewayOutcome EC2Client::AttachInternetGateway(const AttachInternetGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachInternetGatewayOutcome(result.GetResultWithOwnership())
                            : AttachInternetGatewayOutcome(std::move(result.GetError()));
}

AttachNetworkInterfaceOutcome EC2Client::AttachNetworkInterface(const AttachNetworkInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : AttachNetworkInterfaceOutcome(std::move(result.GetError()));
}

AttachVerifiedAccessTrustProviderOutcome EC2Client::AttachVerifiedAccessTrustProvider(
    const AttachVerifiedAccessTrustProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachVerifiedAccessTrustProviderOutcome(result.GetResultWithOwnership())
                            : AttachVerifiedAccessTrustProviderOutcome(std::move(result.GetError()));
}

AttachVolumeOutcome EC2Client::AttachVolume(const AttachVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachVolumeOutcome(result.GetResultWithOwnership()) : AttachVolumeOutcome(std::move(result.GetError()));
}

AttachVpnGatewayOutcome EC2Client::AttachVpnGateway(const AttachVpnGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachVpnGatewayOutcome(result.GetResultWithOwnership())
                            : AttachVpnGatewayOutcome(std::move(result.GetError()));
}

AuthorizeClientVpnIngressOutcome EC2Client::AuthorizeClientVpnIngress(const AuthorizeClientVpnIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeClientVpnIngressOutcome(result.GetResultWithOwnership())
                            : AuthorizeClientVpnIngressOutcome(std::move(result.GetError()));
}

AuthorizeSecurityGroupEgressOutcome EC2Client::AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeSecurityGroupEgressOutcome(result.GetResultWithOwnership())
                            : AuthorizeSecurityGroupEgressOutcome(std::move(result.GetError()));
}

AuthorizeSecurityGroupIngressOutcome EC2Client::AuthorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : AuthorizeSecurityGroupIngressOutcome(std::move(result.GetError()));
}

BundleInstanceOutcome EC2Client::BundleInstance(const BundleInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BundleInstanceOutcome(result.GetResultWithOwnership()) : BundleInstanceOutcome(std::move(result.GetError()));
}

CancelBundleTaskOutcome EC2Client::CancelBundleTask(const CancelBundleTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelBundleTaskOutcome(result.GetResultWithOwnership())
                            : CancelBundleTaskOutcome(std::move(result.GetError()));
}

CancelCapacityReservationOutcome EC2Client::CancelCapacityReservation(const CancelCapacityReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelCapacityReservationOutcome(result.GetResultWithOwnership())
                            : CancelCapacityReservationOutcome(std::move(result.GetError()));
}

CancelCapacityReservationFleetsOutcome EC2Client::CancelCapacityReservationFleets(
    const CancelCapacityReservationFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelCapacityReservationFleetsOutcome(result.GetResultWithOwnership())
                            : CancelCapacityReservationFleetsOutcome(std::move(result.GetError()));
}

CancelConversionTaskOutcome EC2Client::CancelConversionTask(const CancelConversionTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelConversionTaskOutcome(result.GetResultWithOwnership())
                            : CancelConversionTaskOutcome(std::move(result.GetError()));
}

CancelDeclarativePoliciesReportOutcome EC2Client::CancelDeclarativePoliciesReport(
    const CancelDeclarativePoliciesReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelDeclarativePoliciesReportOutcome(result.GetResultWithOwnership())
                            : CancelDeclarativePoliciesReportOutcome(std::move(result.GetError()));
}

CancelExportTaskOutcome EC2Client::CancelExportTask(const CancelExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelExportTaskOutcome(result.GetResultWithOwnership())
                            : CancelExportTaskOutcome(std::move(result.GetError()));
}

CancelImageLaunchPermissionOutcome EC2Client::CancelImageLaunchPermission(const CancelImageLaunchPermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelImageLaunchPermissionOutcome(result.GetResultWithOwnership())
                            : CancelImageLaunchPermissionOutcome(std::move(result.GetError()));
}

CancelImportTaskOutcome EC2Client::CancelImportTask(const CancelImportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelImportTaskOutcome(result.GetResultWithOwnership())
                            : CancelImportTaskOutcome(std::move(result.GetError()));
}

CancelReservedInstancesListingOutcome EC2Client::CancelReservedInstancesListing(
    const CancelReservedInstancesListingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelReservedInstancesListingOutcome(result.GetResultWithOwnership())
                            : CancelReservedInstancesListingOutcome(std::move(result.GetError()));
}

CancelSpotFleetRequestsOutcome EC2Client::CancelSpotFleetRequests(const CancelSpotFleetRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelSpotFleetRequestsOutcome(result.GetResultWithOwnership())
                            : CancelSpotFleetRequestsOutcome(std::move(result.GetError()));
}

CancelSpotInstanceRequestsOutcome EC2Client::CancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelSpotInstanceRequestsOutcome(result.GetResultWithOwnership())
                            : CancelSpotInstanceRequestsOutcome(std::move(result.GetError()));
}

ConfirmProductInstanceOutcome EC2Client::ConfirmProductInstance(const ConfirmProductInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ConfirmProductInstanceOutcome(result.GetResultWithOwnership())
                            : ConfirmProductInstanceOutcome(std::move(result.GetError()));
}

CopyFpgaImageOutcome EC2Client::CopyFpgaImage(const CopyFpgaImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyFpgaImageOutcome(result.GetResultWithOwnership()) : CopyFpgaImageOutcome(std::move(result.GetError()));
}

CopyImageOutcome EC2Client::CopyImage(const CopyImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyImageOutcome(result.GetResultWithOwnership()) : CopyImageOutcome(std::move(result.GetError()));
}

CopySnapshotOutcome EC2Client::CopySnapshot(const CopySnapshotRequest& request) const {
  if (request.SourceRegionHasBeenSet()) {
    CopySnapshotRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPresignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    auto result = InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST);
    return result.IsSuccess() ? CopySnapshotOutcome(result.GetResultWithOwnership()) : CopySnapshotOutcome(std::move(result.GetError()));
  }

  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopySnapshotOutcome(result.GetResultWithOwnership()) : CopySnapshotOutcome(std::move(result.GetError()));
}

CopyVolumesOutcome EC2Client::CopyVolumes(const CopyVolumesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyVolumesOutcome(result.GetResultWithOwnership()) : CopyVolumesOutcome(std::move(result.GetError()));
}

CreateCapacityManagerDataExportOutcome EC2Client::CreateCapacityManagerDataExport(
    const CreateCapacityManagerDataExportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCapacityManagerDataExportOutcome(result.GetResultWithOwnership())
                            : CreateCapacityManagerDataExportOutcome(std::move(result.GetError()));
}

CreateCapacityReservationOutcome EC2Client::CreateCapacityReservation(const CreateCapacityReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCapacityReservationOutcome(result.GetResultWithOwnership())
                            : CreateCapacityReservationOutcome(std::move(result.GetError()));
}

CreateCapacityReservationBySplittingOutcome EC2Client::CreateCapacityReservationBySplitting(
    const CreateCapacityReservationBySplittingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCapacityReservationBySplittingOutcome(result.GetResultWithOwnership())
                            : CreateCapacityReservationBySplittingOutcome(std::move(result.GetError()));
}

CreateCapacityReservationFleetOutcome EC2Client::CreateCapacityReservationFleet(
    const CreateCapacityReservationFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCapacityReservationFleetOutcome(result.GetResultWithOwnership())
                            : CreateCapacityReservationFleetOutcome(std::move(result.GetError()));
}

CreateCarrierGatewayOutcome EC2Client::CreateCarrierGateway(const CreateCarrierGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCarrierGatewayOutcome(result.GetResultWithOwnership())
                            : CreateCarrierGatewayOutcome(std::move(result.GetError()));
}

CreateClientVpnEndpointOutcome EC2Client::CreateClientVpnEndpoint(const CreateClientVpnEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClientVpnEndpointOutcome(result.GetResultWithOwnership())
                            : CreateClientVpnEndpointOutcome(std::move(result.GetError()));
}

CreateClientVpnRouteOutcome EC2Client::CreateClientVpnRoute(const CreateClientVpnRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClientVpnRouteOutcome(result.GetResultWithOwnership())
                            : CreateClientVpnRouteOutcome(std::move(result.GetError()));
}

CreateCoipCidrOutcome EC2Client::CreateCoipCidr(const CreateCoipCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCoipCidrOutcome(result.GetResultWithOwnership()) : CreateCoipCidrOutcome(std::move(result.GetError()));
}

CreateCoipPoolOutcome EC2Client::CreateCoipPool(const CreateCoipPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCoipPoolOutcome(result.GetResultWithOwnership()) : CreateCoipPoolOutcome(std::move(result.GetError()));
}

CreateCustomerGatewayOutcome EC2Client::CreateCustomerGateway(const CreateCustomerGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomerGatewayOutcome(result.GetResultWithOwnership())
                            : CreateCustomerGatewayOutcome(std::move(result.GetError()));
}

CreateDefaultSubnetOutcome EC2Client::CreateDefaultSubnet(const CreateDefaultSubnetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDefaultSubnetOutcome(result.GetResultWithOwnership())
                            : CreateDefaultSubnetOutcome(std::move(result.GetError()));
}

CreateDefaultVpcOutcome EC2Client::CreateDefaultVpc(const CreateDefaultVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDefaultVpcOutcome(result.GetResultWithOwnership())
                            : CreateDefaultVpcOutcome(std::move(result.GetError()));
}

CreateDelegateMacVolumeOwnershipTaskOutcome EC2Client::CreateDelegateMacVolumeOwnershipTask(
    const CreateDelegateMacVolumeOwnershipTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDelegateMacVolumeOwnershipTaskOutcome(result.GetResultWithOwnership())
                            : CreateDelegateMacVolumeOwnershipTaskOutcome(std::move(result.GetError()));
}

CreateDhcpOptionsOutcome EC2Client::CreateDhcpOptions(const CreateDhcpOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDhcpOptionsOutcome(result.GetResultWithOwnership())
                            : CreateDhcpOptionsOutcome(std::move(result.GetError()));
}

CreateEgressOnlyInternetGatewayOutcome EC2Client::CreateEgressOnlyInternetGateway(
    const CreateEgressOnlyInternetGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEgressOnlyInternetGatewayOutcome(result.GetResultWithOwnership())
                            : CreateEgressOnlyInternetGatewayOutcome(std::move(result.GetError()));
}

CreateFleetOutcome EC2Client::CreateFleet(const CreateFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFleetOutcome(result.GetResultWithOwnership()) : CreateFleetOutcome(std::move(result.GetError()));
}

CreateFlowLogsOutcome EC2Client::CreateFlowLogs(const CreateFlowLogsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFlowLogsOutcome(result.GetResultWithOwnership()) : CreateFlowLogsOutcome(std::move(result.GetError()));
}

CreateFpgaImageOutcome EC2Client::CreateFpgaImage(const CreateFpgaImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFpgaImageOutcome(result.GetResultWithOwnership())
                            : CreateFpgaImageOutcome(std::move(result.GetError()));
}

CreateImageOutcome EC2Client::CreateImage(const CreateImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImageOutcome(result.GetResultWithOwnership()) : CreateImageOutcome(std::move(result.GetError()));
}

CreateImageUsageReportOutcome EC2Client::CreateImageUsageReport(const CreateImageUsageReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImageUsageReportOutcome(result.GetResultWithOwnership())
                            : CreateImageUsageReportOutcome(std::move(result.GetError()));
}

CreateInstanceConnectEndpointOutcome EC2Client::CreateInstanceConnectEndpoint(const CreateInstanceConnectEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceConnectEndpointOutcome(result.GetResultWithOwnership())
                            : CreateInstanceConnectEndpointOutcome(std::move(result.GetError()));
}

CreateInstanceEventWindowOutcome EC2Client::CreateInstanceEventWindow(const CreateInstanceEventWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceEventWindowOutcome(result.GetResultWithOwnership())
                            : CreateInstanceEventWindowOutcome(std::move(result.GetError()));
}

CreateInstanceExportTaskOutcome EC2Client::CreateInstanceExportTask(const CreateInstanceExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceExportTaskOutcome(result.GetResultWithOwnership())
                            : CreateInstanceExportTaskOutcome(std::move(result.GetError()));
}

CreateInternetGatewayOutcome EC2Client::CreateInternetGateway(const CreateInternetGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInternetGatewayOutcome(result.GetResultWithOwnership())
                            : CreateInternetGatewayOutcome(std::move(result.GetError()));
}

CreateInterruptibleCapacityReservationAllocationOutcome EC2Client::CreateInterruptibleCapacityReservationAllocation(
    const CreateInterruptibleCapacityReservationAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInterruptibleCapacityReservationAllocationOutcome(result.GetResultWithOwnership())
                            : CreateInterruptibleCapacityReservationAllocationOutcome(std::move(result.GetError()));
}

CreateIpamOutcome EC2Client::CreateIpam(const CreateIpamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamOutcome(result.GetResultWithOwnership()) : CreateIpamOutcome(std::move(result.GetError()));
}

CreateIpamExternalResourceVerificationTokenOutcome EC2Client::CreateIpamExternalResourceVerificationToken(
    const CreateIpamExternalResourceVerificationTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamExternalResourceVerificationTokenOutcome(result.GetResultWithOwnership())
                            : CreateIpamExternalResourceVerificationTokenOutcome(std::move(result.GetError()));
}

CreateIpamPolicyOutcome EC2Client::CreateIpamPolicy(const CreateIpamPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamPolicyOutcome(result.GetResultWithOwnership())
                            : CreateIpamPolicyOutcome(std::move(result.GetError()));
}

CreateIpamPoolOutcome EC2Client::CreateIpamPool(const CreateIpamPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamPoolOutcome(result.GetResultWithOwnership()) : CreateIpamPoolOutcome(std::move(result.GetError()));
}

CreateIpamPrefixListResolverOutcome EC2Client::CreateIpamPrefixListResolver(const CreateIpamPrefixListResolverRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamPrefixListResolverOutcome(result.GetResultWithOwnership())
                            : CreateIpamPrefixListResolverOutcome(std::move(result.GetError()));
}

CreateIpamPrefixListResolverTargetOutcome EC2Client::CreateIpamPrefixListResolverTarget(
    const CreateIpamPrefixListResolverTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamPrefixListResolverTargetOutcome(result.GetResultWithOwnership())
                            : CreateIpamPrefixListResolverTargetOutcome(std::move(result.GetError()));
}

CreateIpamResourceDiscoveryOutcome EC2Client::CreateIpamResourceDiscovery(const CreateIpamResourceDiscoveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamResourceDiscoveryOutcome(result.GetResultWithOwnership())
                            : CreateIpamResourceDiscoveryOutcome(std::move(result.GetError()));
}

CreateIpamScopeOutcome EC2Client::CreateIpamScope(const CreateIpamScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIpamScopeOutcome(result.GetResultWithOwnership())
                            : CreateIpamScopeOutcome(std::move(result.GetError()));
}

CreateKeyPairOutcome EC2Client::CreateKeyPair(const CreateKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKeyPairOutcome(result.GetResultWithOwnership()) : CreateKeyPairOutcome(std::move(result.GetError()));
}

CreateLaunchTemplateOutcome EC2Client::CreateLaunchTemplate(const CreateLaunchTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLaunchTemplateOutcome(result.GetResultWithOwnership())
                            : CreateLaunchTemplateOutcome(std::move(result.GetError()));
}

CreateLaunchTemplateVersionOutcome EC2Client::CreateLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLaunchTemplateVersionOutcome(result.GetResultWithOwnership())
                            : CreateLaunchTemplateVersionOutcome(std::move(result.GetError()));
}

CreateLocalGatewayRouteOutcome EC2Client::CreateLocalGatewayRoute(const CreateLocalGatewayRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLocalGatewayRouteOutcome(result.GetResultWithOwnership())
                            : CreateLocalGatewayRouteOutcome(std::move(result.GetError()));
}

CreateLocalGatewayRouteTableOutcome EC2Client::CreateLocalGatewayRouteTable(const CreateLocalGatewayRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLocalGatewayRouteTableOutcome(result.GetResultWithOwnership())
                            : CreateLocalGatewayRouteTableOutcome(std::move(result.GetError()));
}
