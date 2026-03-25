/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/ConnectClient.h>
#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/model/DeleteViewRequest.h>
#include <aws/connect/model/DeleteViewVersionRequest.h>
#include <aws/connect/model/DeleteVocabularyRequest.h>
#include <aws/connect/model/DeleteWorkspaceMediaRequest.h>
#include <aws/connect/model/DeleteWorkspacePageRequest.h>
#include <aws/connect/model/DeleteWorkspaceRequest.h>
#include <aws/connect/model/DescribeAgentStatusRequest.h>
#include <aws/connect/model/DescribeAuthenticationProfileRequest.h>
#include <aws/connect/model/DescribeContactEvaluationRequest.h>
#include <aws/connect/model/DescribeContactFlowModuleAliasRequest.h>
#include <aws/connect/model/DescribeContactFlowModuleRequest.h>
#include <aws/connect/model/DescribeContactFlowRequest.h>
#include <aws/connect/model/DescribeContactRequest.h>
#include <aws/connect/model/DescribeDataTableAttributeRequest.h>
#include <aws/connect/model/DescribeDataTableRequest.h>
#include <aws/connect/model/DescribeEmailAddressRequest.h>
#include <aws/connect/model/DescribeEvaluationFormRequest.h>
#include <aws/connect/model/DescribeHoursOfOperationOverrideRequest.h>
#include <aws/connect/model/DescribeHoursOfOperationRequest.h>
#include <aws/connect/model/DescribeInstanceAttributeRequest.h>
#include <aws/connect/model/DescribeInstanceRequest.h>
#include <aws/connect/model/DescribeInstanceStorageConfigRequest.h>
#include <aws/connect/model/DescribeNotificationRequest.h>
#include <aws/connect/model/DescribePhoneNumberRequest.h>
#include <aws/connect/model/DescribePredefinedAttributeRequest.h>
#include <aws/connect/model/DescribePromptRequest.h>
#include <aws/connect/model/DescribeQueueRequest.h>
#include <aws/connect/model/DescribeQuickConnectRequest.h>
#include <aws/connect/model/DescribeRoutingProfileRequest.h>
#include <aws/connect/model/DescribeRuleRequest.h>
#include <aws/connect/model/DescribeSecurityProfileRequest.h>
#include <aws/connect/model/DescribeTestCaseRequest.h>
#include <aws/connect/model/DescribeTrafficDistributionGroupRequest.h>
#include <aws/connect/model/DescribeUserHierarchyGroupRequest.h>
#include <aws/connect/model/DescribeUserHierarchyStructureRequest.h>
#include <aws/connect/model/DescribeUserRequest.h>
#include <aws/connect/model/DescribeViewRequest.h>
#include <aws/connect/model/DescribeVocabularyRequest.h>
#include <aws/connect/model/DescribeWorkspaceRequest.h>
#include <aws/connect/model/DisassociateAnalyticsDataSetRequest.h>
#include <aws/connect/model/DisassociateApprovedOriginRequest.h>
#include <aws/connect/model/DisassociateBotRequest.h>
#include <aws/connect/model/DisassociateEmailAddressAliasRequest.h>
#include <aws/connect/model/DisassociateFlowRequest.h>
#include <aws/connect/model/DisassociateHoursOfOperationsRequest.h>
#include <aws/connect/model/DisassociateInstanceStorageConfigRequest.h>
#include <aws/connect/model/DisassociateLambdaFunctionRequest.h>
#include <aws/connect/model/DisassociateLexBotRequest.h>
#include <aws/connect/model/DisassociatePhoneNumberContactFlowRequest.h>
#include <aws/connect/model/DisassociateQueueEmailAddressesRequest.h>
#include <aws/connect/model/DisassociateQueueQuickConnectsRequest.h>
#include <aws/connect/model/DisassociateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/DisassociateSecurityKeyRequest.h>
#include <aws/connect/model/DisassociateSecurityProfilesRequest.h>
#include <aws/connect/model/DisassociateTrafficDistributionGroupUserRequest.h>
#include <aws/connect/model/DisassociateUserProficienciesRequest.h>
#include <aws/connect/model/DisassociateWorkspaceRequest.h>
#include <aws/connect/model/DismissUserContactRequest.h>
#include <aws/connect/model/EvaluateDataTableValuesRequest.h>
#include <aws/connect/model/GetAttachedFileRequest.h>
#include <aws/connect/model/GetContactAttributesRequest.h>
#include <aws/connect/model/GetContactMetricsRequest.h>
#include <aws/connect/model/GetCurrentMetricDataRequest.h>
#include <aws/connect/model/GetCurrentUserDataRequest.h>
#include <aws/connect/model/GetEffectiveHoursOfOperationsRequest.h>
#include <aws/connect/model/GetFederationTokenRequest.h>
#include <aws/connect/model/GetFlowAssociationRequest.h>
#include <aws/connect/model/GetMetricDataRequest.h>
#include <aws/connect/model/GetMetricDataV2Request.h>
#include <aws/connect/model/GetPromptFileRequest.h>
#include <aws/connect/model/GetTaskTemplateRequest.h>
#include <aws/connect/model/GetTestCaseExecutionSummaryRequest.h>
#include <aws/connect/model/GetTrafficDistributionRequest.h>
#include <aws/connect/model/ImportPhoneNumberRequest.h>
#include <aws/connect/model/ImportWorkspaceMediaRequest.h>
#include <aws/connect/model/ListAgentStatusesRequest.h>
#include <aws/connect/model/ListAnalyticsDataAssociationsRequest.h>
#include <aws/connect/model/ListAnalyticsDataLakeDataSetsRequest.h>
#include <aws/connect/model/ListApprovedOriginsRequest.h>
#include <aws/connect/model/ListAssociatedContactsRequest.h>
#include <aws/connect/model/ListAuthenticationProfilesRequest.h>
#include <aws/connect/model/ListBotsRequest.h>
#include <aws/connect/model/ListChildHoursOfOperationsRequest.h>
#include <aws/connect/model/ListContactEvaluationsRequest.h>
#include <aws/connect/model/ListContactFlowModuleAliasesRequest.h>
#include <aws/connect/model/ListContactFlowModuleVersionsRequest.h>
#include <aws/connect/model/ListContactFlowModulesRequest.h>
#include <aws/connect/model/ListContactFlowVersionsRequest.h>
#include <aws/connect/model/ListContactFlowsRequest.h>
#include <aws/connect/model/ListContactReferencesRequest.h>
#include <aws/connect/model/ListDataTableAttributesRequest.h>
#include <aws/connect/model/ListDataTablePrimaryValuesRequest.h>
#include <aws/connect/model/ListDataTableValuesRequest.h>
#include <aws/connect/model/ListDataTablesRequest.h>
#include <aws/connect/model/ListDefaultVocabulariesRequest.h>
#include <aws/connect/model/ListEntitySecurityProfilesRequest.h>
#include <aws/connect/model/ListEvaluationFormVersionsRequest.h>
#include <aws/connect/model/ListEvaluationFormsRequest.h>
#include <aws/connect/model/ListFlowAssociationsRequest.h>
#include <aws/connect/model/ListHoursOfOperationOverridesRequest.h>
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

