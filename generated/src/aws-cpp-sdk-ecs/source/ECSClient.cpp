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
#include <aws/ecs/ECSClient.h>
#include <aws/ecs/ECSEndpointProvider.h>
#include <aws/ecs/ECSErrorMarshaller.h>
#include <aws/ecs/model/CreateCapacityProviderRequest.h>
#include <aws/ecs/model/CreateClusterRequest.h>
#include <aws/ecs/model/CreateDaemonRequest.h>
#include <aws/ecs/model/CreateExpressGatewayServiceRequest.h>
#include <aws/ecs/model/CreateServiceRequest.h>
#include <aws/ecs/model/CreateTaskSetRequest.h>
#include <aws/ecs/model/DeleteAccountSettingRequest.h>
#include <aws/ecs/model/DeleteAttributesRequest.h>
#include <aws/ecs/model/DeleteCapacityProviderRequest.h>
#include <aws/ecs/model/DeleteClusterRequest.h>
#include <aws/ecs/model/DeleteDaemonRequest.h>
#include <aws/ecs/model/DeleteDaemonTaskDefinitionRequest.h>
#include <aws/ecs/model/DeleteExpressGatewayServiceRequest.h>
#include <aws/ecs/model/DeleteServiceRequest.h>
#include <aws/ecs/model/DeleteTaskDefinitionsRequest.h>
#include <aws/ecs/model/DeleteTaskSetRequest.h>
#include <aws/ecs/model/DeregisterContainerInstanceRequest.h>
#include <aws/ecs/model/DeregisterTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeCapacityProvidersRequest.h>
#include <aws/ecs/model/DescribeClustersRequest.h>
#include <aws/ecs/model/DescribeContainerInstancesRequest.h>
#include <aws/ecs/model/DescribeDaemonDeploymentsRequest.h>
#include <aws/ecs/model/DescribeDaemonRequest.h>
#include <aws/ecs/model/DescribeDaemonRevisionsRequest.h>
#include <aws/ecs/model/DescribeDaemonTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeExpressGatewayServiceRequest.h>
#include <aws/ecs/model/DescribeServiceDeploymentsRequest.h>
#include <aws/ecs/model/DescribeServiceRevisionsRequest.h>
#include <aws/ecs/model/DescribeServicesRequest.h>
#include <aws/ecs/model/DescribeTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeTaskSetsRequest.h>
#include <aws/ecs/model/DescribeTasksRequest.h>
#include <aws/ecs/model/DiscoverPollEndpointRequest.h>
#include <aws/ecs/model/ExecuteCommandRequest.h>
#include <aws/ecs/model/GetTaskProtectionRequest.h>
#include <aws/ecs/model/ListAccountSettingsRequest.h>
#include <aws/ecs/model/ListAttributesRequest.h>
#include <aws/ecs/model/ListClustersRequest.h>
#include <aws/ecs/model/ListContainerInstancesRequest.h>
#include <aws/ecs/model/ListDaemonDeploymentsRequest.h>
#include <aws/ecs/model/ListDaemonTaskDefinitionsRequest.h>
#include <aws/ecs/model/ListDaemonsRequest.h>
#include <aws/ecs/model/ListServiceDeploymentsRequest.h>
#include <aws/ecs/model/ListServicesByNamespaceRequest.h>
#include <aws/ecs/model/ListServicesRequest.h>
#include <aws/ecs/model/ListTagsForResourceRequest.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesRequest.h>
#include <aws/ecs/model/ListTaskDefinitionsRequest.h>
#include <aws/ecs/model/ListTasksRequest.h>
#include <aws/ecs/model/PutAccountSettingDefaultRequest.h>
#include <aws/ecs/model/PutAccountSettingRequest.h>
#include <aws/ecs/model/PutAttributesRequest.h>
#include <aws/ecs/model/PutClusterCapacityProvidersRequest.h>
#include <aws/ecs/model/RegisterContainerInstanceRequest.h>
#include <aws/ecs/model/RegisterDaemonTaskDefinitionRequest.h>
#include <aws/ecs/model/RegisterTaskDefinitionRequest.h>
#include <aws/ecs/model/RunTaskRequest.h>
#include <aws/ecs/model/StartTaskRequest.h>
#include <aws/ecs/model/StopServiceDeploymentRequest.h>
#include <aws/ecs/model/StopTaskRequest.h>
#include <aws/ecs/model/SubmitAttachmentStateChangesRequest.h>
#include <aws/ecs/model/SubmitContainerStateChangeRequest.h>
#include <aws/ecs/model/SubmitTaskStateChangeRequest.h>
#include <aws/ecs/model/TagResourceRequest.h>
#include <aws/ecs/model/UntagResourceRequest.h>
#include <aws/ecs/model/UpdateCapacityProviderRequest.h>
#include <aws/ecs/model/UpdateClusterRequest.h>
#include <aws/ecs/model/UpdateClusterSettingsRequest.h>
#include <aws/ecs/model/UpdateContainerAgentRequest.h>
#include <aws/ecs/model/UpdateContainerInstancesStateRequest.h>
#include <aws/ecs/model/UpdateDaemonRequest.h>
#include <aws/ecs/model/UpdateExpressGatewayServiceRequest.h>
#include <aws/ecs/model/UpdateServicePrimaryTaskSetRequest.h>
#include <aws/ecs/model/UpdateServiceRequest.h>
#include <aws/ecs/model/UpdateTaskProtectionRequest.h>
#include <aws/ecs/model/UpdateTaskSetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ECS;
using namespace Aws::ECS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ECS {
const char SERVICE_NAME[] = "ecs";
const char ALLOCATION_TAG[] = "ECSClient";
}  // namespace ECS
}  // namespace Aws
const char* ECSClient::GetServiceName() { return SERVICE_NAME; }
const char* ECSClient::GetAllocationTag() { return ALLOCATION_TAG; }

