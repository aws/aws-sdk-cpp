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
#include <aws/iot/IoTClient.h>
#include <aws/iot/IoTEndpointProvider.h>
#include <aws/iot/IoTErrorMarshaller.h>
#include <aws/iot/model/ListThingPrincipalsV2Request.h>
#include <aws/iot/model/ListThingRegistrationTaskReportsRequest.h>
#include <aws/iot/model/ListThingRegistrationTasksRequest.h>
#include <aws/iot/model/ListThingTypesRequest.h>
#include <aws/iot/model/ListThingsInBillingGroupRequest.h>
#include <aws/iot/model/ListThingsInThingGroupRequest.h>
#include <aws/iot/model/ListThingsRequest.h>
#include <aws/iot/model/ListTopicRuleDestinationsRequest.h>
#include <aws/iot/model/ListTopicRulesRequest.h>
#include <aws/iot/model/ListV2LoggingLevelsRequest.h>
#include <aws/iot/model/ListViolationEventsRequest.h>
#include <aws/iot/model/PutVerificationStateOnViolationRequest.h>
#include <aws/iot/model/RegisterCACertificateRequest.h>
#include <aws/iot/model/RegisterCertificateRequest.h>
#include <aws/iot/model/RegisterCertificateWithoutCARequest.h>
#include <aws/iot/model/RegisterThingRequest.h>
#include <aws/iot/model/RejectCertificateTransferRequest.h>
#include <aws/iot/model/RemoveThingFromBillingGroupRequest.h>
#include <aws/iot/model/RemoveThingFromThingGroupRequest.h>
#include <aws/iot/model/ReplaceTopicRuleRequest.h>
#include <aws/iot/model/SearchIndexRequest.h>
#include <aws/iot/model/SetDefaultAuthorizerRequest.h>
#include <aws/iot/model/SetDefaultPolicyVersionRequest.h>
#include <aws/iot/model/SetLoggingOptionsRequest.h>
#include <aws/iot/model/SetV2LoggingLevelRequest.h>
#include <aws/iot/model/SetV2LoggingOptionsRequest.h>
#include <aws/iot/model/StartAuditMitigationActionsTaskRequest.h>
#include <aws/iot/model/StartDetectMitigationActionsTaskRequest.h>
#include <aws/iot/model/StartOnDemandAuditTaskRequest.h>
#include <aws/iot/model/StartThingRegistrationTaskRequest.h>
#include <aws/iot/model/StopThingRegistrationTaskRequest.h>
#include <aws/iot/model/TagResourceRequest.h>
#include <aws/iot/model/TestAuthorizationRequest.h>
#include <aws/iot/model/TestInvokeAuthorizerRequest.h>
#include <aws/iot/model/TransferCertificateRequest.h>
#include <aws/iot/model/UntagResourceRequest.h>
#include <aws/iot/model/UpdateAccountAuditConfigurationRequest.h>
#include <aws/iot/model/UpdateAuditSuppressionRequest.h>
#include <aws/iot/model/UpdateAuthorizerRequest.h>
#include <aws/iot/model/UpdateBillingGroupRequest.h>
#include <aws/iot/model/UpdateCACertificateRequest.h>
#include <aws/iot/model/UpdateCertificateProviderRequest.h>
#include <aws/iot/model/UpdateCertificateRequest.h>
#include <aws/iot/model/UpdateCommandRequest.h>
#include <aws/iot/model/UpdateCustomMetricRequest.h>
#include <aws/iot/model/UpdateDimensionRequest.h>
#include <aws/iot/model/UpdateDomainConfigurationRequest.h>
#include <aws/iot/model/UpdateDynamicThingGroupRequest.h>
#include <aws/iot/model/UpdateEncryptionConfigurationRequest.h>
#include <aws/iot/model/UpdateEventConfigurationsRequest.h>
#include <aws/iot/model/UpdateFleetMetricRequest.h>
#include <aws/iot/model/UpdateIndexingConfigurationRequest.h>
#include <aws/iot/model/UpdateJobRequest.h>
#include <aws/iot/model/UpdateMitigationActionRequest.h>
#include <aws/iot/model/UpdatePackageConfigurationRequest.h>
#include <aws/iot/model/UpdatePackageRequest.h>
#include <aws/iot/model/UpdatePackageVersionRequest.h>
#include <aws/iot/model/UpdateProvisioningTemplateRequest.h>
#include <aws/iot/model/UpdateRoleAliasRequest.h>
#include <aws/iot/model/UpdateScheduledAuditRequest.h>
#include <aws/iot/model/UpdateSecurityProfileRequest.h>
#include <aws/iot/model/UpdateStreamRequest.h>
#include <aws/iot/model/UpdateThingGroupRequest.h>
#include <aws/iot/model/UpdateThingGroupsForThingRequest.h>
#include <aws/iot/model/UpdateThingRequest.h>
#include <aws/iot/model/UpdateThingTypeRequest.h>
#include <aws/iot/model/UpdateTopicRuleDestinationRequest.h>
#include <aws/iot/model/ValidateSecurityProfileBehaviorsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT;
using namespace Aws::IoT::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

