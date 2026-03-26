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
#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/EMREndpointProvider.h>
#include <aws/elasticmapreduce/EMRErrorMarshaller.h>
#include <aws/elasticmapreduce/model/AddInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/AddInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/AddJobFlowStepsRequest.h>
#include <aws/elasticmapreduce/model/AddTagsRequest.h>
#include <aws/elasticmapreduce/model/CancelStepsRequest.h>
#include <aws/elasticmapreduce/model/CreatePersistentAppUIRequest.h>
#include <aws/elasticmapreduce/model/CreateSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/CreateStudioRequest.h>
#include <aws/elasticmapreduce/model/CreateStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/DeleteSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DeleteStudioRequest.h>
#include <aws/elasticmapreduce/model/DeleteStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/DescribeClusterRequest.h>
#include <aws/elasticmapreduce/model/DescribeNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/DescribePersistentAppUIRequest.h>
#include <aws/elasticmapreduce/model/DescribeReleaseLabelRequest.h>
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/elasticmapreduce/model/DescribeStudioRequest.h>
#include <aws/elasticmapreduce/model/GetAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/GetClusterSessionCredentialsRequest.h>
#include <aws/elasticmapreduce/model/GetManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/GetOnClusterAppUIPresignedURLRequest.h>
#include <aws/elasticmapreduce/model/GetPersistentAppUIPresignedURLRequest.h>
#include <aws/elasticmapreduce/model/GetStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsRequest.h>
#include <aws/elasticmapreduce/model/ListClustersRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/ListInstancesRequest.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsRequest.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsRequest.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsRequest.h>
#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsRequest.h>
#include <aws/elasticmapreduce/model/ListStudiosRequest.h>
#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesRequest.h>
#include <aws/elasticmapreduce/model/ModifyClusterRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/PutAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/PutBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/PutManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveTagsRequest.h>
#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/elasticmapreduce/model/SetKeepJobFlowAliveWhenNoStepsRequest.h>
#include <aws/elasticmapreduce/model/SetTerminationProtectionRequest.h>
#include <aws/elasticmapreduce/model/SetUnhealthyNodeReplacementRequest.h>
#include <aws/elasticmapreduce/model/SetVisibleToAllUsersRequest.h>
#include <aws/elasticmapreduce/model/StartNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/StopNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/TerminateJobFlowsRequest.h>
#include <aws/elasticmapreduce/model/UpdateStudioRequest.h>
#include <aws/elasticmapreduce/model/UpdateStudioSessionMappingRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMR;
using namespace Aws::EMR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EMR {
const char SERVICE_NAME[] = "elasticmapreduce";
const char ALLOCATION_TAG[] = "EMRClient";
}  // namespace EMR
}  // namespace Aws
const char* EMRClient::GetServiceName() { return SERVICE_NAME; }
const char* EMRClient::GetAllocationTag() { return ALLOCATION_TAG; }

EMRClient::EMRClient(const EMR::EMRClientConfiguration& clientConfiguration, std::shared_ptr<EMREndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials, std::shared_ptr<EMREndpointProviderBase> endpointProvider,
                     const EMR::EMRClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EMREndpointProviderBase> endpointProvider, const EMR::EMRClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EMRClient::EMRClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EMRClient::~EMRClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EMREndpointProviderBase>& EMRClient::accessEndpointProvider() { return m_endpointProvider; }

void EMRClient::init(const EMR::EMRClientConfiguration& config) {
  AWSClient::SetServiceClientName("EMR");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "elasticmapreduce");
}

void EMRClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EMRClient::InvokeOperationOutcome EMRClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddInstanceFleetOutcome EMRClient::AddInstanceFleet(const AddInstanceFleetRequest& request) const {
  return AddInstanceFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddInstanceGroupsOutcome EMRClient::AddInstanceGroups(const AddInstanceGroupsRequest& request) const {
  return AddInstanceGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddJobFlowStepsOutcome EMRClient::AddJobFlowSteps(const AddJobFlowStepsRequest& request) const {
  return AddJobFlowStepsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsOutcome EMRClient::AddTags(const AddTagsRequest& request) const {
  return AddTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelStepsOutcome EMRClient::CancelSteps(const CancelStepsRequest& request) const {
  return CancelStepsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePersistentAppUIOutcome EMRClient::CreatePersistentAppUI(const CreatePersistentAppUIRequest& request) const {
  return CreatePersistentAppUIOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecurityConfigurationOutcome EMRClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const {
  return CreateSecurityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStudioOutcome EMRClient::CreateStudio(const CreateStudioRequest& request) const {
  return CreateStudioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStudioSessionMappingOutcome EMRClient::CreateStudioSessionMapping(const CreateStudioSessionMappingRequest& request) const {
  return CreateStudioSessionMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSecurityConfigurationOutcome EMRClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const {
  return DeleteSecurityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStudioOutcome EMRClient::DeleteStudio(const DeleteStudioRequest& request) const {
  return DeleteStudioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStudioSessionMappingOutcome EMRClient::DeleteStudioSessionMapping(const DeleteStudioSessionMappingRequest& request) const {
  return DeleteStudioSessionMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClusterOutcome EMRClient::DescribeCluster(const DescribeClusterRequest& request) const {
  return DescribeClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNotebookExecutionOutcome EMRClient::DescribeNotebookExecution(const DescribeNotebookExecutionRequest& request) const {
  return DescribeNotebookExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePersistentAppUIOutcome EMRClient::DescribePersistentAppUI(const DescribePersistentAppUIRequest& request) const {
  return DescribePersistentAppUIOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReleaseLabelOutcome EMRClient::DescribeReleaseLabel(const DescribeReleaseLabelRequest& request) const {
  return DescribeReleaseLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecurityConfigurationOutcome EMRClient::DescribeSecurityConfiguration(const DescribeSecurityConfigurationRequest& request) const {
  return DescribeSecurityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStepOutcome EMRClient::DescribeStep(const DescribeStepRequest& request) const {
  return DescribeStepOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStudioOutcome EMRClient::DescribeStudio(const DescribeStudioRequest& request) const {
  return DescribeStudioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAutoTerminationPolicyOutcome EMRClient::GetAutoTerminationPolicy(const GetAutoTerminationPolicyRequest& request) const {
  return GetAutoTerminationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBlockPublicAccessConfigurationOutcome EMRClient::GetBlockPublicAccessConfiguration(
    const GetBlockPublicAccessConfigurationRequest& request) const {
  return GetBlockPublicAccessConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetClusterSessionCredentialsOutcome EMRClient::GetClusterSessionCredentials(const GetClusterSessionCredentialsRequest& request) const {
  return GetClusterSessionCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetManagedScalingPolicyOutcome EMRClient::GetManagedScalingPolicy(const GetManagedScalingPolicyRequest& request) const {
  return GetManagedScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOnClusterAppUIPresignedURLOutcome EMRClient::GetOnClusterAppUIPresignedURL(const GetOnClusterAppUIPresignedURLRequest& request) const {
  return GetOnClusterAppUIPresignedURLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPersistentAppUIPresignedURLOutcome EMRClient::GetPersistentAppUIPresignedURL(
    const GetPersistentAppUIPresignedURLRequest& request) const {
  return GetPersistentAppUIPresignedURLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetStudioSessionMappingOutcome EMRClient::GetStudioSessionMapping(const GetStudioSessionMappingRequest& request) const {
  return GetStudioSessionMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBootstrapActionsOutcome EMRClient::ListBootstrapActions(const ListBootstrapActionsRequest& request) const {
  return ListBootstrapActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClustersOutcome EMRClient::ListClusters(const ListClustersRequest& request) const {
  return ListClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInstanceFleetsOutcome EMRClient::ListInstanceFleets(const ListInstanceFleetsRequest& request) const {
  return ListInstanceFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInstanceGroupsOutcome EMRClient::ListInstanceGroups(const ListInstanceGroupsRequest& request) const {
  return ListInstanceGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInstancesOutcome EMRClient::ListInstances(const ListInstancesRequest& request) const {
  return ListInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNotebookExecutionsOutcome EMRClient::ListNotebookExecutions(const ListNotebookExecutionsRequest& request) const {
  return ListNotebookExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReleaseLabelsOutcome EMRClient::ListReleaseLabels(const ListReleaseLabelsRequest& request) const {
  return ListReleaseLabelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSecurityConfigurationsOutcome EMRClient::ListSecurityConfigurations(const ListSecurityConfigurationsRequest& request) const {
  return ListSecurityConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStepsOutcome EMRClient::ListSteps(const ListStepsRequest& request) const {
  return ListStepsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStudioSessionMappingsOutcome EMRClient::ListStudioSessionMappings(const ListStudioSessionMappingsRequest& request) const {
  return ListStudioSessionMappingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStudiosOutcome EMRClient::ListStudios(const ListStudiosRequest& request) const {
  return ListStudiosOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSupportedInstanceTypesOutcome EMRClient::ListSupportedInstanceTypes(const ListSupportedInstanceTypesRequest& request) const {
  return ListSupportedInstanceTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyClusterOutcome EMRClient::ModifyCluster(const ModifyClusterRequest& request) const {
  return ModifyClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyInstanceFleetOutcome EMRClient::ModifyInstanceFleet(const ModifyInstanceFleetRequest& request) const {
  return ModifyInstanceFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyInstanceGroupsOutcome EMRClient::ModifyInstanceGroups(const ModifyInstanceGroupsRequest& request) const {
  return ModifyInstanceGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAutoScalingPolicyOutcome EMRClient::PutAutoScalingPolicy(const PutAutoScalingPolicyRequest& request) const {
  return PutAutoScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAutoTerminationPolicyOutcome EMRClient::PutAutoTerminationPolicy(const PutAutoTerminationPolicyRequest& request) const {
  return PutAutoTerminationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutBlockPublicAccessConfigurationOutcome EMRClient::PutBlockPublicAccessConfiguration(
    const PutBlockPublicAccessConfigurationRequest& request) const {
  return PutBlockPublicAccessConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutManagedScalingPolicyOutcome EMRClient::PutManagedScalingPolicy(const PutManagedScalingPolicyRequest& request) const {
  return PutManagedScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAutoScalingPolicyOutcome EMRClient::RemoveAutoScalingPolicy(const RemoveAutoScalingPolicyRequest& request) const {
  return RemoveAutoScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAutoTerminationPolicyOutcome EMRClient::RemoveAutoTerminationPolicy(const RemoveAutoTerminationPolicyRequest& request) const {
  return RemoveAutoTerminationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveManagedScalingPolicyOutcome EMRClient::RemoveManagedScalingPolicy(const RemoveManagedScalingPolicyRequest& request) const {
  return RemoveManagedScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsOutcome EMRClient::RemoveTags(const RemoveTagsRequest& request) const {
  return RemoveTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RunJobFlowOutcome EMRClient::RunJobFlow(const RunJobFlowRequest& request) const {
  return RunJobFlowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetKeepJobFlowAliveWhenNoStepsOutcome EMRClient::SetKeepJobFlowAliveWhenNoSteps(
    const SetKeepJobFlowAliveWhenNoStepsRequest& request) const {
  return SetKeepJobFlowAliveWhenNoStepsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetTerminationProtectionOutcome EMRClient::SetTerminationProtection(const SetTerminationProtectionRequest& request) const {
  return SetTerminationProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetUnhealthyNodeReplacementOutcome EMRClient::SetUnhealthyNodeReplacement(const SetUnhealthyNodeReplacementRequest& request) const {
  return SetUnhealthyNodeReplacementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetVisibleToAllUsersOutcome EMRClient::SetVisibleToAllUsers(const SetVisibleToAllUsersRequest& request) const {
  return SetVisibleToAllUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNotebookExecutionOutcome EMRClient::StartNotebookExecution(const StartNotebookExecutionRequest& request) const {
  return StartNotebookExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopNotebookExecutionOutcome EMRClient::StopNotebookExecution(const StopNotebookExecutionRequest& request) const {
  return StopNotebookExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateJobFlowsOutcome EMRClient::TerminateJobFlows(const TerminateJobFlowsRequest& request) const {
  return TerminateJobFlowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStudioOutcome EMRClient::UpdateStudio(const UpdateStudioRequest& request) const {
  return UpdateStudioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStudioSessionMappingOutcome EMRClient::UpdateStudioSessionMapping(const UpdateStudioSessionMappingRequest& request) const {
  return UpdateStudioSessionMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
