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
#include <aws/inspector/InspectorClient.h>
#include <aws/inspector/InspectorEndpointProvider.h>
#include <aws/inspector/InspectorErrorMarshaller.h>
#include <aws/inspector/model/AddAttributesToFindingsRequest.h>
#include <aws/inspector/model/CreateAssessmentTargetRequest.h>
#include <aws/inspector/model/CreateAssessmentTemplateRequest.h>
#include <aws/inspector/model/CreateExclusionsPreviewRequest.h>
#include <aws/inspector/model/CreateResourceGroupRequest.h>
#include <aws/inspector/model/DeleteAssessmentRunRequest.h>
#include <aws/inspector/model/DeleteAssessmentTargetRequest.h>
#include <aws/inspector/model/DeleteAssessmentTemplateRequest.h>
#include <aws/inspector/model/DescribeAssessmentRunsRequest.h>
#include <aws/inspector/model/DescribeAssessmentTargetsRequest.h>
#include <aws/inspector/model/DescribeAssessmentTemplatesRequest.h>
#include <aws/inspector/model/DescribeCrossAccountAccessRoleRequest.h>
#include <aws/inspector/model/DescribeExclusionsRequest.h>
#include <aws/inspector/model/DescribeFindingsRequest.h>
#include <aws/inspector/model/DescribeResourceGroupsRequest.h>
#include <aws/inspector/model/DescribeRulesPackagesRequest.h>
#include <aws/inspector/model/GetAssessmentReportRequest.h>
#include <aws/inspector/model/GetExclusionsPreviewRequest.h>
#include <aws/inspector/model/GetTelemetryMetadataRequest.h>
#include <aws/inspector/model/ListAssessmentRunAgentsRequest.h>
#include <aws/inspector/model/ListAssessmentRunsRequest.h>
#include <aws/inspector/model/ListAssessmentTargetsRequest.h>
#include <aws/inspector/model/ListAssessmentTemplatesRequest.h>
#include <aws/inspector/model/ListEventSubscriptionsRequest.h>
#include <aws/inspector/model/ListExclusionsRequest.h>
#include <aws/inspector/model/ListFindingsRequest.h>
#include <aws/inspector/model/ListRulesPackagesRequest.h>
#include <aws/inspector/model/ListTagsForResourceRequest.h>
#include <aws/inspector/model/PreviewAgentsRequest.h>
#include <aws/inspector/model/RegisterCrossAccountAccessRoleRequest.h>
#include <aws/inspector/model/RemoveAttributesFromFindingsRequest.h>
#include <aws/inspector/model/SetTagsForResourceRequest.h>
#include <aws/inspector/model/StartAssessmentRunRequest.h>
#include <aws/inspector/model/StopAssessmentRunRequest.h>
#include <aws/inspector/model/SubscribeToEventRequest.h>
#include <aws/inspector/model/UnsubscribeFromEventRequest.h>
#include <aws/inspector/model/UpdateAssessmentTargetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Inspector;
using namespace Aws::Inspector::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Inspector {
const char SERVICE_NAME[] = "inspector";
const char ALLOCATION_TAG[] = "InspectorClient";
}  // namespace Inspector
}  // namespace Aws
const char* InspectorClient::GetServiceName() { return SERVICE_NAME; }
const char* InspectorClient::GetAllocationTag() { return ALLOCATION_TAG; }

