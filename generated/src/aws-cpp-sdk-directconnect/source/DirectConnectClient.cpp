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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/directconnect/DirectConnectClient.h>
#include <aws/directconnect/DirectConnectEndpointProvider.h>
#include <aws/directconnect/DirectConnectErrorMarshaller.h>
#include <aws/directconnect/model/AcceptDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/directconnect/model/AllocateHostedConnectionRequest.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AllocateTransitVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AssociateConnectionWithLagRequest.h>
#include <aws/directconnect/model/AssociateHostedConnectionRequest.h>
#include <aws/directconnect/model/AssociateMacSecKeyRequest.h>
#include <aws/directconnect/model/AssociateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmConnectionRequest.h>
#include <aws/directconnect/model/ConfirmCustomerAgreementRequest.h>
#include <aws/directconnect/model/ConfirmPrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmTransitVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreateBGPPeerRequest.h>
#include <aws/directconnect/model/CreateConnectionRequest.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationRequest.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayRequest.h>
#include <aws/directconnect/model/CreateInterconnectRequest.h>
#include <aws/directconnect/model/CreateLagRequest.h>
#include <aws/directconnect/model/CreatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreateTransitVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DeleteBGPPeerRequest.h>
#include <aws/directconnect/model/DeleteConnectionRequest.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationRequest.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayRequest.h>
#include <aws/directconnect/model/DeleteInterconnectRequest.h>
#include <aws/directconnect/model/DeleteLagRequest.h>
#include <aws/directconnect/model/DeleteVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DescribeConnectionsRequest.h>
#include <aws/directconnect/model/DescribeCustomerMetadataRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationProposalsRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationsRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAttachmentsRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewaysRequest.h>
#include <aws/directconnect/model/DescribeHostedConnectionsRequest.h>
#include <aws/directconnect/model/DescribeInterconnectsRequest.h>
#include <aws/directconnect/model/DescribeLagsRequest.h>
#include <aws/directconnect/model/DescribeLoaRequest.h>
#include <aws/directconnect/model/DescribeLocationsRequest.h>
#include <aws/directconnect/model/DescribeRouterConfigurationRequest.h>
#include <aws/directconnect/model/DescribeTagsRequest.h>
#include <aws/directconnect/model/DescribeVirtualGatewaysRequest.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesRequest.h>
#include <aws/directconnect/model/DisassociateConnectionFromLagRequest.h>
#include <aws/directconnect/model/DisassociateMacSecKeyRequest.h>
#include <aws/directconnect/model/ListVirtualInterfaceTestHistoryRequest.h>
#include <aws/directconnect/model/StartBgpFailoverTestRequest.h>
#include <aws/directconnect/model/StopBgpFailoverTestRequest.h>
#include <aws/directconnect/model/TagResourceRequest.h>
#include <aws/directconnect/model/UntagResourceRequest.h>
#include <aws/directconnect/model/UpdateConnectionRequest.h>
#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationRequest.h>
#include <aws/directconnect/model/UpdateDirectConnectGatewayRequest.h>
#include <aws/directconnect/model/UpdateLagRequest.h>
#include <aws/directconnect/model/UpdateVirtualInterfaceAttributesRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DirectConnect;
using namespace Aws::DirectConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DirectConnect {
const char SERVICE_NAME[] = "directconnect";
const char ALLOCATION_TAG[] = "DirectConnectClient";
}  // namespace DirectConnect
}  // namespace Aws
const char* DirectConnectClient::GetServiceName() { return SERVICE_NAME; }
const char* DirectConnectClient::GetAllocationTag() { return ALLOCATION_TAG; }

DirectConnectClient::DirectConnectClient(const DirectConnect::DirectConnectClientConfiguration& clientConfiguration,
                                         std::shared_ptr<DirectConnectEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const AWSCredentials& credentials,
                                         std::shared_ptr<DirectConnectEndpointProviderBase> endpointProvider,
                                         const DirectConnect::DirectConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<DirectConnectEndpointProviderBase> endpointProvider,
                                         const DirectConnect::DirectConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DirectConnectClient::DirectConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DirectConnectClient::~DirectConnectClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DirectConnectEndpointProviderBase>& DirectConnectClient::accessEndpointProvider() { return m_endpointProvider; }

void DirectConnectClient::init(const DirectConnect::DirectConnectClientConfiguration& config) {
  AWSClient::SetServiceClientName("Direct Connect");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "directconnect");
}

void DirectConnectClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DirectConnectClient::InvokeOperationOutcome DirectConnectClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptDirectConnectGatewayAssociationProposalOutcome DirectConnectClient::AcceptDirectConnectGatewayAssociationProposal(
    const AcceptDirectConnectGatewayAssociationProposalRequest& request) const {
  return AcceptDirectConnectGatewayAssociationProposalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AllocateHostedConnectionOutcome DirectConnectClient::AllocateHostedConnection(const AllocateHostedConnectionRequest& request) const {
  return AllocateHostedConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AllocatePrivateVirtualInterfaceOutcome DirectConnectClient::AllocatePrivateVirtualInterface(
    const AllocatePrivateVirtualInterfaceRequest& request) const {
  return AllocatePrivateVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AllocatePublicVirtualInterfaceOutcome DirectConnectClient::AllocatePublicVirtualInterface(
    const AllocatePublicVirtualInterfaceRequest& request) const {
  return AllocatePublicVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AllocateTransitVirtualInterfaceOutcome DirectConnectClient::AllocateTransitVirtualInterface(
    const AllocateTransitVirtualInterfaceRequest& request) const {
  return AllocateTransitVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateConnectionWithLagOutcome DirectConnectClient::AssociateConnectionWithLag(const AssociateConnectionWithLagRequest& request) const {
  return AssociateConnectionWithLagOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateHostedConnectionOutcome DirectConnectClient::AssociateHostedConnection(const AssociateHostedConnectionRequest& request) const {
  return AssociateHostedConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateMacSecKeyOutcome DirectConnectClient::AssociateMacSecKey(const AssociateMacSecKeyRequest& request) const {
  return AssociateMacSecKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateVirtualInterfaceOutcome DirectConnectClient::AssociateVirtualInterface(const AssociateVirtualInterfaceRequest& request) const {
  return AssociateVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmConnectionOutcome DirectConnectClient::ConfirmConnection(const ConfirmConnectionRequest& request) const {
  return ConfirmConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmCustomerAgreementOutcome DirectConnectClient::ConfirmCustomerAgreement(const ConfirmCustomerAgreementRequest& request) const {
  return ConfirmCustomerAgreementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmPrivateVirtualInterfaceOutcome DirectConnectClient::ConfirmPrivateVirtualInterface(
    const ConfirmPrivateVirtualInterfaceRequest& request) const {
  return ConfirmPrivateVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmPublicVirtualInterfaceOutcome DirectConnectClient::ConfirmPublicVirtualInterface(
    const ConfirmPublicVirtualInterfaceRequest& request) const {
  return ConfirmPublicVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmTransitVirtualInterfaceOutcome DirectConnectClient::ConfirmTransitVirtualInterface(
    const ConfirmTransitVirtualInterfaceRequest& request) const {
  return ConfirmTransitVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBGPPeerOutcome DirectConnectClient::CreateBGPPeer(const CreateBGPPeerRequest& request) const {
  return CreateBGPPeerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionOutcome DirectConnectClient::CreateConnection(const CreateConnectionRequest& request) const {
  return CreateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDirectConnectGatewayOutcome DirectConnectClient::CreateDirectConnectGateway(const CreateDirectConnectGatewayRequest& request) const {
  return CreateDirectConnectGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDirectConnectGatewayAssociationOutcome DirectConnectClient::CreateDirectConnectGatewayAssociation(
    const CreateDirectConnectGatewayAssociationRequest& request) const {
  return CreateDirectConnectGatewayAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDirectConnectGatewayAssociationProposalOutcome DirectConnectClient::CreateDirectConnectGatewayAssociationProposal(
    const CreateDirectConnectGatewayAssociationProposalRequest& request) const {
  return CreateDirectConnectGatewayAssociationProposalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInterconnectOutcome DirectConnectClient::CreateInterconnect(const CreateInterconnectRequest& request) const {
  return CreateInterconnectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLagOutcome DirectConnectClient::CreateLag(const CreateLagRequest& request) const {
  return CreateLagOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePrivateVirtualInterfaceOutcome DirectConnectClient::CreatePrivateVirtualInterface(
    const CreatePrivateVirtualInterfaceRequest& request) const {
  return CreatePrivateVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePublicVirtualInterfaceOutcome DirectConnectClient::CreatePublicVirtualInterface(
    const CreatePublicVirtualInterfaceRequest& request) const {
  return CreatePublicVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTransitVirtualInterfaceOutcome DirectConnectClient::CreateTransitVirtualInterface(
    const CreateTransitVirtualInterfaceRequest& request) const {
  return CreateTransitVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBGPPeerOutcome DirectConnectClient::DeleteBGPPeer(const DeleteBGPPeerRequest& request) const {
  return DeleteBGPPeerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionOutcome DirectConnectClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  return DeleteConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDirectConnectGatewayOutcome DirectConnectClient::DeleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest& request) const {
  return DeleteDirectConnectGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDirectConnectGatewayAssociationOutcome DirectConnectClient::DeleteDirectConnectGatewayAssociation(
    const DeleteDirectConnectGatewayAssociationRequest& request) const {
  return DeleteDirectConnectGatewayAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDirectConnectGatewayAssociationProposalOutcome DirectConnectClient::DeleteDirectConnectGatewayAssociationProposal(
    const DeleteDirectConnectGatewayAssociationProposalRequest& request) const {
  return DeleteDirectConnectGatewayAssociationProposalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInterconnectOutcome DirectConnectClient::DeleteInterconnect(const DeleteInterconnectRequest& request) const {
  return DeleteInterconnectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLagOutcome DirectConnectClient::DeleteLag(const DeleteLagRequest& request) const {
  return DeleteLagOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVirtualInterfaceOutcome DirectConnectClient::DeleteVirtualInterface(const DeleteVirtualInterfaceRequest& request) const {
  return DeleteVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectionsOutcome DirectConnectClient::DescribeConnections(const DescribeConnectionsRequest& request) const {
  return DescribeConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomerMetadataOutcome DirectConnectClient::DescribeCustomerMetadata(const DescribeCustomerMetadataRequest& request) const {
  return DescribeCustomerMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDirectConnectGatewayAssociationProposalsOutcome DirectConnectClient::DescribeDirectConnectGatewayAssociationProposals(
    const DescribeDirectConnectGatewayAssociationProposalsRequest& request) const {
  return DescribeDirectConnectGatewayAssociationProposalsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDirectConnectGatewayAssociationsOutcome DirectConnectClient::DescribeDirectConnectGatewayAssociations(
    const DescribeDirectConnectGatewayAssociationsRequest& request) const {
  return DescribeDirectConnectGatewayAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDirectConnectGatewayAttachmentsOutcome DirectConnectClient::DescribeDirectConnectGatewayAttachments(
    const DescribeDirectConnectGatewayAttachmentsRequest& request) const {
  return DescribeDirectConnectGatewayAttachmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDirectConnectGatewaysOutcome DirectConnectClient::DescribeDirectConnectGateways(
    const DescribeDirectConnectGatewaysRequest& request) const {
  return DescribeDirectConnectGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHostedConnectionsOutcome DirectConnectClient::DescribeHostedConnections(const DescribeHostedConnectionsRequest& request) const {
  return DescribeHostedConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInterconnectsOutcome DirectConnectClient::DescribeInterconnects(const DescribeInterconnectsRequest& request) const {
  return DescribeInterconnectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLagsOutcome DirectConnectClient::DescribeLags(const DescribeLagsRequest& request) const {
  return DescribeLagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoaOutcome DirectConnectClient::DescribeLoa(const DescribeLoaRequest& request) const {
  return DescribeLoaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationsOutcome DirectConnectClient::DescribeLocations(const DescribeLocationsRequest& request) const {
  return DescribeLocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRouterConfigurationOutcome DirectConnectClient::DescribeRouterConfiguration(
    const DescribeRouterConfigurationRequest& request) const {
  return DescribeRouterConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTagsOutcome DirectConnectClient::DescribeTags(const DescribeTagsRequest& request) const {
  return DescribeTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVirtualGatewaysOutcome DirectConnectClient::DescribeVirtualGateways(const DescribeVirtualGatewaysRequest& request) const {
  return DescribeVirtualGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVirtualInterfacesOutcome DirectConnectClient::DescribeVirtualInterfaces(const DescribeVirtualInterfacesRequest& request) const {
  return DescribeVirtualInterfacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateConnectionFromLagOutcome DirectConnectClient::DisassociateConnectionFromLag(
    const DisassociateConnectionFromLagRequest& request) const {
  return DisassociateConnectionFromLagOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateMacSecKeyOutcome DirectConnectClient::DisassociateMacSecKey(const DisassociateMacSecKeyRequest& request) const {
  return DisassociateMacSecKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVirtualInterfaceTestHistoryOutcome DirectConnectClient::ListVirtualInterfaceTestHistory(
    const ListVirtualInterfaceTestHistoryRequest& request) const {
  return ListVirtualInterfaceTestHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartBgpFailoverTestOutcome DirectConnectClient::StartBgpFailoverTest(const StartBgpFailoverTestRequest& request) const {
  return StartBgpFailoverTestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopBgpFailoverTestOutcome DirectConnectClient::StopBgpFailoverTest(const StopBgpFailoverTestRequest& request) const {
  return StopBgpFailoverTestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome DirectConnectClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome DirectConnectClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectionOutcome DirectConnectClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  return UpdateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDirectConnectGatewayOutcome DirectConnectClient::UpdateDirectConnectGateway(const UpdateDirectConnectGatewayRequest& request) const {
  return UpdateDirectConnectGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDirectConnectGatewayAssociationOutcome DirectConnectClient::UpdateDirectConnectGatewayAssociation(
    const UpdateDirectConnectGatewayAssociationRequest& request) const {
  return UpdateDirectConnectGatewayAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLagOutcome DirectConnectClient::UpdateLag(const UpdateLagRequest& request) const {
  return UpdateLagOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVirtualInterfaceAttributesOutcome DirectConnectClient::UpdateVirtualInterfaceAttributes(
    const UpdateVirtualInterfaceAttributesRequest& request) const {
  return UpdateVirtualInterfaceAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
