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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ActivateOrganizationsAccessOutcome(result.GetResultWithOwnership())
                            : ActivateOrganizationsAccessOutcome(std::move(result.GetError()));
}

ActivateTypeOutcome CloudFormationClient::ActivateType(const ActivateTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ActivateTypeOutcome(result.GetResultWithOwnership()) : ActivateTypeOutcome(std::move(result.GetError()));
}

BatchDescribeTypeConfigurationsOutcome CloudFormationClient::BatchDescribeTypeConfigurations(
    const BatchDescribeTypeConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDescribeTypeConfigurationsOutcome(result.GetResultWithOwnership())
                            : BatchDescribeTypeConfigurationsOutcome(std::move(result.GetError()));
}

CancelUpdateStackOutcome CloudFormationClient::CancelUpdateStack(const CancelUpdateStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelUpdateStackOutcome(result.GetResultWithOwnership())
                            : CancelUpdateStackOutcome(std::move(result.GetError()));
}

ContinueUpdateRollbackOutcome CloudFormationClient::ContinueUpdateRollback(const ContinueUpdateRollbackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ContinueUpdateRollbackOutcome(result.GetResultWithOwnership())
                            : ContinueUpdateRollbackOutcome(std::move(result.GetError()));
}

CreateChangeSetOutcome CloudFormationClient::CreateChangeSet(const CreateChangeSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChangeSetOutcome(result.GetResultWithOwnership())
                            : CreateChangeSetOutcome(std::move(result.GetError()));
}

CreateGeneratedTemplateOutcome CloudFormationClient::CreateGeneratedTemplate(const CreateGeneratedTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGeneratedTemplateOutcome(result.GetResultWithOwnership())
                            : CreateGeneratedTemplateOutcome(std::move(result.GetError()));
}

CreateStackOutcome CloudFormationClient::CreateStack(const CreateStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStackOutcome(result.GetResultWithOwnership()) : CreateStackOutcome(std::move(result.GetError()));
}

CreateStackInstancesOutcome CloudFormationClient::CreateStackInstances(const CreateStackInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStackInstancesOutcome(result.GetResultWithOwnership())
                            : CreateStackInstancesOutcome(std::move(result.GetError()));
}

CreateStackRefactorOutcome CloudFormationClient::CreateStackRefactor(const CreateStackRefactorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStackRefactorOutcome(result.GetResultWithOwnership())
                            : CreateStackRefactorOutcome(std::move(result.GetError()));
}

CreateStackSetOutcome CloudFormationClient::CreateStackSet(const CreateStackSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStackSetOutcome(result.GetResultWithOwnership()) : CreateStackSetOutcome(std::move(result.GetError()));
}

DeactivateOrganizationsAccessOutcome CloudFormationClient::DeactivateOrganizationsAccess(
    const DeactivateOrganizationsAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeactivateOrganizationsAccessOutcome(result.GetResultWithOwnership())
                            : DeactivateOrganizationsAccessOutcome(std::move(result.GetError()));
}

DeactivateTypeOutcome CloudFormationClient::DeactivateType(const DeactivateTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeactivateTypeOutcome(result.GetResultWithOwnership()) : DeactivateTypeOutcome(std::move(result.GetError()));
}

DeleteChangeSetOutcome CloudFormationClient::DeleteChangeSet(const DeleteChangeSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteChangeSetOutcome(result.GetResultWithOwnership())
                            : DeleteChangeSetOutcome(std::move(result.GetError()));
}

DeleteGeneratedTemplateOutcome CloudFormationClient::DeleteGeneratedTemplate(const DeleteGeneratedTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGeneratedTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteGeneratedTemplateOutcome(std::move(result.GetError()));
}

DeleteStackOutcome CloudFormationClient::DeleteStack(const DeleteStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStackOutcome(result.GetResultWithOwnership()) : DeleteStackOutcome(std::move(result.GetError()));
}

DeleteStackInstancesOutcome CloudFormationClient::DeleteStackInstances(const DeleteStackInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStackInstancesOutcome(result.GetResultWithOwnership())
                            : DeleteStackInstancesOutcome(std::move(result.GetError()));
}

DeleteStackSetOutcome CloudFormationClient::DeleteStackSet(const DeleteStackSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStackSetOutcome(result.GetResultWithOwnership()) : DeleteStackSetOutcome(std::move(result.GetError()));
}