ECSClient::ECSClient(const ECS::ECSClientConfiguration& clientConfiguration, std::shared_ptr<ECSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECSClient::ECSClient(const AWSCredentials& credentials, std::shared_ptr<ECSEndpointProviderBase> endpointProvider,
                     const ECS::ECSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECSClient::ECSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<ECSEndpointProviderBase> endpointProvider, const ECS::ECSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ECSClient::ECSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECSClient::ECSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECSClient::ECSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ECSClient::~ECSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ECSEndpointProviderBase>& ECSClient::accessEndpointProvider() { return m_endpointProvider; }

void ECSClient::init(const ECS::ECSClientConfiguration& config) {
  AWSClient::SetServiceClientName("ECS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ecs");
}

void ECSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ECSClient::InvokeOperationOutcome ECSClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateCapacityProviderOutcome ECSClient::CreateCapacityProvider(const CreateCapacityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCapacityProviderOutcome(result.GetResultWithOwnership())
                            : CreateCapacityProviderOutcome(std::move(result.GetError()));
}

CreateClusterOutcome ECSClient::CreateCluster(const CreateClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterOutcome(result.GetResultWithOwnership()) : CreateClusterOutcome(std::move(result.GetError()));
}

CreateDaemonOutcome ECSClient::CreateDaemon(const CreateDaemonRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDaemonOutcome(result.GetResultWithOwnership()) : CreateDaemonOutcome(std::move(result.GetError()));
}

CreateExpressGatewayServiceOutcome ECSClient::CreateExpressGatewayService(const CreateExpressGatewayServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateExpressGatewayServiceOutcome(result.GetResultWithOwnership())
                            : CreateExpressGatewayServiceOutcome(std::move(result.GetError()));
}

CreateServiceOutcome ECSClient::CreateService(const CreateServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServiceOutcome(result.GetResultWithOwnership()) : CreateServiceOutcome(std::move(result.GetError()));
}

CreateTaskSetOutcome ECSClient::CreateTaskSet(const CreateTaskSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTaskSetOutcome(result.GetResultWithOwnership()) : CreateTaskSetOutcome(std::move(result.GetError()));
}

DeleteAccountSettingOutcome ECSClient::DeleteAccountSetting(const DeleteAccountSettingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccountSettingOutcome(result.GetResultWithOwnership())
                            : DeleteAccountSettingOutcome(std::move(result.GetError()));
}

DeleteAttributesOutcome ECSClient::DeleteAttributes(const DeleteAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAttributesOutcome(result.GetResultWithOwnership())
                            : DeleteAttributesOutcome(std::move(result.GetError()));
}

DeleteCapacityProviderOutcome ECSClient::DeleteCapacityProvider(const DeleteCapacityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCapacityProviderOutcome(result.GetResultWithOwnership())
                            : DeleteCapacityProviderOutcome(std::move(result.GetError()));
}

DeleteClusterOutcome ECSClient::DeleteCluster(const DeleteClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterOutcome(result.GetResultWithOwnership()) : DeleteClusterOutcome(std::move(result.GetError()));
}

DeleteDaemonOutcome ECSClient::DeleteDaemon(const DeleteDaemonRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDaemonOutcome(result.GetResultWithOwnership()) : DeleteDaemonOutcome(std::move(result.GetError()));
}

DeleteDaemonTaskDefinitionOutcome ECSClient::DeleteDaemonTaskDefinition(const DeleteDaemonTaskDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDaemonTaskDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteDaemonTaskDefinitionOutcome(std::move(result.GetError()));
}

DeleteExpressGatewayServiceOutcome ECSClient::DeleteExpressGatewayService(const DeleteExpressGatewayServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteExpressGatewayServiceOutcome(result.GetResultWithOwnership())
                            : DeleteExpressGatewayServiceOutcome(std::move(result.GetError()));
}

DeleteServiceOutcome ECSClient::DeleteService(const DeleteServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceOutcome(result.GetResultWithOwnership()) : DeleteServiceOutcome(std::move(result.GetError()));
}

DeleteTaskDefinitionsOutcome ECSClient::DeleteTaskDefinitions(const DeleteTaskDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTaskDefinitionsOutcome(result.GetResultWithOwnership())
                            : DeleteTaskDefinitionsOutcome(std::move(result.GetError()));
}

DeleteTaskSetOutcome ECSClient::DeleteTaskSet(const DeleteTaskSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTaskSetOutcome(result.GetResultWithOwnership()) : DeleteTaskSetOutcome(std::move(result.GetError()));
}

DeregisterContainerInstanceOutcome ECSClient::DeregisterContainerInstance(const DeregisterContainerInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterContainerInstanceOutcome(result.GetResultWithOwnership())
                            : DeregisterContainerInstanceOutcome(std::move(result.GetError()));
}

DeregisterTaskDefinitionOutcome ECSClient::DeregisterTaskDefinition(const DeregisterTaskDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterTaskDefinitionOutcome(result.GetResultWithOwnership())
                            : DeregisterTaskDefinitionOutcome(std::move(result.GetError()));
}

DescribeCapacityProvidersOutcome ECSClient::DescribeCapacityProviders(const DescribeCapacityProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityProvidersOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityProvidersOutcome(std::move(result.GetError()));
}

DescribeClustersOutcome ECSClient::DescribeClusters(const DescribeClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClustersOutcome(result.GetResultWithOwnership())
                            : DescribeClustersOutcome(std::move(result.GetError()));
}

DescribeContainerInstancesOutcome ECSClient::DescribeContainerInstances(const DescribeContainerInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeContainerInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeContainerInstancesOutcome(std::move(result.GetError()));
}

DescribeDaemonOutcome ECSClient::DescribeDaemon(const DescribeDaemonRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDaemonOutcome(result.GetResultWithOwnership()) : DescribeDaemonOutcome(std::move(result.GetError()));
}

DescribeDaemonDeploymentsOutcome ECSClient::DescribeDaemonDeployments(const DescribeDaemonDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDaemonDeploymentsOutcome(result.GetResultWithOwnership())
                            : DescribeDaemonDeploymentsOutcome(std::move(result.GetError()));
}

DescribeDaemonRevisionsOutcome ECSClient::DescribeDaemonRevisions(const DescribeDaemonRevisionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDaemonRevisionsOutcome(result.GetResultWithOwnership())
                            : DescribeDaemonRevisionsOutcome(std::move(result.GetError()));
}

DescribeDaemonTaskDefinitionOutcome ECSClient::DescribeDaemonTaskDefinition(const DescribeDaemonTaskDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDaemonTaskDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeDaemonTaskDefinitionOutcome(std::move(result.GetError()));
}

DescribeExpressGatewayServiceOutcome ECSClient::DescribeExpressGatewayService(const DescribeExpressGatewayServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExpressGatewayServiceOutcome(result.GetResultWithOwnership())
                            : DescribeExpressGatewayServiceOutcome(std::move(result.GetError()));
}

DescribeServiceDeploymentsOutcome ECSClient::DescribeServiceDeployments(const DescribeServiceDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServiceDeploymentsOutcome(result.GetResultWithOwnership())
                            : DescribeServiceDeploymentsOutcome(std::move(result.GetError()));
}

DescribeServiceRevisionsOutcome ECSClient::DescribeServiceRevisions(const DescribeServiceRevisionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServiceRevisionsOutcome(result.GetResultWithOwnership())
                            : DescribeServiceRevisionsOutcome(std::move(result.GetError()));
}

DescribeServicesOutcome ECSClient::DescribeServices(const DescribeServicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServicesOutcome(result.GetResultWithOwnership())
                            : DescribeServicesOutcome(std::move(result.GetError()));
}

DescribeTaskDefinitionOutcome ECSClient::DescribeTaskDefinition(const DescribeTaskDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTaskDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeTaskDefinitionOutcome(std::move(result.GetError()));
}

DescribeTaskSetsOutcome ECSClient::DescribeTaskSets(const DescribeTaskSetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTaskSetsOutcome(result.GetResultWithOwnership())
                            : DescribeTaskSetsOutcome(std::move(result.GetError()));
}

DescribeTasksOutcome ECSClient::DescribeTasks(const DescribeTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTasksOutcome(result.GetResultWithOwnership()) : DescribeTasksOutcome(std::move(result.GetError()));
}

DiscoverPollEndpointOutcome ECSClient::DiscoverPollEndpoint(const DiscoverPollEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DiscoverPollEndpointOutcome(result.GetResultWithOwnership())
                            : DiscoverPollEndpointOutcome(std::move(result.GetError()));
}

ExecuteCommandOutcome ECSClient::ExecuteCommand(const ExecuteCommandRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteCommandOutcome(result.GetResultWithOwnership()) : ExecuteCommandOutcome(std::move(result.GetError()));
}

GetTaskProtectionOutcome ECSClient::GetTaskProtection(const GetTaskProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTaskProtectionOutcome(result.GetResultWithOwnership())
                            : GetTaskProtectionOutcome(std::move(result.GetError()));
}

ListAccountSettingsOutcome ECSClient::ListAccountSettings(const ListAccountSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountSettingsOutcome(result.GetResultWithOwnership())
                            : ListAccountSettingsOutcome(std::move(result.GetError()));
}

ListAttributesOutcome ECSClient::ListAttributes(const ListAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAttributesOutcome(result.GetResultWithOwnership()) : ListAttributesOutcome(std::move(result.GetError()));
}

ListClustersOutcome ECSClient::ListClusters(const ListClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListClustersOutcome(result.GetResultWithOwnership()) : ListClustersOutcome(std::move(result.GetError()));
}

ListContainerInstancesOutcome ECSClient::ListContainerInstances(const ListContainerInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContainerInstancesOutcome(result.GetResultWithOwnership())
                            : ListContainerInstancesOutcome(std::move(result.GetError()));
}

ListDaemonDeploymentsOutcome ECSClient::ListDaemonDeployments(const ListDaemonDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDaemonDeploymentsOutcome(result.GetResultWithOwnership())
                            : ListDaemonDeploymentsOutcome(std::move(result.GetError()));
}

ListDaemonTaskDefinitionsOutcome ECSClient::ListDaemonTaskDefinitions(const ListDaemonTaskDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDaemonTaskDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListDaemonTaskDefinitionsOutcome(std::move(result.GetError()));
}

ListDaemonsOutcome ECSClient::ListDaemons(const ListDaemonsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDaemonsOutcome(result.GetResultWithOwnership()) : ListDaemonsOutcome(std::move(result.GetError()));
}

ListServiceDeploymentsOutcome ECSClient::ListServiceDeployments(const ListServiceDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServiceDeploymentsOutcome(result.GetResultWithOwnership())
                            : ListServiceDeploymentsOutcome(std::move(result.GetError()));
}

ListServicesOutcome ECSClient::ListServices(const ListServicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServicesOutcome(result.GetResultWithOwnership()) : ListServicesOutcome(std::move(result.GetError()));
}

ListServicesByNamespaceOutcome ECSClient::ListServicesByNamespace(const ListServicesByNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServicesByNamespaceOutcome(result.GetResultWithOwnership())
                            : ListServicesByNamespaceOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ECSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTaskDefinitionFamiliesOutcome ECSClient::ListTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTaskDefinitionFamiliesOutcome(result.GetResultWithOwnership())
                            : ListTaskDefinitionFamiliesOutcome(std::move(result.GetError()));
}

ListTaskDefinitionsOutcome ECSClient::ListTaskDefinitions(const ListTaskDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTaskDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListTaskDefinitionsOutcome(std::move(result.GetError()));
}

ListTasksOutcome ECSClient::ListTasks(const ListTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTasksOutcome(result.GetResultWithOwnership()) : ListTasksOutcome(std::move(result.GetError()));
}

PutAccountSettingOutcome ECSClient::PutAccountSetting(const PutAccountSettingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAccountSettingOutcome(result.GetResultWithOwnership())
                            : PutAccountSettingOutcome(std::move(result.GetError()));
}

PutAccountSettingDefaultOutcome ECSClient::PutAccountSettingDefault(const PutAccountSettingDefaultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAccountSettingDefaultOutcome(result.GetResultWithOwnership())
                            : PutAccountSettingDefaultOutcome(std::move(result.GetError()));
}

PutAttributesOutcome ECSClient::PutAttributes(const PutAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAttributesOutcome(result.GetResultWithOwnership()) : PutAttributesOutcome(std::move(result.GetError()));
}

PutClusterCapacityProvidersOutcome ECSClient::PutClusterCapacityProviders(const PutClusterCapacityProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutClusterCapacityProvidersOutcome(result.GetResultWithOwnership())
                            : PutClusterCapacityProvidersOutcome(std::move(result.GetError()));
}

RegisterContainerInstanceOutcome ECSClient::RegisterContainerInstance(const RegisterContainerInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterContainerInstanceOutcome(result.GetResultWithOwnership())
                            : RegisterContainerInstanceOutcome(std::move(result.GetError()));
}

RegisterDaemonTaskDefinitionOutcome ECSClient::RegisterDaemonTaskDefinition(const RegisterDaemonTaskDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterDaemonTaskDefinitionOutcome(result.GetResultWithOwnership())
                            : RegisterDaemonTaskDefinitionOutcome(std::move(result.GetError()));
}

RegisterTaskDefinitionOutcome ECSClient::RegisterTaskDefinition(const RegisterTaskDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterTaskDefinitionOutcome(result.GetResultWithOwnership())
                            : RegisterTaskDefinitionOutcome(std::move(result.GetError()));
}

RunTaskOutcome ECSClient::RunTask(const RunTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RunTaskOutcome(result.GetResultWithOwnership()) : RunTaskOutcome(std::move(result.GetError()));
}

StartTaskOutcome ECSClient::StartTask(const StartTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTaskOutcome(result.GetResultWithOwnership()) : StartTaskOutcome(std::move(result.GetError()));
}

StopServiceDeploymentOutcome ECSClient::StopServiceDeployment(const StopServiceDeploymentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopServiceDeploymentOutcome(result.GetResultWithOwnership())
                            : StopServiceDeploymentOutcome(std::move(result.GetError()));
}

StopTaskOutcome ECSClient::StopTask(const StopTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTaskOutcome(result.GetResultWithOwnership()) : StopTaskOutcome(std::move(result.GetError()));
}

SubmitAttachmentStateChangesOutcome ECSClient::SubmitAttachmentStateChanges(const SubmitAttachmentStateChangesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SubmitAttachmentStateChangesOutcome(result.GetResultWithOwnership())
                            : SubmitAttachmentStateChangesOutcome(std::move(result.GetError()));
}

SubmitContainerStateChangeOutcome ECSClient::SubmitContainerStateChange(const SubmitContainerStateChangeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SubmitContainerStateChangeOutcome(result.GetResultWithOwnership())
                            : SubmitContainerStateChangeOutcome(std::move(result.GetError()));
}

SubmitTaskStateChangeOutcome ECSClient::SubmitTaskStateChange(const SubmitTaskStateChangeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SubmitTaskStateChangeOutcome(result.GetResultWithOwnership())
                            : SubmitTaskStateChangeOutcome(std::move(result.GetError()));
}

TagResourceOutcome ECSClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ECSClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCapacityProviderOutcome ECSClient::UpdateCapacityProvider(const UpdateCapacityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCapacityProviderOutcome(result.GetResultWithOwnership())
                            : UpdateCapacityProviderOutcome(std::move(result.GetError()));
}

UpdateClusterOutcome ECSClient::UpdateCluster(const UpdateClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClusterOutcome(result.GetResultWithOwnership()) : UpdateClusterOutcome(std::move(result.GetError()));
}

UpdateClusterSettingsOutcome ECSClient::UpdateClusterSettings(const UpdateClusterSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClusterSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateClusterSettingsOutcome(std::move(result.GetError()));
}

UpdateContainerAgentOutcome ECSClient::UpdateContainerAgent(const UpdateContainerAgentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContainerAgentOutcome(result.GetResultWithOwnership())
                            : UpdateContainerAgentOutcome(std::move(result.GetError()));
}

UpdateContainerInstancesStateOutcome ECSClient::UpdateContainerInstancesState(const UpdateContainerInstancesStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContainerInstancesStateOutcome(result.GetResultWithOwnership())
                            : UpdateContainerInstancesStateOutcome(std::move(result.GetError()));
}

UpdateDaemonOutcome ECSClient::UpdateDaemon(const UpdateDaemonRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDaemonOutcome(result.GetResultWithOwnership()) : UpdateDaemonOutcome(std::move(result.GetError()));
}

UpdateExpressGatewayServiceOutcome ECSClient::UpdateExpressGatewayService(const UpdateExpressGatewayServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateExpressGatewayServiceOutcome(result.GetResultWithOwnership())
                            : UpdateExpressGatewayServiceOutcome(std::move(result.GetError()));
}

UpdateServiceOutcome ECSClient::UpdateService(const UpdateServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServiceOutcome(result.GetResultWithOwnership()) : UpdateServiceOutcome(std::move(result.GetError()));
}

UpdateServicePrimaryTaskSetOutcome ECSClient::UpdateServicePrimaryTaskSet(const UpdateServicePrimaryTaskSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServicePrimaryTaskSetOutcome(result.GetResultWithOwnership())
                            : UpdateServicePrimaryTaskSetOutcome(std::move(result.GetError()));
}

UpdateTaskProtectionOutcome ECSClient::UpdateTaskProtection(const UpdateTaskProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTaskProtectionOutcome(result.GetResultWithOwnership())
                            : UpdateTaskProtectionOutcome(std::move(result.GetError()));
}

UpdateTaskSetOutcome ECSClient::UpdateTaskSet(const UpdateTaskSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTaskSetOutcome(result.GetResultWithOwnership()) : UpdateTaskSetOutcome(std::move(result.GetError()));
}
