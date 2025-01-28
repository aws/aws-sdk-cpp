/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/iot/IoTClient.h>
#include <aws/iot/IoTErrorMarshaller.h>
#include <aws/iot/IoTEndpointProvider.h>
#include <aws/iot/model/DescribeEndpointRequest.h>
#include <aws/iot/model/DescribeEventConfigurationsRequest.h>
#include <aws/iot/model/DescribeFleetMetricRequest.h>
#include <aws/iot/model/DescribeIndexRequest.h>
#include <aws/iot/model/DescribeJobRequest.h>
#include <aws/iot/model/DescribeJobExecutionRequest.h>
#include <aws/iot/model/DescribeJobTemplateRequest.h>
#include <aws/iot/model/DescribeManagedJobTemplateRequest.h>
#include <aws/iot/model/DescribeMitigationActionRequest.h>
#include <aws/iot/model/DescribeProvisioningTemplateRequest.h>
#include <aws/iot/model/DescribeProvisioningTemplateVersionRequest.h>
#include <aws/iot/model/DescribeRoleAliasRequest.h>
#include <aws/iot/model/DescribeScheduledAuditRequest.h>
#include <aws/iot/model/DescribeSecurityProfileRequest.h>
#include <aws/iot/model/DescribeStreamRequest.h>
#include <aws/iot/model/DescribeThingRequest.h>
#include <aws/iot/model/DescribeThingGroupRequest.h>
#include <aws/iot/model/DescribeThingRegistrationTaskRequest.h>
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
#include <aws/iot/model/GetCommandRequest.h>
#include <aws/iot/model/GetCommandExecutionRequest.h>
#include <aws/iot/model/GetEffectivePoliciesRequest.h>
#include <aws/iot/model/GetIndexingConfigurationRequest.h>
#include <aws/iot/model/GetJobDocumentRequest.h>
#include <aws/iot/model/GetLoggingOptionsRequest.h>
#include <aws/iot/model/GetOTAUpdateRequest.h>
#include <aws/iot/model/GetPackageRequest.h>
#include <aws/iot/model/GetPackageConfigurationRequest.h>
#include <aws/iot/model/GetPackageVersionRequest.h>
#include <aws/iot/model/GetPercentilesRequest.h>
#include <aws/iot/model/GetPolicyRequest.h>
#include <aws/iot/model/GetPolicyVersionRequest.h>
#include <aws/iot/model/GetRegistrationCodeRequest.h>
#include <aws/iot/model/GetStatisticsRequest.h>
#include <aws/iot/model/GetThingConnectivityDataRequest.h>
#include <aws/iot/model/GetTopicRuleRequest.h>
#include <aws/iot/model/GetTopicRuleDestinationRequest.h>
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
#include <aws/iot/model/ListCertificatesRequest.h>
#include <aws/iot/model/ListCertificatesByCARequest.h>
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
#include <aws/iot/model/ListSecurityProfilesRequest.h>
#include <aws/iot/model/ListSecurityProfilesForTargetRequest.h>
#include <aws/iot/model/ListStreamsRequest.h>
#include <aws/iot/model/ListTagsForResourceRequest.h>
#include <aws/iot/model/ListTargetsForPolicyRequest.h>
#include <aws/iot/model/ListTargetsForSecurityProfileRequest.h>
#include <aws/iot/model/ListThingGroupsRequest.h>
#include <aws/iot/model/ListThingGroupsForThingRequest.h>
#include <aws/iot/model/ListThingPrincipalsRequest.h>
#include <aws/iot/model/ListThingPrincipalsV2Request.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT;
using namespace Aws::IoT::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