DeregisterTypeOutcome CloudFormationClient::DeregisterType(const DeregisterTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterTypeOutcome(result.GetResultWithOwnership()) : DeregisterTypeOutcome(std::move(result.GetError()));
}

DescribeAccountLimitsOutcome CloudFormationClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeAccountLimitsOutcome(std::move(result.GetError()));
}

DescribeChangeSetOutcome CloudFormationClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeChangeSetOutcome(result.GetResultWithOwnership())
                            : DescribeChangeSetOutcome(std::move(result.GetError()));
}

DescribeChangeSetHooksOutcome CloudFormationClient::DescribeChangeSetHooks(const DescribeChangeSetHooksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeChangeSetHooksOutcome(result.GetResultWithOwnership())
                            : DescribeChangeSetHooksOutcome(std::move(result.GetError()));
}

DescribeEventsOutcome CloudFormationClient::DescribeEvents(const DescribeEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventsOutcome(result.GetResultWithOwnership()) : DescribeEventsOutcome(std::move(result.GetError()));
}

DescribeGeneratedTemplateOutcome CloudFormationClient::DescribeGeneratedTemplate(const DescribeGeneratedTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGeneratedTemplateOutcome(result.GetResultWithOwnership())
                            : DescribeGeneratedTemplateOutcome(std::move(result.GetError()));
}

DescribeOrganizationsAccessOutcome CloudFormationClient::DescribeOrganizationsAccess(
    const DescribeOrganizationsAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationsAccessOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationsAccessOutcome(std::move(result.GetError()));
}

DescribePublisherOutcome CloudFormationClient::DescribePublisher(const DescribePublisherRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePublisherOutcome(result.GetResultWithOwnership())
                            : DescribePublisherOutcome(std::move(result.GetError()));
}

DescribeResourceScanOutcome CloudFormationClient::DescribeResourceScan(const DescribeResourceScanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeResourceScanOutcome(result.GetResultWithOwnership())
                            : DescribeResourceScanOutcome(std::move(result.GetError()));
}

DescribeStackDriftDetectionStatusOutcome CloudFormationClient::DescribeStackDriftDetectionStatus(
    const DescribeStackDriftDetectionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackDriftDetectionStatusOutcome(result.GetResultWithOwnership())
                            : DescribeStackDriftDetectionStatusOutcome(std::move(result.GetError()));
}

DescribeStackEventsOutcome CloudFormationClient::DescribeStackEvents(const DescribeStackEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackEventsOutcome(result.GetResultWithOwnership())
                            : DescribeStackEventsOutcome(std::move(result.GetError()));
}

DescribeStackInstanceOutcome CloudFormationClient::DescribeStackInstance(const DescribeStackInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackInstanceOutcome(result.GetResultWithOwnership())
                            : DescribeStackInstanceOutcome(std::move(result.GetError()));
}

DescribeStackRefactorOutcome CloudFormationClient::DescribeStackRefactor(const DescribeStackRefactorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackRefactorOutcome(result.GetResultWithOwnership())
                            : DescribeStackRefactorOutcome(std::move(result.GetError()));
}

DescribeStackResourceOutcome CloudFormationClient::DescribeStackResource(const DescribeStackResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackResourceOutcome(result.GetResultWithOwnership())
                            : DescribeStackResourceOutcome(std::move(result.GetError()));
}

DescribeStackResourceDriftsOutcome CloudFormationClient::DescribeStackResourceDrifts(
    const DescribeStackResourceDriftsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackResourceDriftsOutcome(result.GetResultWithOwnership())
                            : DescribeStackResourceDriftsOutcome(std::move(result.GetError()));
}

DescribeStackResourcesOutcome CloudFormationClient::DescribeStackResources(const DescribeStackResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackResourcesOutcome(result.GetResultWithOwnership())
                            : DescribeStackResourcesOutcome(std::move(result.GetError()));
}

DescribeStackSetOutcome CloudFormationClient::DescribeStackSet(const DescribeStackSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackSetOutcome(result.GetResultWithOwnership())
                            : DescribeStackSetOutcome(std::move(result.GetError()));
}

DescribeStackSetOperationOutcome CloudFormationClient::DescribeStackSetOperation(const DescribeStackSetOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStackSetOperationOutcome(result.GetResultWithOwnership())
                            : DescribeStackSetOperationOutcome(std::move(result.GetError()));
}

