/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/ConnectClient.h>
#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/model/ListLambdaFunctionsRequest.h>
#include <aws/connect/model/ListLexBotsRequest.h>
#include <aws/connect/model/ListPhoneNumbersRequest.h>
#include <aws/connect/model/ListPhoneNumbersV2Request.h>
#include <aws/connect/model/ListPredefinedAttributesRequest.h>
#include <aws/connect/model/ListPromptsRequest.h>
#include <aws/connect/model/ListQueueQuickConnectsRequest.h>
#include <aws/connect/model/ListQueuesRequest.h>
#include <aws/connect/model/ListQuickConnectsRequest.h>
#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2Request.h>
#include <aws/connect/model/ListRoutingProfileManualAssignmentQueuesRequest.h>
#include <aws/connect/model/ListRoutingProfileQueuesRequest.h>
#include <aws/connect/model/ListRoutingProfilesRequest.h>
#include <aws/connect/model/ListRulesRequest.h>
#include <aws/connect/model/ListSecurityKeysRequest.h>
#include <aws/connect/model/ListSecurityProfileApplicationsRequest.h>
#include <aws/connect/model/ListSecurityProfileFlowModulesRequest.h>
#include <aws/connect/model/ListSecurityProfilePermissionsRequest.h>
#include <aws/connect/model/ListSecurityProfilesRequest.h>
#include <aws/connect/model/ListTagsForResourceRequest.h>
#include <aws/connect/model/ListTaskTemplatesRequest.h>
#include <aws/connect/model/ListTestCaseExecutionRecordsRequest.h>
#include <aws/connect/model/ListTestCaseExecutionsRequest.h>
#include <aws/connect/model/ListTestCasesRequest.h>
#include <aws/connect/model/ListTrafficDistributionGroupUsersRequest.h>
#include <aws/connect/model/ListTrafficDistributionGroupsRequest.h>
#include <aws/connect/model/ListUseCasesRequest.h>
#include <aws/connect/model/ListUserHierarchyGroupsRequest.h>
#include <aws/connect/model/ListUserProficienciesRequest.h>
#include <aws/connect/model/ListUsersRequest.h>
#include <aws/connect/model/ListViewVersionsRequest.h>
#include <aws/connect/model/ListViewsRequest.h>
#include <aws/connect/model/ListWorkspaceMediaRequest.h>
#include <aws/connect/model/ListWorkspacePagesRequest.h>
#include <aws/connect/model/ListWorkspacesRequest.h>
#include <aws/connect/model/MonitorContactRequest.h>
#include <aws/connect/model/PauseContactRequest.h>
#include <aws/connect/model/PutUserStatusRequest.h>
#include <aws/connect/model/ReleasePhoneNumberRequest.h>
#include <aws/connect/model/ReplicateInstanceRequest.h>
#include <aws/connect/model/ResumeContactRecordingRequest.h>
#include <aws/connect/model/ResumeContactRequest.h>
#include <aws/connect/model/SearchAgentStatusesRequest.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/connect/model/SearchContactEvaluationsRequest.h>
#include <aws/connect/model/SearchContactFlowModulesRequest.h>
#include <aws/connect/model/SearchContactFlowsRequest.h>
#include <aws/connect/model/SearchContactsRequest.h>
#include <aws/connect/model/SearchDataTablesRequest.h>
#include <aws/connect/model/SearchEmailAddressesRequest.h>
#include <aws/connect/model/SearchEvaluationFormsRequest.h>
#include <aws/connect/model/SearchHoursOfOperationOverridesRequest.h>
#include <aws/connect/model/SearchHoursOfOperationsRequest.h>
#include <aws/connect/model/SearchPredefinedAttributesRequest.h>
#include <aws/connect/model/SearchPromptsRequest.h>
#include <aws/connect/model/SearchQueuesRequest.h>
#include <aws/connect/model/SearchQuickConnectsRequest.h>
#include <aws/connect/model/SearchResourceTagsRequest.h>
#include <aws/connect/model/SearchRoutingProfilesRequest.h>
#include <aws/connect/model/SearchSecurityProfilesRequest.h>
#include <aws/connect/model/SearchTestCasesRequest.h>
#include <aws/connect/model/SearchUserHierarchyGroupsRequest.h>
#include <aws/connect/model/SearchUsersRequest.h>
#include <aws/connect/model/SearchViewsRequest.h>
#include <aws/connect/model/SearchVocabulariesRequest.h>
#include <aws/connect/model/SearchWorkspaceAssociationsRequest.h>
#include <aws/connect/model/SearchWorkspacesRequest.h>
#include <aws/connect/model/SendChatIntegrationEventRequest.h>
#include <aws/connect/model/SendOutboundEmailRequest.h>
#include <aws/connect/model/StartAttachedFileUploadRequest.h>
#include <aws/connect/model/StartChatContactRequest.h>
#include <aws/connect/model/StartContactEvaluationRequest.h>
#include <aws/connect/model/StartContactMediaProcessingRequest.h>
#include <aws/connect/model/StartContactRecordingRequest.h>
#include <aws/connect/model/StartContactStreamingRequest.h>
#include <aws/connect/model/StartEmailContactRequest.h>
#include <aws/connect/model/StartOutboundChatContactRequest.h>
#include <aws/connect/model/StartOutboundEmailContactRequest.h>
#include <aws/connect/model/StartOutboundVoiceContactRequest.h>
#include <aws/connect/model/StartScreenSharingRequest.h>
#include <aws/connect/model/StartTaskContactRequest.h>
#include <aws/connect/model/StartTestCaseExecutionRequest.h>
#include <aws/connect/model/StartWebRTCContactRequest.h>
#include <aws/connect/model/StopContactMediaProcessingRequest.h>
#include <aws/connect/model/StopContactRecordingRequest.h>
#include <aws/connect/model/StopContactRequest.h>
#include <aws/connect/model/StopContactStreamingRequest.h>
#include <aws/connect/model/StopTestCaseExecutionRequest.h>
#include <aws/connect/model/SubmitContactEvaluationRequest.h>
#include <aws/connect/model/SuspendContactRecordingRequest.h>
#include <aws/connect/model/TagContactRequest.h>
#include <aws/connect/model/TagResourceRequest.h>
#include <aws/connect/model/TransferContactRequest.h>
#include <aws/connect/model/UntagContactRequest.h>
#include <aws/connect/model/UntagResourceRequest.h>
#include <aws/connect/model/UpdateAgentStatusRequest.h>
#include <aws/connect/model/UpdateAuthenticationProfileRequest.h>
#include <aws/connect/model/UpdateContactAttributesRequest.h>
#include <aws/connect/model/UpdateContactEvaluationRequest.h>
#include <aws/connect/model/UpdateContactRequest.h>
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
using namespace Aws::Connect;
using namespace Aws::Connect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