ListThingPrincipalsV2Outcome IoTClient::ListThingPrincipalsV2(const ListThingPrincipalsV2Request& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThingPrincipalsV2", "Required field: ThingName, is not set");
    return ListThingPrincipalsV2Outcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/principals-v2");
  };

  return ListThingPrincipalsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingRegistrationTaskReportsOutcome IoTClient::ListThingRegistrationTaskReports(
    const ListThingRegistrationTaskReportsRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThingRegistrationTaskReports", "Required field: TaskId, is not set");
    return ListThingRegistrationTaskReportsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  if (!request.ReportTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThingRegistrationTaskReports", "Required field: ReportType, is not set");
    return ListThingRegistrationTaskReportsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-registration-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reports");
  };

  return ListThingRegistrationTaskReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingRegistrationTasksOutcome IoTClient::ListThingRegistrationTasks(const ListThingRegistrationTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-registration-tasks");
  };

  return ListThingRegistrationTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingTypesOutcome IoTClient::ListThingTypes(const ListThingTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-types");
  };

  return ListThingTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingsOutcome IoTClient::ListThings(const ListThingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things");
  };

  return ListThingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingsInBillingGroupOutcome IoTClient::ListThingsInBillingGroup(const ListThingsInBillingGroupRequest& request) const {
  if (!request.BillingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThingsInBillingGroup", "Required field: BillingGroupName, is not set");
    return ListThingsInBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BillingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBillingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/things");
  };

  return ListThingsInBillingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingsInThingGroupOutcome IoTClient::ListThingsInThingGroup(const ListThingsInThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThingsInThingGroup", "Required field: ThingGroupName, is not set");
    return ListThingsInThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/things");
  };

  return ListThingsInThingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTopicRuleDestinationsOutcome IoTClient::ListTopicRuleDestinations(const ListTopicRuleDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  return ListTopicRuleDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTopicRulesOutcome IoTClient::ListTopicRules(const ListTopicRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  return ListTopicRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListV2LoggingLevelsOutcome IoTClient::ListV2LoggingLevels(const ListV2LoggingLevelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2LoggingLevel");
  };

  return ListV2LoggingLevelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListViolationEventsOutcome IoTClient::ListViolationEvents(const ListViolationEventsRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListViolationEvents", "Required field: StartTime, is not set");
    return ListViolationEventsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListViolationEvents", "Required field: EndTime, is not set");
    return ListViolationEventsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/violation-events");
  };

  return ListViolationEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutVerificationStateOnViolationOutcome IoTClient::PutVerificationStateOnViolation(
    const PutVerificationStateOnViolationRequest& request) const {
  if (!request.ViolationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutVerificationStateOnViolation", "Required field: ViolationId, is not set");
    return PutVerificationStateOnViolationOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ViolationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/violations/verification-state/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViolationId());
  };

  return PutVerificationStateOnViolationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterCACertificateOutcome IoTClient::RegisterCACertificate(const RegisterCACertificateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cacertificate");
  };

  return RegisterCACertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterCertificateOutcome IoTClient::RegisterCertificate(const RegisterCertificateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate/register");
  };

  return RegisterCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterCertificateWithoutCAOutcome IoTClient::RegisterCertificateWithoutCA(const RegisterCertificateWithoutCARequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate/register-no-ca");
  };

  return RegisterCertificateWithoutCAOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterThingOutcome IoTClient::RegisterThing(const RegisterThingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things");
  };

  return RegisterThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectCertificateTransferOutcome IoTClient::RejectCertificateTransfer(const RejectCertificateTransferRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectCertificateTransfer", "Required field: CertificateId, is not set");
    return RejectCertificateTransferOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject-certificate-transfer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  return RejectCertificateTransferOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

RemoveThingFromBillingGroupOutcome IoTClient::RemoveThingFromBillingGroup(const RemoveThingFromBillingGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups/removeThingFromBillingGroup");
  };

  return RemoveThingFromBillingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveThingFromThingGroupOutcome IoTClient::RemoveThingFromThingGroup(const RemoveThingFromThingGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/removeThingFromThingGroup");
  };

  return RemoveThingFromThingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ReplaceTopicRuleOutcome IoTClient::ReplaceTopicRule(const ReplaceTopicRuleRequest& request) const {
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ReplaceTopicRule", "Required field: RuleName, is not set");
    return ReplaceTopicRuleOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  };

  return ReplaceTopicRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

SearchIndexOutcome IoTClient::SearchIndex(const SearchIndexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/search");
  };

  return SearchIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SetDefaultAuthorizerOutcome IoTClient::SetDefaultAuthorizer(const SetDefaultAuthorizerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-authorizer");
  };

  return SetDefaultAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SetDefaultPolicyVersionOutcome IoTClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetDefaultPolicyVersion", "Required field: PolicyName, is not set");
    return SetDefaultPolicyVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetDefaultPolicyVersion", "Required field: PolicyVersionId, is not set");
    return SetDefaultPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
  };

  return SetDefaultPolicyVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

SetLoggingOptionsOutcome IoTClient::SetLoggingOptions(const SetLoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/loggingOptions");
  };

  return SetLoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SetV2LoggingLevelOutcome IoTClient::SetV2LoggingLevel(const SetV2LoggingLevelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2LoggingLevel");
  };

  return SetV2LoggingLevelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SetV2LoggingOptionsOutcome IoTClient::SetV2LoggingOptions(const SetV2LoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2LoggingOptions");
  };

  return SetV2LoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAuditMitigationActionsTaskOutcome IoTClient::StartAuditMitigationActionsTask(
    const StartAuditMitigationActionsTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAuditMitigationActionsTask", "Required field: TaskId, is not set");
    return StartAuditMitigationActionsTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/mitigationactions/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  return StartAuditMitigationActionsTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDetectMitigationActionsTaskOutcome IoTClient::StartDetectMitigationActionsTask(
    const StartDetectMitigationActionsTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDetectMitigationActionsTask", "Required field: TaskId, is not set");
    return StartDetectMitigationActionsTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detect/mitigationactions/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  return StartDetectMitigationActionsTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartOnDemandAuditTaskOutcome IoTClient::StartOnDemandAuditTask(const StartOnDemandAuditTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/tasks");
  };

  return StartOnDemandAuditTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartThingRegistrationTaskOutcome IoTClient::StartThingRegistrationTask(const StartThingRegistrationTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-registration-tasks");
  };

  return StartThingRegistrationTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopThingRegistrationTaskOutcome IoTClient::StopThingRegistrationTask(const StopThingRegistrationTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopThingRegistrationTask", "Required field: TaskId, is not set");
    return StopThingRegistrationTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-registration-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return StopThingRegistrationTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome IoTClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TestAuthorizationOutcome IoTClient::TestAuthorization(const TestAuthorizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-authorization");
  };

  return TestAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TestInvokeAuthorizerOutcome IoTClient::TestInvokeAuthorizer(const TestInvokeAuthorizerRequest& request) const {
  if (!request.AuthorizerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: AuthorizerName, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AuthorizerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/test");
  };

  return TestInvokeAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TransferCertificateOutcome IoTClient::TransferCertificate(const TransferCertificateRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TransferCertificate", "Required field: CertificateId, is not set");
    return TransferCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CertificateId]", false));
  }
  if (!request.TargetAwsAccountHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TransferCertificate", "Required field: TargetAwsAccount, is not set");
    return TransferCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TargetAwsAccount]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/transfer-certificate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  return TransferCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UntagResourceOutcome IoTClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untag");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountAuditConfigurationOutcome IoTClient::UpdateAccountAuditConfiguration(
    const UpdateAccountAuditConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/configuration");
  };

  return UpdateAccountAuditConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAuditSuppressionOutcome IoTClient::UpdateAuditSuppression(const UpdateAuditSuppressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/suppressions/update");
  };

  return UpdateAuditSuppressionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAuthorizerOutcome IoTClient::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const {
  if (!request.AuthorizerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: AuthorizerName, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AuthorizerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerName());
  };

  return UpdateAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBillingGroupOutcome IoTClient::UpdateBillingGroup(const UpdateBillingGroupRequest& request) const {
  if (!request.BillingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBillingGroup", "Required field: BillingGroupName, is not set");
    return UpdateBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BillingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBillingGroupName());
  };

  return UpdateBillingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateCACertificateOutcome IoTClient::UpdateCACertificate(const UpdateCACertificateRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCACertificate", "Required field: CertificateId, is not set");
    return UpdateCACertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cacertificate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  return UpdateCACertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCertificateOutcome IoTClient::UpdateCertificate(const UpdateCertificateRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCertificate", "Required field: CertificateId, is not set");
    return UpdateCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [CertificateId]", false));
  }
  if (!request.NewStatusHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCertificate", "Required field: NewStatus, is not set");
    return UpdateCertificateOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NewStatus]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  return UpdateCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCertificateProviderOutcome IoTClient::UpdateCertificateProvider(const UpdateCertificateProviderRequest& request) const {
  if (!request.CertificateProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCertificateProvider", "Required field: CertificateProviderName, is not set");
    return UpdateCertificateProviderOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CertificateProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateProviderName());
  };

  return UpdateCertificateProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCommandOutcome IoTClient::UpdateCommand(const UpdateCommandRequest& request) const {
  if (!request.CommandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCommand", "Required field: CommandId, is not set");
    return UpdateCommandOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CommandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/commands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCommandId());
  };

  return UpdateCommandOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateCustomMetricOutcome IoTClient::UpdateCustomMetric(const UpdateCustomMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCustomMetric", "Required field: MetricName, is not set");
    return UpdateCustomMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  return UpdateCustomMetricOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDimensionOutcome IoTClient::UpdateDimension(const UpdateDimensionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDimension", "Required field: Name, is not set");
    return UpdateDimensionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dimensions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateDimensionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDomainConfigurationOutcome IoTClient::UpdateDomainConfiguration(const UpdateDomainConfigurationRequest& request) const {
  if (!request.DomainConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return UpdateDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainConfigurationName());
  };

  return UpdateDomainConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDynamicThingGroupOutcome IoTClient::UpdateDynamicThingGroup(const UpdateDynamicThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDynamicThingGroup", "Required field: ThingGroupName, is not set");
    return UpdateDynamicThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dynamic-thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
  };

  return UpdateDynamicThingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEncryptionConfigurationOutcome IoTClient::UpdateEncryptionConfiguration(const UpdateEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryption-configuration");
  };

  return UpdateEncryptionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEventConfigurationsOutcome IoTClient::UpdateEventConfigurations(const UpdateEventConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations");
  };

  return UpdateEventConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateFleetMetricOutcome IoTClient::UpdateFleetMetric(const UpdateFleetMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFleetMetric", "Required field: MetricName, is not set");
    return UpdateFleetMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleet-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  return UpdateFleetMetricOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIndexingConfigurationOutcome IoTClient::UpdateIndexingConfiguration(const UpdateIndexingConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indexing/config");
  };

  return UpdateIndexingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateJobOutcome IoTClient::UpdateJob(const UpdateJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: JobId, is not set");
    return UpdateJobOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return UpdateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateMitigationActionOutcome IoTClient::UpdateMitigationAction(const UpdateMitigationActionRequest& request) const {
  if (!request.ActionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMitigationAction", "Required field: ActionName, is not set");
    return UpdateMitigationActionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mitigationactions/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionName());
  };

  return UpdateMitigationActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePackageOutcome IoTClient::UpdatePackage(const UpdatePackageRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackage", "Required field: PackageName, is not set");
    return UpdatePackageOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
  };

  return UpdatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePackageConfigurationOutcome IoTClient::UpdatePackageConfiguration(const UpdatePackageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/package-configuration");
  };

  return UpdatePackageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePackageVersionOutcome IoTClient::UpdatePackageVersion(const UpdatePackageVersionRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersion", "Required field: PackageName, is not set");
    return UpdatePackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePackageVersion", "Required field: VersionName, is not set");
    return UpdatePackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  return UpdatePackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProvisioningTemplateOutcome IoTClient::UpdateProvisioningTemplate(const UpdateProvisioningTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProvisioningTemplate", "Required field: TemplateName, is not set");
    return UpdateProvisioningTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return UpdateProvisioningTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRoleAliasOutcome IoTClient::UpdateRoleAlias(const UpdateRoleAliasRequest& request) const {
  if (!request.RoleAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoleAlias", "Required field: RoleAlias, is not set");
    return UpdateRoleAliasOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/role-aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoleAlias());
  };

  return UpdateRoleAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateScheduledAuditOutcome IoTClient::UpdateScheduledAudit(const UpdateScheduledAuditRequest& request) const {
  if (!request.ScheduledAuditNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return UpdateScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ScheduledAuditName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/scheduledaudits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduledAuditName());
  };

  return UpdateScheduledAuditOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSecurityProfileOutcome IoTClient::UpdateSecurityProfile(const UpdateSecurityProfileRequest& request) const {
  if (!request.SecurityProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSecurityProfile", "Required field: SecurityProfileName, is not set");
    return UpdateSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SecurityProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileName());
  };

  return UpdateSecurityProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateStreamOutcome IoTClient::UpdateStream(const UpdateStreamRequest& request) const {
  if (!request.StreamIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStream", "Required field: StreamId, is not set");
    return UpdateStreamOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  };

  return UpdateStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateThingOutcome IoTClient::UpdateThing(const UpdateThingRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThing", "Required field: ThingName, is not set");
    return UpdateThingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  };

  return UpdateThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateThingGroupOutcome IoTClient::UpdateThingGroup(const UpdateThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThingGroup", "Required field: ThingGroupName, is not set");
    return UpdateThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
  };

  return UpdateThingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateThingGroupsForThingOutcome IoTClient::UpdateThingGroupsForThing(const UpdateThingGroupsForThingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/updateThingGroupsForThing");
  };

  return UpdateThingGroupsForThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateThingTypeOutcome IoTClient::UpdateThingType(const UpdateThingTypeRequest& request) const {
  if (!request.ThingTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThingType", "Required field: ThingTypeName, is not set");
    return UpdateThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ThingTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingTypeName());
  };

  return UpdateThingTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateTopicRuleDestinationOutcome IoTClient::UpdateTopicRuleDestination(const UpdateTopicRuleDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  return UpdateTopicRuleDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

ValidateSecurityProfileBehaviorsOutcome IoTClient::ValidateSecurityProfileBehaviors(
    const ValidateSecurityProfileBehaviorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profile-behaviors/validate");
  };

  return ValidateSecurityProfileBehaviorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