DescribeEndpointOutcome IoTClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEndpointOutcome>(
    [&]()-> DescribeEndpointOutcome {
      return DescribeEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/endpoint");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEventConfigurationsOutcome IoTClient::DescribeEventConfigurations(const DescribeEventConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeEventConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEventConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEventConfigurations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEventConfigurationsOutcome>(
    [&]()-> DescribeEventConfigurationsOutcome {
      return DescribeEventConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/event-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeFleetMetricOutcome IoTClient::DescribeFleetMetric(const DescribeFleetMetricRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFleetMetric);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetMetric, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFleetMetric", "Required field: MetricName, is not set");
    return DescribeFleetMetricOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeFleetMetric, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeFleetMetric, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeFleetMetric",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeFleetMetricOutcome>(
    [&]()-> DescribeFleetMetricOutcome {
      return DescribeFleetMetricOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fleet-metric/");
      resolvedEndpoint.AddPathSegment(request.GetMetricName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIndexOutcome IoTClient::DescribeIndex(const DescribeIndexRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIndex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IndexNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIndex", "Required field: IndexName, is not set");
    return DescribeIndexOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeIndex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIndexOutcome>(
    [&]()-> DescribeIndexOutcome {
      return DescribeIndexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indices/");
      resolvedEndpoint.AddPathSegment(request.GetIndexName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeJobOutcome IoTClient::DescribeJob(const DescribeJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeJobOutcome>(
    [&]()-> DescribeJobOutcome {
      return DescribeJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeJobExecutionOutcome IoTClient::DescribeJobExecution(const DescribeJobExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeJobExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: JobId, is not set");
    return DescribeJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: ThingName, is not set");
    return DescribeJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeJobExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeJobExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeJobExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeJobExecutionOutcome>(
    [&]()-> DescribeJobExecutionOutcome {
      return DescribeJobExecutionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeJobTemplateOutcome IoTClient::DescribeJobTemplate(const DescribeJobTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeJobTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobTemplate", "Required field: JobTemplateId, is not set");
    return DescribeJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeJobTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeJobTemplateOutcome>(
    [&]()-> DescribeJobTemplateOutcome {
      return DescribeJobTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/job-templates/");
      resolvedEndpoint.AddPathSegment(request.GetJobTemplateId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeManagedJobTemplateOutcome IoTClient::DescribeManagedJobTemplate(const DescribeManagedJobTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeManagedJobTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeManagedJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeManagedJobTemplate", "Required field: TemplateName, is not set");
    return DescribeManagedJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeManagedJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeManagedJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeManagedJobTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeManagedJobTemplateOutcome>(
    [&]()-> DescribeManagedJobTemplateOutcome {
      return DescribeManagedJobTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/managed-job-templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeMitigationActionOutcome IoTClient::DescribeMitigationAction(const DescribeMitigationActionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMitigationAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMitigationAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ActionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMitigationAction", "Required field: ActionName, is not set");
    return DescribeMitigationActionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeMitigationAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeMitigationAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeMitigationAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeMitigationActionOutcome>(
    [&]()-> DescribeMitigationActionOutcome {
      return DescribeMitigationActionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/mitigationactions/actions/");
      resolvedEndpoint.AddPathSegment(request.GetActionName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeProvisioningTemplateOutcome IoTClient::DescribeProvisioningTemplate(const DescribeProvisioningTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeProvisioningTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProvisioningTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplate", "Required field: TemplateName, is not set");
    return DescribeProvisioningTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeProvisioningTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeProvisioningTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeProvisioningTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeProvisioningTemplateOutcome>(
    [&]()-> DescribeProvisioningTemplateOutcome {
      return DescribeProvisioningTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/provisioning-templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeProvisioningTemplateVersionOutcome IoTClient::DescribeProvisioningTemplateVersion(const DescribeProvisioningTemplateVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeProvisioningTemplateVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProvisioningTemplateVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplateVersion", "Required field: TemplateName, is not set");
    return DescribeProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProvisioningTemplateVersion", "Required field: VersionId, is not set");
    return DescribeProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeProvisioningTemplateVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeProvisioningTemplateVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeProvisioningTemplateVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeProvisioningTemplateVersionOutcome>(
    [&]()-> DescribeProvisioningTemplateVersionOutcome {
      return DescribeProvisioningTemplateVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/provisioning-templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateName());
      resolvedEndpoint.AddPathSegments("/versions/");
      resolvedEndpoint.AddPathSegment(request.GetVersionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRoleAliasOutcome IoTClient::DescribeRoleAlias(const DescribeRoleAliasRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRoleAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRoleAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RoleAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoleAlias", "Required field: RoleAlias, is not set");
    return DescribeRoleAliasOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeRoleAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRoleAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeRoleAlias",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRoleAliasOutcome>(
    [&]()-> DescribeRoleAliasOutcome {
      return DescribeRoleAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/role-aliases/");
      resolvedEndpoint.AddPathSegment(request.GetRoleAlias());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeScheduledAuditOutcome IoTClient::DescribeScheduledAudit(const DescribeScheduledAuditRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeScheduledAudit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledAudit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScheduledAuditNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return DescribeScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduledAuditName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeScheduledAudit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeScheduledAudit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeScheduledAudit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeScheduledAuditOutcome>(
    [&]()-> DescribeScheduledAuditOutcome {
      return DescribeScheduledAuditOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/scheduledaudits/");
      resolvedEndpoint.AddPathSegment(request.GetScheduledAuditName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSecurityProfileOutcome IoTClient::DescribeSecurityProfile(const DescribeSecurityProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSecurityProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DescribeSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeSecurityProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSecurityProfileOutcome>(
    [&]()-> DescribeSecurityProfileOutcome {
      return DescribeSecurityProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/security-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetSecurityProfileName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeStreamOutcome IoTClient::DescribeStream(const DescribeStreamRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeStream", "Required field: StreamId, is not set");
    return DescribeStreamOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeStreamOutcome>(
    [&]()-> DescribeStreamOutcome {
      return DescribeStreamOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streams/");
      resolvedEndpoint.AddPathSegment(request.GetStreamId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThingOutcome IoTClient::DescribeThing(const DescribeThingRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeThing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThing", "Required field: ThingName, is not set");
    return DescribeThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeThing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThingOutcome>(
    [&]()-> DescribeThingOutcome {
      return DescribeThingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThingGroupOutcome IoTClient::DescribeThingGroup(const DescribeThingGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeThingGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThingGroup", "Required field: ThingGroupName, is not set");
    return DescribeThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeThingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeThingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeThingGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThingGroupOutcome>(
    [&]()-> DescribeThingGroupOutcome {
      return DescribeThingGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/thing-groups/");
      resolvedEndpoint.AddPathSegment(request.GetThingGroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThingRegistrationTaskOutcome IoTClient::DescribeThingRegistrationTask(const DescribeThingRegistrationTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeThingRegistrationTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThingRegistrationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThingRegistrationTask", "Required field: TaskId, is not set");
    return DescribeThingRegistrationTaskOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeThingRegistrationTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeThingRegistrationTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeThingRegistrationTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThingRegistrationTaskOutcome>(
    [&]()-> DescribeThingRegistrationTaskOutcome {
      return DescribeThingRegistrationTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/thing-registration-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetTaskId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThingTypeOutcome IoTClient::DescribeThingType(const DescribeThingTypeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeThingType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThingType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThingType", "Required field: ThingTypeName, is not set");
    return DescribeThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingTypeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeThingType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeThingType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeThingType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThingTypeOutcome>(
    [&]()-> DescribeThingTypeOutcome {
      return DescribeThingTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/thing-types/");
      resolvedEndpoint.AddPathSegment(request.GetThingTypeName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DetachPolicyOutcome IoTClient::DetachPolicy(const DetachPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DetachPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachPolicy", "Required field: PolicyName, is not set");
    return DetachPolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DetachPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DetachPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DetachPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DetachPolicyOutcome>(
    [&]()-> DetachPolicyOutcome {
      return DetachPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/target-policies/");
      resolvedEndpoint.AddPathSegment(request.GetPolicyName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DetachSecurityProfileOutcome IoTClient::DetachSecurityProfile(const DetachSecurityProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DetachSecurityProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DetachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  if (!request.SecurityProfileTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachSecurityProfile", "Required field: SecurityProfileTargetArn, is not set");
    return DetachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileTargetArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DetachSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DetachSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DetachSecurityProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DetachSecurityProfileOutcome>(
    [&]()-> DetachSecurityProfileOutcome {
      return DetachSecurityProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/security-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetSecurityProfileName());
      resolvedEndpoint.AddPathSegments("/targets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DetachThingPrincipalOutcome IoTClient::DetachThingPrincipal(const DetachThingPrincipalRequest& request) const
{
  AWS_OPERATION_GUARD(DetachThingPrincipal);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachThingPrincipal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachThingPrincipal", "Required field: ThingName, is not set");
    return DetachThingPrincipalOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.PrincipalHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachThingPrincipal", "Required field: Principal, is not set");
    return DetachThingPrincipalOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DetachThingPrincipal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DetachThingPrincipal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DetachThingPrincipal",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DetachThingPrincipalOutcome>(
    [&]()-> DetachThingPrincipalOutcome {
      return DetachThingPrincipalOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      resolvedEndpoint.AddPathSegments("/principals");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisableTopicRuleOutcome IoTClient::DisableTopicRule(const DisableTopicRuleRequest& request) const
{
  AWS_OPERATION_GUARD(DisableTopicRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableTopicRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableTopicRule", "Required field: RuleName, is not set");
    return DisableTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisableTopicRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisableTopicRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisableTopicRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisableTopicRuleOutcome>(
    [&]()-> DisableTopicRuleOutcome {
      return DisableTopicRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/rules/");
      resolvedEndpoint.AddPathSegment(request.GetRuleName());
      resolvedEndpoint.AddPathSegments("/disable");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateSbomFromPackageVersionOutcome IoTClient::DisassociateSbomFromPackageVersion(const DisassociateSbomFromPackageVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateSbomFromPackageVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSbomFromPackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateSbomFromPackageVersion", "Required field: PackageName, is not set");
    return DisassociateSbomFromPackageVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateSbomFromPackageVersion", "Required field: VersionName, is not set");
    return DisassociateSbomFromPackageVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateSbomFromPackageVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateSbomFromPackageVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateSbomFromPackageVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateSbomFromPackageVersionOutcome>(
    [&]()-> DisassociateSbomFromPackageVersionOutcome {
      return DisassociateSbomFromPackageVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/packages/");
      resolvedEndpoint.AddPathSegment(request.GetPackageName());
      resolvedEndpoint.AddPathSegments("/versions/");
      resolvedEndpoint.AddPathSegment(request.GetVersionName());
      resolvedEndpoint.AddPathSegments("/sbom");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableTopicRuleOutcome IoTClient::EnableTopicRule(const EnableTopicRuleRequest& request) const
{
  AWS_OPERATION_GUARD(EnableTopicRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableTopicRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableTopicRule", "Required field: RuleName, is not set");
    return EnableTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, EnableTopicRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EnableTopicRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EnableTopicRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EnableTopicRuleOutcome>(
    [&]()-> EnableTopicRuleOutcome {
      return EnableTopicRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/rules/");
      resolvedEndpoint.AddPathSegment(request.GetRuleName());
      resolvedEndpoint.AddPathSegments("/enable");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBehaviorModelTrainingSummariesOutcome IoTClient::GetBehaviorModelTrainingSummaries(const GetBehaviorModelTrainingSummariesRequest& request) const
{
  AWS_OPERATION_GUARD(GetBehaviorModelTrainingSummaries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBehaviorModelTrainingSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBehaviorModelTrainingSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBehaviorModelTrainingSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBehaviorModelTrainingSummaries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBehaviorModelTrainingSummariesOutcome>(
    [&]()-> GetBehaviorModelTrainingSummariesOutcome {
      return GetBehaviorModelTrainingSummariesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/behavior-model-training/summaries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketsAggregationOutcome IoTClient::GetBucketsAggregation(const GetBucketsAggregationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketsAggregation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketsAggregation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBucketsAggregation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketsAggregationOutcome>(
    [&]()-> GetBucketsAggregationOutcome {
      return GetBucketsAggregationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indices/buckets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCardinalityOutcome IoTClient::GetCardinality(const GetCardinalityRequest& request) const
{
  AWS_OPERATION_GUARD(GetCardinality);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCardinality, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCardinality, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCardinality, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCardinality",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCardinalityOutcome>(
    [&]()-> GetCardinalityOutcome {
      return GetCardinalityOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indices/cardinality");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCommandOutcome IoTClient::GetCommand(const GetCommandRequest& request) const
{
  AWS_OPERATION_GUARD(GetCommand);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CommandIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCommand", "Required field: CommandId, is not set");
    return GetCommandOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CommandId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCommand, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCommand, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCommand",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCommandOutcome>(
    [&]()-> GetCommandOutcome {
      return GetCommandOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/commands/");
      resolvedEndpoint.AddPathSegment(request.GetCommandId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCommandExecutionOutcome IoTClient::GetCommandExecution(const GetCommandExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(GetCommandExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommandExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExecutionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCommandExecution", "Required field: ExecutionId, is not set");
    return GetCommandExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }
  if (!request.TargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCommandExecution", "Required field: TargetArn, is not set");
    return GetCommandExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCommandExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCommandExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCommandExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCommandExecutionOutcome>(
    [&]()-> GetCommandExecutionOutcome {
      return GetCommandExecutionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/command-executions/");
      resolvedEndpoint.AddPathSegment(request.GetExecutionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEffectivePoliciesOutcome IoTClient::GetEffectivePolicies(const GetEffectivePoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(GetEffectivePolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEffectivePolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEffectivePolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEffectivePolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEffectivePolicies",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEffectivePoliciesOutcome>(
    [&]()-> GetEffectivePoliciesOutcome {
      return GetEffectivePoliciesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/effective-policies");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIndexingConfigurationOutcome IoTClient::GetIndexingConfiguration(const GetIndexingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetIndexingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIndexingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIndexingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIndexingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIndexingConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIndexingConfigurationOutcome>(
    [&]()-> GetIndexingConfigurationOutcome {
      return GetIndexingConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indexing/config");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetJobDocumentOutcome IoTClient::GetJobDocument(const GetJobDocumentRequest& request) const
{
  AWS_OPERATION_GUARD(GetJobDocument);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJobDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobDocument", "Required field: JobId, is not set");
    return GetJobDocumentOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetJobDocument, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetJobDocument, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetJobDocument",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetJobDocumentOutcome>(
    [&]()-> GetJobDocumentOutcome {
      return GetJobDocumentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/job-document");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLoggingOptionsOutcome IoTClient::GetLoggingOptions(const GetLoggingOptionsRequest& request) const
{
  AWS_OPERATION_GUARD(GetLoggingOptions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetLoggingOptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLoggingOptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLoggingOptions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLoggingOptionsOutcome>(
    [&]()-> GetLoggingOptionsOutcome {
      return GetLoggingOptionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/loggingOptions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOTAUpdateOutcome IoTClient::GetOTAUpdate(const GetOTAUpdateRequest& request) const
{
  AWS_OPERATION_GUARD(GetOTAUpdate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOTAUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OtaUpdateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOTAUpdate", "Required field: OtaUpdateId, is not set");
    return GetOTAUpdateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OtaUpdateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetOTAUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOTAUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOTAUpdate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOTAUpdateOutcome>(
    [&]()-> GetOTAUpdateOutcome {
      return GetOTAUpdateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/otaUpdates/");
      resolvedEndpoint.AddPathSegment(request.GetOtaUpdateId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPackageOutcome IoTClient::GetPackage(const GetPackageRequest& request) const
{
  AWS_OPERATION_GUARD(GetPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackage", "Required field: PackageName, is not set");
    return GetPackageOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPackageOutcome>(
    [&]()-> GetPackageOutcome {
      return GetPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/packages/");
      resolvedEndpoint.AddPathSegment(request.GetPackageName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPackageConfigurationOutcome IoTClient::GetPackageConfiguration(const GetPackageConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetPackageConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPackageConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPackageConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPackageConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPackageConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPackageConfigurationOutcome>(
    [&]()-> GetPackageConfigurationOutcome {
      return GetPackageConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/package-configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPackageVersionOutcome IoTClient::GetPackageVersion(const GetPackageVersionRequest& request) const
{
  AWS_OPERATION_GUARD(GetPackageVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersion", "Required field: PackageName, is not set");
    return GetPackageVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersion", "Required field: VersionName, is not set");
    return GetPackageVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPackageVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPackageVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPackageVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPackageVersionOutcome>(
    [&]()-> GetPackageVersionOutcome {
      return GetPackageVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/packages/");
      resolvedEndpoint.AddPathSegment(request.GetPackageName());
      resolvedEndpoint.AddPathSegments("/versions/");
      resolvedEndpoint.AddPathSegment(request.GetVersionName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPercentilesOutcome IoTClient::GetPercentiles(const GetPercentilesRequest& request) const
{
  AWS_OPERATION_GUARD(GetPercentiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPercentiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPercentiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPercentiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPercentiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPercentilesOutcome>(
    [&]()-> GetPercentilesOutcome {
      return GetPercentilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indices/percentiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPolicyOutcome IoTClient::GetPolicy(const GetPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: PolicyName, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPolicyOutcome>(
    [&]()-> GetPolicyOutcome {
      return GetPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/policies/");
      resolvedEndpoint.AddPathSegment(request.GetPolicyName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPolicyVersionOutcome IoTClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const
{
  AWS_OPERATION_GUARD(GetPolicyVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPolicyVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicyVersion", "Required field: PolicyName, is not set");
    return GetPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicyVersion", "Required field: PolicyVersionId, is not set");
    return GetPolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPolicyVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPolicyVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPolicyVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPolicyVersionOutcome>(
    [&]()-> GetPolicyVersionOutcome {
      return GetPolicyVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/policies/");
      resolvedEndpoint.AddPathSegment(request.GetPolicyName());
      resolvedEndpoint.AddPathSegments("/version/");
      resolvedEndpoint.AddPathSegment(request.GetPolicyVersionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRegistrationCodeOutcome IoTClient::GetRegistrationCode(const GetRegistrationCodeRequest& request) const
{
  AWS_OPERATION_GUARD(GetRegistrationCode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegistrationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRegistrationCode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRegistrationCode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRegistrationCode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRegistrationCodeOutcome>(
    [&]()-> GetRegistrationCodeOutcome {
      return GetRegistrationCodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/registrationcode");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStatisticsOutcome IoTClient::GetStatistics(const GetStatisticsRequest& request) const
{
  AWS_OPERATION_GUARD(GetStatistics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStatistics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStatistics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStatistics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStatisticsOutcome>(
    [&]()-> GetStatisticsOutcome {
      return GetStatisticsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indices/statistics");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetThingConnectivityDataOutcome IoTClient::GetThingConnectivityData(const GetThingConnectivityDataRequest& request) const
{
  AWS_OPERATION_GUARD(GetThingConnectivityData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetThingConnectivityData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetThingConnectivityData", "Required field: ThingName, is not set");
    return GetThingConnectivityDataOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetThingConnectivityData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetThingConnectivityData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetThingConnectivityData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetThingConnectivityDataOutcome>(
    [&]()-> GetThingConnectivityDataOutcome {
      return GetThingConnectivityDataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      resolvedEndpoint.AddPathSegments("/connectivity-data");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTopicRuleOutcome IoTClient::GetTopicRule(const GetTopicRuleRequest& request) const
{
  AWS_OPERATION_GUARD(GetTopicRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTopicRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTopicRule", "Required field: RuleName, is not set");
    return GetTopicRuleOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTopicRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTopicRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTopicRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTopicRuleOutcome>(
    [&]()-> GetTopicRuleOutcome {
      return GetTopicRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/rules/");
      resolvedEndpoint.AddPathSegment(request.GetRuleName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTopicRuleDestinationOutcome IoTClient::GetTopicRuleDestination(const GetTopicRuleDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(GetTopicRuleDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTopicRuleDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTopicRuleDestination", "Required field: Arn, is not set");
    return GetTopicRuleDestinationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTopicRuleDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTopicRuleDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTopicRuleDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTopicRuleDestinationOutcome>(
    [&]()-> GetTopicRuleDestinationOutcome {
      return GetTopicRuleDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/destinations/");
      resolvedEndpoint.AddPathSegments(request.GetArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetV2LoggingOptionsOutcome IoTClient::GetV2LoggingOptions(const GetV2LoggingOptionsRequest& request) const
{
  AWS_OPERATION_GUARD(GetV2LoggingOptions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetV2LoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetV2LoggingOptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetV2LoggingOptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetV2LoggingOptions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetV2LoggingOptionsOutcome>(
    [&]()-> GetV2LoggingOptionsOutcome {
      return GetV2LoggingOptionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2LoggingOptions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListActiveViolationsOutcome IoTClient::ListActiveViolations(const ListActiveViolationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListActiveViolations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListActiveViolations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListActiveViolations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListActiveViolations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListActiveViolations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListActiveViolationsOutcome>(
    [&]()-> ListActiveViolationsOutcome {
      return ListActiveViolationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/active-violations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAttachedPoliciesOutcome IoTClient::ListAttachedPolicies(const ListAttachedPoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAttachedPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAttachedPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TargetHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttachedPolicies", "Required field: Target, is not set");
    return ListAttachedPoliciesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Target]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAttachedPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAttachedPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAttachedPolicies",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAttachedPoliciesOutcome>(
    [&]()-> ListAttachedPoliciesOutcome {
      return ListAttachedPoliciesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/attached-policies/");
      resolvedEndpoint.AddPathSegment(request.GetTarget());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAuditFindingsOutcome IoTClient::ListAuditFindings(const ListAuditFindingsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAuditFindings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAuditFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAuditFindings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAuditFindings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAuditFindings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAuditFindingsOutcome>(
    [&]()-> ListAuditFindingsOutcome {
      return ListAuditFindingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/findings");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAuditMitigationActionsExecutionsOutcome IoTClient::ListAuditMitigationActionsExecutions(const ListAuditMitigationActionsExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAuditMitigationActionsExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAuditMitigationActionsExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsExecutions", "Required field: TaskId, is not set");
    return ListAuditMitigationActionsExecutionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsExecutions", "Required field: FindingId, is not set");
    return ListAuditMitigationActionsExecutionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAuditMitigationActionsExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAuditMitigationActionsExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAuditMitigationActionsExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAuditMitigationActionsExecutionsOutcome>(
    [&]()-> ListAuditMitigationActionsExecutionsOutcome {
      return ListAuditMitigationActionsExecutionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/mitigationactions/executions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAuditMitigationActionsTasksOutcome IoTClient::ListAuditMitigationActionsTasks(const ListAuditMitigationActionsTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListAuditMitigationActionsTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAuditMitigationActionsTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsTasks", "Required field: StartTime, is not set");
    return ListAuditMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditMitigationActionsTasks", "Required field: EndTime, is not set");
    return ListAuditMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAuditMitigationActionsTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAuditMitigationActionsTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAuditMitigationActionsTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAuditMitigationActionsTasksOutcome>(
    [&]()-> ListAuditMitigationActionsTasksOutcome {
      return ListAuditMitigationActionsTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/mitigationactions/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAuditSuppressionsOutcome IoTClient::ListAuditSuppressions(const ListAuditSuppressionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAuditSuppressions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAuditSuppressions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAuditSuppressions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAuditSuppressions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAuditSuppressions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAuditSuppressionsOutcome>(
    [&]()-> ListAuditSuppressionsOutcome {
      return ListAuditSuppressionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/suppressions/list");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAuditTasksOutcome IoTClient::ListAuditTasks(const ListAuditTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListAuditTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAuditTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditTasks", "Required field: StartTime, is not set");
    return ListAuditTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAuditTasks", "Required field: EndTime, is not set");
    return ListAuditTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAuditTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAuditTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAuditTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAuditTasksOutcome>(
    [&]()-> ListAuditTasksOutcome {
      return ListAuditTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAuthorizersOutcome IoTClient::ListAuthorizers(const ListAuthorizersRequest& request) const
{
  AWS_OPERATION_GUARD(ListAuthorizers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAuthorizers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAuthorizers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAuthorizers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAuthorizers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAuthorizersOutcome>(
    [&]()-> ListAuthorizersOutcome {
      return ListAuthorizersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/authorizers/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBillingGroupsOutcome IoTClient::ListBillingGroups(const ListBillingGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBillingGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBillingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBillingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBillingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBillingGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBillingGroupsOutcome>(
    [&]()-> ListBillingGroupsOutcome {
      return ListBillingGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/billing-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCACertificatesOutcome IoTClient::ListCACertificates(const ListCACertificatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListCACertificates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCACertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCACertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCACertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCACertificates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCACertificatesOutcome>(
    [&]()-> ListCACertificatesOutcome {
      return ListCACertificatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/cacertificates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCertificateProvidersOutcome IoTClient::ListCertificateProviders(const ListCertificateProvidersRequest& request) const
{
  AWS_OPERATION_GUARD(ListCertificateProviders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCertificateProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCertificateProviders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCertificateProviders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCertificateProviders",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCertificateProvidersOutcome>(
    [&]()-> ListCertificateProvidersOutcome {
      return ListCertificateProvidersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/certificate-providers/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCertificatesOutcome IoTClient::ListCertificates(const ListCertificatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListCertificates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCertificates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCertificatesOutcome>(
    [&]()-> ListCertificatesOutcome {
      return ListCertificatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/certificates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCertificatesByCAOutcome IoTClient::ListCertificatesByCA(const ListCertificatesByCARequest& request) const
{
  AWS_OPERATION_GUARD(ListCertificatesByCA);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCertificatesByCA, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCertificatesByCA", "Required field: CaCertificateId, is not set");
    return ListCertificatesByCAOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaCertificateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCertificatesByCA, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCertificatesByCA, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCertificatesByCA",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCertificatesByCAOutcome>(
    [&]()-> ListCertificatesByCAOutcome {
      return ListCertificatesByCAOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/certificates-by-ca/");
      resolvedEndpoint.AddPathSegment(request.GetCaCertificateId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCommandExecutionsOutcome IoTClient::ListCommandExecutions(const ListCommandExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCommandExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCommandExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCommandExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCommandExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCommandExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCommandExecutionsOutcome>(
    [&]()-> ListCommandExecutionsOutcome {
      return ListCommandExecutionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/command-executions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCommandsOutcome IoTClient::ListCommands(const ListCommandsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCommands);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCommands, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCommands, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCommands, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCommands",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCommandsOutcome>(
    [&]()-> ListCommandsOutcome {
      return ListCommandsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/commands");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCustomMetricsOutcome IoTClient::ListCustomMetrics(const ListCustomMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCustomMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCustomMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCustomMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCustomMetrics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCustomMetricsOutcome>(
    [&]()-> ListCustomMetricsOutcome {
      return ListCustomMetricsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/custom-metrics");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDetectMitigationActionsExecutionsOutcome IoTClient::ListDetectMitigationActionsExecutions(const ListDetectMitigationActionsExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDetectMitigationActionsExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDetectMitigationActionsExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDetectMitigationActionsExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDetectMitigationActionsExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDetectMitigationActionsExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDetectMitigationActionsExecutionsOutcome>(
    [&]()-> ListDetectMitigationActionsExecutionsOutcome {
      return ListDetectMitigationActionsExecutionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/detect/mitigationactions/executions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDetectMitigationActionsTasksOutcome IoTClient::ListDetectMitigationActionsTasks(const ListDetectMitigationActionsTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListDetectMitigationActionsTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDetectMitigationActionsTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDetectMitigationActionsTasks", "Required field: StartTime, is not set");
    return ListDetectMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDetectMitigationActionsTasks", "Required field: EndTime, is not set");
    return ListDetectMitigationActionsTasksOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDetectMitigationActionsTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDetectMitigationActionsTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDetectMitigationActionsTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDetectMitigationActionsTasksOutcome>(
    [&]()-> ListDetectMitigationActionsTasksOutcome {
      return ListDetectMitigationActionsTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/detect/mitigationactions/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDimensionsOutcome IoTClient::ListDimensions(const ListDimensionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDimensions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDimensions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDimensions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDimensions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDimensions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDimensionsOutcome>(
    [&]()-> ListDimensionsOutcome {
      return ListDimensionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/dimensions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainConfigurationsOutcome IoTClient::ListDomainConfigurations(const ListDomainConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomainConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDomainConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDomainConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDomainConfigurations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDomainConfigurationsOutcome>(
    [&]()-> ListDomainConfigurationsOutcome {
      return ListDomainConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/domainConfigurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFleetMetricsOutcome IoTClient::ListFleetMetrics(const ListFleetMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(ListFleetMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFleetMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFleetMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFleetMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFleetMetrics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFleetMetricsOutcome>(
    [&]()-> ListFleetMetricsOutcome {
      return ListFleetMetricsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fleet-metrics");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIndicesOutcome IoTClient::ListIndices(const ListIndicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListIndices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIndices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIndices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIndices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIndices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIndicesOutcome>(
    [&]()-> ListIndicesOutcome {
      return ListIndicesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indices");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobExecutionsForJobOutcome IoTClient::ListJobExecutionsForJob(const ListJobExecutionsForJobRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobExecutionsForJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobExecutionsForJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobExecutionsForJob", "Required field: JobId, is not set");
    return ListJobExecutionsForJobOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobExecutionsForJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobExecutionsForJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobExecutionsForJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobExecutionsForJobOutcome>(
    [&]()-> ListJobExecutionsForJobOutcome {
      return ListJobExecutionsForJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/things");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobExecutionsForThingOutcome IoTClient::ListJobExecutionsForThing(const ListJobExecutionsForThingRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobExecutionsForThing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobExecutionsForThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobExecutionsForThing", "Required field: ThingName, is not set");
    return ListJobExecutionsForThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobExecutionsForThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobExecutionsForThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobExecutionsForThing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobExecutionsForThingOutcome>(
    [&]()-> ListJobExecutionsForThingOutcome {
      return ListJobExecutionsForThingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      resolvedEndpoint.AddPathSegments("/jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobTemplatesOutcome IoTClient::ListJobTemplates(const ListJobTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobTemplatesOutcome>(
    [&]()-> ListJobTemplatesOutcome {
      return ListJobTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/job-templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobsOutcome IoTClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobsOutcome>(
    [&]()-> ListJobsOutcome {
      return ListJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListManagedJobTemplatesOutcome IoTClient::ListManagedJobTemplates(const ListManagedJobTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListManagedJobTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListManagedJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListManagedJobTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListManagedJobTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListManagedJobTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListManagedJobTemplatesOutcome>(
    [&]()-> ListManagedJobTemplatesOutcome {
      return ListManagedJobTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/managed-job-templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMetricValuesOutcome IoTClient::ListMetricValues(const ListMetricValuesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMetricValues);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetricValues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: ThingName, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.MetricNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: MetricName, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: StartTime, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetricValues", "Required field: EndTime, is not set");
    return ListMetricValuesOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMetricValues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMetricValues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMetricValues",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMetricValuesOutcome>(
    [&]()-> ListMetricValuesOutcome {
      return ListMetricValuesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/metric-values");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMitigationActionsOutcome IoTClient::ListMitigationActions(const ListMitigationActionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMitigationActions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMitigationActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMitigationActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMitigationActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMitigationActions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMitigationActionsOutcome>(
    [&]()-> ListMitigationActionsOutcome {
      return ListMitigationActionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/mitigationactions/actions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOTAUpdatesOutcome IoTClient::ListOTAUpdates(const ListOTAUpdatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListOTAUpdates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOTAUpdates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListOTAUpdates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOTAUpdates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOTAUpdates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOTAUpdatesOutcome>(
    [&]()-> ListOTAUpdatesOutcome {
      return ListOTAUpdatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/otaUpdates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOutgoingCertificatesOutcome IoTClient::ListOutgoingCertificates(const ListOutgoingCertificatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListOutgoingCertificates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOutgoingCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListOutgoingCertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOutgoingCertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOutgoingCertificates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOutgoingCertificatesOutcome>(
    [&]()-> ListOutgoingCertificatesOutcome {
      return ListOutgoingCertificatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/certificates-out-going");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPackageVersionsOutcome IoTClient::ListPackageVersions(const ListPackageVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPackageVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPackageVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackageVersions", "Required field: PackageName, is not set");
    return ListPackageVersionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPackageVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPackageVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPackageVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPackageVersionsOutcome>(
    [&]()-> ListPackageVersionsOutcome {
      return ListPackageVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/packages/");
      resolvedEndpoint.AddPathSegment(request.GetPackageName());
      resolvedEndpoint.AddPathSegments("/versions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPackagesOutcome IoTClient::ListPackages(const ListPackagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListPackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPackages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPackagesOutcome>(
    [&]()-> ListPackagesOutcome {
      return ListPackagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/packages");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPoliciesOutcome IoTClient::ListPolicies(const ListPoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPolicies",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPoliciesOutcome>(
    [&]()-> ListPoliciesOutcome {
      return ListPoliciesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/policies");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPolicyVersionsOutcome IoTClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPolicyVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPolicyVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPolicyVersions", "Required field: PolicyName, is not set");
    return ListPolicyVersionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPolicyVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPolicyVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPolicyVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPolicyVersionsOutcome>(
    [&]()-> ListPolicyVersionsOutcome {
      return ListPolicyVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/policies/");
      resolvedEndpoint.AddPathSegment(request.GetPolicyName());
      resolvedEndpoint.AddPathSegments("/version");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPrincipalThingsOutcome IoTClient::ListPrincipalThings(const ListPrincipalThingsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPrincipalThings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrincipalThings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PrincipalHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrincipalThings", "Required field: Principal, is not set");
    return ListPrincipalThingsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPrincipalThings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrincipalThings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrincipalThings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPrincipalThingsOutcome>(
    [&]()-> ListPrincipalThingsOutcome {
      return ListPrincipalThingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/principals/things");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPrincipalThingsV2Outcome IoTClient::ListPrincipalThingsV2(const ListPrincipalThingsV2Request& request) const
{
  AWS_OPERATION_GUARD(ListPrincipalThingsV2);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrincipalThingsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PrincipalHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrincipalThingsV2", "Required field: Principal, is not set");
    return ListPrincipalThingsV2Outcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPrincipalThingsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrincipalThingsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrincipalThingsV2",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPrincipalThingsV2Outcome>(
    [&]()-> ListPrincipalThingsV2Outcome {
      return ListPrincipalThingsV2Outcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/principals/things-v2");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProvisioningTemplateVersionsOutcome IoTClient::ListProvisioningTemplateVersions(const ListProvisioningTemplateVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProvisioningTemplateVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProvisioningTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProvisioningTemplateVersions", "Required field: TemplateName, is not set");
    return ListProvisioningTemplateVersionsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProvisioningTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProvisioningTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProvisioningTemplateVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProvisioningTemplateVersionsOutcome>(
    [&]()-> ListProvisioningTemplateVersionsOutcome {
      return ListProvisioningTemplateVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/provisioning-templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateName());
      resolvedEndpoint.AddPathSegments("/versions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProvisioningTemplatesOutcome IoTClient::ListProvisioningTemplates(const ListProvisioningTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListProvisioningTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProvisioningTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProvisioningTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProvisioningTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProvisioningTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProvisioningTemplatesOutcome>(
    [&]()-> ListProvisioningTemplatesOutcome {
      return ListProvisioningTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/provisioning-templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRelatedResourcesForAuditFindingOutcome IoTClient::ListRelatedResourcesForAuditFinding(const ListRelatedResourcesForAuditFindingRequest& request) const
{
  AWS_OPERATION_GUARD(ListRelatedResourcesForAuditFinding);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRelatedResourcesForAuditFinding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRelatedResourcesForAuditFinding", "Required field: FindingId, is not set");
    return ListRelatedResourcesForAuditFindingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRelatedResourcesForAuditFinding, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRelatedResourcesForAuditFinding, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRelatedResourcesForAuditFinding",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRelatedResourcesForAuditFindingOutcome>(
    [&]()-> ListRelatedResourcesForAuditFindingOutcome {
      return ListRelatedResourcesForAuditFindingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/relatedResources");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRoleAliasesOutcome IoTClient::ListRoleAliases(const ListRoleAliasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRoleAliases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoleAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRoleAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRoleAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRoleAliases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRoleAliasesOutcome>(
    [&]()-> ListRoleAliasesOutcome {
      return ListRoleAliasesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/role-aliases");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSbomValidationResultsOutcome IoTClient::ListSbomValidationResults(const ListSbomValidationResultsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSbomValidationResults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSbomValidationResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSbomValidationResults", "Required field: PackageName, is not set");
    return ListSbomValidationResultsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSbomValidationResults", "Required field: VersionName, is not set");
    return ListSbomValidationResultsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSbomValidationResults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSbomValidationResults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSbomValidationResults",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSbomValidationResultsOutcome>(
    [&]()-> ListSbomValidationResultsOutcome {
      return ListSbomValidationResultsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/packages/");
      resolvedEndpoint.AddPathSegment(request.GetPackageName());
      resolvedEndpoint.AddPathSegments("/versions/");
      resolvedEndpoint.AddPathSegment(request.GetVersionName());
      resolvedEndpoint.AddPathSegments("/sbom-validation-results");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListScheduledAuditsOutcome IoTClient::ListScheduledAudits(const ListScheduledAuditsRequest& request) const
{
  AWS_OPERATION_GUARD(ListScheduledAudits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScheduledAudits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListScheduledAudits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListScheduledAudits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListScheduledAudits",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListScheduledAuditsOutcome>(
    [&]()-> ListScheduledAuditsOutcome {
      return ListScheduledAuditsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/scheduledaudits");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSecurityProfilesOutcome IoTClient::ListSecurityProfiles(const ListSecurityProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSecurityProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSecurityProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSecurityProfilesOutcome>(
    [&]()-> ListSecurityProfilesOutcome {
      return ListSecurityProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/security-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSecurityProfilesForTargetOutcome IoTClient::ListSecurityProfilesForTarget(const ListSecurityProfilesForTargetRequest& request) const
{
  AWS_OPERATION_GUARD(ListSecurityProfilesForTarget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityProfilesForTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecurityProfileTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSecurityProfilesForTarget", "Required field: SecurityProfileTargetArn, is not set");
    return ListSecurityProfilesForTargetOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileTargetArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSecurityProfilesForTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSecurityProfilesForTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSecurityProfilesForTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSecurityProfilesForTargetOutcome>(
    [&]()-> ListSecurityProfilesForTargetOutcome {
      return ListSecurityProfilesForTargetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/security-profiles-for-target");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStreamsOutcome IoTClient::ListStreams(const ListStreamsRequest& request) const
{
  AWS_OPERATION_GUARD(ListStreams);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStreams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStreams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStreams",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStreamsOutcome>(
    [&]()-> ListStreamsOutcome {
      return ListStreamsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/streams");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome IoTClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTargetsForPolicyOutcome IoTClient::ListTargetsForPolicy(const ListTargetsForPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(ListTargetsForPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTargetsForPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTargetsForPolicy", "Required field: PolicyName, is not set");
    return ListTargetsForPolicyOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTargetsForPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTargetsForPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTargetsForPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTargetsForPolicyOutcome>(
    [&]()-> ListTargetsForPolicyOutcome {
      return ListTargetsForPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/policy-targets/");
      resolvedEndpoint.AddPathSegment(request.GetPolicyName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTargetsForSecurityProfileOutcome IoTClient::ListTargetsForSecurityProfile(const ListTargetsForSecurityProfileRequest& request) const
{
  AWS_OPERATION_GUARD(ListTargetsForSecurityProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTargetsForSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecurityProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTargetsForSecurityProfile", "Required field: SecurityProfileName, is not set");
    return ListTargetsForSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecurityProfileName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTargetsForSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTargetsForSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTargetsForSecurityProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTargetsForSecurityProfileOutcome>(
    [&]()-> ListTargetsForSecurityProfileOutcome {
      return ListTargetsForSecurityProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/security-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetSecurityProfileName());
      resolvedEndpoint.AddPathSegments("/targets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListThingGroupsOutcome IoTClient::ListThingGroups(const ListThingGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListThingGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListThingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListThingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListThingGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListThingGroupsOutcome>(
    [&]()-> ListThingGroupsOutcome {
      return ListThingGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/thing-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListThingGroupsForThingOutcome IoTClient::ListThingGroupsForThing(const ListThingGroupsForThingRequest& request) const
{
  AWS_OPERATION_GUARD(ListThingGroupsForThing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThingGroupsForThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingGroupsForThing", "Required field: ThingName, is not set");
    return ListThingGroupsForThingOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListThingGroupsForThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListThingGroupsForThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListThingGroupsForThing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListThingGroupsForThingOutcome>(
    [&]()-> ListThingGroupsForThingOutcome {
      return ListThingGroupsForThingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      resolvedEndpoint.AddPathSegments("/thing-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListThingPrincipalsOutcome IoTClient::ListThingPrincipals(const ListThingPrincipalsRequest& request) const
{
  AWS_OPERATION_GUARD(ListThingPrincipals);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThingPrincipals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingPrincipals", "Required field: ThingName, is not set");
    return ListThingPrincipalsOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListThingPrincipals, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListThingPrincipals, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListThingPrincipals",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListThingPrincipalsOutcome>(
    [&]()-> ListThingPrincipalsOutcome {
      return ListThingPrincipalsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      resolvedEndpoint.AddPathSegments("/principals");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListThingPrincipalsV2Outcome IoTClient::ListThingPrincipalsV2(const ListThingPrincipalsV2Request& request) const
{
  AWS_OPERATION_GUARD(ListThingPrincipalsV2);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThingPrincipalsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThingPrincipalsV2", "Required field: ThingName, is not set");
    return ListThingPrincipalsV2Outcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListThingPrincipalsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListThingPrincipalsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListThingPrincipalsV2",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListThingPrincipalsV2Outcome>(
    [&]()-> ListThingPrincipalsV2Outcome {
      return ListThingPrincipalsV2Outcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/things/");
      resolvedEndpoint.AddPathSegment(request.GetThingName());
      resolvedEndpoint.AddPathSegments("/principals-v2");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