DescribeStacksOutcome CloudFormationClient::DescribeStacks(const DescribeStacksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStacksOutcome(result.GetResultWithOwnership()) : DescribeStacksOutcome(std::move(result.GetError()));
}

DescribeTypeOutcome CloudFormationClient::DescribeType(const DescribeTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTypeOutcome(result.GetResultWithOwnership()) : DescribeTypeOutcome(std::move(result.GetError()));
}

DescribeTypeRegistrationOutcome CloudFormationClient::DescribeTypeRegistration(const DescribeTypeRegistrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTypeRegistrationOutcome(result.GetResultWithOwnership())
                            : DescribeTypeRegistrationOutcome(std::move(result.GetError()));
}

DetectStackDriftOutcome CloudFormationClient::DetectStackDrift(const DetectStackDriftRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetectStackDriftOutcome(result.GetResultWithOwnership())
                            : DetectStackDriftOutcome(std::move(result.GetError()));
}

DetectStackResourceDriftOutcome CloudFormationClient::DetectStackResourceDrift(const DetectStackResourceDriftRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetectStackResourceDriftOutcome(result.GetResultWithOwnership())
                            : DetectStackResourceDriftOutcome(std::move(result.GetError()));
}

DetectStackSetDriftOutcome CloudFormationClient::DetectStackSetDrift(const DetectStackSetDriftRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetectStackSetDriftOutcome(result.GetResultWithOwnership())
                            : DetectStackSetDriftOutcome(std::move(result.GetError()));
}

EstimateTemplateCostOutcome CloudFormationClient::EstimateTemplateCost(const EstimateTemplateCostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EstimateTemplateCostOutcome(result.GetResultWithOwnership())
                            : EstimateTemplateCostOutcome(std::move(result.GetError()));
}

ExecuteChangeSetOutcome CloudFormationClient::ExecuteChangeSet(const ExecuteChangeSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteChangeSetOutcome(result.GetResultWithOwnership())
                            : ExecuteChangeSetOutcome(std::move(result.GetError()));
}

ExecuteStackRefactorOutcome CloudFormationClient::ExecuteStackRefactor(const ExecuteStackRefactorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteStackRefactorOutcome(result.GetResultWithOwnership())
                            : ExecuteStackRefactorOutcome(std::move(result.GetError()));
}

GetGeneratedTemplateOutcome CloudFormationClient::GetGeneratedTemplate(const GetGeneratedTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGeneratedTemplateOutcome(result.GetResultWithOwnership())
                            : GetGeneratedTemplateOutcome(std::move(result.GetError()));
}

GetHookResultOutcome CloudFormationClient::GetHookResult(const GetHookResultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetHookResultOutcome(result.GetResultWithOwnership()) : GetHookResultOutcome(std::move(result.GetError()));
}

GetStackPolicyOutcome CloudFormationClient::GetStackPolicy(const GetStackPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStackPolicyOutcome(result.GetResultWithOwnership()) : GetStackPolicyOutcome(std::move(result.GetError()));
}

GetTemplateOutcome CloudFormationClient::GetTemplate(const GetTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTemplateOutcome(result.GetResultWithOwnership()) : GetTemplateOutcome(std::move(result.GetError()));
}

GetTemplateSummaryOutcome CloudFormationClient::GetTemplateSummary(const GetTemplateSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTemplateSummaryOutcome(result.GetResultWithOwnership())
                            : GetTemplateSummaryOutcome(std::move(result.GetError()));
}

ImportStacksToStackSetOutcome CloudFormationClient::ImportStacksToStackSet(const ImportStacksToStackSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportStacksToStackSetOutcome(result.GetResultWithOwnership())
                            : ImportStacksToStackSetOutcome(std::move(result.GetError()));
}

ListChangeSetsOutcome CloudFormationClient::ListChangeSets(const ListChangeSetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListChangeSetsOutcome(result.GetResultWithOwnership()) : ListChangeSetsOutcome(std::move(result.GetError()));
}

ListExportsOutcome CloudFormationClient::ListExports(const ListExportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExportsOutcome(result.GetResultWithOwnership()) : ListExportsOutcome(std::move(result.GetError()));
}

ListGeneratedTemplatesOutcome CloudFormationClient::ListGeneratedTemplates(const ListGeneratedTemplatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGeneratedTemplatesOutcome(result.GetResultWithOwnership())
                            : ListGeneratedTemplatesOutcome(std::move(result.GetError()));
}