DeleteViewOutcome ConnectClient::DeleteView(const DeleteViewRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteView", "Required field: InstanceId, is not set");
    return DeleteViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.ViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteView", "Required field: ViewId, is not set");
    return DeleteViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
  };

  return DeleteViewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteViewVersionOutcome ConnectClient::DeleteViewVersion(const DeleteViewVersionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteViewVersion", "Required field: InstanceId, is not set");
    return DeleteViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.ViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteViewVersion", "Required field: ViewId, is not set");
    return DeleteViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ViewId]", false));
  }
  if (!request.ViewVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteViewVersion", "Required field: ViewVersion, is not set");
    return DeleteViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ViewVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewVersion());
  };

  return DeleteViewVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVocabularyOutcome ConnectClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVocabulary", "Required field: InstanceId, is not set");
    return DeleteVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  if (!request.VocabularyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVocabulary", "Required field: VocabularyId, is not set");
    return DeleteVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [VocabularyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary-remove/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVocabularyId());
  };

  return DeleteVocabularyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkspaceOutcome ConnectClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: InstanceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return DeleteWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkspaceMediaOutcome ConnectClient::DeleteWorkspaceMedia(const DeleteWorkspaceMediaRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceMedia", "Required field: InstanceId, is not set");
    return DeleteWorkspaceMediaOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceMedia", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceMediaOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkspaceId]", false));
  }
  if (!request.MediaTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspaceMedia", "Required field: MediaType, is not set");
    return DeleteWorkspaceMediaOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MediaType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/media");
  };

  return DeleteWorkspaceMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkspacePageOutcome ConnectClient::DeleteWorkspacePage(const DeleteWorkspacePageRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspacePage", "Required field: InstanceId, is not set");
    return DeleteWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspacePage", "Required field: WorkspaceId, is not set");
    return DeleteWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkspaceId]", false));
  }
  if (!request.PageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspacePage", "Required field: Page, is not set");
    return DeleteWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Page]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPage());
  };

  return DeleteWorkspacePageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAgentStatusOutcome ConnectClient::DescribeAgentStatus(const DescribeAgentStatusRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAgentStatus", "Required field: InstanceId, is not set");
    return DescribeAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  if (!request.AgentStatusIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAgentStatus", "Required field: AgentStatusId, is not set");
    return DescribeAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AgentStatusId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentStatusId());
  };

  return DescribeAgentStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAuthenticationProfileOutcome ConnectClient::DescribeAuthenticationProfile(
    const DescribeAuthenticationProfileRequest& request) const {
  if (!request.AuthenticationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAuthenticationProfile", "Required field: AuthenticationProfileId, is not set");
    return DescribeAuthenticationProfileOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthenticationProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAuthenticationProfile", "Required field: InstanceId, is not set");
    return DescribeAuthenticationProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authentication-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthenticationProfileId());
  };

  return DescribeAuthenticationProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeContactOutcome ConnectClient::DescribeContact(const DescribeContactRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContact", "Required field: InstanceId, is not set");
    return DescribeContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContact", "Required field: ContactId, is not set");
    return DescribeContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  };

  return DescribeContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeContactEvaluationOutcome ConnectClient::DescribeContactEvaluation(const DescribeContactEvaluationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactEvaluation", "Required field: InstanceId, is not set");
    return DescribeContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactEvaluation", "Required field: EvaluationId, is not set");
    return DescribeContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EvaluationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
  };

  return DescribeContactEvaluationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeContactFlowOutcome ConnectClient::DescribeContactFlow(const DescribeContactFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactFlow", "Required field: InstanceId, is not set");
    return DescribeContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactFlow", "Required field: ContactFlowId, is not set");
    return DescribeContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ContactFlowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
  };

  return DescribeContactFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeContactFlowModuleOutcome ConnectClient::DescribeContactFlowModule(const DescribeContactFlowModuleRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactFlowModule", "Required field: InstanceId, is not set");
    return DescribeContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactFlowModule", "Required field: ContactFlowModuleId, is not set");
    return DescribeContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ContactFlowModuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
  };

  return DescribeContactFlowModuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeContactFlowModuleAliasOutcome ConnectClient::DescribeContactFlowModuleAlias(
    const DescribeContactFlowModuleAliasRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactFlowModuleAlias", "Required field: InstanceId, is not set");
    return DescribeContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactFlowModuleAlias", "Required field: ContactFlowModuleId, is not set");
    return DescribeContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }
  if (!request.AliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactFlowModuleAlias", "Required field: AliasId, is not set");
    return DescribeContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [AliasId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasId());
  };

  return DescribeContactFlowModuleAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDataTableOutcome ConnectClient::DescribeDataTable(const DescribeDataTableRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataTable", "Required field: InstanceId, is not set");
    return DescribeDataTableOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataTable", "Required field: DataTableId, is not set");
    return DescribeDataTableOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DataTableId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
  };

  return DescribeDataTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDataTableAttributeOutcome ConnectClient::DescribeDataTableAttribute(const DescribeDataTableAttributeRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataTableAttribute", "Required field: InstanceId, is not set");
    return DescribeDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataTableAttribute", "Required field: DataTableId, is not set");
    return DescribeDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DataTableId]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataTableAttribute", "Required field: AttributeName, is not set");
    return DescribeDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AttributeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
  };

  return DescribeDataTableAttributeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeEmailAddressOutcome ConnectClient::DescribeEmailAddress(const DescribeEmailAddressRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEmailAddress", "Required field: InstanceId, is not set");
    return DescribeEmailAddressOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.EmailAddressIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEmailAddress", "Required field: EmailAddressId, is not set");
    return DescribeEmailAddressOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EmailAddressId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddressId());
  };

  return DescribeEmailAddressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeEvaluationFormOutcome ConnectClient::DescribeEvaluationForm(const DescribeEvaluationFormRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEvaluationForm", "Required field: InstanceId, is not set");
    return DescribeEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEvaluationForm", "Required field: EvaluationFormId, is not set");
    return DescribeEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EvaluationFormId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  };

  return DescribeEvaluationFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeHoursOfOperationOutcome ConnectClient::DescribeHoursOfOperation(const DescribeHoursOfOperationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeHoursOfOperation", "Required field: InstanceId, is not set");
    return DescribeHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeHoursOfOperation", "Required field: HoursOfOperationId, is not set");
    return DescribeHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [HoursOfOperationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
  };

  return DescribeHoursOfOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeHoursOfOperationOverrideOutcome ConnectClient::DescribeHoursOfOperationOverride(
    const DescribeHoursOfOperationOverrideRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeHoursOfOperationOverride", "Required field: InstanceId, is not set");
    return DescribeHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeHoursOfOperationOverride", "Required field: HoursOfOperationId, is not set");
    return DescribeHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationId]", false));
  }
  if (!request.HoursOfOperationOverrideIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeHoursOfOperationOverride", "Required field: HoursOfOperationOverrideId, is not set");
    return DescribeHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationOverrideId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/overrides/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationOverrideId());
  };

  return DescribeHoursOfOperationOverrideOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInstanceOutcome ConnectClient::DescribeInstance(const DescribeInstanceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstance", "Required field: InstanceId, is not set");
    return DescribeInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return DescribeInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInstanceAttributeOutcome ConnectClient::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstanceAttribute", "Required field: InstanceId, is not set");
    return DescribeInstanceAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.AttributeTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstanceAttribute", "Required field: AttributeType, is not set");
    return DescribeInstanceAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AttributeType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attribute/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(request.GetAttributeType()));
  };

  return DescribeInstanceAttributeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInstanceStorageConfigOutcome ConnectClient::DescribeInstanceStorageConfig(
    const DescribeInstanceStorageConfigRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstanceStorageConfig", "Required field: InstanceId, is not set");
    return DescribeInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstanceStorageConfig", "Required field: AssociationId, is not set");
    return DescribeInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [AssociationId]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstanceStorageConfig", "Required field: ResourceType, is not set");
    return DescribeInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return DescribeInstanceStorageConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNotificationOutcome ConnectClient::DescribeNotification(const DescribeNotificationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNotification", "Required field: InstanceId, is not set");
    return DescribeNotificationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.NotificationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNotification", "Required field: NotificationId, is not set");
    return DescribeNotificationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NotificationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNotificationId());
  };

  return DescribeNotificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePhoneNumberOutcome ConnectClient::DescribePhoneNumber(const DescribePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DescribePhoneNumberOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return DescribePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePredefinedAttributeOutcome ConnectClient::DescribePredefinedAttribute(const DescribePredefinedAttributeRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePredefinedAttribute", "Required field: InstanceId, is not set");
    return DescribePredefinedAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePredefinedAttribute", "Required field: Name, is not set");
    return DescribePredefinedAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/predefined-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribePredefinedAttributeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePromptOutcome ConnectClient::DescribePrompt(const DescribePromptRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePrompt", "Required field: InstanceId, is not set");
    return DescribePromptOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.PromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePrompt", "Required field: PromptId, is not set");
    return DescribePromptOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PromptId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPromptId());
  };

  return DescribePromptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeQueueOutcome ConnectClient::DescribeQueue(const DescribeQueueRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQueue", "Required field: InstanceId, is not set");
    return DescribeQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQueue", "Required field: QueueId, is not set");
    return DescribeQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [QueueId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  };

  return DescribeQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeQuickConnectOutcome ConnectClient::DescribeQuickConnect(const DescribeQuickConnectRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQuickConnect", "Required field: InstanceId, is not set");
    return DescribeQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.QuickConnectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQuickConnect", "Required field: QuickConnectId, is not set");
    return DescribeQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [QuickConnectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickConnectId());
  };

  return DescribeQuickConnectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRoutingProfileOutcome ConnectClient::DescribeRoutingProfile(const DescribeRoutingProfileRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRoutingProfile", "Required field: InstanceId, is not set");
    return DescribeRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRoutingProfile", "Required field: RoutingProfileId, is not set");
    return DescribeRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RoutingProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  };

  return DescribeRoutingProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRuleOutcome ConnectClient::DescribeRule(const DescribeRuleRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRule", "Required field: InstanceId, is not set");
    return DescribeRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.RuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRule", "Required field: RuleId, is not set");
    return DescribeRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  };

  return DescribeRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeSecurityProfileOutcome ConnectClient::DescribeSecurityProfile(const DescribeSecurityProfileRequest& request) const {
  if (!request.SecurityProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSecurityProfile", "Required field: SecurityProfileId, is not set");
    return DescribeSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SecurityProfileId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSecurityProfile", "Required field: InstanceId, is not set");
    return DescribeSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  };

  return DescribeSecurityProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeTestCaseOutcome ConnectClient::DescribeTestCase(const DescribeTestCaseRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTestCase", "Required field: InstanceId, is not set");
    return DescribeTestCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTestCase", "Required field: TestCaseId, is not set");
    return DescribeTestCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TestCaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
  };

  return DescribeTestCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeTrafficDistributionGroupOutcome ConnectClient::DescribeTrafficDistributionGroup(
    const DescribeTrafficDistributionGroupRequest& request) const {
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTrafficDistributionGroup", "Required field: TrafficDistributionGroupId, is not set");
    return DescribeTrafficDistributionGroupOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
  };

  return DescribeTrafficDistributionGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeUserOutcome ConnectClient::DescribeUser(const DescribeUserRequest& request) const {
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: UserId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: InstanceId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return DescribeUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeUserHierarchyGroupOutcome ConnectClient::DescribeUserHierarchyGroup(const DescribeUserHierarchyGroupRequest& request) const {
  if (!request.HierarchyGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUserHierarchyGroup", "Required field: HierarchyGroupId, is not set");
    return DescribeUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [HierarchyGroupId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUserHierarchyGroup", "Required field: InstanceId, is not set");
    return DescribeUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHierarchyGroupId());
  };

  return DescribeUserHierarchyGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeUserHierarchyStructureOutcome ConnectClient::DescribeUserHierarchyStructure(
    const DescribeUserHierarchyStructureRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUserHierarchyStructure", "Required field: InstanceId, is not set");
    return DescribeUserHierarchyStructureOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-structure/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return DescribeUserHierarchyStructureOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeViewOutcome ConnectClient::DescribeView(const DescribeViewRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeView", "Required field: InstanceId, is not set");
    return DescribeViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.ViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeView", "Required field: ViewId, is not set");
    return DescribeViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ViewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
  };

  return DescribeViewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVocabularyOutcome ConnectClient::DescribeVocabulary(const DescribeVocabularyRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVocabulary", "Required field: InstanceId, is not set");
    return DescribeVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.VocabularyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVocabulary", "Required field: VocabularyId, is not set");
    return DescribeVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VocabularyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVocabularyId());
  };

  return DescribeVocabularyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeWorkspaceOutcome ConnectClient::DescribeWorkspace(const DescribeWorkspaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: InstanceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return DescribeWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateAnalyticsDataSetOutcome ConnectClient::DisassociateAnalyticsDataSet(const DisassociateAnalyticsDataSetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAnalyticsDataSet", "Required field: InstanceId, is not set");
    return DisassociateAnalyticsDataSetOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/association");
  };

  return DisassociateAnalyticsDataSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateApprovedOriginOutcome ConnectClient::DisassociateApprovedOrigin(const DisassociateApprovedOriginRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateApprovedOrigin", "Required field: InstanceId, is not set");
    return DisassociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.OriginHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateApprovedOrigin", "Required field: Origin, is not set");
    return DisassociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Origin]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/approved-origin");
  };

  return DisassociateApprovedOriginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateBotOutcome ConnectClient::DisassociateBot(const DisassociateBotRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateBot", "Required field: InstanceId, is not set");
    return DisassociateBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bot");
  };

  return DisassociateBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateEmailAddressAliasOutcome ConnectClient::DisassociateEmailAddressAlias(
    const DisassociateEmailAddressAliasRequest& request) const {
  if (!request.EmailAddressIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateEmailAddressAlias", "Required field: EmailAddressId, is not set");
    return DisassociateEmailAddressAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [EmailAddressId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateEmailAddressAlias", "Required field: InstanceId, is not set");
    return DisassociateEmailAddressAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddressId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-alias");
  };

  return DisassociateEmailAddressAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFlowOutcome ConnectClient::DisassociateFlow(const DisassociateFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateFlow", "Required field: InstanceId, is not set");
    return DisassociateFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateFlow", "Required field: ResourceId, is not set");
    return DisassociateFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceId]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateFlow", "Required field: ResourceType, is not set");
    return DisassociateFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/flow-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(
        FlowAssociationResourceTypeMapper::GetNameForFlowAssociationResourceType(request.GetResourceType()));
  };

  return DisassociateFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateHoursOfOperationsOutcome ConnectClient::DisassociateHoursOfOperations(
    const DisassociateHoursOfOperationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateHoursOfOperations", "Required field: InstanceId, is not set");
    return DisassociateHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateHoursOfOperations", "Required field: HoursOfOperationId, is not set");
    return DisassociateHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [HoursOfOperationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-hours");
  };

  return DisassociateHoursOfOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateInstanceStorageConfigOutcome ConnectClient::DisassociateInstanceStorageConfig(
    const DisassociateInstanceStorageConfigRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return DisassociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateInstanceStorageConfig", "Required field: AssociationId, is not set");
    return DisassociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateInstanceStorageConfig", "Required field: ResourceType, is not set");
    return DisassociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return DisassociateInstanceStorageConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateLambdaFunctionOutcome ConnectClient::DisassociateLambdaFunction(const DisassociateLambdaFunctionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLambdaFunction", "Required field: InstanceId, is not set");
    return DisassociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.FunctionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLambdaFunction", "Required field: FunctionArn, is not set");
    return DisassociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FunctionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-function");
  };

  return DisassociateLambdaFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateLexBotOutcome ConnectClient::DisassociateLexBot(const DisassociateLexBotRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLexBot", "Required field: InstanceId, is not set");
    return DisassociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.BotNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLexBot", "Required field: BotName, is not set");
    return DisassociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotName]", false));
  }
  if (!request.LexRegionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLexBot", "Required field: LexRegion, is not set");
    return DisassociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LexRegion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bot");
  };

  return DisassociateLexBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociatePhoneNumberContactFlowOutcome ConnectClient::DisassociatePhoneNumberContactFlow(
    const DisassociatePhoneNumberContactFlowRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberContactFlow", "Required field: PhoneNumberId, is not set");
    return DisassociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberContactFlow", "Required field: InstanceId, is not set");
    return DisassociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow");
  };

  return DisassociatePhoneNumberContactFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateQueueEmailAddressesOutcome ConnectClient::DisassociateQueueEmailAddresses(
    const DisassociateQueueEmailAddressesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateQueueEmailAddresses", "Required field: InstanceId, is not set");
    return DisassociateQueueEmailAddressesOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateQueueEmailAddresses", "Required field: QueueId, is not set");
    return DisassociateQueueEmailAddressesOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-email-addresses");
  };

  return DisassociateQueueEmailAddressesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateQueueQuickConnectsOutcome ConnectClient::DisassociateQueueQuickConnects(
    const DisassociateQueueQuickConnectsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateQueueQuickConnects", "Required field: InstanceId, is not set");
    return DisassociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateQueueQuickConnects", "Required field: QueueId, is not set");
    return DisassociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [QueueId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-quick-connects");
  };

  return DisassociateQueueQuickConnectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateRoutingProfileQueuesOutcome ConnectClient::DisassociateRoutingProfileQueues(
    const DisassociateRoutingProfileQueuesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRoutingProfileQueues", "Required field: InstanceId, is not set");
    return DisassociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRoutingProfileQueues", "Required field: RoutingProfileId, is not set");
    return DisassociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-queues");
  };

  return DisassociateRoutingProfileQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSecurityKeyOutcome ConnectClient::DisassociateSecurityKey(const DisassociateSecurityKeyRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSecurityKey", "Required field: InstanceId, is not set");
    return DisassociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSecurityKey", "Required field: AssociationId, is not set");
    return DisassociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-key/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return DisassociateSecurityKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateSecurityProfilesOutcome ConnectClient::DisassociateSecurityProfiles(const DisassociateSecurityProfilesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSecurityProfiles", "Required field: InstanceId, is not set");
    return DisassociateSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return DisassociateSecurityProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateTrafficDistributionGroupUserOutcome ConnectClient::DisassociateTrafficDistributionGroupUser(
    const DisassociateTrafficDistributionGroupUserRequest& request) const {
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTrafficDistributionGroupUser", "Required field: TrafficDistributionGroupId, is not set");
    return DisassociateTrafficDistributionGroupUserOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTrafficDistributionGroupUser", "Required field: UserId, is not set");
    return DisassociateTrafficDistributionGroupUserOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTrafficDistributionGroupUser", "Required field: InstanceId, is not set");
    return DisassociateTrafficDistributionGroupUserOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user");
  };

  return DisassociateTrafficDistributionGroupUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateUserProficienciesOutcome ConnectClient::DisassociateUserProficiencies(
    const DisassociateUserProficienciesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateUserProficiencies", "Required field: InstanceId, is not set");
    return DisassociateUserProficienciesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateUserProficiencies", "Required field: UserId, is not set");
    return DisassociateUserProficienciesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-proficiencies");
  };

  return DisassociateUserProficienciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateWorkspaceOutcome ConnectClient::DisassociateWorkspace(const DisassociateWorkspaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWorkspace", "Required field: InstanceId, is not set");
    return DisassociateWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWorkspace", "Required field: WorkspaceId, is not set");
    return DisassociateWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate");
  };

  return DisassociateWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DismissUserContactOutcome ConnectClient::DismissUserContact(const DismissUserContactRequest& request) const {
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DismissUserContact", "Required field: UserId, is not set");
    return DismissUserContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [UserId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DismissUserContact", "Required field: InstanceId, is not set");
    return DismissUserContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact");
  };

  return DismissUserContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EvaluateDataTableValuesOutcome ConnectClient::EvaluateDataTableValues(const EvaluateDataTableValuesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EvaluateDataTableValues", "Required field: InstanceId, is not set");
    return EvaluateDataTableValuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EvaluateDataTableValues", "Required field: DataTableId, is not set");
    return EvaluateDataTableValuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DataTableId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values/evaluate");
  };

  return EvaluateDataTableValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAttachedFileOutcome ConnectClient::GetAttachedFile(const GetAttachedFileRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAttachedFile", "Required field: InstanceId, is not set");
    return GetAttachedFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  if (!request.FileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAttachedFile", "Required field: FileId, is not set");
    return GetAttachedFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FileId]", false));
  }
  if (!request.AssociatedResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAttachedFile", "Required field: AssociatedResourceArn, is not set");
    return GetAttachedFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssociatedResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileId());
  };

  return GetAttachedFileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContactAttributesOutcome ConnectClient::GetContactAttributes(const GetContactAttributesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContactAttributes", "Required field: InstanceId, is not set");
    return GetContactAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.InitialContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContactAttributes", "Required field: InitialContactId, is not set");
    return GetContactAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InitialContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInitialContactId());
  };

  return GetContactAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContactMetricsOutcome ConnectClient::GetContactMetrics(const GetContactMetricsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/contact");
  };

  return GetContactMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCurrentMetricDataOutcome ConnectClient::GetCurrentMetricData(const GetCurrentMetricDataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCurrentMetricData", "Required field: InstanceId, is not set");
    return GetCurrentMetricDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/current/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return GetCurrentMetricDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCurrentUserDataOutcome ConnectClient::GetCurrentUserData(const GetCurrentUserDataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCurrentUserData", "Required field: InstanceId, is not set");
    return GetCurrentUserDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/userdata/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return GetCurrentUserDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEffectiveHoursOfOperationsOutcome ConnectClient::GetEffectiveHoursOfOperations(
    const GetEffectiveHoursOfOperationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEffectiveHoursOfOperations", "Required field: InstanceId, is not set");
    return GetEffectiveHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEffectiveHoursOfOperations", "Required field: HoursOfOperationId, is not set");
    return GetEffectiveHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [HoursOfOperationId]", false));
  }
  if (!request.FromDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEffectiveHoursOfOperations", "Required field: FromDate, is not set");
    return GetEffectiveHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [FromDate]", false));
  }
  if (!request.ToDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEffectiveHoursOfOperations", "Required field: ToDate, is not set");
    return GetEffectiveHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [ToDate]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/effective-hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
  };

  return GetEffectiveHoursOfOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFederationTokenOutcome ConnectClient::GetFederationToken(const GetFederationTokenRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFederationToken", "Required field: InstanceId, is not set");
    return GetFederationTokenOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user/federate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return GetFederationTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFlowAssociationOutcome ConnectClient::GetFlowAssociation(const GetFlowAssociationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowAssociation", "Required field: InstanceId, is not set");
    return GetFlowAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowAssociation", "Required field: ResourceId, is not set");
    return GetFlowAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceId]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowAssociation", "Required field: ResourceType, is not set");
    return GetFlowAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/flow-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(
        FlowAssociationResourceTypeMapper::GetNameForFlowAssociationResourceType(request.GetResourceType()));
  };

  return GetFlowAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMetricDataOutcome ConnectClient::GetMetricData(const GetMetricDataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMetricData", "Required field: InstanceId, is not set");
    return GetMetricDataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/historical/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return GetMetricDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMetricDataV2Outcome ConnectClient::GetMetricDataV2(const GetMetricDataV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics/data");
  };

  return GetMetricDataV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPromptFileOutcome ConnectClient::GetPromptFile(const GetPromptFileRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPromptFile", "Required field: InstanceId, is not set");
    return GetPromptFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.PromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPromptFile", "Required field: PromptId, is not set");
    return GetPromptFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [PromptId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPromptId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/file");
  };

  return GetPromptFileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTaskTemplateOutcome ConnectClient::GetTaskTemplate(const GetTaskTemplateRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTaskTemplate", "Required field: InstanceId, is not set");
    return GetTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  if (!request.TaskTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTaskTemplate", "Required field: TaskTemplateId, is not set");
    return GetTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TaskTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/template/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskTemplateId());
  };

  return GetTaskTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTestCaseExecutionSummaryOutcome ConnectClient::GetTestCaseExecutionSummary(const GetTestCaseExecutionSummaryRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTestCaseExecutionSummary", "Required field: InstanceId, is not set");
    return GetTestCaseExecutionSummaryOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InstanceId]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTestCaseExecutionSummary", "Required field: TestCaseId, is not set");
    return GetTestCaseExecutionSummaryOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TestCaseId]", false));
  }
  if (!request.TestCaseExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTestCaseExecutionSummary", "Required field: TestCaseExecutionId, is not set");
    return GetTestCaseExecutionSummaryOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TestCaseExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseExecutionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/summary");
  };

  return GetTestCaseExecutionSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrafficDistributionOutcome ConnectClient::GetTrafficDistribution(const GetTrafficDistributionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrafficDistribution", "Required field: Id, is not set");
    return GetTrafficDistributionOutcome(
        Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetTrafficDistributionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ImportPhoneNumberOutcome ConnectClient::ImportPhoneNumber(const ImportPhoneNumberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/import");
  };

  return ImportPhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportWorkspaceMediaOutcome ConnectClient::ImportWorkspaceMedia(const ImportWorkspaceMediaRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportWorkspaceMedia", "Required field: InstanceId, is not set");
    return ImportWorkspaceMediaOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportWorkspaceMedia", "Required field: WorkspaceId, is not set");
    return ImportWorkspaceMediaOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/media");
  };

  return ImportWorkspaceMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAgentStatusesOutcome ConnectClient::ListAgentStatuses(const ListAgentStatusesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentStatuses", "Required field: InstanceId, is not set");
    return ListAgentStatusesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListAgentStatusesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAnalyticsDataAssociationsOutcome ConnectClient::ListAnalyticsDataAssociations(
    const ListAnalyticsDataAssociationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnalyticsDataAssociations", "Required field: InstanceId, is not set");
    return ListAnalyticsDataAssociationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/association");
  };

  return ListAnalyticsDataAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAnalyticsDataLakeDataSetsOutcome ConnectClient::ListAnalyticsDataLakeDataSets(
    const ListAnalyticsDataLakeDataSetsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnalyticsDataLakeDataSets", "Required field: InstanceId, is not set");
    return ListAnalyticsDataLakeDataSetsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  return ListAnalyticsDataLakeDataSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApprovedOriginsOutcome ConnectClient::ListApprovedOrigins(const ListApprovedOriginsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListApprovedOrigins", "Required field: InstanceId, is not set");
    return ListApprovedOriginsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/approved-origins");
  };

  return ListApprovedOriginsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssociatedContactsOutcome ConnectClient::ListAssociatedContacts(const ListAssociatedContactsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedContacts", "Required field: InstanceId, is not set");
    return ListAssociatedContactsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedContacts", "Required field: ContactId, is not set");
    return ListAssociatedContactsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/associated/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListAssociatedContactsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAuthenticationProfilesOutcome ConnectClient::ListAuthenticationProfiles(const ListAuthenticationProfilesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuthenticationProfiles", "Required field: InstanceId, is not set");
    return ListAuthenticationProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authentication-profiles-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListAuthenticationProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBotsOutcome ConnectClient::ListBots(const ListBotsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: InstanceId, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.LexVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: LexVersion, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [LexVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  };

  return ListBotsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChildHoursOfOperationsOutcome ConnectClient::ListChildHoursOfOperations(const ListChildHoursOfOperationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChildHoursOfOperations", "Required field: InstanceId, is not set");
    return ListChildHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChildHoursOfOperations", "Required field: HoursOfOperationId, is not set");
    return ListChildHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [HoursOfOperationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours");
  };

  return ListChildHoursOfOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactEvaluationsOutcome ConnectClient::ListContactEvaluations(const ListContactEvaluationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactEvaluations", "Required field: InstanceId, is not set");
    return ListContactEvaluationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactEvaluations", "Required field: ContactId, is not set");
    return ListContactEvaluationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListContactEvaluationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactFlowModuleAliasesOutcome ConnectClient::ListContactFlowModuleAliases(const ListContactFlowModuleAliasesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlowModuleAliases", "Required field: InstanceId, is not set");
    return ListContactFlowModuleAliasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlowModuleAliases", "Required field: ContactFlowModuleId, is not set");
    return ListContactFlowModuleAliasesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ContactFlowModuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  };

  return ListContactFlowModuleAliasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactFlowModuleVersionsOutcome ConnectClient::ListContactFlowModuleVersions(
    const ListContactFlowModuleVersionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlowModuleVersions", "Required field: InstanceId, is not set");
    return ListContactFlowModuleVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlowModuleVersions", "Required field: ContactFlowModuleId, is not set");
    return ListContactFlowModuleVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListContactFlowModuleVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactFlowModulesOutcome ConnectClient::ListContactFlowModules(const ListContactFlowModulesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlowModules", "Required field: InstanceId, is not set");
    return ListContactFlowModulesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListContactFlowModulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactFlowVersionsOutcome ConnectClient::ListContactFlowVersions(const ListContactFlowVersionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlowVersions", "Required field: InstanceId, is not set");
    return ListContactFlowVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlowVersions", "Required field: ContactFlowId, is not set");
    return ListContactFlowVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ContactFlowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListContactFlowVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactFlowsOutcome ConnectClient::ListContactFlows(const ListContactFlowsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactFlows", "Required field: InstanceId, is not set");
    return ListContactFlowsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListContactFlowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactReferencesOutcome ConnectClient::ListContactReferences(const ListContactReferencesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactReferences", "Required field: InstanceId, is not set");
    return ListContactReferencesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactReferences", "Required field: ContactId, is not set");
    return ListContactReferencesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ContactId]", false));
  }
  if (!request.ReferenceTypesHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactReferences", "Required field: ReferenceTypes, is not set");
    return ListContactReferencesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ReferenceTypes]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/references/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  };

  return ListContactReferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataTableAttributesOutcome ConnectClient::ListDataTableAttributes(const ListDataTableAttributesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataTableAttributes", "Required field: InstanceId, is not set");
    return ListDataTableAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataTableAttributes", "Required field: DataTableId, is not set");
    return ListDataTableAttributesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DataTableId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
  };

  return ListDataTableAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataTablePrimaryValuesOutcome ConnectClient::ListDataTablePrimaryValues(const ListDataTablePrimaryValuesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataTablePrimaryValues", "Required field: InstanceId, is not set");
    return ListDataTablePrimaryValuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataTablePrimaryValues", "Required field: DataTableId, is not set");
    return ListDataTablePrimaryValuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DataTableId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values/list-primary");
  };

  return ListDataTablePrimaryValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataTableValuesOutcome ConnectClient::ListDataTableValues(const ListDataTableValuesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataTableValues", "Required field: InstanceId, is not set");
    return ListDataTableValuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataTableValues", "Required field: DataTableId, is not set");
    return ListDataTableValuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataTableId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values/list");
  };

  return ListDataTableValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataTablesOutcome ConnectClient::ListDataTables(const ListDataTablesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataTables", "Required field: InstanceId, is not set");
    return ListDataTablesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListDataTablesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDefaultVocabulariesOutcome ConnectClient::ListDefaultVocabularies(const ListDefaultVocabulariesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDefaultVocabularies", "Required field: InstanceId, is not set");
    return ListDefaultVocabulariesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-vocabulary-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListDefaultVocabulariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntitySecurityProfilesOutcome ConnectClient::ListEntitySecurityProfiles(const ListEntitySecurityProfilesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEntitySecurityProfiles", "Required field: InstanceId, is not set");
    return ListEntitySecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/entity-security-profiles-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListEntitySecurityProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEvaluationFormVersionsOutcome ConnectClient::ListEvaluationFormVersions(const ListEvaluationFormVersionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEvaluationFormVersions", "Required field: InstanceId, is not set");
    return ListEvaluationFormVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEvaluationFormVersions", "Required field: EvaluationFormId, is not set");
    return ListEvaluationFormVersionsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [EvaluationFormId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListEvaluationFormVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEvaluationFormsOutcome ConnectClient::ListEvaluationForms(const ListEvaluationFormsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEvaluationForms", "Required field: InstanceId, is not set");
    return ListEvaluationFormsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListEvaluationFormsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFlowAssociationsOutcome ConnectClient::ListFlowAssociations(const ListFlowAssociationsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowAssociations", "Required field: InstanceId, is not set");
    return ListFlowAssociationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/flow-associations-summary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return ListFlowAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHoursOfOperationOverridesOutcome ConnectClient::ListHoursOfOperationOverrides(
    const ListHoursOfOperationOverridesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHoursOfOperationOverrides", "Required field: InstanceId, is not set");
    return ListHoursOfOperationOverridesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHoursOfOperationOverrides", "Required field: HoursOfOperationId, is not set");
    return ListHoursOfOperationOverridesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [HoursOfOperationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/overrides");
  };

  return ListHoursOfOperationOverridesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}
