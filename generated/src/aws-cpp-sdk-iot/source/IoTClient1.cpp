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
#include <aws/iot/model/DescribeEncryptionConfigurationRequest.h>
#include <aws/iot/model/DescribeEndpointRequest.h>
#include <aws/iot/model/DescribeEventConfigurationsRequest.h>
#include <aws/iot/model/DescribeFleetMetricRequest.h>
#include <aws/iot/model/DescribeIndexRequest.h>
#include <aws/iot/model/DescribeJobExecutionRequest.h>
#include <aws/iot/model/DescribeJobRequest.h>
#include <aws/iot/model/DescribeJobTemplateRequest.h>
#include <aws/iot/model/DescribeManagedJobTemplateRequest.h>
#include <aws/iot/model/DescribeMitigationActionRequest.h>
#include <aws/iot/model/DescribeProvisioningTemplateRequest.h>
#include <aws/iot/model/DescribeProvisioningTemplateVersionRequest.h>
#include <aws/iot/model/DescribeRoleAliasRequest.h>
#include <aws/iot/model/DescribeScheduledAuditRequest.h>
#include <aws/iot/model/DescribeSecurityProfileRequest.h>
#include <aws/iot/model/DescribeStreamRequest.h>
#include <aws/iot/model/DescribeThingGroupRequest.h>
#include <aws/iot/model/DescribeThingRegistrationTaskRequest.h>
#include <aws/iot/model/DescribeThingRequest.h>
#include <aws/iot/model/DescribeThingTypeRequest.h>
#include <aws/iot/model/DetachPolicyRequest.h>
#include <aws/iot/model/DetachSecurityProfileRequest.h>
#include <aws/iot/model/DetachThingPrincipalRequest.h>
#include <aws/iot/model/DisableTopicRuleRequest.h>
#include <aws/iot/model/DisassociateSbomFromPackageVersionRequest.h>
#include <aws/iot/model/EnableTopicRuleRequest.h>
#include <aws/iot/model/GetBehaviorModelTrainingSummariesRequest.h>
#include <aws/iot/model/GetBucketsAggregationRequest.h>
#include <aws/iot/model/GetCardinalityRequest.h>
#include <aws/iot/model/GetCommandExecutionRequest.h>
#include <aws/iot/model/GetCommandRequest.h>
#include <aws/iot/model/GetEffectivePoliciesRequest.h>
#include <aws/iot/model/GetIndexingConfigurationRequest.h>
#include <aws/iot/model/GetJobDocumentRequest.h>
#include <aws/iot/model/GetLoggingOptionsRequest.h>
#include <aws/iot/model/GetOTAUpdateRequest.h>
#include <aws/iot/model/GetPackageConfigurationRequest.h>
#include <aws/iot/model/GetPackageRequest.h>
#include <aws/iot/model/GetPackageVersionRequest.h>
#include <aws/iot/model/GetPercentilesRequest.h>
#include <aws/iot/model/GetPolicyRequest.h>
#include <aws/iot/model/GetPolicyVersionRequest.h>
#include <aws/iot/model/GetRegistrationCodeRequest.h>
#include <aws/iot/model/GetStatisticsRequest.h>
#include <aws/iot/model/GetThingConnectivityDataRequest.h>
#include <aws/iot/model/GetTopicRuleDestinationRequest.h>
#include <aws/iot/model/GetTopicRuleRequest.h>
#include <aws/iot/model/GetV2LoggingOptionsRequest.h>
#include <aws/iot/model/ListActiveViolationsRequest.h>
#include <aws/iot/model/ListAttachedPoliciesRequest.h>
#include <aws/iot/model/ListAuditFindingsRequest.h>
#include <aws/iot/model/ListAuditMitigationActionsExecutionsRequest.h>
#include <aws/iot/model/ListAuditMitigationActionsTasksRequest.h>
#include <aws/iot/model/ListAuditSuppressionsRequest.h>
#include <aws/iot/model/ListAuditTasksRequest.h>
#include <aws/iot/model/ListAuthorizersRequest.h>
#include <aws/iot/model/ListBillingGroupsRequest.h>
#include <aws/iot/model/ListCACertificatesRequest.h>
#include <aws/iot/model/ListCertificateProvidersRequest.h>
#include <aws/iot/model/ListCertificatesByCARequest.h>
#include <aws/iot/model/ListCertificatesRequest.h>
#include <aws/iot/model/ListCommandExecutionsRequest.h>
#include <aws/iot/model/ListCommandsRequest.h>
#include <aws/iot/model/ListCustomMetricsRequest.h>
#include <aws/iot/model/ListDetectMitigationActionsExecutionsRequest.h>
#include <aws/iot/model/ListDetectMitigationActionsTasksRequest.h>
#include <aws/iot/model/ListDimensionsRequest.h>
#include <aws/iot/model/ListDomainConfigurationsRequest.h>
#include <aws/iot/model/ListFleetMetricsRequest.h>
#include <aws/iot/model/ListIndicesRequest.h>
#include <aws/iot/model/ListJobExecutionsForJobRequest.h>
#include <aws/iot/model/ListJobExecutionsForThingRequest.h>
#include <aws/iot/model/ListJobTemplatesRequest.h>
#include <aws/iot/model/ListJobsRequest.h>
#include <aws/iot/model/ListManagedJobTemplatesRequest.h>
#include <aws/iot/model/ListMetricValuesRequest.h>
#include <aws/iot/model/ListMitigationActionsRequest.h>
#include <aws/iot/model/ListOTAUpdatesRequest.h>
#include <aws/iot/model/ListOutgoingCertificatesRequest.h>
#include <aws/iot/model/ListPackageVersionsRequest.h>
#include <aws/iot/model/ListPackagesRequest.h>
#include <aws/iot/model/ListPoliciesRequest.h>
#include <aws/iot/model/ListPolicyVersionsRequest.h>
#include <aws/iot/model/ListPrincipalThingsRequest.h>
#include <aws/iot/model/ListPrincipalThingsV2Request.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsRequest.h>
#include <aws/iot/model/ListProvisioningTemplatesRequest.h>
#include <aws/iot/model/ListRelatedResourcesForAuditFindingRequest.h>
#include <aws/iot/model/ListRoleAliasesRequest.h>
#include <aws/iot/model/ListSbomValidationResultsRequest.h>
#include <aws/iot/model/ListScheduledAuditsRequest.h>
#include <aws/iot/model/ListSecurityProfilesForTargetRequest.h>
#include <aws/iot/model/ListSecurityProfilesRequest.h>
#include <aws/iot/model/ListStreamsRequest.h>
#include <aws/iot/model/ListTagsForResourceRequest.h>
#include <aws/iot/model/ListTargetsForPolicyRequest.h>
#include <aws/iot/model/ListTargetsForSecurityProfileRequest.h>
#include <aws/iot/model/ListThingGroupsForThingRequest.h>
#include <aws/iot/model/ListThingGroupsRequest.h>
#include <aws/iot/model/ListThingPrincipalsRequest.h>
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