ListHookResultsOutcome CloudFormationClient::ListHookResults(const ListHookResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHookResultsOutcome(result.GetResultWithOwnership())
                            : ListHookResultsOutcome(std::move(result.GetError()));
}

ListImportsOutcome CloudFormationClient::ListImports(const ListImportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportsOutcome(result.GetResultWithOwnership()) : ListImportsOutcome(std::move(result.GetError()));
}

ListResourceScanRelatedResourcesOutcome CloudFormationClient::ListResourceScanRelatedResources(
    const ListResourceScanRelatedResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceScanRelatedResourcesOutcome(result.GetResultWithOwnership())
                            : ListResourceScanRelatedResourcesOutcome(std::move(result.GetError()));
}

ListResourceScanResourcesOutcome CloudFormationClient::ListResourceScanResources(const ListResourceScanResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceScanResourcesOutcome(result.GetResultWithOwnership())
                            : ListResourceScanResourcesOutcome(std::move(result.GetError()));
}

ListResourceScansOutcome CloudFormationClient::ListResourceScans(const ListResourceScansRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceScansOutcome(result.GetResultWithOwnership())
                            : ListResourceScansOutcome(std::move(result.GetError()));
}

ListStackInstanceResourceDriftsOutcome CloudFormationClient::ListStackInstanceResourceDrifts(
    const ListStackInstanceResourceDriftsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackInstanceResourceDriftsOutcome(result.GetResultWithOwnership())
                            : ListStackInstanceResourceDriftsOutcome(std::move(result.GetError()));
}

ListStackInstancesOutcome CloudFormationClient::ListStackInstances(const ListStackInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackInstancesOutcome(result.GetResultWithOwnership())
                            : ListStackInstancesOutcome(std::move(result.GetError()));
}

ListStackRefactorActionsOutcome CloudFormationClient::ListStackRefactorActions(const ListStackRefactorActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackRefactorActionsOutcome(result.GetResultWithOwnership())
                            : ListStackRefactorActionsOutcome(std::move(result.GetError()));
}

ListStackRefactorsOutcome CloudFormationClient::ListStackRefactors(const ListStackRefactorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackRefactorsOutcome(result.GetResultWithOwnership())
                            : ListStackRefactorsOutcome(std::move(result.GetError()));
}

ListStackResourcesOutcome CloudFormationClient::ListStackResources(const ListStackResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackResourcesOutcome(result.GetResultWithOwnership())
                            : ListStackResourcesOutcome(std::move(result.GetError()));
}

ListStackSetAutoDeploymentTargetsOutcome CloudFormationClient::ListStackSetAutoDeploymentTargets(
    const ListStackSetAutoDeploymentTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackSetAutoDeploymentTargetsOutcome(result.GetResultWithOwnership())
                            : ListStackSetAutoDeploymentTargetsOutcome(std::move(result.GetError()));
}

ListStackSetOperationResultsOutcome CloudFormationClient::ListStackSetOperationResults(
    const ListStackSetOperationResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackSetOperationResultsOutcome(result.GetResultWithOwnership())
                            : ListStackSetOperationResultsOutcome(std::move(result.GetError()));
}

ListStackSetOperationsOutcome CloudFormationClient::ListStackSetOperations(const ListStackSetOperationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackSetOperationsOutcome(result.GetResultWithOwnership())
                            : ListStackSetOperationsOutcome(std::move(result.GetError()));
}

ListStackSetsOutcome CloudFormationClient::ListStackSets(const ListStackSetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStackSetsOutcome(result.GetResultWithOwnership()) : ListStackSetsOutcome(std::move(result.GetError()));
}

ListStacksOutcome CloudFormationClient::ListStacks(const ListStacksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStacksOutcome(result.GetResultWithOwnership()) : ListStacksOutcome(std::move(result.GetError()));
}

ListTypeRegistrationsOutcome CloudFormationClient::ListTypeRegistrations(const ListTypeRegistrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTypeRegistrationsOutcome(result.GetResultWithOwnership())
                            : ListTypeRegistrationsOutcome(std::move(result.GetError()));
}

ListTypeVersionsOutcome CloudFormationClient::ListTypeVersions(const ListTypeVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTypeVersionsOutcome(result.GetResultWithOwnership())
                            : ListTypeVersionsOutcome(std::move(result.GetError()));
}