InspectorClient::InspectorClient(const Inspector::InspectorClientConfiguration& clientConfiguration,
                                 std::shared_ptr<InspectorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InspectorClient::InspectorClient(const AWSCredentials& credentials, std::shared_ptr<InspectorEndpointProviderBase> endpointProvider,
                                 const Inspector::InspectorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InspectorClient::InspectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<InspectorEndpointProviderBase> endpointProvider,
                                 const Inspector::InspectorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
InspectorClient::InspectorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InspectorClient::InspectorClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InspectorClient::InspectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
InspectorClient::~InspectorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<InspectorEndpointProviderBase>& InspectorClient::accessEndpointProvider() { return m_endpointProvider; }

void InspectorClient::init(const Inspector::InspectorClientConfiguration& config) {
  AWSClient::SetServiceClientName("Inspector");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "inspector");
}

void InspectorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
InspectorClient::InvokeOperationOutcome InspectorClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddAttributesToFindingsOutcome InspectorClient::AddAttributesToFindings(const AddAttributesToFindingsRequest& request) const {
  return AddAttributesToFindingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssessmentTargetOutcome InspectorClient::CreateAssessmentTarget(const CreateAssessmentTargetRequest& request) const {
  return CreateAssessmentTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssessmentTemplateOutcome InspectorClient::CreateAssessmentTemplate(const CreateAssessmentTemplateRequest& request) const {
  return CreateAssessmentTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExclusionsPreviewOutcome InspectorClient::CreateExclusionsPreview(const CreateExclusionsPreviewRequest& request) const {
  return CreateExclusionsPreviewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceGroupOutcome InspectorClient::CreateResourceGroup(const CreateResourceGroupRequest& request) const {
  return CreateResourceGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAssessmentRunOutcome InspectorClient::DeleteAssessmentRun(const DeleteAssessmentRunRequest& request) const {
  return DeleteAssessmentRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAssessmentTargetOutcome InspectorClient::DeleteAssessmentTarget(const DeleteAssessmentTargetRequest& request) const {
  return DeleteAssessmentTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAssessmentTemplateOutcome InspectorClient::DeleteAssessmentTemplate(const DeleteAssessmentTemplateRequest& request) const {
  return DeleteAssessmentTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAssessmentRunsOutcome InspectorClient::DescribeAssessmentRuns(const DescribeAssessmentRunsRequest& request) const {
  return DescribeAssessmentRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAssessmentTargetsOutcome InspectorClient::DescribeAssessmentTargets(const DescribeAssessmentTargetsRequest& request) const {
  return DescribeAssessmentTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAssessmentTemplatesOutcome InspectorClient::DescribeAssessmentTemplates(const DescribeAssessmentTemplatesRequest& request) const {
  return DescribeAssessmentTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCrossAccountAccessRoleOutcome InspectorClient::DescribeCrossAccountAccessRole(
    const DescribeCrossAccountAccessRoleRequest& request) const {
  return DescribeCrossAccountAccessRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExclusionsOutcome InspectorClient::DescribeExclusions(const DescribeExclusionsRequest& request) const {
  return DescribeExclusionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFindingsOutcome InspectorClient::DescribeFindings(const DescribeFindingsRequest& request) const {
  return DescribeFindingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourceGroupsOutcome InspectorClient::DescribeResourceGroups(const DescribeResourceGroupsRequest& request) const {
  return DescribeResourceGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRulesPackagesOutcome InspectorClient::DescribeRulesPackages(const DescribeRulesPackagesRequest& request) const {
  return DescribeRulesPackagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAssessmentReportOutcome InspectorClient::GetAssessmentReport(const GetAssessmentReportRequest& request) const {
  return GetAssessmentReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExclusionsPreviewOutcome InspectorClient::GetExclusionsPreview(const GetExclusionsPreviewRequest& request) const {
  return GetExclusionsPreviewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTelemetryMetadataOutcome InspectorClient::GetTelemetryMetadata(const GetTelemetryMetadataRequest& request) const {
  return GetTelemetryMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssessmentRunAgentsOutcome InspectorClient::ListAssessmentRunAgents(const ListAssessmentRunAgentsRequest& request) const {
  return ListAssessmentRunAgentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssessmentRunsOutcome InspectorClient::ListAssessmentRuns(const ListAssessmentRunsRequest& request) const {
  return ListAssessmentRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssessmentTargetsOutcome InspectorClient::ListAssessmentTargets(const ListAssessmentTargetsRequest& request) const {
  return ListAssessmentTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssessmentTemplatesOutcome InspectorClient::ListAssessmentTemplates(const ListAssessmentTemplatesRequest& request) const {
  return ListAssessmentTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventSubscriptionsOutcome InspectorClient::ListEventSubscriptions(const ListEventSubscriptionsRequest& request) const {
  return ListEventSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExclusionsOutcome InspectorClient::ListExclusions(const ListExclusionsRequest& request) const {
  return ListExclusionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFindingsOutcome InspectorClient::ListFindings(const ListFindingsRequest& request) const {
  return ListFindingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRulesPackagesOutcome InspectorClient::ListRulesPackages(const ListRulesPackagesRequest& request) const {
  return ListRulesPackagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome InspectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PreviewAgentsOutcome InspectorClient::PreviewAgents(const PreviewAgentsRequest& request) const {
  return PreviewAgentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterCrossAccountAccessRoleOutcome InspectorClient::RegisterCrossAccountAccessRole(
    const RegisterCrossAccountAccessRoleRequest& request) const {
  return RegisterCrossAccountAccessRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAttributesFromFindingsOutcome InspectorClient::RemoveAttributesFromFindings(
    const RemoveAttributesFromFindingsRequest& request) const {
  return RemoveAttributesFromFindingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetTagsForResourceOutcome InspectorClient::SetTagsForResource(const SetTagsForResourceRequest& request) const {
  return SetTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAssessmentRunOutcome InspectorClient::StartAssessmentRun(const StartAssessmentRunRequest& request) const {
  return StartAssessmentRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAssessmentRunOutcome InspectorClient::StopAssessmentRun(const StopAssessmentRunRequest& request) const {
  return StopAssessmentRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubscribeToEventOutcome InspectorClient::SubscribeToEvent(const SubscribeToEventRequest& request) const {
  return SubscribeToEventOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnsubscribeFromEventOutcome InspectorClient::UnsubscribeFromEvent(const UnsubscribeFromEventRequest& request) const {
  return UnsubscribeFromEventOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAssessmentTargetOutcome InspectorClient::UpdateAssessmentTarget(const UpdateAssessmentTargetRequest& request) const {
  return UpdateAssessmentTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