DescribeEncryptionConfigurationOutcome IoTClient::DescribeEncryptionConfiguration(
    const DescribeEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryption-configuration");
  };

  return DescribeEncryptionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeEndpointOutcome IoTClient::DescribeEndpoint(const DescribeEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoint");
  };

  return DescribeEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeEventConfigurationsOutcome IoTClient::DescribeEventConfigurations(const DescribeEventConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations");
  };

  return DescribeEventConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFleetMetricOutcome IoTClient::DescribeFleetMetric(const DescribeFleetMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFleetMetric", "Required field: MetricName, is not set");
    return DescribeFleetMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleet-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  return DescribeFleetMetricOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeIndexOutcome IoTClient::DescribeIndex(const DescribeIndexRequest& request) const {
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIndex", "Required field: IndexName, is not set");
    return DescribeIndexOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
  };

  return DescribeIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeJobOutcome IoTClient::DescribeJob(const DescribeJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribeJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeJobExecutionOutcome IoTClient::DescribeJobExecution(const DescribeJobExecutionRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: JobId, is not set");
    return DescribeJobExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: ThingName, is not set");
    return DescribeJobExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribeJobExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeJobTemplateOutcome IoTClient::DescribeJobTemplate(const DescribeJobTemplateRequest& request) const {
  if (!request.JobTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobTemplate", "Required field: JobTemplateId, is not set");
    return DescribeJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/job-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobTemplateId());
  };

  return DescribeJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeManagedJobTemplateOutcome IoTClient::DescribeManagedJobTemplate(const DescribeManagedJobTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeManagedJobTemplate", "Required field: TemplateName, is not set");
    return DescribeManagedJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-job-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return DescribeManagedJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeMitigationActionOutcome IoTClient::DescribeMitigationAction(const DescribeMitigationActionRequest& request) const {
  if (!request.ActionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMitigationAction", "Required field: ActionName, is not set");
    return DescribeMitigationActionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mitigationactions/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionName());
  };

  return DescribeMitigationActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeProvisioningTemplateOutcome IoTClient::DescribeProvisioningTemplate(const DescribeProvisioningTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplate", "Required field: TemplateName, is not set");
    return DescribeProvisioningTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return DescribeProvisioningTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeProvisioningTemplateVersionOutcome IoTClient::DescribeProvisioningTemplateVersion(
    const DescribeProvisioningTemplateVersionRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplateVersion", "Required field: TemplateName, is not set");
    return DescribeProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                       "Missing required field [TemplateName]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplateVersion", "Required field: VersionId, is not set");
    return DescribeProvisioningTemplateVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  return DescribeProvisioningTemplateVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRoleAliasOutcome IoTClient::DescribeRoleAlias(const DescribeRoleAliasRequest& request) const {
  if (!request.RoleAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRoleAlias", "Required field: RoleAlias, is not set");
    return DescribeRoleAliasOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/role-aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoleAlias());
  };

  return DescribeRoleAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeScheduledAuditOutcome IoTClient::DescribeScheduledAudit(const DescribeScheduledAuditRequest& request) const {
  if (!request.ScheduledAuditNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return DescribeScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ScheduledAuditName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/scheduledaudits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduledAuditName());
  };

  return DescribeScheduledAuditOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeSecurityProfileOutcome IoTClient::DescribeSecurityProfile(const DescribeSecurityProfileRequest& request) const {
  if (!request.SecurityProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DescribeSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SecurityProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileName());
  };

  return DescribeSecurityProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeStreamOutcome IoTClient::DescribeStream(const DescribeStreamRequest& request) const {
  if (!request.StreamIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeStream", "Required field: StreamId, is not set");
    return DescribeStreamOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  };

  return DescribeStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeThingOutcome IoTClient::DescribeThing(const DescribeThingRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeThing", "Required field: ThingName, is not set");
    return DescribeThingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  };

  return DescribeThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeThingGroupOutcome IoTClient::DescribeThingGroup(const DescribeThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeThingGroup", "Required field: ThingGroupName, is not set");
    return DescribeThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
  };

  return DescribeThingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeThingRegistrationTaskOutcome IoTClient::DescribeThingRegistrationTask(const DescribeThingRegistrationTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeThingRegistrationTask", "Required field: TaskId, is not set");
    return DescribeThingRegistrationTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-registration-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  return DescribeThingRegistrationTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeThingTypeOutcome IoTClient::DescribeThingType(const DescribeThingTypeRequest& request) const {
  if (!request.ThingTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeThingType", "Required field: ThingTypeName, is not set");
    return DescribeThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ThingTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingTypeName());
  };

  return DescribeThingTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DetachPolicyOutcome IoTClient::DetachPolicy(const DetachPolicyRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachPolicy", "Required field: PolicyName, is not set");
    return DetachPolicyOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/target-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  return DetachPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachSecurityProfileOutcome IoTClient::DetachSecurityProfile(const DetachSecurityProfileRequest& request) const {
  if (!request.SecurityProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DetachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SecurityProfileName]", false));
  }
  if (!request.SecurityProfileTargetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachSecurityProfile", "Required field: SecurityProfileTargetArn, is not set");
    return DetachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SecurityProfileTargetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets");
  };

  return DetachSecurityProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DetachThingPrincipalOutcome IoTClient::DetachThingPrincipal(const DetachThingPrincipalRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachThingPrincipal", "Required field: ThingName, is not set");
    return DetachThingPrincipalOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.PrincipalHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DetachThingPrincipal", "Required field: Principal, is not set");
    return DetachThingPrincipalOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/principals");
  };

  return DetachThingPrincipalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisableTopicRuleOutcome IoTClient::DisableTopicRule(const DisableTopicRuleRequest& request) const {
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableTopicRule", "Required field: RuleName, is not set");
    return DisableTopicRuleOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  };

  return DisableTopicRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSbomFromPackageVersionOutcome IoTClient::DisassociateSbomFromPackageVersion(
    const DisassociateSbomFromPackageVersionRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSbomFromPackageVersion", "Required field: PackageName, is not set");
    return DisassociateSbomFromPackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSbomFromPackageVersion", "Required field: VersionName, is not set");
    return DisassociateSbomFromPackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbom");
  };

  return DisassociateSbomFromPackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

EnableTopicRuleOutcome IoTClient::EnableTopicRule(const EnableTopicRuleRequest& request) const {
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableTopicRule", "Required field: RuleName, is not set");
    return EnableTopicRuleOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  };

  return EnableTopicRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBehaviorModelTrainingSummariesOutcome IoTClient::GetBehaviorModelTrainingSummaries(
    const GetBehaviorModelTrainingSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/behavior-model-training/summaries");
  };

  return GetBehaviorModelTrainingSummariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBucketsAggregationOutcome IoTClient::GetBucketsAggregation(const GetBucketsAggregationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/buckets");
  };

  return GetBucketsAggregationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCardinalityOutcome IoTClient::GetCardinality(const GetCardinalityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/cardinality");
  };

  return GetCardinalityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommandOutcome IoTClient::GetCommand(const GetCommandRequest& request) const {
  if (!request.CommandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCommand", "Required field: CommandId, is not set");
    return GetCommandOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CommandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/commands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCommandId());
  };

  return GetCommandOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCommandExecutionOutcome IoTClient::GetCommandExecution(const GetCommandExecutionRequest& request) const {
  if (!request.ExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCommandExecution", "Required field: ExecutionId, is not set");
    return GetCommandExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }
  if (!request.TargetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCommandExecution", "Required field: TargetArn, is not set");
    return GetCommandExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/command-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionId());
  };

  return GetCommandExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEffectivePoliciesOutcome IoTClient::GetEffectivePolicies(const GetEffectivePoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/effective-policies");
  };

  return GetEffectivePoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIndexingConfigurationOutcome IoTClient::GetIndexingConfiguration(const GetIndexingConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indexing/config");
  };

  return GetIndexingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJobDocumentOutcome IoTClient::GetJobDocument(const GetJobDocumentRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobDocument", "Required field: JobId, is not set");
    return GetJobDocumentOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/job-document");
  };

  return GetJobDocumentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLoggingOptionsOutcome IoTClient::GetLoggingOptions(const GetLoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/loggingOptions");
  };

  return GetLoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetOTAUpdateOutcome IoTClient::GetOTAUpdate(const GetOTAUpdateRequest& request) const {
  if (!request.OtaUpdateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOTAUpdate", "Required field: OtaUpdateId, is not set");
    return GetOTAUpdateOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OtaUpdateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/otaUpdates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOtaUpdateId());
  };

  return GetOTAUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPackageOutcome IoTClient::GetPackage(const GetPackageRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackage", "Required field: PackageName, is not set");
    return GetPackageOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
  };

  return GetPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPackageConfigurationOutcome IoTClient::GetPackageConfiguration(const GetPackageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/package-configuration");
  };

  return GetPackageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPackageVersionOutcome IoTClient::GetPackageVersion(const GetPackageVersionRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersion", "Required field: PackageName, is not set");
    return GetPackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersion", "Required field: VersionName, is not set");
    return GetPackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  return GetPackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPercentilesOutcome IoTClient::GetPercentiles(const GetPercentilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/percentiles");
  };

  return GetPercentilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPolicyOutcome IoTClient::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: PolicyName, is not set");
    return GetPolicyOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  return GetPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPolicyVersionOutcome IoTClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicyVersion", "Required field: PolicyName, is not set");
    return GetPolicyVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicyVersion", "Required field: PolicyVersionId, is not set");
    return GetPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
  };

  return GetPolicyVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRegistrationCodeOutcome IoTClient::GetRegistrationCode(const GetRegistrationCodeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registrationcode");
  };

  return GetRegistrationCodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetStatisticsOutcome IoTClient::GetStatistics(const GetStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/statistics");
  };

  return GetStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetThingConnectivityDataOutcome IoTClient::GetThingConnectivityData(const GetThingConnectivityDataRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetThingConnectivityData", "Required field: ThingName, is not set");
    return GetThingConnectivityDataOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectivity-data");
  };

  return GetThingConnectivityDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTopicRuleOutcome IoTClient::GetTopicRule(const GetTopicRuleRequest& request) const {
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTopicRule", "Required field: RuleName, is not set");
    return GetTopicRuleOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  };

  return GetTopicRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTopicRuleDestinationOutcome IoTClient::GetTopicRuleDestination(const GetTopicRuleDestinationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTopicRuleDestination", "Required field: Arn, is not set");
    return GetTopicRuleDestinationOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetArn());
  };

  return GetTopicRuleDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetV2LoggingOptionsOutcome IoTClient::GetV2LoggingOptions(const GetV2LoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2LoggingOptions");
  };

  return GetV2LoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListActiveViolationsOutcome IoTClient::ListActiveViolations(const ListActiveViolationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/active-violations");
  };

  return ListActiveViolationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAttachedPoliciesOutcome IoTClient::ListAttachedPolicies(const ListAttachedPoliciesRequest& request) const {
  if (!request.TargetHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAttachedPolicies", "Required field: Target, is not set");
    return ListAttachedPoliciesOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Target]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attached-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTarget());
  };

  return ListAttachedPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAuditFindingsOutcome IoTClient::ListAuditFindings(const ListAuditFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/findings");
  };

  return ListAuditFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAuditMitigationActionsExecutionsOutcome IoTClient::ListAuditMitigationActionsExecutions(
    const ListAuditMitigationActionsExecutionsRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsExecutions", "Required field: TaskId, is not set");
    return ListAuditMitigationActionsExecutionsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  if (!request.FindingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsExecutions", "Required field: FindingId, is not set");
    return ListAuditMitigationActionsExecutionsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/mitigationactions/executions");
  };

  return ListAuditMitigationActionsExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAuditMitigationActionsTasksOutcome IoTClient::ListAuditMitigationActionsTasks(
    const ListAuditMitigationActionsTasksRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsTasks", "Required field: StartTime, is not set");
    return ListAuditMitigationActionsTasksOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsTasks", "Required field: EndTime, is not set");
    return ListAuditMitigationActionsTasksOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/mitigationactions/tasks");
  };

  return ListAuditMitigationActionsTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAuditSuppressionsOutcome IoTClient::ListAuditSuppressions(const ListAuditSuppressionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/suppressions/list");
  };

  return ListAuditSuppressionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAuditTasksOutcome IoTClient::ListAuditTasks(const ListAuditTasksRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditTasks", "Required field: StartTime, is not set");
    return ListAuditTasksOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditTasks", "Required field: EndTime, is not set");
    return ListAuditTasksOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/tasks");
  };

  return ListAuditTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAuthorizersOutcome IoTClient::ListAuthorizers(const ListAuthorizersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
  };

  return ListAuthorizersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBillingGroupsOutcome IoTClient::ListBillingGroups(const ListBillingGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups");
  };

  return ListBillingGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCACertificatesOutcome IoTClient::ListCACertificates(const ListCACertificatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cacertificates");
  };

  return ListCACertificatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCertificateProvidersOutcome IoTClient::ListCertificateProviders(const ListCertificateProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate-providers/");
  };

  return ListCertificateProvidersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCertificatesOutcome IoTClient::ListCertificates(const ListCertificatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates");
  };

  return ListCertificatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCertificatesByCAOutcome IoTClient::ListCertificatesByCA(const ListCertificatesByCARequest& request) const {
  if (!request.CaCertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCertificatesByCA", "Required field: CaCertificateId, is not set");
    return ListCertificatesByCAOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [CaCertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates-by-ca/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaCertificateId());
  };

  return ListCertificatesByCAOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCommandExecutionsOutcome IoTClient::ListCommandExecutions(const ListCommandExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/command-executions");
  };

  return ListCommandExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCommandsOutcome IoTClient::ListCommands(const ListCommandsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/commands");
  };

  return ListCommandsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCustomMetricsOutcome IoTClient::ListCustomMetrics(const ListCustomMetricsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-metrics");
  };

  return ListCustomMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDetectMitigationActionsExecutionsOutcome IoTClient::ListDetectMitigationActionsExecutions(
    const ListDetectMitigationActionsExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detect/mitigationactions/executions");
  };

  return ListDetectMitigationActionsExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDetectMitigationActionsTasksOutcome IoTClient::ListDetectMitigationActionsTasks(
    const ListDetectMitigationActionsTasksRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDetectMitigationActionsTasks", "Required field: StartTime, is not set");
    return ListDetectMitigationActionsTasksOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDetectMitigationActionsTasks", "Required field: EndTime, is not set");
    return ListDetectMitigationActionsTasksOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detect/mitigationactions/tasks");
  };

  return ListDetectMitigationActionsTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDimensionsOutcome IoTClient::ListDimensions(const ListDimensionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dimensions");
  };

  return ListDimensionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainConfigurationsOutcome IoTClient::ListDomainConfigurations(const ListDomainConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainConfigurations");
  };

  return ListDomainConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFleetMetricsOutcome IoTClient::ListFleetMetrics(const ListFleetMetricsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleet-metrics");
  };

  return ListFleetMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIndicesOutcome IoTClient::ListIndices(const ListIndicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices");
  };

  return ListIndicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobExecutionsForJobOutcome IoTClient::ListJobExecutionsForJob(const ListJobExecutionsForJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobExecutionsForJob", "Required field: JobId, is not set");
    return ListJobExecutionsForJobOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/things");
  };

  return ListJobExecutionsForJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobExecutionsForThingOutcome IoTClient::ListJobExecutionsForThing(const ListJobExecutionsForThingRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobExecutionsForThing", "Required field: ThingName, is not set");
    return ListJobExecutionsForThingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return ListJobExecutionsForThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobTemplatesOutcome IoTClient::ListJobTemplates(const ListJobTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/job-templates");
  };

  return ListJobTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobsOutcome IoTClient::ListJobs(const ListJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return ListJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListManagedJobTemplatesOutcome IoTClient::ListManagedJobTemplates(const ListManagedJobTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-job-templates");
  };

  return ListManagedJobTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMetricValuesOutcome IoTClient::ListMetricValues(const ListMetricValuesRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: ThingName, is not set");
    return ListMetricValuesOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: MetricName, is not set");
    return ListMetricValuesOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: StartTime, is not set");
    return ListMetricValuesOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: EndTime, is not set");
    return ListMetricValuesOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metric-values");
  };

  return ListMetricValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMitigationActionsOutcome IoTClient::ListMitigationActions(const ListMitigationActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mitigationactions/actions");
  };

  return ListMitigationActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOTAUpdatesOutcome IoTClient::ListOTAUpdates(const ListOTAUpdatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/otaUpdates");
  };

  return ListOTAUpdatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOutgoingCertificatesOutcome IoTClient::ListOutgoingCertificates(const ListOutgoingCertificatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates-out-going");
  };

  return ListOutgoingCertificatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPackageVersionsOutcome IoTClient::ListPackageVersions(const ListPackageVersionsRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: PackageName, is not set");
    return ListPackageVersionsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListPackageVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPackagesOutcome IoTClient::ListPackages(const ListPackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  };

  return ListPackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPoliciesOutcome IoTClient::ListPolicies(const ListPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies");
  };

  return ListPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPolicyVersionsOutcome IoTClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyVersions", "Required field: PolicyName, is not set");
    return ListPolicyVersionsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  return ListPolicyVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPrincipalThingsOutcome IoTClient::ListPrincipalThings(const ListPrincipalThingsRequest& request) const {
  if (!request.PrincipalHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrincipalThings", "Required field: Principal, is not set");
    return ListPrincipalThingsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/principals/things");
  };

  return ListPrincipalThingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPrincipalThingsV2Outcome IoTClient::ListPrincipalThingsV2(const ListPrincipalThingsV2Request& request) const {
  if (!request.PrincipalHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrincipalThingsV2", "Required field: Principal, is not set");
    return ListPrincipalThingsV2Outcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/principals/things-v2");
  };

  return ListPrincipalThingsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProvisioningTemplateVersionsOutcome IoTClient::ListProvisioningTemplateVersions(
    const ListProvisioningTemplateVersionsRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProvisioningTemplateVersions", "Required field: TemplateName, is not set");
    return ListProvisioningTemplateVersionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListProvisioningTemplateVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProvisioningTemplatesOutcome IoTClient::ListProvisioningTemplates(const ListProvisioningTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates");
  };

  return ListProvisioningTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRelatedResourcesForAuditFindingOutcome IoTClient::ListRelatedResourcesForAuditFinding(
    const ListRelatedResourcesForAuditFindingRequest& request) const {
  if (!request.FindingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRelatedResourcesForAuditFinding", "Required field: FindingId, is not set");
    return ListRelatedResourcesForAuditFindingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/relatedResources");
  };

  return ListRelatedResourcesForAuditFindingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoleAliasesOutcome IoTClient::ListRoleAliases(const ListRoleAliasesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/role-aliases");
  };

  return ListRoleAliasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSbomValidationResultsOutcome IoTClient::ListSbomValidationResults(const ListSbomValidationResultsRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSbomValidationResults", "Required field: PackageName, is not set");
    return ListSbomValidationResultsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSbomValidationResults", "Required field: VersionName, is not set");
    return ListSbomValidationResultsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbom-validation-results");
  };

  return ListSbomValidationResultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListScheduledAuditsOutcome IoTClient::ListScheduledAudits(const ListScheduledAuditsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/scheduledaudits");
  };

  return ListScheduledAuditsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityProfilesOutcome IoTClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles");
  };

  return ListSecurityProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityProfilesForTargetOutcome IoTClient::ListSecurityProfilesForTarget(const ListSecurityProfilesForTargetRequest& request) const {
  if (!request.SecurityProfileTargetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSecurityProfilesForTarget", "Required field: SecurityProfileTargetArn, is not set");
    return ListSecurityProfilesForTargetOutcome(Aws::Client::AWSError<IoTErrors>(
        IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileTargetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles-for-target");
  };

  return ListSecurityProfilesForTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListStreamsOutcome IoTClient::ListStreams(const ListStreamsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streams");
  };

  return ListStreamsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome IoTClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTargetsForPolicyOutcome IoTClient::ListTargetsForPolicy(const ListTargetsForPolicyRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTargetsForPolicy", "Required field: PolicyName, is not set");
    return ListTargetsForPolicyOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  return ListTargetsForPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTargetsForSecurityProfileOutcome IoTClient::ListTargetsForSecurityProfile(const ListTargetsForSecurityProfileRequest& request) const {
  if (!request.SecurityProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTargetsForSecurityProfile", "Required field: SecurityProfileName, is not set");
    return ListTargetsForSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SecurityProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets");
  };

  return ListTargetsForSecurityProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingGroupsOutcome IoTClient::ListThingGroups(const ListThingGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups");
  };

  return ListThingGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingGroupsForThingOutcome IoTClient::ListThingGroupsForThing(const ListThingGroupsForThingRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThingGroupsForThing", "Required field: ThingName, is not set");
    return ListThingGroupsForThingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups");
  };

  return ListThingGroupsForThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThingPrincipalsOutcome IoTClient::ListThingPrincipals(const ListThingPrincipalsRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThingPrincipals", "Required field: ThingName, is not set");
    return ListThingPrincipalsOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/principals");
  };

  return ListThingPrincipalsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}