ListTypesOutcome CloudFormationClient::ListTypes(const ListTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTypesOutcome(result.GetResultWithOwnership()) : ListTypesOutcome(std::move(result.GetError()));
}

PublishTypeOutcome CloudFormationClient::PublishType(const PublishTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PublishTypeOutcome(result.GetResultWithOwnership()) : PublishTypeOutcome(std::move(result.GetError()));
}

RecordHandlerProgressOutcome CloudFormationClient::RecordHandlerProgress(const RecordHandlerProgressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RecordHandlerProgressOutcome(result.GetResultWithOwnership())
                            : RecordHandlerProgressOutcome(std::move(result.GetError()));
}

RegisterPublisherOutcome CloudFormationClient::RegisterPublisher(const RegisterPublisherRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterPublisherOutcome(result.GetResultWithOwnership())
                            : RegisterPublisherOutcome(std::move(result.GetError()));
}

RegisterTypeOutcome CloudFormationClient::RegisterType(const RegisterTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterTypeOutcome(result.GetResultWithOwnership()) : RegisterTypeOutcome(std::move(result.GetError()));
}

RollbackStackOutcome CloudFormationClient::RollbackStack(const RollbackStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RollbackStackOutcome(result.GetResultWithOwnership()) : RollbackStackOutcome(std::move(result.GetError()));
}

SetStackPolicyOutcome CloudFormationClient::SetStackPolicy(const SetStackPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetStackPolicyOutcome(result.GetResultWithOwnership()) : SetStackPolicyOutcome(std::move(result.GetError()));
}

SetTypeConfigurationOutcome CloudFormationClient::SetTypeConfiguration(const SetTypeConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetTypeConfigurationOutcome(result.GetResultWithOwnership())
                            : SetTypeConfigurationOutcome(std::move(result.GetError()));
}

SetTypeDefaultVersionOutcome CloudFormationClient::SetTypeDefaultVersion(const SetTypeDefaultVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetTypeDefaultVersionOutcome(result.GetResultWithOwnership())
                            : SetTypeDefaultVersionOutcome(std::move(result.GetError()));
}

SignalResourceOutcome CloudFormationClient::SignalResource(const SignalResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SignalResourceOutcome(result.GetResultWithOwnership()) : SignalResourceOutcome(std::move(result.GetError()));
}

StartResourceScanOutcome CloudFormationClient::StartResourceScan(const StartResourceScanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartResourceScanOutcome(result.GetResultWithOwnership())
                            : StartResourceScanOutcome(std::move(result.GetError()));
}

StopStackSetOperationOutcome CloudFormationClient::StopStackSetOperation(const StopStackSetOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopStackSetOperationOutcome(result.GetResultWithOwnership())
                            : StopStackSetOperationOutcome(std::move(result.GetError()));
}

TestTypeOutcome CloudFormationClient::TestType(const TestTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestTypeOutcome(result.GetResultWithOwnership()) : TestTypeOutcome(std::move(result.GetError()));
}

UpdateGeneratedTemplateOutcome CloudFormationClient::UpdateGeneratedTemplate(const UpdateGeneratedTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGeneratedTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateGeneratedTemplateOutcome(std::move(result.GetError()));
}

UpdateStackOutcome CloudFormationClient::UpdateStack(const UpdateStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateStackOutcome(result.GetResultWithOwnership()) : UpdateStackOutcome(std::move(result.GetError()));
}

UpdateStackInstancesOutcome CloudFormationClient::UpdateStackInstances(const UpdateStackInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateStackInstancesOutcome(result.GetResultWithOwnership())
                            : UpdateStackInstancesOutcome(std::move(result.GetError()));
}

UpdateStackSetOutcome CloudFormationClient::UpdateStackSet(const UpdateStackSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateStackSetOutcome(result.GetResultWithOwnership()) : UpdateStackSetOutcome(std::move(result.GetError()));
}

UpdateTerminationProtectionOutcome CloudFormationClient::UpdateTerminationProtection(
    const UpdateTerminationProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTerminationProtectionOutcome(result.GetResultWithOwnership())
                            : UpdateTerminationProtectionOutcome(std::move(result.GetError()));
}

ValidateTemplateOutcome CloudFormationClient::ValidateTemplate(const ValidateTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateTemplateOutcome(result.GetResultWithOwnership())
                            : ValidateTemplateOutcome(std::move(result.GetError()));
}
