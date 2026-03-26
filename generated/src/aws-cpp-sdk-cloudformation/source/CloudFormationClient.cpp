/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/CloudFormationClient.h>
#include <aws/cloudformation/CloudFormationEndpointProvider.h>
#include <aws/cloudformation/CloudFormationErrorMarshaller.h>
#include <aws/cloudformation/model/ActivateOrganizationsAccessRequest.h>
#include <aws/cloudformation/model/ActivateTypeRequest.h>
#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsRequest.h>
#include <aws/cloudformation/model/CancelUpdateStackRequest.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackRequest.h>
#include <aws/cloudformation/model/CreateChangeSetRequest.h>
#include <aws/cloudformation/model/CreateGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/CreateStackInstancesRequest.h>
#include <aws/cloudformation/model/CreateStackRefactorRequest.h>
#include <aws/cloudformation/model/CreateStackRequest.h>
#include <aws/cloudformation/model/CreateStackSetRequest.h>
#include <aws/cloudformation/model/DeactivateOrganizationsAccessRequest.h>
#include <aws/cloudformation/model/DeactivateTypeRequest.h>
#include <aws/cloudformation/model/DeleteChangeSetRequest.h>
#include <aws/cloudformation/model/DeleteGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/DeleteStackInstancesRequest.h>
#include <aws/cloudformation/model/DeleteStackRequest.h>
#include <aws/cloudformation/model/DeleteStackSetRequest.h>
#include <aws/cloudformation/model/DeregisterTypeRequest.h>
#include <aws/cloudformation/model/DescribeAccountLimitsRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetHooksRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetRequest.h>
#include <aws/cloudformation/model/DescribeEventsRequest.h>
#include <aws/cloudformation/model/DescribeGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/DescribeOrganizationsAccessRequest.h>
#include <aws/cloudformation/model/DescribePublisherRequest.h>
#include <aws/cloudformation/model/DescribeResourceScanRequest.h>
#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusRequest.h>
#include <aws/cloudformation/model/DescribeStackEventsRequest.h>
#include <aws/cloudformation/model/DescribeStackInstanceRequest.h>
#include <aws/cloudformation/model/DescribeStackRefactorRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsRequest.h>
#include <aws/cloudformation/model/DescribeStackResourceRequest.h>
#include <aws/cloudformation/model/DescribeStackResourcesRequest.h>
#include <aws/cloudformation/model/DescribeStackSetOperationRequest.h>
#include <aws/cloudformation/model/DescribeStackSetRequest.h>
#include <aws/cloudformation/model/DescribeStacksRequest.h>
#include <aws/cloudformation/model/DescribeTypeRegistrationRequest.h>
#include <aws/cloudformation/model/DescribeTypeRequest.h>
#include <aws/cloudformation/model/DetectStackDriftRequest.h>
#include <aws/cloudformation/model/DetectStackResourceDriftRequest.h>
#include <aws/cloudformation/model/DetectStackSetDriftRequest.h>
#include <aws/cloudformation/model/EstimateTemplateCostRequest.h>
#include <aws/cloudformation/model/ExecuteChangeSetRequest.h>
#include <aws/cloudformation/model/ExecuteStackRefactorRequest.h>
#include <aws/cloudformation/model/GetGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/GetHookResultRequest.h>
#include <aws/cloudformation/model/GetStackPolicyRequest.h>
#include <aws/cloudformation/model/GetTemplateRequest.h>
#include <aws/cloudformation/model/GetTemplateSummaryRequest.h>
#include <aws/cloudformation/model/ImportStacksToStackSetRequest.h>
#include <aws/cloudformation/model/ListChangeSetsRequest.h>
#include <aws/cloudformation/model/ListExportsRequest.h>
#include <aws/cloudformation/model/ListGeneratedTemplatesRequest.h>
#include <aws/cloudformation/model/ListHookResultsRequest.h>
#include <aws/cloudformation/model/ListImportsRequest.h>
#include <aws/cloudformation/model/ListResourceScanRelatedResourcesRequest.h>
#include <aws/cloudformation/model/ListResourceScanResourcesRequest.h>
#include <aws/cloudformation/model/ListResourceScansRequest.h>
#include <aws/cloudformation/model/ListStackInstanceResourceDriftsRequest.h>
#include <aws/cloudformation/model/ListStackInstancesRequest.h>
#include <aws/cloudformation/model/ListStackRefactorActionsRequest.h>
#include <aws/cloudformation/model/ListStackRefactorsRequest.h>
#include <aws/cloudformation/model/ListStackResourcesRequest.h>
#include <aws/cloudformation/model/ListStackSetAutoDeploymentTargetsRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsRequest.h>
#include <aws/cloudformation/model/ListStackSetOperationsRequest.h>
#include <aws/cloudformation/model/ListStackSetsRequest.h>
#include <aws/cloudformation/model/ListStacksRequest.h>
#include <aws/cloudformation/model/ListTypeRegistrationsRequest.h>
#include <aws/cloudformation/model/ListTypeVersionsRequest.h>
#include <aws/cloudformation/model/ListTypesRequest.h>
#include <aws/cloudformation/model/PublishTypeRequest.h>
#include <aws/cloudformation/model/RecordHandlerProgressRequest.h>
#include <aws/cloudformation/model/RegisterPublisherRequest.h>
#include <aws/cloudformation/model/RegisterTypeRequest.h>
#include <aws/cloudformation/model/RollbackStackRequest.h>
#include <aws/cloudformation/model/SetStackPolicyRequest.h>
#include <aws/cloudformation/model/SetTypeConfigurationRequest.h>
#include <aws/cloudformation/model/SetTypeDefaultVersionRequest.h>
#include <aws/cloudformation/model/SignalResourceRequest.h>
#include <aws/cloudformation/model/StartResourceScanRequest.h>
#include <aws/cloudformation/model/StopStackSetOperationRequest.h>
#include <aws/cloudformation/model/TestTypeRequest.h>
#include <aws/cloudformation/model/UpdateGeneratedTemplateRequest.h>
#include <aws/cloudformation/model/UpdateStackInstancesRequest.h>
#include <aws/cloudformation/model/UpdateStackRequest.h>
#include <aws/cloudformation/model/UpdateStackSetRequest.h>
#include <aws/cloudformation/model/UpdateTerminationProtectionRequest.h>
#include <aws/cloudformation/model/ValidateTemplateRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudFormation;
using namespace Aws::CloudFormation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudFormation {
const char SERVICE_NAME[] = "cloudformation";
const char ALLOCATION_TAG[] = "CloudFormationClient";
}  // namespace CloudFormation
}  // namespace Aws
const char* CloudFormationClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudFormationClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudFormationClient::CloudFormationClient(const CloudFormation::CloudFormationClientConfiguration& clientConfiguration,
                                           std::shared_ptr<CloudFormationEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const AWSCredentials& credentials,
                                           std::shared_ptr<CloudFormationEndpointProviderBase> endpointProvider,
                                           const CloudFormation::CloudFormationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<CloudFormationEndpointProviderBase> endpointProvider,
                                           const CloudFormation::CloudFormationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudFormationClient::CloudFormationClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFormationClient::CloudFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudFormationClient::~CloudFormationClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudFormationEndpointProviderBase>& CloudFormationClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudFormationClient::init(const CloudFormation::CloudFormationClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudFormation");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudformation");
}

void CloudFormationClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String CloudFormationClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                               const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

CloudFormationClient::InvokeOperationOutcome CloudFormationClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
ActivateOrganizationsAccessOutcome CloudFormationClient::ActivateOrganizationsAccess(
    const ActivateOrganizationsAccessRequest& request) const {
  return ActivateOrganizationsAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ActivateTypeOutcome CloudFormationClient::ActivateType(const ActivateTypeRequest& request) const {
  return ActivateTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDescribeTypeConfigurationsOutcome CloudFormationClient::BatchDescribeTypeConfigurations(
    const BatchDescribeTypeConfigurationsRequest& request) const {
  return BatchDescribeTypeConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelUpdateStackOutcome CloudFormationClient::CancelUpdateStack(const CancelUpdateStackRequest& request) const {
  return CancelUpdateStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ContinueUpdateRollbackOutcome CloudFormationClient::ContinueUpdateRollback(const ContinueUpdateRollbackRequest& request) const {
  return ContinueUpdateRollbackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChangeSetOutcome CloudFormationClient::CreateChangeSet(const CreateChangeSetRequest& request) const {
  return CreateChangeSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGeneratedTemplateOutcome CloudFormationClient::CreateGeneratedTemplate(const CreateGeneratedTemplateRequest& request) const {
  return CreateGeneratedTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStackOutcome CloudFormationClient::CreateStack(const CreateStackRequest& request) const {
  return CreateStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStackInstancesOutcome CloudFormationClient::CreateStackInstances(const CreateStackInstancesRequest& request) const {
  return CreateStackInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStackRefactorOutcome CloudFormationClient::CreateStackRefactor(const CreateStackRefactorRequest& request) const {
  return CreateStackRefactorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStackSetOutcome CloudFormationClient::CreateStackSet(const CreateStackSetRequest& request) const {
  return CreateStackSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateOrganizationsAccessOutcome CloudFormationClient::DeactivateOrganizationsAccess(
    const DeactivateOrganizationsAccessRequest& request) const {
  return DeactivateOrganizationsAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateTypeOutcome CloudFormationClient::DeactivateType(const DeactivateTypeRequest& request) const {
  return DeactivateTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteChangeSetOutcome CloudFormationClient::DeleteChangeSet(const DeleteChangeSetRequest& request) const {
  return DeleteChangeSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGeneratedTemplateOutcome CloudFormationClient::DeleteGeneratedTemplate(const DeleteGeneratedTemplateRequest& request) const {
  return DeleteGeneratedTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStackOutcome CloudFormationClient::DeleteStack(const DeleteStackRequest& request) const {
  return DeleteStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStackInstancesOutcome CloudFormationClient::DeleteStackInstances(const DeleteStackInstancesRequest& request) const {
  return DeleteStackInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStackSetOutcome CloudFormationClient::DeleteStackSet(const DeleteStackSetRequest& request) const {
  return DeleteStackSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterTypeOutcome CloudFormationClient::DeregisterType(const DeregisterTypeRequest& request) const {
  return DeregisterTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountLimitsOutcome CloudFormationClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  return DescribeAccountLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeChangeSetOutcome CloudFormationClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const {
  return DescribeChangeSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeChangeSetHooksOutcome CloudFormationClient::DescribeChangeSetHooks(const DescribeChangeSetHooksRequest& request) const {
  return DescribeChangeSetHooksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome CloudFormationClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGeneratedTemplateOutcome CloudFormationClient::DescribeGeneratedTemplate(const DescribeGeneratedTemplateRequest& request) const {
  return DescribeGeneratedTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationsAccessOutcome CloudFormationClient::DescribeOrganizationsAccess(
    const DescribeOrganizationsAccessRequest& request) const {
  return DescribeOrganizationsAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePublisherOutcome CloudFormationClient::DescribePublisher(const DescribePublisherRequest& request) const {
  return DescribePublisherOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourceScanOutcome CloudFormationClient::DescribeResourceScan(const DescribeResourceScanRequest& request) const {
  return DescribeResourceScanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackDriftDetectionStatusOutcome CloudFormationClient::DescribeStackDriftDetectionStatus(
    const DescribeStackDriftDetectionStatusRequest& request) const {
  return DescribeStackDriftDetectionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackEventsOutcome CloudFormationClient::DescribeStackEvents(const DescribeStackEventsRequest& request) const {
  return DescribeStackEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackInstanceOutcome CloudFormationClient::DescribeStackInstance(const DescribeStackInstanceRequest& request) const {
  return DescribeStackInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackRefactorOutcome CloudFormationClient::DescribeStackRefactor(const DescribeStackRefactorRequest& request) const {
  return DescribeStackRefactorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackResourceOutcome CloudFormationClient::DescribeStackResource(const DescribeStackResourceRequest& request) const {
  return DescribeStackResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackResourceDriftsOutcome CloudFormationClient::DescribeStackResourceDrifts(
    const DescribeStackResourceDriftsRequest& request) const {
  return DescribeStackResourceDriftsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackResourcesOutcome CloudFormationClient::DescribeStackResources(const DescribeStackResourcesRequest& request) const {
  return DescribeStackResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackSetOutcome CloudFormationClient::DescribeStackSet(const DescribeStackSetRequest& request) const {
  return DescribeStackSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStackSetOperationOutcome CloudFormationClient::DescribeStackSetOperation(const DescribeStackSetOperationRequest& request) const {
  return DescribeStackSetOperationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStacksOutcome CloudFormationClient::DescribeStacks(const DescribeStacksRequest& request) const {
  return DescribeStacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTypeOutcome CloudFormationClient::DescribeType(const DescribeTypeRequest& request) const {
  return DescribeTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTypeRegistrationOutcome CloudFormationClient::DescribeTypeRegistration(const DescribeTypeRegistrationRequest& request) const {
  return DescribeTypeRegistrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectStackDriftOutcome CloudFormationClient::DetectStackDrift(const DetectStackDriftRequest& request) const {
  return DetectStackDriftOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectStackResourceDriftOutcome CloudFormationClient::DetectStackResourceDrift(const DetectStackResourceDriftRequest& request) const {
  return DetectStackResourceDriftOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectStackSetDriftOutcome CloudFormationClient::DetectStackSetDrift(const DetectStackSetDriftRequest& request) const {
  return DetectStackSetDriftOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EstimateTemplateCostOutcome CloudFormationClient::EstimateTemplateCost(const EstimateTemplateCostRequest& request) const {
  return EstimateTemplateCostOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteChangeSetOutcome CloudFormationClient::ExecuteChangeSet(const ExecuteChangeSetRequest& request) const {
  return ExecuteChangeSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteStackRefactorOutcome CloudFormationClient::ExecuteStackRefactor(const ExecuteStackRefactorRequest& request) const {
  return ExecuteStackRefactorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGeneratedTemplateOutcome CloudFormationClient::GetGeneratedTemplate(const GetGeneratedTemplateRequest& request) const {
  return GetGeneratedTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetHookResultOutcome CloudFormationClient::GetHookResult(const GetHookResultRequest& request) const {
  return GetHookResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetStackPolicyOutcome CloudFormationClient::GetStackPolicy(const GetStackPolicyRequest& request) const {
  return GetStackPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTemplateOutcome CloudFormationClient::GetTemplate(const GetTemplateRequest& request) const {
  return GetTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTemplateSummaryOutcome CloudFormationClient::GetTemplateSummary(const GetTemplateSummaryRequest& request) const {
  return GetTemplateSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportStacksToStackSetOutcome CloudFormationClient::ImportStacksToStackSet(const ImportStacksToStackSetRequest& request) const {
  return ImportStacksToStackSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListChangeSetsOutcome CloudFormationClient::ListChangeSets(const ListChangeSetsRequest& request) const {
  return ListChangeSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExportsOutcome CloudFormationClient::ListExports(const ListExportsRequest& request) const {
  return ListExportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGeneratedTemplatesOutcome CloudFormationClient::ListGeneratedTemplates(const ListGeneratedTemplatesRequest& request) const {
  return ListGeneratedTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHookResultsOutcome CloudFormationClient::ListHookResults(const ListHookResultsRequest& request) const {
  return ListHookResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImportsOutcome CloudFormationClient::ListImports(const ListImportsRequest& request) const {
  return ListImportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceScanRelatedResourcesOutcome CloudFormationClient::ListResourceScanRelatedResources(
    const ListResourceScanRelatedResourcesRequest& request) const {
  return ListResourceScanRelatedResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceScanResourcesOutcome CloudFormationClient::ListResourceScanResources(const ListResourceScanResourcesRequest& request) const {
  return ListResourceScanResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceScansOutcome CloudFormationClient::ListResourceScans(const ListResourceScansRequest& request) const {
  return ListResourceScansOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackInstanceResourceDriftsOutcome CloudFormationClient::ListStackInstanceResourceDrifts(
    const ListStackInstanceResourceDriftsRequest& request) const {
  return ListStackInstanceResourceDriftsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackInstancesOutcome CloudFormationClient::ListStackInstances(const ListStackInstancesRequest& request) const {
  return ListStackInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackRefactorActionsOutcome CloudFormationClient::ListStackRefactorActions(const ListStackRefactorActionsRequest& request) const {
  return ListStackRefactorActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackRefactorsOutcome CloudFormationClient::ListStackRefactors(const ListStackRefactorsRequest& request) const {
  return ListStackRefactorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackResourcesOutcome CloudFormationClient::ListStackResources(const ListStackResourcesRequest& request) const {
  return ListStackResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackSetAutoDeploymentTargetsOutcome CloudFormationClient::ListStackSetAutoDeploymentTargets(
    const ListStackSetAutoDeploymentTargetsRequest& request) const {
  return ListStackSetAutoDeploymentTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackSetOperationResultsOutcome CloudFormationClient::ListStackSetOperationResults(
    const ListStackSetOperationResultsRequest& request) const {
  return ListStackSetOperationResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackSetOperationsOutcome CloudFormationClient::ListStackSetOperations(const ListStackSetOperationsRequest& request) const {
  return ListStackSetOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStackSetsOutcome CloudFormationClient::ListStackSets(const ListStackSetsRequest& request) const {
  return ListStackSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStacksOutcome CloudFormationClient::ListStacks(const ListStacksRequest& request) const {
  return ListStacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTypeRegistrationsOutcome CloudFormationClient::ListTypeRegistrations(const ListTypeRegistrationsRequest& request) const {
  return ListTypeRegistrationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTypeVersionsOutcome CloudFormationClient::ListTypeVersions(const ListTypeVersionsRequest& request) const {
  return ListTypeVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTypesOutcome CloudFormationClient::ListTypes(const ListTypesRequest& request) const {
  return ListTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PublishTypeOutcome CloudFormationClient::PublishType(const PublishTypeRequest& request) const {
  return PublishTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RecordHandlerProgressOutcome CloudFormationClient::RecordHandlerProgress(const RecordHandlerProgressRequest& request) const {
  return RecordHandlerProgressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterPublisherOutcome CloudFormationClient::RegisterPublisher(const RegisterPublisherRequest& request) const {
  return RegisterPublisherOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterTypeOutcome CloudFormationClient::RegisterType(const RegisterTypeRequest& request) const {
  return RegisterTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RollbackStackOutcome CloudFormationClient::RollbackStack(const RollbackStackRequest& request) const {
  return RollbackStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetStackPolicyOutcome CloudFormationClient::SetStackPolicy(const SetStackPolicyRequest& request) const {
  return SetStackPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetTypeConfigurationOutcome CloudFormationClient::SetTypeConfiguration(const SetTypeConfigurationRequest& request) const {
  return SetTypeConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetTypeDefaultVersionOutcome CloudFormationClient::SetTypeDefaultVersion(const SetTypeDefaultVersionRequest& request) const {
  return SetTypeDefaultVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SignalResourceOutcome CloudFormationClient::SignalResource(const SignalResourceRequest& request) const {
  return SignalResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartResourceScanOutcome CloudFormationClient::StartResourceScan(const StartResourceScanRequest& request) const {
  return StartResourceScanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopStackSetOperationOutcome CloudFormationClient::StopStackSetOperation(const StopStackSetOperationRequest& request) const {
  return StopStackSetOperationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestTypeOutcome CloudFormationClient::TestType(const TestTypeRequest& request) const {
  return TestTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGeneratedTemplateOutcome CloudFormationClient::UpdateGeneratedTemplate(const UpdateGeneratedTemplateRequest& request) const {
  return UpdateGeneratedTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStackOutcome CloudFormationClient::UpdateStack(const UpdateStackRequest& request) const {
  return UpdateStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStackInstancesOutcome CloudFormationClient::UpdateStackInstances(const UpdateStackInstancesRequest& request) const {
  return UpdateStackInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStackSetOutcome CloudFormationClient::UpdateStackSet(const UpdateStackSetRequest& request) const {
  return UpdateStackSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTerminationProtectionOutcome CloudFormationClient::UpdateTerminationProtection(
    const UpdateTerminationProtectionRequest& request) const {
  return UpdateTerminationProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ValidateTemplateOutcome CloudFormationClient::ValidateTemplate(const ValidateTemplateRequest& request) const {
  return ValidateTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
