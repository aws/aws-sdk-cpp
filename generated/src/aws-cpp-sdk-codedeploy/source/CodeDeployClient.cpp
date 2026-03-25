/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/CodeDeployClient.h>
#include <aws/codedeploy/CodeDeployEndpointProvider.h>
#include <aws/codedeploy/CodeDeployErrorMarshaller.h>
#include <aws/codedeploy/model/AddTagsToOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentTargetsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentsRequest.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/ContinueDeploymentRequest.h>
#include <aws/codedeploy/model/CreateApplicationRequest.h>
#include <aws/codedeploy/model/CreateDeploymentConfigRequest.h>
#include <aws/codedeploy/model/CreateDeploymentGroupRequest.h>
#include <aws/codedeploy/model/CreateDeploymentRequest.h>
#include <aws/codedeploy/model/DeleteApplicationRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentConfigRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupRequest.h>
#include <aws/codedeploy/model/DeleteGitHubAccountTokenRequest.h>
#include <aws/codedeploy/model/DeleteResourcesByExternalIdRequest.h>
#include <aws/codedeploy/model/DeregisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/GetApplicationRequest.h>
#include <aws/codedeploy/model/GetApplicationRevisionRequest.h>
#include <aws/codedeploy/model/GetDeploymentConfigRequest.h>
#include <aws/codedeploy/model/GetDeploymentGroupRequest.h>
#include <aws/codedeploy/model/GetDeploymentRequest.h>
#include <aws/codedeploy/model/GetDeploymentTargetRequest.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/ListApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/ListApplicationsRequest.h>
#include <aws/codedeploy/model/ListDeploymentConfigsRequest.h>
#include <aws/codedeploy/model/ListDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/ListDeploymentTargetsRequest.h>
#include <aws/codedeploy/model/ListDeploymentsRequest.h>
#include <aws/codedeploy/model/ListGitHubAccountTokenNamesRequest.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/ListTagsForResourceRequest.h>
#include <aws/codedeploy/model/PutLifecycleEventHookExecutionStatusRequest.h>
#include <aws/codedeploy/model/RegisterApplicationRevisionRequest.h>
#include <aws/codedeploy/model/RegisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/RemoveTagsFromOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/StopDeploymentRequest.h>
#include <aws/codedeploy/model/TagResourceRequest.h>
#include <aws/codedeploy/model/UntagResourceRequest.h>
#include <aws/codedeploy/model/UpdateApplicationRequest.h>
#include <aws/codedeploy/model/UpdateDeploymentGroupRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeDeploy;
using namespace Aws::CodeDeploy::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeDeploy {
const char SERVICE_NAME[] = "codedeploy";
const char ALLOCATION_TAG[] = "CodeDeployClient";
}  // namespace CodeDeploy
}  // namespace Aws
const char* CodeDeployClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeDeployClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeDeployClient::CodeDeployClient(const CodeDeploy::CodeDeployClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const AWSCredentials& credentials, std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider,
                                   const CodeDeploy::CodeDeployClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider,
                                   const CodeDeploy::CodeDeployClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeDeployClient::CodeDeployClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeDeployClient::~CodeDeployClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeDeployEndpointProviderBase>& CodeDeployClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeDeployClient::init(const CodeDeploy::CodeDeployClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeDeploy");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codedeploy");
}

void CodeDeployClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeDeployClient::InvokeOperationOutcome CodeDeployClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddTagsToOnPremisesInstancesOutcome CodeDeployClient::AddTagsToOnPremisesInstances(
    const AddTagsToOnPremisesInstancesRequest& request) const {
  return AddTagsToOnPremisesInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetApplicationRevisionsOutcome CodeDeployClient::BatchGetApplicationRevisions(
    const BatchGetApplicationRevisionsRequest& request) const {
  return BatchGetApplicationRevisionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetApplicationsOutcome CodeDeployClient::BatchGetApplications(const BatchGetApplicationsRequest& request) const {
  return BatchGetApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetDeploymentGroupsOutcome CodeDeployClient::BatchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest& request) const {
  return BatchGetDeploymentGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetDeploymentTargetsOutcome CodeDeployClient::BatchGetDeploymentTargets(const BatchGetDeploymentTargetsRequest& request) const {
  return BatchGetDeploymentTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetDeploymentsOutcome CodeDeployClient::BatchGetDeployments(const BatchGetDeploymentsRequest& request) const {
  return BatchGetDeploymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetOnPremisesInstancesOutcome CodeDeployClient::BatchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest& request) const {
  return BatchGetOnPremisesInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ContinueDeploymentOutcome CodeDeployClient::ContinueDeployment(const ContinueDeploymentRequest& request) const {
  return ContinueDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome CodeDeployClient::CreateApplication(const CreateApplicationRequest& request) const {
  return CreateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentOutcome CodeDeployClient::CreateDeployment(const CreateDeploymentRequest& request) const {
  return CreateDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentConfigOutcome CodeDeployClient::CreateDeploymentConfig(const CreateDeploymentConfigRequest& request) const {
  return CreateDeploymentConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentGroupOutcome CodeDeployClient::CreateDeploymentGroup(const CreateDeploymentGroupRequest& request) const {
  return CreateDeploymentGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome CodeDeployClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  return DeleteApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeploymentConfigOutcome CodeDeployClient::DeleteDeploymentConfig(const DeleteDeploymentConfigRequest& request) const {
  return DeleteDeploymentConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeploymentGroupOutcome CodeDeployClient::DeleteDeploymentGroup(const DeleteDeploymentGroupRequest& request) const {
  return DeleteDeploymentGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGitHubAccountTokenOutcome CodeDeployClient::DeleteGitHubAccountToken(const DeleteGitHubAccountTokenRequest& request) const {
  return DeleteGitHubAccountTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcesByExternalIdOutcome CodeDeployClient::DeleteResourcesByExternalId(const DeleteResourcesByExternalIdRequest& request) const {
  return DeleteResourcesByExternalIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterOnPremisesInstanceOutcome CodeDeployClient::DeregisterOnPremisesInstance(
    const DeregisterOnPremisesInstanceRequest& request) const {
  return DeregisterOnPremisesInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationOutcome CodeDeployClient::GetApplication(const GetApplicationRequest& request) const {
  return GetApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationRevisionOutcome CodeDeployClient::GetApplicationRevision(const GetApplicationRevisionRequest& request) const {
  return GetApplicationRevisionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeploymentOutcome CodeDeployClient::GetDeployment(const GetDeploymentRequest& request) const {
  return GetDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeploymentConfigOutcome CodeDeployClient::GetDeploymentConfig(const GetDeploymentConfigRequest& request) const {
  return GetDeploymentConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeploymentGroupOutcome CodeDeployClient::GetDeploymentGroup(const GetDeploymentGroupRequest& request) const {
  return GetDeploymentGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeploymentTargetOutcome CodeDeployClient::GetDeploymentTarget(const GetDeploymentTargetRequest& request) const {
  return GetDeploymentTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOnPremisesInstanceOutcome CodeDeployClient::GetOnPremisesInstance(const GetOnPremisesInstanceRequest& request) const {
  return GetOnPremisesInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationRevisionsOutcome CodeDeployClient::ListApplicationRevisions(const ListApplicationRevisionsRequest& request) const {
  return ListApplicationRevisionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationsOutcome CodeDeployClient::ListApplications(const ListApplicationsRequest& request) const {
  return ListApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeploymentConfigsOutcome CodeDeployClient::ListDeploymentConfigs(const ListDeploymentConfigsRequest& request) const {
  return ListDeploymentConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeploymentGroupsOutcome CodeDeployClient::ListDeploymentGroups(const ListDeploymentGroupsRequest& request) const {
  return ListDeploymentGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeploymentTargetsOutcome CodeDeployClient::ListDeploymentTargets(const ListDeploymentTargetsRequest& request) const {
  return ListDeploymentTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeploymentsOutcome CodeDeployClient::ListDeployments(const ListDeploymentsRequest& request) const {
  return ListDeploymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGitHubAccountTokenNamesOutcome CodeDeployClient::ListGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest& request) const {
  return ListGitHubAccountTokenNamesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOnPremisesInstancesOutcome CodeDeployClient::ListOnPremisesInstances(const ListOnPremisesInstancesRequest& request) const {
  return ListOnPremisesInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CodeDeployClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLifecycleEventHookExecutionStatusOutcome CodeDeployClient::PutLifecycleEventHookExecutionStatus(
    const PutLifecycleEventHookExecutionStatusRequest& request) const {
  return PutLifecycleEventHookExecutionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterApplicationRevisionOutcome CodeDeployClient::RegisterApplicationRevision(const RegisterApplicationRevisionRequest& request) const {
  return RegisterApplicationRevisionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterOnPremisesInstanceOutcome CodeDeployClient::RegisterOnPremisesInstance(const RegisterOnPremisesInstanceRequest& request) const {
  return RegisterOnPremisesInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromOnPremisesInstancesOutcome CodeDeployClient::RemoveTagsFromOnPremisesInstances(
    const RemoveTagsFromOnPremisesInstancesRequest& request) const {
  return RemoveTagsFromOnPremisesInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDeploymentOutcome CodeDeployClient::StopDeployment(const StopDeploymentRequest& request) const {
  return StopDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CodeDeployClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CodeDeployClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome CodeDeployClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  return UpdateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDeploymentGroupOutcome CodeDeployClient::UpdateDeploymentGroup(const UpdateDeploymentGroupRequest& request) const {
  return UpdateDeploymentGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
