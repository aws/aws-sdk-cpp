/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/ConnectClient.h>
#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/model/ListHoursOfOperationsRequest.h>
#include <aws/connect/model/ListInstanceAttributesRequest.h>
#include <aws/connect/model/ListInstanceStorageConfigsRequest.h>
#include <aws/connect/model/ListInstancesRequest.h>
#include <aws/connect/model/ListIntegrationAssociationsRequest.h>
#include <aws/connect/model/ListLambdaFunctionsRequest.h>
#include <aws/connect/model/ListLexBotsRequest.h>
#include <aws/connect/model/ListNotificationsRequest.h>
#include <aws/connect/model/ListPhoneNumbersRequest.h>
#include <aws/connect/model/ListPhoneNumbersV2Request.h>
#include <aws/connect/model/ListPredefinedAttributesRequest.h>
#include <aws/connect/model/ListPromptsRequest.h>
#include <aws/connect/model/ListQueueEmailAddressesRequest.h>
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
#include <aws/connect/model/ListUserNotificationsRequest.h>
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
#include <aws/connect/model/SearchNotificationsRequest.h>
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

ListHoursOfOperationsOutcome ConnectClient::ListHoursOfOperations(const ListHoursOfOperationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHoursOfOperations", "Required field: InstanceId, is not set");
    return ListHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListHoursOfOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInstanceAttributesOutcome ConnectClient::ListInstanceAttributes(const ListInstanceAttributesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInstanceAttributes", "Required field: InstanceId, is not set");
    return ListInstanceAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
  };

  return ListInstanceAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInstanceStorageConfigsOutcome ConnectClient::ListInstanceStorageConfigs(const ListInstanceStorageConfigsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInstanceStorageConfigs", "Required field: InstanceId, is not set");
    return ListInstanceStorageConfigsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInstanceStorageConfigs", "Required field: ResourceType, is not set");
    return ListInstanceStorageConfigsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-configs");
  };

  return ListInstanceStorageConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInstancesOutcome ConnectClient::ListInstances(const ListInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance");
  };

  return ListInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIntegrationAssociationsOutcome ConnectClient::ListIntegrationAssociations(const ListIntegrationAssociationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntegrationAssociations", "Required field: InstanceId, is not set");
    return ListIntegrationAssociationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations");
  };

  return ListIntegrationAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLambdaFunctionsOutcome ConnectClient::ListLambdaFunctions(const ListLambdaFunctionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLambdaFunctions", "Required field: InstanceId, is not set");
    return ListLambdaFunctionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-functions");
  };

  return ListLambdaFunctionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLexBotsOutcome ConnectClient::ListLexBots(const ListLexBotsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLexBots", "Required field: InstanceId, is not set");
    return ListLexBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bots");
  };

  return ListLexBotsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNotificationsOutcome ConnectClient::ListNotifications(const ListNotificationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNotifications", "Required field: InstanceId, is not set");
    return ListNotificationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPhoneNumbersOutcome ConnectClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPhoneNumbers", "Required field: InstanceId, is not set");
    return ListPhoneNumbersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListPhoneNumbersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPhoneNumbersV2Outcome ConnectClient::ListPhoneNumbersV2(const ListPhoneNumbersV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/list");
  };

  return ListPhoneNumbersV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPredefinedAttributesOutcome ConnectClient::ListPredefinedAttributes(const ListPredefinedAttributesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPredefinedAttributes", "Required field: InstanceId, is not set");
    return ListPredefinedAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/predefined-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListPredefinedAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPromptsOutcome ConnectClient::ListPrompts(const ListPromptsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrompts", "Required field: InstanceId, is not set");
    return ListPromptsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prompts-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListPromptsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQueueEmailAddressesOutcome ConnectClient::ListQueueEmailAddresses(const ListQueueEmailAddressesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueEmailAddresses", "Required field: InstanceId, is not set");
    return ListQueueEmailAddressesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueEmailAddresses", "Required field: QueueId, is not set");
    return ListQueueEmailAddressesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses");
  };

  return ListQueueEmailAddressesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQueueQuickConnectsOutcome ConnectClient::ListQueueQuickConnects(const ListQueueQuickConnectsRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects");
  };

  return ListQueueQuickConnectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQueuesOutcome ConnectClient::ListQueues(const ListQueuesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: InstanceId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQuickConnectsOutcome ConnectClient::ListQuickConnects(const ListQuickConnectsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQuickConnects", "Required field: InstanceId, is not set");
    return ListQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListQuickConnectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRealtimeContactAnalysisSegmentsV2Outcome ConnectClient::ListRealtimeContactAnalysisSegmentsV2(
    const ListRealtimeContactAnalysisSegmentsV2Request& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/list-real-time-analysis-segments-v2/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  };

  return ListRealtimeContactAnalysisSegmentsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRoutingProfileManualAssignmentQueuesOutcome ConnectClient::ListRoutingProfileManualAssignmentQueues(
    const ListRoutingProfileManualAssignmentQueuesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/manual-assignment-queues");
  };

  return ListRoutingProfileManualAssignmentQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoutingProfileQueuesOutcome ConnectClient::ListRoutingProfileQueues(const ListRoutingProfileQueuesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
  };

  return ListRoutingProfileQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoutingProfilesOutcome ConnectClient::ListRoutingProfiles(const ListRoutingProfilesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingProfiles", "Required field: InstanceId, is not set");
    return ListRoutingProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListRoutingProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRulesOutcome ConnectClient::ListRules(const ListRulesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: InstanceId, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityKeysOutcome ConnectClient::ListSecurityKeys(const ListSecurityKeysRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityKeys", "Required field: InstanceId, is not set");
    return ListSecurityKeysOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-keys");
  };

  return ListSecurityKeysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityProfileApplicationsOutcome ConnectClient::ListSecurityProfileApplications(
    const ListSecurityProfileApplicationsRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  };

  return ListSecurityProfileApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityProfileFlowModulesOutcome ConnectClient::ListSecurityProfileFlowModules(
    const ListSecurityProfileFlowModulesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  };

  return ListSecurityProfileFlowModulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityProfilePermissionsOutcome ConnectClient::ListSecurityProfilePermissions(
    const ListSecurityProfilePermissionsRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-permissions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  };

  return ListSecurityProfilePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityProfilesOutcome ConnectClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfiles", "Required field: InstanceId, is not set");
    return ListSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListSecurityProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome ConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTaskTemplatesOutcome ConnectClient::ListTaskTemplates(const ListTaskTemplatesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTaskTemplates", "Required field: InstanceId, is not set");
    return ListTaskTemplatesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/template");
  };

  return ListTaskTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTestCaseExecutionRecordsOutcome ConnectClient::ListTestCaseExecutionRecords(const ListTestCaseExecutionRecordsRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseExecutionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records");
  };

  return ListTestCaseExecutionRecordsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTestCaseExecutionsOutcome ConnectClient::ListTestCaseExecutions(const ListTestCaseExecutionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestCaseExecutions", "Required field: InstanceId, is not set");
    return ListTestCaseExecutionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-case-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListTestCaseExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTestCasesOutcome ConnectClient::ListTestCases(const ListTestCasesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestCases", "Required field: InstanceId, is not set");
    return ListTestCasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListTestCasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrafficDistributionGroupUsersOutcome ConnectClient::ListTrafficDistributionGroupUsers(
    const ListTrafficDistributionGroupUsersRequest& request) const {
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrafficDistributionGroupUsers", "Required field: TrafficDistributionGroupId, is not set");
    return ListTrafficDistributionGroupUsersOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user");
  };

  return ListTrafficDistributionGroupUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrafficDistributionGroupsOutcome ConnectClient::ListTrafficDistributionGroups(
    const ListTrafficDistributionGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-groups");
  };

  return ListTrafficDistributionGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUseCasesOutcome ConnectClient::ListUseCases(const ListUseCasesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases");
  };

  return ListUseCasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUserHierarchyGroupsOutcome ConnectClient::ListUserHierarchyGroups(const ListUserHierarchyGroupsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserHierarchyGroups", "Required field: InstanceId, is not set");
    return ListUserHierarchyGroupsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListUserHierarchyGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUserNotificationsOutcome ConnectClient::ListUserNotifications(const ListUserNotificationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserNotifications", "Required field: InstanceId, is not set");
    return ListUserNotificationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserNotifications", "Required field: UserId, is not set");
    return ListUserNotificationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
  };

  return ListUserNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUserProficienciesOutcome ConnectClient::ListUserProficiencies(const ListUserProficienciesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proficiencies");
  };

  return ListUserProficienciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUsersOutcome ConnectClient::ListUsers(const ListUsersRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: InstanceId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListViewVersionsOutcome ConnectClient::ListViewVersions(const ListViewVersionsRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListViewVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListViewsOutcome ConnectClient::ListViews(const ListViewsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListViews", "Required field: InstanceId, is not set");
    return ListViewsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListViewsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkspaceMediaOutcome ConnectClient::ListWorkspaceMedia(const ListWorkspaceMediaRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/media");
  };

  return ListWorkspaceMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkspacePagesOutcome ConnectClient::ListWorkspacePages(const ListWorkspacePagesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pages");
  };

  return ListWorkspacePagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkspacesOutcome ConnectClient::ListWorkspaces(const ListWorkspacesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkspaces", "Required field: InstanceId, is not set");
    return ListWorkspacesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListWorkspacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

MonitorContactOutcome ConnectClient::MonitorContact(const MonitorContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/monitor");
  };

  return MonitorContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PauseContactOutcome ConnectClient::PauseContact(const PauseContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/pause");
  };

  return PauseContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutUserStatusOutcome ConnectClient::PutUserStatus(const PutUserStatusRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return PutUserStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ReleasePhoneNumberOutcome ConnectClient::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ReleasePhoneNumber", "Required field: PhoneNumberId, is not set");
    return ReleasePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return ReleasePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ReplicateInstanceOutcome ConnectClient::ReplicateInstance(const ReplicateInstanceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ReplicateInstance", "Required field: InstanceId, is not set");
    return ReplicateInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replicate");
  };

  return ReplicateInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeContactOutcome ConnectClient::ResumeContact(const ResumeContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/resume");
  };

  return ResumeContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeContactRecordingOutcome ConnectClient::ResumeContactRecording(const ResumeContactRecordingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/resume-recording");
  };

  return ResumeContactRecordingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchAgentStatusesOutcome ConnectClient::SearchAgentStatuses(const SearchAgentStatusesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-agent-statuses");
  };

  return SearchAgentStatusesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchAvailablePhoneNumbersOutcome ConnectClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/search-available");
  };

  return SearchAvailablePhoneNumbersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchContactEvaluationsOutcome ConnectClient::SearchContactEvaluations(const SearchContactEvaluationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-contact-evaluations");
  };

  return SearchContactEvaluationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchContactFlowModulesOutcome ConnectClient::SearchContactFlowModules(const SearchContactFlowModulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-contact-flow-modules");
  };

  return SearchContactFlowModulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchContactFlowsOutcome ConnectClient::SearchContactFlows(const SearchContactFlowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-contact-flows");
  };

  return SearchContactFlowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchContactsOutcome ConnectClient::SearchContacts(const SearchContactsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-contacts");
  };

  return SearchContactsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchDataTablesOutcome ConnectClient::SearchDataTables(const SearchDataTablesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-data-tables");
  };

  return SearchDataTablesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchEmailAddressesOutcome ConnectClient::SearchEmailAddresses(const SearchEmailAddressesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-email-addresses");
  };

  return SearchEmailAddressesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchEvaluationFormsOutcome ConnectClient::SearchEvaluationForms(const SearchEvaluationFormsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-evaluation-forms");
  };

  return SearchEvaluationFormsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchHoursOfOperationOverridesOutcome ConnectClient::SearchHoursOfOperationOverrides(
    const SearchHoursOfOperationOverridesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-hours-of-operation-overrides");
  };

  return SearchHoursOfOperationOverridesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchHoursOfOperationsOutcome ConnectClient::SearchHoursOfOperations(const SearchHoursOfOperationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-hours-of-operations");
  };

  return SearchHoursOfOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchNotificationsOutcome ConnectClient::SearchNotifications(const SearchNotificationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-notifications");
  };

  return SearchNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchPredefinedAttributesOutcome ConnectClient::SearchPredefinedAttributes(const SearchPredefinedAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-predefined-attributes");
  };

  return SearchPredefinedAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchPromptsOutcome ConnectClient::SearchPrompts(const SearchPromptsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-prompts");
  };

  return SearchPromptsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchQueuesOutcome ConnectClient::SearchQueues(const SearchQueuesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-queues");
  };

  return SearchQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchQuickConnectsOutcome ConnectClient::SearchQuickConnects(const SearchQuickConnectsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-quick-connects");
  };

  return SearchQuickConnectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchResourceTagsOutcome ConnectClient::SearchResourceTags(const SearchResourceTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-resource-tags");
  };

  return SearchResourceTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchRoutingProfilesOutcome ConnectClient::SearchRoutingProfiles(const SearchRoutingProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-routing-profiles");
  };

  return SearchRoutingProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchSecurityProfilesOutcome ConnectClient::SearchSecurityProfiles(const SearchSecurityProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-security-profiles");
  };

  return SearchSecurityProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchTestCasesOutcome ConnectClient::SearchTestCases(const SearchTestCasesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-test-cases");
  };

  return SearchTestCasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchUserHierarchyGroupsOutcome ConnectClient::SearchUserHierarchyGroups(const SearchUserHierarchyGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-user-hierarchy-groups");
  };

  return SearchUserHierarchyGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchUsersOutcome ConnectClient::SearchUsers(const SearchUsersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-users");
  };

  return SearchUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchViewsOutcome ConnectClient::SearchViews(const SearchViewsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-views");
  };

  return SearchViewsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchVocabulariesOutcome ConnectClient::SearchVocabularies(const SearchVocabulariesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchVocabularies", "Required field: InstanceId, is not set");
    return SearchVocabulariesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return SearchVocabulariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchWorkspaceAssociationsOutcome ConnectClient::SearchWorkspaceAssociations(const SearchWorkspaceAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-workspace-associations");
  };

  return SearchWorkspaceAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchWorkspacesOutcome ConnectClient::SearchWorkspaces(const SearchWorkspacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-workspaces");
  };

  return SearchWorkspacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendChatIntegrationEventOutcome ConnectClient::SendChatIntegrationEvent(const SendChatIntegrationEventRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/chat-integration-event");
  };

  return SendChatIntegrationEventOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendOutboundEmailOutcome ConnectClient::SendOutboundEmail(const SendOutboundEmailRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendOutboundEmail", "Required field: InstanceId, is not set");
    return SendOutboundEmailOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-email");
  };

  return SendOutboundEmailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartAttachedFileUploadOutcome ConnectClient::StartAttachedFileUpload(const StartAttachedFileUploadRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return StartAttachedFileUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartChatContactOutcome ConnectClient::StartChatContact(const StartChatContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/chat");
  };

  return StartChatContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartContactEvaluationOutcome ConnectClient::StartContactEvaluation(const StartContactEvaluationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartContactEvaluation", "Required field: InstanceId, is not set");
    return StartContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return StartContactEvaluationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartContactMediaProcessingOutcome ConnectClient::StartContactMediaProcessing(const StartContactMediaProcessingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-contact-media-processing");
  };

  return StartContactMediaProcessingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartContactRecordingOutcome ConnectClient::StartContactRecording(const StartContactRecordingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-recording");
  };

  return StartContactRecordingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartContactStreamingOutcome ConnectClient::StartContactStreaming(const StartContactStreamingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/start-streaming");
  };

  return StartContactStreamingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEmailContactOutcome ConnectClient::StartEmailContact(const StartEmailContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/email");
  };

  return StartEmailContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartOutboundChatContactOutcome ConnectClient::StartOutboundChatContact(const StartOutboundChatContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/outbound-chat");
  };

  return StartOutboundChatContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartOutboundEmailContactOutcome ConnectClient::StartOutboundEmailContact(const StartOutboundEmailContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/outbound-email");
  };

  return StartOutboundEmailContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartOutboundVoiceContactOutcome ConnectClient::StartOutboundVoiceContact(const StartOutboundVoiceContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/outbound-voice");
  };

  return StartOutboundVoiceContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartScreenSharingOutcome ConnectClient::StartScreenSharing(const StartScreenSharingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/screen-sharing");
  };

  return StartScreenSharingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartTaskContactOutcome ConnectClient::StartTaskContact(const StartTaskContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/task");
  };

  return StartTaskContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartTestCaseExecutionOutcome ConnectClient::StartTestCaseExecution(const StartTestCaseExecutionRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-execution");
  };

  return StartTestCaseExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartWebRTCContactOutcome ConnectClient::StartWebRTCContact(const StartWebRTCContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/webrtc");
  };

  return StartWebRTCContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StopContactOutcome ConnectClient::StopContact(const StopContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop");
  };

  return StopContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopContactMediaProcessingOutcome ConnectClient::StopContactMediaProcessing(const StopContactMediaProcessingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-contact-media-processing");
  };

  return StopContactMediaProcessingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopContactRecordingOutcome ConnectClient::StopContactRecording(const StopContactRecordingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-recording");
  };

  return StopContactRecordingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopContactStreamingOutcome ConnectClient::StopContactStreaming(const StopContactStreamingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/stop-streaming");
  };

  return StopContactStreamingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTestCaseExecutionOutcome ConnectClient::StopTestCaseExecution(const StopTestCaseExecutionRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseExecutionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop-execution");
  };

  return StopTestCaseExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitContactEvaluationOutcome ConnectClient::SubmitContactEvaluation(const SubmitContactEvaluationRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/submit");
  };

  return SubmitContactEvaluationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SuspendContactRecordingOutcome ConnectClient::SuspendContactRecording(const SuspendContactRecordingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/suspend-recording");
  };

  return SuspendContactRecordingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagContactOutcome ConnectClient::TagContact(const TagContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/tags");
  };

  return TagContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