ListLambdaFunctionsOutcome ConnectClient::ListLambdaFunctions(const ListLambdaFunctionsRequest& request) const {
  AWS_OPERATION_GUARD(ListLambdaFunctions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLambdaFunctions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLambdaFunctions", "Required field: InstanceId, is not set");
    return ListLambdaFunctionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLambdaFunctions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLambdaFunctions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLambdaFunctions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLambdaFunctionsOutcome>(
      [&]() -> ListLambdaFunctionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLambdaFunctions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-functions");
        return ListLambdaFunctionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLexBotsOutcome ConnectClient::ListLexBots(const ListLexBotsRequest& request) const {
  AWS_OPERATION_GUARD(ListLexBots);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLexBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLexBots", "Required field: InstanceId, is not set");
    return ListLexBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLexBots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLexBots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLexBots",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLexBotsOutcome>(
      [&]() -> ListLexBotsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLexBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bots");
        return ListLexBotsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPhoneNumbersOutcome ConnectClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const {
  AWS_OPERATION_GUARD(ListPhoneNumbers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPhoneNumbers", "Required field: InstanceId, is not set");
    return ListPhoneNumbersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPhoneNumbers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPhoneNumbers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPhoneNumbers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPhoneNumbersOutcome>(
      [&]() -> ListPhoneNumbersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListPhoneNumbersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPhoneNumbersV2Outcome ConnectClient::ListPhoneNumbersV2(const ListPhoneNumbersV2Request& request) const {
  AWS_OPERATION_GUARD(ListPhoneNumbersV2);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumbersV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPhoneNumbersV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPhoneNumbersV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPhoneNumbersV2",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPhoneNumbersV2Outcome>(
      [&]() -> ListPhoneNumbersV2Outcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumbersV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/list");
        return ListPhoneNumbersV2Outcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPredefinedAttributesOutcome ConnectClient::ListPredefinedAttributes(const ListPredefinedAttributesRequest& request) const {
  AWS_OPERATION_GUARD(ListPredefinedAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPredefinedAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPredefinedAttributes", "Required field: InstanceId, is not set");
    return ListPredefinedAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPredefinedAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPredefinedAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPredefinedAttributes",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPredefinedAttributesOutcome>(
      [&]() -> ListPredefinedAttributesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPredefinedAttributes, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/predefined-attributes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListPredefinedAttributesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPromptsOutcome ConnectClient::ListPrompts(const ListPromptsRequest& request) const {
  AWS_OPERATION_GUARD(ListPrompts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrompts", "Required field: InstanceId, is not set");
    return ListPromptsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrompts",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPromptsOutcome>(
      [&]() -> ListPromptsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/prompts-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListPromptsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueQuickConnectsOutcome ConnectClient::ListQueueQuickConnects(const ListQueueQuickConnectsRequest& request) const {
  AWS_OPERATION_GUARD(ListQueueQuickConnects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueQuickConnects", "Required field: InstanceId, is not set");
    return ListQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueQuickConnects", "Required field: QueueId, is not set");
    return ListQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQueueQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueQuickConnects",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueQuickConnectsOutcome>(
      [&]() -> ListQueueQuickConnectsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects");
        return ListQueueQuickConnectsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueuesOutcome ConnectClient::ListQueues(const ListQueuesRequest& request) const {
  AWS_OPERATION_GUARD(ListQueues);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: InstanceId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueues",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueuesOutcome>(
      [&]() -> ListQueuesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListQueuesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQuickConnectsOutcome ConnectClient::ListQuickConnects(const ListQuickConnectsRequest& request) const {
  AWS_OPERATION_GUARD(ListQuickConnects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQuickConnects", "Required field: InstanceId, is not set");
    return ListQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQuickConnects",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQuickConnectsOutcome>(
      [&]() -> ListQuickConnectsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListQuickConnectsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRealtimeContactAnalysisSegmentsV2Outcome ConnectClient::ListRealtimeContactAnalysisSegmentsV2(
    const ListRealtimeContactAnalysisSegmentsV2Request& request) const {
  AWS_OPERATION_GUARD(ListRealtimeContactAnalysisSegmentsV2);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRealtimeContactAnalysisSegmentsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRealtimeContactAnalysisSegmentsV2", "Required field: InstanceId, is not set");
    return ListRealtimeContactAnalysisSegmentsV2Outcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRealtimeContactAnalysisSegmentsV2", "Required field: ContactId, is not set");
    return ListRealtimeContactAnalysisSegmentsV2Outcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRealtimeContactAnalysisSegmentsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRealtimeContactAnalysisSegmentsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRealtimeContactAnalysisSegmentsV2",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRealtimeContactAnalysisSegmentsV2Outcome>(
      [&]() -> ListRealtimeContactAnalysisSegmentsV2Outcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRealtimeContactAnalysisSegmentsV2, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/list-real-time-analysis-segments-v2/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
        return ListRealtimeContactAnalysisSegmentsV2Outcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRoutingProfileManualAssignmentQueuesOutcome ConnectClient::ListRoutingProfileManualAssignmentQueues(
    const ListRoutingProfileManualAssignmentQueuesRequest& request) const {
  AWS_OPERATION_GUARD(ListRoutingProfileManualAssignmentQueues);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutingProfileManualAssignmentQueues, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingProfileManualAssignmentQueues", "Required field: InstanceId, is not set");
    return ListRoutingProfileManualAssignmentQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingProfileManualAssignmentQueues", "Required field: RoutingProfileId, is not set");
    return ListRoutingProfileManualAssignmentQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRoutingProfileManualAssignmentQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRoutingProfileManualAssignmentQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRoutingProfileManualAssignmentQueues",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRoutingProfileManualAssignmentQueuesOutcome>(
      [&]() -> ListRoutingProfileManualAssignmentQueuesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoutingProfileManualAssignmentQueues, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/manual-assignment-queues");
        return ListRoutingProfileManualAssignmentQueuesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRoutingProfileQueuesOutcome ConnectClient::ListRoutingProfileQueues(const ListRoutingProfileQueuesRequest& request) const {
  AWS_OPERATION_GUARD(ListRoutingProfileQueues);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingProfileQueues", "Required field: InstanceId, is not set");
    return ListRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingProfileQueues", "Required field: RoutingProfileId, is not set");
    return ListRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RoutingProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRoutingProfileQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRoutingProfileQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRoutingProfileQueues",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRoutingProfileQueuesOutcome>(
      [&]() -> ListRoutingProfileQueuesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoutingProfileQueues, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
        return ListRoutingProfileQueuesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRoutingProfilesOutcome ConnectClient::ListRoutingProfiles(const ListRoutingProfilesRequest& request) const {
  AWS_OPERATION_GUARD(ListRoutingProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingProfiles", "Required field: InstanceId, is not set");
    return ListRoutingProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRoutingProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRoutingProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRoutingProfiles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRoutingProfilesOutcome>(
      [&]() -> ListRoutingProfilesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListRoutingProfilesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRulesOutcome ConnectClient::ListRules(const ListRulesRequest& request) const {
  AWS_OPERATION_GUARD(ListRules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: InstanceId, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRules",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRulesOutcome>(
      [&]() -> ListRulesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListRulesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSecurityKeysOutcome ConnectClient::ListSecurityKeys(const ListSecurityKeysRequest& request) const {
  AWS_OPERATION_GUARD(ListSecurityKeys);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityKeys", "Required field: InstanceId, is not set");
    return ListSecurityKeysOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSecurityKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSecurityKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSecurityKeys",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSecurityKeysOutcome>(
      [&]() -> ListSecurityKeysOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-keys");
        return ListSecurityKeysOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSecurityProfileApplicationsOutcome ConnectClient::ListSecurityProfileApplications(
    const ListSecurityProfileApplicationsRequest& request) const {
  AWS_OPERATION_GUARD(ListSecurityProfileApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfileApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecurityProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfileApplications", "Required field: SecurityProfileId, is not set");
    return ListSecurityProfileApplicationsOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfileApplications", "Required field: InstanceId, is not set");
    return ListSecurityProfileApplicationsOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSecurityProfileApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSecurityProfileApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSecurityProfileApplications",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSecurityProfileApplicationsOutcome>(
      [&]() -> ListSecurityProfileApplicationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityProfileApplications, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-applications/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
        return ListSecurityProfileApplicationsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSecurityProfileFlowModulesOutcome ConnectClient::ListSecurityProfileFlowModules(
    const ListSecurityProfileFlowModulesRequest& request) const {
  AWS_OPERATION_GUARD(ListSecurityProfileFlowModules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfileFlowModules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecurityProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfileFlowModules", "Required field: SecurityProfileId, is not set");
    return ListSecurityProfileFlowModulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [SecurityProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfileFlowModules", "Required field: InstanceId, is not set");
    return ListSecurityProfileFlowModulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSecurityProfileFlowModules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSecurityProfileFlowModules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSecurityProfileFlowModules",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSecurityProfileFlowModulesOutcome>(
      [&]() -> ListSecurityProfileFlowModulesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityProfileFlowModules, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-flow-modules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
        return ListSecurityProfileFlowModulesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSecurityProfilePermissionsOutcome ConnectClient::ListSecurityProfilePermissions(
    const ListSecurityProfilePermissionsRequest& request) const {
  AWS_OPERATION_GUARD(ListSecurityProfilePermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfilePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecurityProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfilePermissions", "Required field: SecurityProfileId, is not set");
    return ListSecurityProfilePermissionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [SecurityProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfilePermissions", "Required field: InstanceId, is not set");
    return ListSecurityProfilePermissionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSecurityProfilePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSecurityProfilePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSecurityProfilePermissions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSecurityProfilePermissionsOutcome>(
      [&]() -> ListSecurityProfilePermissionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityProfilePermissions, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-permissions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
        return ListSecurityProfilePermissionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSecurityProfilesOutcome ConnectClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const {
  AWS_OPERATION_GUARD(ListSecurityProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfiles", "Required field: InstanceId, is not set");
    return ListSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSecurityProfiles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSecurityProfilesOutcome>(
      [&]() -> ListSecurityProfilesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListSecurityProfilesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome ConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return ListTagsForResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTaskTemplatesOutcome ConnectClient::ListTaskTemplates(const ListTaskTemplatesRequest& request) const {
  AWS_OPERATION_GUARD(ListTaskTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTaskTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTaskTemplates", "Required field: InstanceId, is not set");
    return ListTaskTemplatesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTaskTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTaskTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTaskTemplates",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTaskTemplatesOutcome>(
      [&]() -> ListTaskTemplatesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTaskTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/task/template");
        return ListTaskTemplatesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTestCaseExecutionRecordsOutcome ConnectClient::ListTestCaseExecutionRecords(const ListTestCaseExecutionRecordsRequest& request) const {
  AWS_OPERATION_GUARD(ListTestCaseExecutionRecords);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestCaseExecutionRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestCaseExecutionRecords", "Required field: InstanceId, is not set");
    return ListTestCaseExecutionRecordsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestCaseExecutionRecords", "Required field: TestCaseId, is not set");
    return ListTestCaseExecutionRecordsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TestCaseId]", false));
  }
  if (!request.TestCaseExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestCaseExecutionRecords", "Required field: TestCaseExecutionId, is not set");
    return ListTestCaseExecutionRecordsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TestCaseExecutionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTestCaseExecutionRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTestCaseExecutionRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTestCaseExecutionRecords",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTestCaseExecutionRecordsOutcome>(
      [&]() -> ListTestCaseExecutionRecordsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestCaseExecutionRecords, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseExecutionId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/records");
        return ListTestCaseExecutionRecordsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTestCaseExecutionsOutcome ConnectClient::ListTestCaseExecutions(const ListTestCaseExecutionsRequest& request) const {
  AWS_OPERATION_GUARD(ListTestCaseExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestCaseExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestCaseExecutions", "Required field: InstanceId, is not set");
    return ListTestCaseExecutionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTestCaseExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTestCaseExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTestCaseExecutions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTestCaseExecutionsOutcome>(
      [&]() -> ListTestCaseExecutionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestCaseExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/test-case-executions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListTestCaseExecutionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTestCasesOutcome ConnectClient::ListTestCases(const ListTestCasesRequest& request) const {
  AWS_OPERATION_GUARD(ListTestCases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestCases", "Required field: InstanceId, is not set");
    return ListTestCasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTestCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTestCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTestCases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTestCasesOutcome>(
      [&]() -> ListTestCasesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListTestCasesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrafficDistributionGroupUsersOutcome ConnectClient::ListTrafficDistributionGroupUsers(
    const ListTrafficDistributionGroupUsersRequest& request) const {
  AWS_OPERATION_GUARD(ListTrafficDistributionGroupUsers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficDistributionGroupUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrafficDistributionGroupUsers", "Required field: TrafficDistributionGroupId, is not set");
    return ListTrafficDistributionGroupUsersOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTrafficDistributionGroupUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrafficDistributionGroupUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrafficDistributionGroupUsers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrafficDistributionGroupUsersOutcome>(
      [&]() -> ListTrafficDistributionGroupUsersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficDistributionGroupUsers, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/user");
        return ListTrafficDistributionGroupUsersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrafficDistributionGroupsOutcome ConnectClient::ListTrafficDistributionGroups(
    const ListTrafficDistributionGroupsRequest& request) const {
  AWS_OPERATION_GUARD(ListTrafficDistributionGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrafficDistributionGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTrafficDistributionGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrafficDistributionGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrafficDistributionGroups",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrafficDistributionGroupsOutcome>(
      [&]() -> ListTrafficDistributionGroupsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrafficDistributionGroups, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-groups");
        return ListTrafficDistributionGroupsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUseCasesOutcome ConnectClient::ListUseCases(const ListUseCasesRequest& request) const {
  AWS_OPERATION_GUARD(ListUseCases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUseCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUseCases", "Required field: InstanceId, is not set");
    return ListUseCasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUseCases", "Required field: IntegrationAssociationId, is not set");
    return ListUseCasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [IntegrationAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUseCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUseCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUseCases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUseCasesOutcome>(
      [&]() -> ListUseCasesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUseCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases");
        return ListUseCasesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUserHierarchyGroupsOutcome ConnectClient::ListUserHierarchyGroups(const ListUserHierarchyGroupsRequest& request) const {
  AWS_OPERATION_GUARD(ListUserHierarchyGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserHierarchyGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserHierarchyGroups", "Required field: InstanceId, is not set");
    return ListUserHierarchyGroupsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUserHierarchyGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUserHierarchyGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUserHierarchyGroups",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUserHierarchyGroupsOutcome>(
      [&]() -> ListUserHierarchyGroupsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserHierarchyGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListUserHierarchyGroupsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUserProficienciesOutcome ConnectClient::ListUserProficiencies(const ListUserProficienciesRequest& request) const {
  AWS_OPERATION_GUARD(ListUserProficiencies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserProficiencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserProficiencies", "Required field: InstanceId, is not set");
    return ListUserProficienciesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserProficiencies", "Required field: UserId, is not set");
    return ListUserProficienciesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUserProficiencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUserProficiencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUserProficiencies",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUserProficienciesOutcome>(
      [&]() -> ListUserProficienciesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserProficiencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/proficiencies");
        return ListUserProficienciesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUsersOutcome ConnectClient::ListUsers(const ListUsersRequest& request) const {
  AWS_OPERATION_GUARD(ListUsers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: InstanceId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUsers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUsersOutcome>(
      [&]() -> ListUsersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListUsersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListViewVersionsOutcome ConnectClient::ListViewVersions(const ListViewVersionsRequest& request) const {
  AWS_OPERATION_GUARD(ListViewVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListViewVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListViewVersions", "Required field: InstanceId, is not set");
    return ListViewVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  if (!request.ViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListViewVersions", "Required field: ViewId, is not set");
    return ListViewVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ViewId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListViewVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListViewVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListViewVersions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListViewVersionsOutcome>(
      [&]() -> ListViewVersionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListViewVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
        return ListViewVersionsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListViewsOutcome ConnectClient::ListViews(const ListViewsRequest& request) const {
  AWS_OPERATION_GUARD(ListViews);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListViews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListViews", "Required field: InstanceId, is not set");
    return ListViewsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListViews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListViews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListViews",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListViewsOutcome>(
      [&]() -> ListViewsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListViews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListViewsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkspaceMediaOutcome ConnectClient::ListWorkspaceMedia(const ListWorkspaceMediaRequest& request) const {
  AWS_OPERATION_GUARD(ListWorkspaceMedia);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaceMedia, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaceMedia", "Required field: InstanceId, is not set");
    return ListWorkspaceMediaOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaceMedia", "Required field: WorkspaceId, is not set");
    return ListWorkspaceMediaOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkspaceMedia, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkspaceMedia, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkspaceMedia",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkspaceMediaOutcome>(
      [&]() -> ListWorkspaceMediaOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspaceMedia, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/media");
        return ListWorkspaceMediaOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkspacePagesOutcome ConnectClient::ListWorkspacePages(const ListWorkspacePagesRequest& request) const {
  AWS_OPERATION_GUARD(ListWorkspacePages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspacePages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspacePages", "Required field: InstanceId, is not set");
    return ListWorkspacePagesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspacePages", "Required field: WorkspaceId, is not set");
    return ListWorkspacePagesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkspacePages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkspacePages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkspacePages",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkspacePagesOutcome>(
      [&]() -> ListWorkspacePagesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspacePages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/pages");
        return ListWorkspacePagesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkspacesOutcome ConnectClient::ListWorkspaces(const ListWorkspacesRequest& request) const {
  AWS_OPERATION_GUARD(ListWorkspaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaces", "Required field: InstanceId, is not set");
    return ListWorkspacesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkspaces",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkspacesOutcome>(
      [&]() -> ListWorkspacesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return ListWorkspacesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

MonitorContactOutcome ConnectClient::MonitorContact(const MonitorContactRequest& request) const {
  AWS_OPERATION_GUARD(MonitorContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MonitorContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, MonitorContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, MonitorContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".MonitorContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<MonitorContactOutcome>(
      [&]() -> MonitorContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MonitorContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/monitor");
        return MonitorContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PauseContactOutcome ConnectClient::PauseContact(const PauseContactRequest& request) const {
  AWS_OPERATION_GUARD(PauseContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PauseContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PauseContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PauseContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PauseContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PauseContactOutcome>(
      [&]() -> PauseContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PauseContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/pause");
        return PauseContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutUserStatusOutcome ConnectClient::PutUserStatus(const PutUserStatusRequest& request) const {
  AWS_OPERATION_GUARD(PutUserStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutUserStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutUserStatus", "Required field: UserId, is not set");
    return PutUserStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutUserStatus", "Required field: InstanceId, is not set");
    return PutUserStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutUserStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutUserStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutUserStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutUserStatusOutcome>(
      [&]() -> PutUserStatusOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutUserStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/status");
        return PutUserStatusOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ReleasePhoneNumberOutcome ConnectClient::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const {
  AWS_OPERATION_GUARD(ReleasePhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleasePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ReleasePhoneNumber", "Required field: PhoneNumberId, is not set");
    return ReleasePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PhoneNumberId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ReleasePhoneNumber, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ReleasePhoneNumber, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ReleasePhoneNumber",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ReleasePhoneNumberOutcome>(
      [&]() -> ReleasePhoneNumberOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleasePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
        return ReleasePhoneNumberOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ReplicateInstanceOutcome ConnectClient::ReplicateInstance(const ReplicateInstanceRequest& request) const {
  AWS_OPERATION_GUARD(ReplicateInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplicateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ReplicateInstance", "Required field: InstanceId, is not set");
    return ReplicateInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ReplicateInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ReplicateInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ReplicateInstance",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ReplicateInstanceOutcome>(
      [&]() -> ReplicateInstanceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplicateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/replicate");
        return ReplicateInstanceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResumeContactOutcome ConnectClient::ResumeContact(const ResumeContactRequest& request) const {
  AWS_OPERATION_GUARD(ResumeContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ResumeContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResumeContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResumeContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResumeContactOutcome>(
      [&]() -> ResumeContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/resume");
        return ResumeContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResumeContactRecordingOutcome ConnectClient::ResumeContactRecording(const ResumeContactRecordingRequest& request) const {
  AWS_OPERATION_GUARD(ResumeContactRecording);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ResumeContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResumeContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResumeContactRecording",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResumeContactRecordingOutcome>(
      [&]() -> ResumeContactRecordingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/resume-recording");
        return ResumeContactRecordingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchAgentStatusesOutcome ConnectClient::SearchAgentStatuses(const SearchAgentStatusesRequest& request) const {
  AWS_OPERATION_GUARD(SearchAgentStatuses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAgentStatuses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchAgentStatuses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchAgentStatuses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchAgentStatuses",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchAgentStatusesOutcome>(
      [&]() -> SearchAgentStatusesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAgentStatuses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-agent-statuses");
        return SearchAgentStatusesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchAvailablePhoneNumbersOutcome ConnectClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const {
  AWS_OPERATION_GUARD(SearchAvailablePhoneNumbers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchAvailablePhoneNumbers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchAvailablePhoneNumbersOutcome>(
      [&]() -> SearchAvailablePhoneNumbersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAvailablePhoneNumbers, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/search-available");
        return SearchAvailablePhoneNumbersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchContactEvaluationsOutcome ConnectClient::SearchContactEvaluations(const SearchContactEvaluationsRequest& request) const {
  AWS_OPERATION_GUARD(SearchContactEvaluations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchContactEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchContactEvaluations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchContactEvaluations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchContactEvaluations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchContactEvaluationsOutcome>(
      [&]() -> SearchContactEvaluationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchContactEvaluations, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-contact-evaluations");
        return SearchContactEvaluationsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchContactFlowModulesOutcome ConnectClient::SearchContactFlowModules(const SearchContactFlowModulesRequest& request) const {
  AWS_OPERATION_GUARD(SearchContactFlowModules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchContactFlowModules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchContactFlowModules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchContactFlowModules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchContactFlowModules",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchContactFlowModulesOutcome>(
      [&]() -> SearchContactFlowModulesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchContactFlowModules, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-contact-flow-modules");
        return SearchContactFlowModulesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchContactFlowsOutcome ConnectClient::SearchContactFlows(const SearchContactFlowsRequest& request) const {
  AWS_OPERATION_GUARD(SearchContactFlows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchContactFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchContactFlows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchContactFlows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchContactFlows",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchContactFlowsOutcome>(
      [&]() -> SearchContactFlowsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchContactFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-contact-flows");
        return SearchContactFlowsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchContactsOutcome ConnectClient::SearchContacts(const SearchContactsRequest& request) const {
  AWS_OPERATION_GUARD(SearchContacts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchContacts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchContacts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchContacts",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchContactsOutcome>(
      [&]() -> SearchContactsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-contacts");
        return SearchContactsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchDataTablesOutcome ConnectClient::SearchDataTables(const SearchDataTablesRequest& request) const {
  AWS_OPERATION_GUARD(SearchDataTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDataTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchDataTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchDataTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchDataTables",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchDataTablesOutcome>(
      [&]() -> SearchDataTablesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDataTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-data-tables");
        return SearchDataTablesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchEmailAddressesOutcome ConnectClient::SearchEmailAddresses(const SearchEmailAddressesRequest& request) const {
  AWS_OPERATION_GUARD(SearchEmailAddresses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchEmailAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchEmailAddresses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchEmailAddresses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchEmailAddresses",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchEmailAddressesOutcome>(
      [&]() -> SearchEmailAddressesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchEmailAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-email-addresses");
        return SearchEmailAddressesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchEvaluationFormsOutcome ConnectClient::SearchEvaluationForms(const SearchEvaluationFormsRequest& request) const {
  AWS_OPERATION_GUARD(SearchEvaluationForms);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchEvaluationForms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchEvaluationForms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchEvaluationForms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchEvaluationForms",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchEvaluationFormsOutcome>(
      [&]() -> SearchEvaluationFormsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchEvaluationForms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-evaluation-forms");
        return SearchEvaluationFormsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchHoursOfOperationOverridesOutcome ConnectClient::SearchHoursOfOperationOverrides(
    const SearchHoursOfOperationOverridesRequest& request) const {
  AWS_OPERATION_GUARD(SearchHoursOfOperationOverrides);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchHoursOfOperationOverrides, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchHoursOfOperationOverrides, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchHoursOfOperationOverrides, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchHoursOfOperationOverrides",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchHoursOfOperationOverridesOutcome>(
      [&]() -> SearchHoursOfOperationOverridesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchHoursOfOperationOverrides, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-hours-of-operation-overrides");
        return SearchHoursOfOperationOverridesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchHoursOfOperationsOutcome ConnectClient::SearchHoursOfOperations(const SearchHoursOfOperationsRequest& request) const {
  AWS_OPERATION_GUARD(SearchHoursOfOperations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchHoursOfOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchHoursOfOperations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchHoursOfOperations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchHoursOfOperations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchHoursOfOperationsOutcome>(
      [&]() -> SearchHoursOfOperationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchHoursOfOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-hours-of-operations");
        return SearchHoursOfOperationsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchPredefinedAttributesOutcome ConnectClient::SearchPredefinedAttributes(const SearchPredefinedAttributesRequest& request) const {
  AWS_OPERATION_GUARD(SearchPredefinedAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchPredefinedAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchPredefinedAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchPredefinedAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchPredefinedAttributes",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchPredefinedAttributesOutcome>(
      [&]() -> SearchPredefinedAttributesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchPredefinedAttributes, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-predefined-attributes");
        return SearchPredefinedAttributesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchPromptsOutcome ConnectClient::SearchPrompts(const SearchPromptsRequest& request) const {
  AWS_OPERATION_GUARD(SearchPrompts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchPrompts",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchPromptsOutcome>(
      [&]() -> SearchPromptsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-prompts");
        return SearchPromptsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchQueuesOutcome ConnectClient::SearchQueues(const SearchQueuesRequest& request) const {
  AWS_OPERATION_GUARD(SearchQueues);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchQueues",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchQueuesOutcome>(
      [&]() -> SearchQueuesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-queues");
        return SearchQueuesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchQuickConnectsOutcome ConnectClient::SearchQuickConnects(const SearchQuickConnectsRequest& request) const {
  AWS_OPERATION_GUARD(SearchQuickConnects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchQuickConnects",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchQuickConnectsOutcome>(
      [&]() -> SearchQuickConnectsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-quick-connects");
        return SearchQuickConnectsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchResourceTagsOutcome ConnectClient::SearchResourceTags(const SearchResourceTagsRequest& request) const {
  AWS_OPERATION_GUARD(SearchResourceTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchResourceTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchResourceTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchResourceTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchResourceTags",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchResourceTagsOutcome>(
      [&]() -> SearchResourceTagsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchResourceTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-resource-tags");
        return SearchResourceTagsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchRoutingProfilesOutcome ConnectClient::SearchRoutingProfiles(const SearchRoutingProfilesRequest& request) const {
  AWS_OPERATION_GUARD(SearchRoutingProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchRoutingProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchRoutingProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchRoutingProfiles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchRoutingProfilesOutcome>(
      [&]() -> SearchRoutingProfilesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchRoutingProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-routing-profiles");
        return SearchRoutingProfilesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchSecurityProfilesOutcome ConnectClient::SearchSecurityProfiles(const SearchSecurityProfilesRequest& request) const {
  AWS_OPERATION_GUARD(SearchSecurityProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchSecurityProfiles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchSecurityProfilesOutcome>(
      [&]() -> SearchSecurityProfilesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-security-profiles");
        return SearchSecurityProfilesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchTestCasesOutcome ConnectClient::SearchTestCases(const SearchTestCasesRequest& request) const {
  AWS_OPERATION_GUARD(SearchTestCases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTestCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchTestCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchTestCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchTestCases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchTestCasesOutcome>(
      [&]() -> SearchTestCasesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTestCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-test-cases");
        return SearchTestCasesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchUserHierarchyGroupsOutcome ConnectClient::SearchUserHierarchyGroups(const SearchUserHierarchyGroupsRequest& request) const {
  AWS_OPERATION_GUARD(SearchUserHierarchyGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchUserHierarchyGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchUserHierarchyGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchUserHierarchyGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchUserHierarchyGroups",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchUserHierarchyGroupsOutcome>(
      [&]() -> SearchUserHierarchyGroupsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchUserHierarchyGroups, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-user-hierarchy-groups");
        return SearchUserHierarchyGroupsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchUsersOutcome ConnectClient::SearchUsers(const SearchUsersRequest& request) const {
  AWS_OPERATION_GUARD(SearchUsers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchUsers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchUsersOutcome>(
      [&]() -> SearchUsersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-users");
        return SearchUsersOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchViewsOutcome ConnectClient::SearchViews(const SearchViewsRequest& request) const {
  AWS_OPERATION_GUARD(SearchViews);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchViews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchViews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchViews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchViews",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchViewsOutcome>(
      [&]() -> SearchViewsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchViews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-views");
        return SearchViewsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchVocabulariesOutcome ConnectClient::SearchVocabularies(const SearchVocabulariesRequest& request) const {
  AWS_OPERATION_GUARD(SearchVocabularies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchVocabularies", "Required field: InstanceId, is not set");
    return SearchVocabulariesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchVocabularies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchVocabularies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchVocabularies",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchVocabulariesOutcome>(
      [&]() -> SearchVocabulariesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary-summary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return SearchVocabulariesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchWorkspaceAssociationsOutcome ConnectClient::SearchWorkspaceAssociations(const SearchWorkspaceAssociationsRequest& request) const {
  AWS_OPERATION_GUARD(SearchWorkspaceAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchWorkspaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchWorkspaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchWorkspaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchWorkspaceAssociations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchWorkspaceAssociationsOutcome>(
      [&]() -> SearchWorkspaceAssociationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchWorkspaceAssociations, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-workspace-associations");
        return SearchWorkspaceAssociationsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchWorkspacesOutcome ConnectClient::SearchWorkspaces(const SearchWorkspacesRequest& request) const {
  AWS_OPERATION_GUARD(SearchWorkspaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchWorkspaces",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchWorkspacesOutcome>(
      [&]() -> SearchWorkspacesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search-workspaces");
        return SearchWorkspacesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendChatIntegrationEventOutcome ConnectClient::SendChatIntegrationEvent(const SendChatIntegrationEventRequest& request) const {
  AWS_OPERATION_GUARD(SendChatIntegrationEvent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendChatIntegrationEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SendChatIntegrationEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendChatIntegrationEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendChatIntegrationEvent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendChatIntegrationEventOutcome>(
      [&]() -> SendChatIntegrationEventOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendChatIntegrationEvent, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/chat-integration-event");
        return SendChatIntegrationEventOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendOutboundEmailOutcome ConnectClient::SendOutboundEmail(const SendOutboundEmailRequest& request) const {
  AWS_OPERATION_GUARD(SendOutboundEmail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendOutboundEmail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendOutboundEmail", "Required field: InstanceId, is not set");
    return SendOutboundEmailOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SendOutboundEmail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendOutboundEmail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendOutboundEmail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendOutboundEmailOutcome>(
      [&]() -> SendOutboundEmailOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendOutboundEmail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-email");
        return SendOutboundEmailOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAttachedFileUploadOutcome ConnectClient::StartAttachedFileUpload(const StartAttachedFileUploadRequest& request) const {
  AWS_OPERATION_GUARD(StartAttachedFileUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAttachedFileUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAttachedFileUpload", "Required field: InstanceId, is not set");
    return StartAttachedFileUploadOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.AssociatedResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAttachedFileUpload", "Required field: AssociatedResourceArn, is not set");
    return StartAttachedFileUploadOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssociatedResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartAttachedFileUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAttachedFileUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAttachedFileUpload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAttachedFileUploadOutcome>(
      [&]() -> StartAttachedFileUploadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAttachedFileUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return StartAttachedFileUploadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartChatContactOutcome ConnectClient::StartChatContact(const StartChatContactRequest& request) const {
  AWS_OPERATION_GUARD(StartChatContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartChatContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartChatContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartChatContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartChatContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartChatContactOutcome>(
      [&]() -> StartChatContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartChatContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/chat");
        return StartChatContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartContactEvaluationOutcome ConnectClient::StartContactEvaluation(const StartContactEvaluationRequest& request) const {
  AWS_OPERATION_GUARD(StartContactEvaluation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartContactEvaluation", "Required field: InstanceId, is not set");
    return StartContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartContactEvaluation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartContactEvaluationOutcome>(
      [&]() -> StartContactEvaluationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return StartContactEvaluationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartContactMediaProcessingOutcome ConnectClient::StartContactMediaProcessing(const StartContactMediaProcessingRequest& request) const {
  AWS_OPERATION_GUARD(StartContactMediaProcessing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContactMediaProcessing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartContactMediaProcessing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartContactMediaProcessing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartContactMediaProcessing",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartContactMediaProcessingOutcome>(
      [&]() -> StartContactMediaProcessingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContactMediaProcessing, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-contact-media-processing");
        return StartContactMediaProcessingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartContactRecordingOutcome ConnectClient::StartContactRecording(const StartContactRecordingRequest& request) const {
  AWS_OPERATION_GUARD(StartContactRecording);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartContactRecording",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartContactRecordingOutcome>(
      [&]() -> StartContactRecordingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-recording");
        return StartContactRecordingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartContactStreamingOutcome ConnectClient::StartContactStreaming(const StartContactStreamingRequest& request) const {
  AWS_OPERATION_GUARD(StartContactStreaming);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartContactStreaming, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartContactStreaming, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartContactStreaming",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartContactStreamingOutcome>(
      [&]() -> StartContactStreamingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-streaming");
        return StartContactStreamingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartEmailContactOutcome ConnectClient::StartEmailContact(const StartEmailContactRequest& request) const {
  AWS_OPERATION_GUARD(StartEmailContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartEmailContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartEmailContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartEmailContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartEmailContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartEmailContactOutcome>(
      [&]() -> StartEmailContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartEmailContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/email");
        return StartEmailContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartOutboundChatContactOutcome ConnectClient::StartOutboundChatContact(const StartOutboundChatContactRequest& request) const {
  AWS_OPERATION_GUARD(StartOutboundChatContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartOutboundChatContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartOutboundChatContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartOutboundChatContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartOutboundChatContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartOutboundChatContactOutcome>(
      [&]() -> StartOutboundChatContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartOutboundChatContact, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/outbound-chat");
        return StartOutboundChatContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartOutboundEmailContactOutcome ConnectClient::StartOutboundEmailContact(const StartOutboundEmailContactRequest& request) const {
  AWS_OPERATION_GUARD(StartOutboundEmailContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartOutboundEmailContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartOutboundEmailContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartOutboundEmailContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartOutboundEmailContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartOutboundEmailContactOutcome>(
      [&]() -> StartOutboundEmailContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartOutboundEmailContact, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/outbound-email");
        return StartOutboundEmailContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartOutboundVoiceContactOutcome ConnectClient::StartOutboundVoiceContact(const StartOutboundVoiceContactRequest& request) const {
  AWS_OPERATION_GUARD(StartOutboundVoiceContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartOutboundVoiceContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartOutboundVoiceContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartOutboundVoiceContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartOutboundVoiceContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartOutboundVoiceContactOutcome>(
      [&]() -> StartOutboundVoiceContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartOutboundVoiceContact, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/outbound-voice");
        return StartOutboundVoiceContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartScreenSharingOutcome ConnectClient::StartScreenSharing(const StartScreenSharingRequest& request) const {
  AWS_OPERATION_GUARD(StartScreenSharing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartScreenSharing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartScreenSharing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartScreenSharing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartScreenSharing",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartScreenSharingOutcome>(
      [&]() -> StartScreenSharingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartScreenSharing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/screen-sharing");
        return StartScreenSharingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartTaskContactOutcome ConnectClient::StartTaskContact(const StartTaskContactRequest& request) const {
  AWS_OPERATION_GUARD(StartTaskContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTaskContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartTaskContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartTaskContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartTaskContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartTaskContactOutcome>(
      [&]() -> StartTaskContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTaskContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/task");
        return StartTaskContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartTestCaseExecutionOutcome ConnectClient::StartTestCaseExecution(const StartTestCaseExecutionRequest& request) const {
  AWS_OPERATION_GUARD(StartTestCaseExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTestCaseExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartTestCaseExecution", "Required field: InstanceId, is not set");
    return StartTestCaseExecutionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartTestCaseExecution", "Required field: TestCaseId, is not set");
    return StartTestCaseExecutionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TestCaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartTestCaseExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartTestCaseExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartTestCaseExecution",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartTestCaseExecutionOutcome>(
      [&]() -> StartTestCaseExecutionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTestCaseExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/start-execution");
        return StartTestCaseExecutionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartWebRTCContactOutcome ConnectClient::StartWebRTCContact(const StartWebRTCContactRequest& request) const {
  AWS_OPERATION_GUARD(StartWebRTCContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartWebRTCContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartWebRTCContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartWebRTCContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartWebRTCContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartWebRTCContactOutcome>(
      [&]() -> StartWebRTCContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartWebRTCContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/webrtc");
        return StartWebRTCContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopContactOutcome ConnectClient::StopContact(const StopContactRequest& request) const {
  AWS_OPERATION_GUARD(StopContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopContactOutcome>(
      [&]() -> StopContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop");
        return StopContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopContactMediaProcessingOutcome ConnectClient::StopContactMediaProcessing(const StopContactMediaProcessingRequest& request) const {
  AWS_OPERATION_GUARD(StopContactMediaProcessing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopContactMediaProcessing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopContactMediaProcessing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopContactMediaProcessing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopContactMediaProcessing",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopContactMediaProcessingOutcome>(
      [&]() -> StopContactMediaProcessingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopContactMediaProcessing, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-contact-media-processing");
        return StopContactMediaProcessingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopContactRecordingOutcome ConnectClient::StopContactRecording(const StopContactRecordingRequest& request) const {
  AWS_OPERATION_GUARD(StopContactRecording);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopContactRecording",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopContactRecordingOutcome>(
      [&]() -> StopContactRecordingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-recording");
        return StopContactRecordingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopContactStreamingOutcome ConnectClient::StopContactStreaming(const StopContactStreamingRequest& request) const {
  AWS_OPERATION_GUARD(StopContactStreaming);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopContactStreaming, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopContactStreaming, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopContactStreaming",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopContactStreamingOutcome>(
      [&]() -> StopContactStreamingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopContactStreaming, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-streaming");
        return StopContactStreamingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopTestCaseExecutionOutcome ConnectClient::StopTestCaseExecution(const StopTestCaseExecutionRequest& request) const {
  AWS_OPERATION_GUARD(StopTestCaseExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopTestCaseExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopTestCaseExecution", "Required field: InstanceId, is not set");
    return StopTestCaseExecutionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.TestCaseExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopTestCaseExecution", "Required field: TestCaseExecutionId, is not set");
    return StopTestCaseExecutionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TestCaseExecutionId]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopTestCaseExecution", "Required field: TestCaseId, is not set");
    return StopTestCaseExecutionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TestCaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopTestCaseExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopTestCaseExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopTestCaseExecution",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopTestCaseExecutionOutcome>(
      [&]() -> StopTestCaseExecutionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopTestCaseExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseExecutionId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/stop-execution");
        return StopTestCaseExecutionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SubmitContactEvaluationOutcome ConnectClient::SubmitContactEvaluation(const SubmitContactEvaluationRequest& request) const {
  AWS_OPERATION_GUARD(SubmitContactEvaluation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubmitContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitContactEvaluation", "Required field: InstanceId, is not set");
    return SubmitContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitContactEvaluation", "Required field: EvaluationId, is not set");
    return SubmitContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EvaluationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SubmitContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SubmitContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SubmitContactEvaluation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SubmitContactEvaluationOutcome>(
      [&]() -> SubmitContactEvaluationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubmitContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/submit");
        return SubmitContactEvaluationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SuspendContactRecordingOutcome ConnectClient::SuspendContactRecording(const SuspendContactRecordingRequest& request) const {
  AWS_OPERATION_GUARD(SuspendContactRecording);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SuspendContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SuspendContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SuspendContactRecording, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SuspendContactRecording",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SuspendContactRecordingOutcome>(
      [&]() -> SuspendContactRecordingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SuspendContactRecording, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/suspend-recording");
        return SuspendContactRecordingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagContactOutcome ConnectClient::TagContact(const TagContactRequest& request) const {
  AWS_OPERATION_GUARD(TagContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagContactOutcome>(
      [&]() -> TagContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/tags");
        return TagContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome ConnectClient::TagResource(const TagResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return TagResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TransferContactOutcome ConnectClient::TransferContact(const TransferContactRequest& request) const {
  AWS_OPERATION_GUARD(TransferContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransferContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TransferContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TransferContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TransferContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TransferContactOutcome>(
      [&]() -> TransferContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransferContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/transfer");
        return TransferContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagContactOutcome ConnectClient::UntagContact(const UntagContactRequest& request) const {
  AWS_OPERATION_GUARD(UntagContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagContact", "Required field: ContactId, is not set");
    return UntagContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ContactId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagContact", "Required field: InstanceId, is not set");
    return UntagContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagContact", "Required field: TagKeys, is not set");
    return UntagContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagContactOutcome>(
      [&]() -> UntagContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
        return UntagContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome ConnectClient::UntagResource(const UntagResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return UntagResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAgentStatusOutcome ConnectClient::UpdateAgentStatus(const UpdateAgentStatusRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAgentStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentStatus", "Required field: InstanceId, is not set");
    return UpdateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.AgentStatusIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentStatus", "Required field: AgentStatusId, is not set");
    return UpdateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AgentStatusId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAgentStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAgentStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAgentStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAgentStatusOutcome>(
      [&]() -> UpdateAgentStatusOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentStatusId());
        return UpdateAgentStatusOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAuthenticationProfileOutcome ConnectClient::UpdateAuthenticationProfile(const UpdateAuthenticationProfileRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAuthenticationProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAuthenticationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AuthenticationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAuthenticationProfile", "Required field: AuthenticationProfileId, is not set");
    return UpdateAuthenticationProfileOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthenticationProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAuthenticationProfile", "Required field: InstanceId, is not set");
    return UpdateAuthenticationProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAuthenticationProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAuthenticationProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAuthenticationProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAuthenticationProfileOutcome>(
      [&]() -> UpdateAuthenticationProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAuthenticationProfile, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/authentication-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthenticationProfileId());
        return UpdateAuthenticationProfileOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContactOutcome ConnectClient::UpdateContact(const UpdateContactRequest& request) const {
  AWS_OPERATION_GUARD(UpdateContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: InstanceId, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: ContactId, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ContactId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContactOutcome>(
      [&]() -> UpdateContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
        return UpdateContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContactAttributesOutcome ConnectClient::UpdateContactAttributes(const UpdateContactAttributesRequest& request) const {
  AWS_OPERATION_GUARD(UpdateContactAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateContactAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContactAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContactAttributes",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContactAttributesOutcome>(
      [&]() -> UpdateContactAttributesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/attributes");
        return UpdateContactAttributesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContactEvaluationOutcome ConnectClient::UpdateContactEvaluation(const UpdateContactEvaluationRequest& request) const {
  AWS_OPERATION_GUARD(UpdateContactEvaluation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContactEvaluation", "Required field: InstanceId, is not set");
    return UpdateContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContactEvaluation", "Required field: EvaluationId, is not set");
    return UpdateContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EvaluationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContactEvaluation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContactEvaluationOutcome>(
      [&]() -> UpdateContactEvaluationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
        return UpdateContactEvaluationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
