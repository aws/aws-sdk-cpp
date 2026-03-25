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
#include <aws/ec2/model/CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest.h>
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
}
}
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
  return AcceptAddressTransferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptCapacityReservationBillingOwnershipOutcome EC2Client::AcceptCapacityReservationBillingOwnership(
    const AcceptCapacityReservationBillingOwnershipRequest& request) const {
  return AcceptCapacityReservationBillingOwnershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptReservedInstancesExchangeQuoteOutcome EC2Client::AcceptReservedInstancesExchangeQuote(
    const AcceptReservedInstancesExchangeQuoteRequest& request) const {
  return AcceptReservedInstancesExchangeQuoteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptTransitGatewayMulticastDomainAssociationsOutcome EC2Client::AcceptTransitGatewayMulticastDomainAssociations(
    const AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const {
  return AcceptTransitGatewayMulticastDomainAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptTransitGatewayPeeringAttachmentOutcome EC2Client::AcceptTransitGatewayPeeringAttachment(
    const AcceptTransitGatewayPeeringAttachmentRequest& request) const {
  return AcceptTransitGatewayPeeringAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptTransitGatewayVpcAttachmentOutcome EC2Client::AcceptTransitGatewayVpcAttachment(
    const AcceptTransitGatewayVpcAttachmentRequest& request) const {
  return AcceptTransitGatewayVpcAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptVpcEndpointConnectionsOutcome EC2Client::AcceptVpcEndpointConnections(const AcceptVpcEndpointConnectionsRequest& request) const {
  return AcceptVpcEndpointConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptVpcPeeringConnectionOutcome EC2Client::AcceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest& request) const {
  return AcceptVpcPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AdvertiseByoipCidrOutcome EC2Client::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const {
  return AdvertiseByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AllocateAddressOutcome EC2Client::AllocateAddress(const AllocateAddressRequest& request) const {
  return AllocateAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AllocateHostsOutcome EC2Client::AllocateHosts(const AllocateHostsRequest& request) const {
  return AllocateHostsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AllocateIpamPoolCidrOutcome EC2Client::AllocateIpamPoolCidr(const AllocateIpamPoolCidrRequest& request) const {
  return AllocateIpamPoolCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ApplySecurityGroupsToClientVpnTargetNetworkOutcome EC2Client::ApplySecurityGroupsToClientVpnTargetNetwork(
    const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const {
  return ApplySecurityGroupsToClientVpnTargetNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssignIpv6AddressesOutcome EC2Client::AssignIpv6Addresses(const AssignIpv6AddressesRequest& request) const {
  return AssignIpv6AddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssignPrivateIpAddressesOutcome EC2Client::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest& request) const {
  return AssignPrivateIpAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssignPrivateNatGatewayAddressOutcome EC2Client::AssignPrivateNatGatewayAddress(
    const AssignPrivateNatGatewayAddressRequest& request) const {
  return AssignPrivateNatGatewayAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateAddressOutcome EC2Client::AssociateAddress(const AssociateAddressRequest& request) const {
  return AssociateAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateCapacityReservationBillingOwnerOutcome EC2Client::AssociateCapacityReservationBillingOwner(
    const AssociateCapacityReservationBillingOwnerRequest& request) const {
  return AssociateCapacityReservationBillingOwnerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateClientVpnTargetNetworkOutcome EC2Client::AssociateClientVpnTargetNetwork(
    const AssociateClientVpnTargetNetworkRequest& request) const {
  return AssociateClientVpnTargetNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateDhcpOptionsOutcome EC2Client::AssociateDhcpOptions(const AssociateDhcpOptionsRequest& request) const {
  return AssociateDhcpOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateEnclaveCertificateIamRoleOutcome EC2Client::AssociateEnclaveCertificateIamRole(
    const AssociateEnclaveCertificateIamRoleRequest& request) const {
  return AssociateEnclaveCertificateIamRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateIamInstanceProfileOutcome EC2Client::AssociateIamInstanceProfile(const AssociateIamInstanceProfileRequest& request) const {
  return AssociateIamInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateInstanceEventWindowOutcome EC2Client::AssociateInstanceEventWindow(const AssociateInstanceEventWindowRequest& request) const {
  return AssociateInstanceEventWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateIpamByoasnOutcome EC2Client::AssociateIpamByoasn(const AssociateIpamByoasnRequest& request) const {
  return AssociateIpamByoasnOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateIpamResourceDiscoveryOutcome EC2Client::AssociateIpamResourceDiscovery(
    const AssociateIpamResourceDiscoveryRequest& request) const {
  return AssociateIpamResourceDiscoveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateNatGatewayAddressOutcome EC2Client::AssociateNatGatewayAddress(const AssociateNatGatewayAddressRequest& request) const {
  return AssociateNatGatewayAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateRouteServerOutcome EC2Client::AssociateRouteServer(const AssociateRouteServerRequest& request) const {
  return AssociateRouteServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateRouteTableOutcome EC2Client::AssociateRouteTable(const AssociateRouteTableRequest& request) const {
  return AssociateRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateSecurityGroupVpcOutcome EC2Client::AssociateSecurityGroupVpc(const AssociateSecurityGroupVpcRequest& request) const {
  return AssociateSecurityGroupVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateSubnetCidrBlockOutcome EC2Client::AssociateSubnetCidrBlock(const AssociateSubnetCidrBlockRequest& request) const {
  return AssociateSubnetCidrBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateTransitGatewayMulticastDomainOutcome EC2Client::AssociateTransitGatewayMulticastDomain(
    const AssociateTransitGatewayMulticastDomainRequest& request) const {
  return AssociateTransitGatewayMulticastDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateTransitGatewayPolicyTableOutcome EC2Client::AssociateTransitGatewayPolicyTable(
    const AssociateTransitGatewayPolicyTableRequest& request) const {
  return AssociateTransitGatewayPolicyTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateTransitGatewayRouteTableOutcome EC2Client::AssociateTransitGatewayRouteTable(
    const AssociateTransitGatewayRouteTableRequest& request) const {
  return AssociateTransitGatewayRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateTrunkInterfaceOutcome EC2Client::AssociateTrunkInterface(const AssociateTrunkInterfaceRequest& request) const {
  return AssociateTrunkInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateVpcCidrBlockOutcome EC2Client::AssociateVpcCidrBlock(const AssociateVpcCidrBlockRequest& request) const {
  return AssociateVpcCidrBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AttachClassicLinkVpcOutcome EC2Client::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest& request) const {
  return AttachClassicLinkVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AttachInternetGatewayOutcome EC2Client::AttachInternetGateway(const AttachInternetGatewayRequest& request) const {
  return AttachInternetGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AttachNetworkInterfaceOutcome EC2Client::AttachNetworkInterface(const AttachNetworkInterfaceRequest& request) const {
  return AttachNetworkInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AttachVerifiedAccessTrustProviderOutcome EC2Client::AttachVerifiedAccessTrustProvider(
    const AttachVerifiedAccessTrustProviderRequest& request) const {
  return AttachVerifiedAccessTrustProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AttachVolumeOutcome EC2Client::AttachVolume(const AttachVolumeRequest& request) const {
  return AttachVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AttachVpnGatewayOutcome EC2Client::AttachVpnGateway(const AttachVpnGatewayRequest& request) const {
  return AttachVpnGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AuthorizeClientVpnIngressOutcome EC2Client::AuthorizeClientVpnIngress(const AuthorizeClientVpnIngressRequest& request) const {
  return AuthorizeClientVpnIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AuthorizeSecurityGroupEgressOutcome EC2Client::AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest& request) const {
  return AuthorizeSecurityGroupEgressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AuthorizeSecurityGroupIngressOutcome EC2Client::AuthorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest& request) const {
  return AuthorizeSecurityGroupIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BundleInstanceOutcome EC2Client::BundleInstance(const BundleInstanceRequest& request) const {
  return BundleInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelBundleTaskOutcome EC2Client::CancelBundleTask(const CancelBundleTaskRequest& request) const {
  return CancelBundleTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelCapacityReservationOutcome EC2Client::CancelCapacityReservation(const CancelCapacityReservationRequest& request) const {
  return CancelCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelCapacityReservationFleetsOutcome EC2Client::CancelCapacityReservationFleets(
    const CancelCapacityReservationFleetsRequest& request) const {
  return CancelCapacityReservationFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelConversionTaskOutcome EC2Client::CancelConversionTask(const CancelConversionTaskRequest& request) const {
  return CancelConversionTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelDeclarativePoliciesReportOutcome EC2Client::CancelDeclarativePoliciesReport(
    const CancelDeclarativePoliciesReportRequest& request) const {
  return CancelDeclarativePoliciesReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelExportTaskOutcome EC2Client::CancelExportTask(const CancelExportTaskRequest& request) const {
  return CancelExportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelImageLaunchPermissionOutcome EC2Client::CancelImageLaunchPermission(const CancelImageLaunchPermissionRequest& request) const {
  return CancelImageLaunchPermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelImportTaskOutcome EC2Client::CancelImportTask(const CancelImportTaskRequest& request) const {
  return CancelImportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelReservedInstancesListingOutcome EC2Client::CancelReservedInstancesListing(
    const CancelReservedInstancesListingRequest& request) const {
  return CancelReservedInstancesListingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelSpotFleetRequestsOutcome EC2Client::CancelSpotFleetRequests(const CancelSpotFleetRequestsRequest& request) const {
  return CancelSpotFleetRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelSpotInstanceRequestsOutcome EC2Client::CancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest& request) const {
  return CancelSpotInstanceRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ConfirmProductInstanceOutcome EC2Client::ConfirmProductInstance(const ConfirmProductInstanceRequest& request) const {
  return ConfirmProductInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CopyFpgaImageOutcome EC2Client::CopyFpgaImage(const CopyFpgaImageRequest& request) const {
  return CopyFpgaImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CopyImageOutcome EC2Client::CopyImage(const CopyImageRequest& request) const {
  return CopyImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

    return CopySnapshotOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return CopySnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CopyVolumesOutcome EC2Client::CopyVolumes(const CopyVolumesRequest& request) const {
  return CopyVolumesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCapacityManagerDataExportOutcome EC2Client::CreateCapacityManagerDataExport(
    const CreateCapacityManagerDataExportRequest& request) const {
  return CreateCapacityManagerDataExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCapacityReservationOutcome EC2Client::CreateCapacityReservation(const CreateCapacityReservationRequest& request) const {
  return CreateCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCapacityReservationBySplittingOutcome EC2Client::CreateCapacityReservationBySplitting(
    const CreateCapacityReservationBySplittingRequest& request) const {
  return CreateCapacityReservationBySplittingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCapacityReservationFleetOutcome EC2Client::CreateCapacityReservationFleet(
    const CreateCapacityReservationFleetRequest& request) const {
  return CreateCapacityReservationFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCarrierGatewayOutcome EC2Client::CreateCarrierGateway(const CreateCarrierGatewayRequest& request) const {
  return CreateCarrierGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateClientVpnEndpointOutcome EC2Client::CreateClientVpnEndpoint(const CreateClientVpnEndpointRequest& request) const {
  return CreateClientVpnEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateClientVpnRouteOutcome EC2Client::CreateClientVpnRoute(const CreateClientVpnRouteRequest& request) const {
  return CreateClientVpnRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCoipCidrOutcome EC2Client::CreateCoipCidr(const CreateCoipCidrRequest& request) const {
  return CreateCoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCoipPoolOutcome EC2Client::CreateCoipPool(const CreateCoipPoolRequest& request) const {
  return CreateCoipPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCustomerGatewayOutcome EC2Client::CreateCustomerGateway(const CreateCustomerGatewayRequest& request) const {
  return CreateCustomerGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDefaultSubnetOutcome EC2Client::CreateDefaultSubnet(const CreateDefaultSubnetRequest& request) const {
  return CreateDefaultSubnetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDefaultVpcOutcome EC2Client::CreateDefaultVpc(const CreateDefaultVpcRequest& request) const {
  return CreateDefaultVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDelegateMacVolumeOwnershipTaskOutcome EC2Client::CreateDelegateMacVolumeOwnershipTask(
    const CreateDelegateMacVolumeOwnershipTaskRequest& request) const {
  return CreateDelegateMacVolumeOwnershipTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDhcpOptionsOutcome EC2Client::CreateDhcpOptions(const CreateDhcpOptionsRequest& request) const {
  return CreateDhcpOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEgressOnlyInternetGatewayOutcome EC2Client::CreateEgressOnlyInternetGateway(
    const CreateEgressOnlyInternetGatewayRequest& request) const {
  return CreateEgressOnlyInternetGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFleetOutcome EC2Client::CreateFleet(const CreateFleetRequest& request) const {
  return CreateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFlowLogsOutcome EC2Client::CreateFlowLogs(const CreateFlowLogsRequest& request) const {
  return CreateFlowLogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFpgaImageOutcome EC2Client::CreateFpgaImage(const CreateFpgaImageRequest& request) const {
  return CreateFpgaImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateImageOutcome EC2Client::CreateImage(const CreateImageRequest& request) const {
  return CreateImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateImageUsageReportOutcome EC2Client::CreateImageUsageReport(const CreateImageUsageReportRequest& request) const {
  return CreateImageUsageReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInstanceConnectEndpointOutcome EC2Client::CreateInstanceConnectEndpoint(const CreateInstanceConnectEndpointRequest& request) const {
  return CreateInstanceConnectEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInstanceEventWindowOutcome EC2Client::CreateInstanceEventWindow(const CreateInstanceEventWindowRequest& request) const {
  return CreateInstanceEventWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInstanceExportTaskOutcome EC2Client::CreateInstanceExportTask(const CreateInstanceExportTaskRequest& request) const {
  return CreateInstanceExportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInternetGatewayOutcome EC2Client::CreateInternetGateway(const CreateInternetGatewayRequest& request) const {
  return CreateInternetGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInterruptibleCapacityReservationAllocationOutcome EC2Client::CreateInterruptibleCapacityReservationAllocation(
    const CreateInterruptibleCapacityReservationAllocationRequest& request) const {
  return CreateInterruptibleCapacityReservationAllocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamOutcome EC2Client::CreateIpam(const CreateIpamRequest& request) const {
  return CreateIpamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamExternalResourceVerificationTokenOutcome EC2Client::CreateIpamExternalResourceVerificationToken(
    const CreateIpamExternalResourceVerificationTokenRequest& request) const {
  return CreateIpamExternalResourceVerificationTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamPolicyOutcome EC2Client::CreateIpamPolicy(const CreateIpamPolicyRequest& request) const {
  return CreateIpamPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamPoolOutcome EC2Client::CreateIpamPool(const CreateIpamPoolRequest& request) const {
  return CreateIpamPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamPrefixListResolverOutcome EC2Client::CreateIpamPrefixListResolver(const CreateIpamPrefixListResolverRequest& request) const {
  return CreateIpamPrefixListResolverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamPrefixListResolverTargetOutcome EC2Client::CreateIpamPrefixListResolverTarget(
    const CreateIpamPrefixListResolverTargetRequest& request) const {
  return CreateIpamPrefixListResolverTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamResourceDiscoveryOutcome EC2Client::CreateIpamResourceDiscovery(const CreateIpamResourceDiscoveryRequest& request) const {
  return CreateIpamResourceDiscoveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIpamScopeOutcome EC2Client::CreateIpamScope(const CreateIpamScopeRequest& request) const {
  return CreateIpamScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKeyPairOutcome EC2Client::CreateKeyPair(const CreateKeyPairRequest& request) const {
  return CreateKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLaunchTemplateOutcome EC2Client::CreateLaunchTemplate(const CreateLaunchTemplateRequest& request) const {
  return CreateLaunchTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLaunchTemplateVersionOutcome EC2Client::CreateLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest& request) const {
  return CreateLaunchTemplateVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLocalGatewayRouteOutcome EC2Client::CreateLocalGatewayRoute(const CreateLocalGatewayRouteRequest& request) const {
  return CreateLocalGatewayRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLocalGatewayRouteTableOutcome EC2Client::CreateLocalGatewayRouteTable(const CreateLocalGatewayRouteTableRequest& request) const {
  return CreateLocalGatewayRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome EC2Client::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation(
    const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const {
  return CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome{
      InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
