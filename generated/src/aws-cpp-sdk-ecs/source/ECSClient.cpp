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
#include <aws/ecs/model/CreateExpressGatewayServiceRequest.h>
#include <aws/ecs/model/CreateServiceRequest.h>
#include <aws/ecs/model/CreateTaskSetRequest.h>
#include <aws/ecs/model/DeleteAccountSettingRequest.h>
#include <aws/ecs/model/DeleteAttributesRequest.h>
#include <aws/ecs/model/DeleteCapacityProviderRequest.h>
#include <aws/ecs/model/DeleteClusterRequest.h>
#include <aws/ecs/model/DeleteExpressGatewayServiceRequest.h>
#include <aws/ecs/model/DeleteServiceRequest.h>
#include <aws/ecs/model/DeleteTaskDefinitionsRequest.h>
#include <aws/ecs/model/DeleteTaskSetRequest.h>
#include <aws/ecs/model/DeregisterContainerInstanceRequest.h>
#include <aws/ecs/model/DeregisterTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeCapacityProvidersRequest.h>
#include <aws/ecs/model/DescribeClustersRequest.h>
#include <aws/ecs/model/DescribeContainerInstancesRequest.h>
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
  return CreateCapacityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome ECSClient::CreateCluster(const CreateClusterRequest& request) const {
  return CreateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExpressGatewayServiceOutcome ECSClient::CreateExpressGatewayService(const CreateExpressGatewayServiceRequest& request) const {
  return CreateExpressGatewayServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceOutcome ECSClient::CreateService(const CreateServiceRequest& request) const {
  return CreateServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTaskSetOutcome ECSClient::CreateTaskSet(const CreateTaskSetRequest& request) const {
  return CreateTaskSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountSettingOutcome ECSClient::DeleteAccountSetting(const DeleteAccountSettingRequest& request) const {
  return DeleteAccountSettingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAttributesOutcome ECSClient::DeleteAttributes(const DeleteAttributesRequest& request) const {
  return DeleteAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCapacityProviderOutcome ECSClient::DeleteCapacityProvider(const DeleteCapacityProviderRequest& request) const {
  return DeleteCapacityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome ECSClient::DeleteCluster(const DeleteClusterRequest& request) const {
  return DeleteClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExpressGatewayServiceOutcome ECSClient::DeleteExpressGatewayService(const DeleteExpressGatewayServiceRequest& request) const {
  return DeleteExpressGatewayServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServiceOutcome ECSClient::DeleteService(const DeleteServiceRequest& request) const {
  return DeleteServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTaskDefinitionsOutcome ECSClient::DeleteTaskDefinitions(const DeleteTaskDefinitionsRequest& request) const {
  return DeleteTaskDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTaskSetOutcome ECSClient::DeleteTaskSet(const DeleteTaskSetRequest& request) const {
  return DeleteTaskSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterContainerInstanceOutcome ECSClient::DeregisterContainerInstance(const DeregisterContainerInstanceRequest& request) const {
  return DeregisterContainerInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterTaskDefinitionOutcome ECSClient::DeregisterTaskDefinition(const DeregisterTaskDefinitionRequest& request) const {
  return DeregisterTaskDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCapacityProvidersOutcome ECSClient::DescribeCapacityProviders(const DescribeCapacityProvidersRequest& request) const {
  return DescribeCapacityProvidersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClustersOutcome ECSClient::DescribeClusters(const DescribeClustersRequest& request) const {
  return DescribeClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeContainerInstancesOutcome ECSClient::DescribeContainerInstances(const DescribeContainerInstancesRequest& request) const {
  return DescribeContainerInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExpressGatewayServiceOutcome ECSClient::DescribeExpressGatewayService(const DescribeExpressGatewayServiceRequest& request) const {
  return DescribeExpressGatewayServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServiceDeploymentsOutcome ECSClient::DescribeServiceDeployments(const DescribeServiceDeploymentsRequest& request) const {
  return DescribeServiceDeploymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServiceRevisionsOutcome ECSClient::DescribeServiceRevisions(const DescribeServiceRevisionsRequest& request) const {
  return DescribeServiceRevisionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServicesOutcome ECSClient::DescribeServices(const DescribeServicesRequest& request) const {
  return DescribeServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTaskDefinitionOutcome ECSClient::DescribeTaskDefinition(const DescribeTaskDefinitionRequest& request) const {
  return DescribeTaskDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTaskSetsOutcome ECSClient::DescribeTaskSets(const DescribeTaskSetsRequest& request) const {
  return DescribeTaskSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTasksOutcome ECSClient::DescribeTasks(const DescribeTasksRequest& request) const {
  return DescribeTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DiscoverPollEndpointOutcome ECSClient::DiscoverPollEndpoint(const DiscoverPollEndpointRequest& request) const {
  return DiscoverPollEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteCommandOutcome ECSClient::ExecuteCommand(const ExecuteCommandRequest& request) const {
  return ExecuteCommandOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTaskProtectionOutcome ECSClient::GetTaskProtection(const GetTaskProtectionRequest& request) const {
  return GetTaskProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountSettingsOutcome ECSClient::ListAccountSettings(const ListAccountSettingsRequest& request) const {
  return ListAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAttributesOutcome ECSClient::ListAttributes(const ListAttributesRequest& request) const {
  return ListAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClustersOutcome ECSClient::ListClusters(const ListClustersRequest& request) const {
  return ListClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContainerInstancesOutcome ECSClient::ListContainerInstances(const ListContainerInstancesRequest& request) const {
  return ListContainerInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceDeploymentsOutcome ECSClient::ListServiceDeployments(const ListServiceDeploymentsRequest& request) const {
  return ListServiceDeploymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServicesOutcome ECSClient::ListServices(const ListServicesRequest& request) const {
  return ListServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServicesByNamespaceOutcome ECSClient::ListServicesByNamespace(const ListServicesByNamespaceRequest& request) const {
  return ListServicesByNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ECSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTaskDefinitionFamiliesOutcome ECSClient::ListTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest& request) const {
  return ListTaskDefinitionFamiliesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTaskDefinitionsOutcome ECSClient::ListTaskDefinitions(const ListTaskDefinitionsRequest& request) const {
  return ListTaskDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTasksOutcome ECSClient::ListTasks(const ListTasksRequest& request) const {
  return ListTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAccountSettingOutcome ECSClient::PutAccountSetting(const PutAccountSettingRequest& request) const {
  return PutAccountSettingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAccountSettingDefaultOutcome ECSClient::PutAccountSettingDefault(const PutAccountSettingDefaultRequest& request) const {
  return PutAccountSettingDefaultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAttributesOutcome ECSClient::PutAttributes(const PutAttributesRequest& request) const {
  return PutAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutClusterCapacityProvidersOutcome ECSClient::PutClusterCapacityProviders(const PutClusterCapacityProvidersRequest& request) const {
  return PutClusterCapacityProvidersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterContainerInstanceOutcome ECSClient::RegisterContainerInstance(const RegisterContainerInstanceRequest& request) const {
  return RegisterContainerInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterTaskDefinitionOutcome ECSClient::RegisterTaskDefinition(const RegisterTaskDefinitionRequest& request) const {
  return RegisterTaskDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RunTaskOutcome ECSClient::RunTask(const RunTaskRequest& request) const {
  return RunTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTaskOutcome ECSClient::StartTask(const StartTaskRequest& request) const {
  return StartTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopServiceDeploymentOutcome ECSClient::StopServiceDeployment(const StopServiceDeploymentRequest& request) const {
  return StopServiceDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTaskOutcome ECSClient::StopTask(const StopTaskRequest& request) const {
  return StopTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitAttachmentStateChangesOutcome ECSClient::SubmitAttachmentStateChanges(const SubmitAttachmentStateChangesRequest& request) const {
  return SubmitAttachmentStateChangesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitContainerStateChangeOutcome ECSClient::SubmitContainerStateChange(const SubmitContainerStateChangeRequest& request) const {
  return SubmitContainerStateChangeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitTaskStateChangeOutcome ECSClient::SubmitTaskStateChange(const SubmitTaskStateChangeRequest& request) const {
  return SubmitTaskStateChangeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ECSClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ECSClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCapacityProviderOutcome ECSClient::UpdateCapacityProvider(const UpdateCapacityProviderRequest& request) const {
  return UpdateCapacityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterOutcome ECSClient::UpdateCluster(const UpdateClusterRequest& request) const {
  return UpdateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterSettingsOutcome ECSClient::UpdateClusterSettings(const UpdateClusterSettingsRequest& request) const {
  return UpdateClusterSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContainerAgentOutcome ECSClient::UpdateContainerAgent(const UpdateContainerAgentRequest& request) const {
  return UpdateContainerAgentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContainerInstancesStateOutcome ECSClient::UpdateContainerInstancesState(const UpdateContainerInstancesStateRequest& request) const {
  return UpdateContainerInstancesStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateExpressGatewayServiceOutcome ECSClient::UpdateExpressGatewayService(const UpdateExpressGatewayServiceRequest& request) const {
  return UpdateExpressGatewayServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceOutcome ECSClient::UpdateService(const UpdateServiceRequest& request) const {
  return UpdateServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServicePrimaryTaskSetOutcome ECSClient::UpdateServicePrimaryTaskSet(const UpdateServicePrimaryTaskSetRequest& request) const {
  return UpdateServicePrimaryTaskSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTaskProtectionOutcome ECSClient::UpdateTaskProtection(const UpdateTaskProtectionRequest& request) const {
  return UpdateTaskProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTaskSetOutcome ECSClient::UpdateTaskSet(const UpdateTaskSetRequest& request) const {
  return UpdateTaskSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
