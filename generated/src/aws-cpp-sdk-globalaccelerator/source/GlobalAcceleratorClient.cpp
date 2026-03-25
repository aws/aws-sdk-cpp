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
#include <aws/globalaccelerator/GlobalAcceleratorClient.h>
#include <aws/globalaccelerator/GlobalAcceleratorEndpointProvider.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrorMarshaller.h>
#include <aws/globalaccelerator/model/AddCustomRoutingEndpointsRequest.h>
#include <aws/globalaccelerator/model/AddEndpointsRequest.h>
#include <aws/globalaccelerator/model/AdvertiseByoipCidrRequest.h>
#include <aws/globalaccelerator/model/AllowCustomRoutingTrafficRequest.h>
#include <aws/globalaccelerator/model/CreateAcceleratorRequest.h>
#include <aws/globalaccelerator/model/CreateCrossAccountAttachmentRequest.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/CreateEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/CreateListenerRequest.h>
#include <aws/globalaccelerator/model/DeleteAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DeleteCrossAccountAttachmentRequest.h>
#include <aws/globalaccelerator/model/DeleteCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DeleteCustomRoutingEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DeleteCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/DeleteEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DeleteListenerRequest.h>
#include <aws/globalaccelerator/model/DenyCustomRoutingTrafficRequest.h>
#include <aws/globalaccelerator/model/DeprovisionByoipCidrRequest.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DescribeCrossAccountAttachmentRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/DescribeEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DescribeListenerRequest.h>
#include <aws/globalaccelerator/model/ListAcceleratorsRequest.h>
#include <aws/globalaccelerator/model/ListByoipCidrsRequest.h>
#include <aws/globalaccelerator/model/ListCrossAccountAttachmentsRequest.h>
#include <aws/globalaccelerator/model/ListCrossAccountResourceAccountsRequest.h>
#include <aws/globalaccelerator/model/ListCrossAccountResourcesRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingAcceleratorsRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingEndpointGroupsRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingListenersRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsRequest.h>
#include <aws/globalaccelerator/model/ListEndpointGroupsRequest.h>
#include <aws/globalaccelerator/model/ListListenersRequest.h>
#include <aws/globalaccelerator/model/ListTagsForResourceRequest.h>
#include <aws/globalaccelerator/model/ProvisionByoipCidrRequest.h>
#include <aws/globalaccelerator/model/RemoveCustomRoutingEndpointsRequest.h>
#include <aws/globalaccelerator/model/RemoveEndpointsRequest.h>
#include <aws/globalaccelerator/model/TagResourceRequest.h>
#include <aws/globalaccelerator/model/UntagResourceRequest.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorRequest.h>
#include <aws/globalaccelerator/model/UpdateCrossAccountAttachmentRequest.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/UpdateEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/UpdateListenerRequest.h>
#include <aws/globalaccelerator/model/WithdrawByoipCidrRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GlobalAccelerator;
using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace GlobalAccelerator {
const char SERVICE_NAME[] = "globalaccelerator";
const char ALLOCATION_TAG[] = "GlobalAcceleratorClient";
}  // namespace GlobalAccelerator
}  // namespace Aws
const char* GlobalAcceleratorClient::GetServiceName() { return SERVICE_NAME; }
const char* GlobalAcceleratorClient::GetAllocationTag() { return ALLOCATION_TAG; }

GlobalAcceleratorClient::GlobalAcceleratorClient(const GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider,
                                                 const GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider,
                                                 const GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GlobalAcceleratorClient::GlobalAcceleratorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GlobalAcceleratorClient::~GlobalAcceleratorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GlobalAcceleratorEndpointProviderBase>& GlobalAcceleratorClient::accessEndpointProvider() { return m_endpointProvider; }

void GlobalAcceleratorClient::init(const GlobalAccelerator::GlobalAcceleratorClientConfiguration& config) {
  AWSClient::SetServiceClientName("Global Accelerator");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "globalaccelerator");
}

void GlobalAcceleratorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GlobalAcceleratorClient::InvokeOperationOutcome GlobalAcceleratorClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddCustomRoutingEndpointsOutcome GlobalAcceleratorClient::AddCustomRoutingEndpoints(const AddCustomRoutingEndpointsRequest& request) const {
  return AddCustomRoutingEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddEndpointsOutcome GlobalAcceleratorClient::AddEndpoints(const AddEndpointsRequest& request) const {
  return AddEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdvertiseByoipCidrOutcome GlobalAcceleratorClient::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const {
  return AdvertiseByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AllowCustomRoutingTrafficOutcome GlobalAcceleratorClient::AllowCustomRoutingTraffic(const AllowCustomRoutingTrafficRequest& request) const {
  return AllowCustomRoutingTrafficOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAcceleratorOutcome GlobalAcceleratorClient::CreateAccelerator(const CreateAcceleratorRequest& request) const {
  return CreateAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCrossAccountAttachmentOutcome GlobalAcceleratorClient::CreateCrossAccountAttachment(
    const CreateCrossAccountAttachmentRequest& request) const {
  return CreateCrossAccountAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::CreateCustomRoutingAccelerator(
    const CreateCustomRoutingAcceleratorRequest& request) const {
  return CreateCustomRoutingAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup(
    const CreateCustomRoutingEndpointGroupRequest& request) const {
  return CreateCustomRoutingEndpointGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomRoutingListenerOutcome GlobalAcceleratorClient::CreateCustomRoutingListener(
    const CreateCustomRoutingListenerRequest& request) const {
  return CreateCustomRoutingListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEndpointGroupOutcome GlobalAcceleratorClient::CreateEndpointGroup(const CreateEndpointGroupRequest& request) const {
  return CreateEndpointGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateListenerOutcome GlobalAcceleratorClient::CreateListener(const CreateListenerRequest& request) const {
  return CreateListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAcceleratorOutcome GlobalAcceleratorClient::DeleteAccelerator(const DeleteAcceleratorRequest& request) const {
  return DeleteAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCrossAccountAttachmentOutcome GlobalAcceleratorClient::DeleteCrossAccountAttachment(
    const DeleteCrossAccountAttachmentRequest& request) const {
  return DeleteCrossAccountAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DeleteCustomRoutingAccelerator(
    const DeleteCustomRoutingAcceleratorRequest& request) const {
  return DeleteCustomRoutingAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup(
    const DeleteCustomRoutingEndpointGroupRequest& request) const {
  return DeleteCustomRoutingEndpointGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomRoutingListenerOutcome GlobalAcceleratorClient::DeleteCustomRoutingListener(
    const DeleteCustomRoutingListenerRequest& request) const {
  return DeleteCustomRoutingListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEndpointGroupOutcome GlobalAcceleratorClient::DeleteEndpointGroup(const DeleteEndpointGroupRequest& request) const {
  return DeleteEndpointGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteListenerOutcome GlobalAcceleratorClient::DeleteListener(const DeleteListenerRequest& request) const {
  return DeleteListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DenyCustomRoutingTrafficOutcome GlobalAcceleratorClient::DenyCustomRoutingTraffic(const DenyCustomRoutingTrafficRequest& request) const {
  return DenyCustomRoutingTrafficOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeprovisionByoipCidrOutcome GlobalAcceleratorClient::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const {
  return DeprovisionByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAcceleratorOutcome GlobalAcceleratorClient::DescribeAccelerator(const DescribeAcceleratorRequest& request) const {
  return DescribeAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeAcceleratorAttributes(
    const DescribeAcceleratorAttributesRequest& request) const {
  return DescribeAcceleratorAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCrossAccountAttachmentOutcome GlobalAcceleratorClient::DescribeCrossAccountAttachment(
    const DescribeCrossAccountAttachmentRequest& request) const {
  return DescribeCrossAccountAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DescribeCustomRoutingAccelerator(
    const DescribeCustomRoutingAcceleratorRequest& request) const {
  return DescribeCustomRoutingAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes(
    const DescribeCustomRoutingAcceleratorAttributesRequest& request) const {
  return DescribeCustomRoutingAcceleratorAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup(
    const DescribeCustomRoutingEndpointGroupRequest& request) const {
  return DescribeCustomRoutingEndpointGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomRoutingListenerOutcome GlobalAcceleratorClient::DescribeCustomRoutingListener(
    const DescribeCustomRoutingListenerRequest& request) const {
  return DescribeCustomRoutingListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointGroupOutcome GlobalAcceleratorClient::DescribeEndpointGroup(const DescribeEndpointGroupRequest& request) const {
  return DescribeEndpointGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeListenerOutcome GlobalAcceleratorClient::DescribeListener(const DescribeListenerRequest& request) const {
  return DescribeListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAcceleratorsOutcome GlobalAcceleratorClient::ListAccelerators(const ListAcceleratorsRequest& request) const {
  return ListAcceleratorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListByoipCidrsOutcome GlobalAcceleratorClient::ListByoipCidrs(const ListByoipCidrsRequest& request) const {
  return ListByoipCidrsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCrossAccountAttachmentsOutcome GlobalAcceleratorClient::ListCrossAccountAttachments(
    const ListCrossAccountAttachmentsRequest& request) const {
  return ListCrossAccountAttachmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCrossAccountResourceAccountsOutcome GlobalAcceleratorClient::ListCrossAccountResourceAccounts(
    const ListCrossAccountResourceAccountsRequest& request) const {
  return ListCrossAccountResourceAccountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCrossAccountResourcesOutcome GlobalAcceleratorClient::ListCrossAccountResources(const ListCrossAccountResourcesRequest& request) const {
  return ListCrossAccountResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomRoutingAcceleratorsOutcome GlobalAcceleratorClient::ListCustomRoutingAccelerators(
    const ListCustomRoutingAcceleratorsRequest& request) const {
  return ListCustomRoutingAcceleratorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomRoutingEndpointGroupsOutcome GlobalAcceleratorClient::ListCustomRoutingEndpointGroups(
    const ListCustomRoutingEndpointGroupsRequest& request) const {
  return ListCustomRoutingEndpointGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomRoutingListenersOutcome GlobalAcceleratorClient::ListCustomRoutingListeners(
    const ListCustomRoutingListenersRequest& request) const {
  return ListCustomRoutingListenersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomRoutingPortMappingsOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappings(
    const ListCustomRoutingPortMappingsRequest& request) const {
  return ListCustomRoutingPortMappingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomRoutingPortMappingsByDestinationOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination(
    const ListCustomRoutingPortMappingsByDestinationRequest& request) const {
  return ListCustomRoutingPortMappingsByDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEndpointGroupsOutcome GlobalAcceleratorClient::ListEndpointGroups(const ListEndpointGroupsRequest& request) const {
  return ListEndpointGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListListenersOutcome GlobalAcceleratorClient::ListListeners(const ListListenersRequest& request) const {
  return ListListenersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome GlobalAcceleratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ProvisionByoipCidrOutcome GlobalAcceleratorClient::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const {
  return ProvisionByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveCustomRoutingEndpointsOutcome GlobalAcceleratorClient::RemoveCustomRoutingEndpoints(
    const RemoveCustomRoutingEndpointsRequest& request) const {
  return RemoveCustomRoutingEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveEndpointsOutcome GlobalAcceleratorClient::RemoveEndpoints(const RemoveEndpointsRequest& request) const {
  return RemoveEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome GlobalAcceleratorClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome GlobalAcceleratorClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAcceleratorOutcome GlobalAcceleratorClient::UpdateAccelerator(const UpdateAcceleratorRequest& request) const {
  return UpdateAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateAcceleratorAttributes(
    const UpdateAcceleratorAttributesRequest& request) const {
  return UpdateAcceleratorAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCrossAccountAttachmentOutcome GlobalAcceleratorClient::UpdateCrossAccountAttachment(
    const UpdateCrossAccountAttachmentRequest& request) const {
  return UpdateCrossAccountAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::UpdateCustomRoutingAccelerator(
    const UpdateCustomRoutingAcceleratorRequest& request) const {
  return UpdateCustomRoutingAcceleratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes(
    const UpdateCustomRoutingAcceleratorAttributesRequest& request) const {
  return UpdateCustomRoutingAcceleratorAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCustomRoutingListenerOutcome GlobalAcceleratorClient::UpdateCustomRoutingListener(
    const UpdateCustomRoutingListenerRequest& request) const {
  return UpdateCustomRoutingListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEndpointGroupOutcome GlobalAcceleratorClient::UpdateEndpointGroup(const UpdateEndpointGroupRequest& request) const {
  return UpdateEndpointGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateListenerOutcome GlobalAcceleratorClient::UpdateListener(const UpdateListenerRequest& request) const {
  return UpdateListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

WithdrawByoipCidrOutcome GlobalAcceleratorClient::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const {
  return WithdrawByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
