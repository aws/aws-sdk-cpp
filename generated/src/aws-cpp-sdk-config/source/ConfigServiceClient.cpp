/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/ConfigServiceClient.h>
#include <aws/config/ConfigServiceEndpointProvider.h>
#include <aws/config/ConfigServiceErrorMarshaller.h>
#include <aws/config/model/AssociateResourceTypesRequest.h>
#include <aws/config/model/BatchGetAggregateResourceConfigRequest.h>
#include <aws/config/model/BatchGetResourceConfigRequest.h>
#include <aws/config/model/DeleteAggregationAuthorizationRequest.h>
#include <aws/config/model/DeleteConfigRuleRequest.h>
#include <aws/config/model/DeleteConfigurationAggregatorRequest.h>
#include <aws/config/model/DeleteConfigurationRecorderRequest.h>
#include <aws/config/model/DeleteConformancePackRequest.h>
#include <aws/config/model/DeleteDeliveryChannelRequest.h>
#include <aws/config/model/DeleteEvaluationResultsRequest.h>
#include <aws/config/model/DeleteOrganizationConfigRuleRequest.h>
#include <aws/config/model/DeleteOrganizationConformancePackRequest.h>
#include <aws/config/model/DeletePendingAggregationRequestRequest.h>
#include <aws/config/model/DeleteRemediationConfigurationRequest.h>
#include <aws/config/model/DeleteRemediationExceptionsRequest.h>
#include <aws/config/model/DeleteResourceConfigRequest.h>
#include <aws/config/model/DeleteRetentionConfigurationRequest.h>
#include <aws/config/model/DeleteServiceLinkedConfigurationRecorderRequest.h>
#include <aws/config/model/DeleteStoredQueryRequest.h>
#include <aws/config/model/DeliverConfigSnapshotRequest.h>
#include <aws/config/model/DescribeAggregateComplianceByConfigRulesRequest.h>
#include <aws/config/model/DescribeAggregateComplianceByConformancePacksRequest.h>
#include <aws/config/model/DescribeAggregationAuthorizationsRequest.h>
#include <aws/config/model/DescribeComplianceByConfigRuleRequest.h>
#include <aws/config/model/DescribeComplianceByResourceRequest.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusRequest.h>
#include <aws/config/model/DescribeConfigRulesRequest.h>
#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusRequest.h>
#include <aws/config/model/DescribeConfigurationAggregatorsRequest.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusRequest.h>
#include <aws/config/model/DescribeConfigurationRecordersRequest.h>
#include <aws/config/model/DescribeConformancePackComplianceRequest.h>
#include <aws/config/model/DescribeConformancePackStatusRequest.h>
#include <aws/config/model/DescribeConformancePacksRequest.h>
#include <aws/config/model/DescribeDeliveryChannelStatusRequest.h>
#include <aws/config/model/DescribeDeliveryChannelsRequest.h>
#include <aws/config/model/DescribeOrganizationConfigRuleStatusesRequest.h>
#include <aws/config/model/DescribeOrganizationConfigRulesRequest.h>
#include <aws/config/model/DescribeOrganizationConformancePackStatusesRequest.h>
#include <aws/config/model/DescribeOrganizationConformancePacksRequest.h>
#include <aws/config/model/DescribePendingAggregationRequestsRequest.h>
#include <aws/config/model/DescribeRemediationConfigurationsRequest.h>
#include <aws/config/model/DescribeRemediationExceptionsRequest.h>
#include <aws/config/model/DescribeRemediationExecutionStatusRequest.h>
#include <aws/config/model/DescribeRetentionConfigurationsRequest.h>
#include <aws/config/model/DisassociateResourceTypesRequest.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryRequest.h>
#include <aws/config/model/GetAggregateConformancePackComplianceSummaryRequest.h>
#include <aws/config/model/GetAggregateDiscoveredResourceCountsRequest.h>
#include <aws/config/model/GetAggregateResourceConfigRequest.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetComplianceDetailsByResourceRequest.h>
#include <aws/config/model/GetComplianceSummaryByConfigRuleRequest.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeRequest.h>
#include <aws/config/model/GetConformancePackComplianceDetailsRequest.h>
#include <aws/config/model/GetConformancePackComplianceSummaryRequest.h>
#include <aws/config/model/GetCustomRulePolicyRequest.h>
#include <aws/config/model/GetDiscoveredResourceCountsRequest.h>
#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusRequest.h>
#include <aws/config/model/GetOrganizationConformancePackDetailedStatusRequest.h>
#include <aws/config/model/GetOrganizationCustomRulePolicyRequest.h>
#include <aws/config/model/GetResourceConfigHistoryRequest.h>
#include <aws/config/model/GetResourceEvaluationSummaryRequest.h>
#include <aws/config/model/GetStoredQueryRequest.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesRequest.h>
#include <aws/config/model/ListConfigurationRecordersRequest.h>
#include <aws/config/model/ListConformancePackComplianceScoresRequest.h>
#include <aws/config/model/ListDiscoveredResourcesRequest.h>
#include <aws/config/model/ListResourceEvaluationsRequest.h>
#include <aws/config/model/ListStoredQueriesRequest.h>
#include <aws/config/model/ListTagsForResourceRequest.h>
#include <aws/config/model/PutAggregationAuthorizationRequest.h>
#include <aws/config/model/PutConfigRuleRequest.h>
#include <aws/config/model/PutConfigurationAggregatorRequest.h>
#include <aws/config/model/PutConfigurationRecorderRequest.h>
#include <aws/config/model/PutConformancePackRequest.h>
#include <aws/config/model/PutDeliveryChannelRequest.h>
#include <aws/config/model/PutEvaluationsRequest.h>
#include <aws/config/model/PutExternalEvaluationRequest.h>
#include <aws/config/model/PutOrganizationConfigRuleRequest.h>
#include <aws/config/model/PutOrganizationConformancePackRequest.h>
#include <aws/config/model/PutRemediationConfigurationsRequest.h>
#include <aws/config/model/PutRemediationExceptionsRequest.h>
#include <aws/config/model/PutResourceConfigRequest.h>
#include <aws/config/model/PutRetentionConfigurationRequest.h>
#include <aws/config/model/PutServiceLinkedConfigurationRecorderRequest.h>
#include <aws/config/model/PutStoredQueryRequest.h>
#include <aws/config/model/SelectAggregateResourceConfigRequest.h>
#include <aws/config/model/SelectResourceConfigRequest.h>
#include <aws/config/model/StartConfigRulesEvaluationRequest.h>
#include <aws/config/model/StartConfigurationRecorderRequest.h>
#include <aws/config/model/StartRemediationExecutionRequest.h>
#include <aws/config/model/StartResourceEvaluationRequest.h>
#include <aws/config/model/StopConfigurationRecorderRequest.h>
#include <aws/config/model/TagResourceRequest.h>
#include <aws/config/model/UntagResourceRequest.h>
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
using namespace Aws::ConfigService;
using namespace Aws::ConfigService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ConfigService {
const char SERVICE_NAME[] = "config";
const char ALLOCATION_TAG[] = "ConfigServiceClient";
}  // namespace ConfigService
}  // namespace Aws
const char* ConfigServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* ConfigServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

ConfigServiceClient::ConfigServiceClient(const ConfigService::ConfigServiceClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider,
                                         const ConfigService::ConfigServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider,
                                         const ConfigService::ConfigServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConfigServiceClient::ConfigServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConfigServiceClient::ConfigServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConfigServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConfigServiceClient::~ConfigServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConfigServiceEndpointProviderBase>& ConfigServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void ConfigServiceClient::init(const ConfigService::ConfigServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Config Service");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "config");
}

void ConfigServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ConfigServiceClient::InvokeOperationOutcome ConfigServiceClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateResourceTypesOutcome ConfigServiceClient::AssociateResourceTypes(const AssociateResourceTypesRequest& request) const {
  return AssociateResourceTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetAggregateResourceConfigOutcome ConfigServiceClient::BatchGetAggregateResourceConfig(
    const BatchGetAggregateResourceConfigRequest& request) const {
  return BatchGetAggregateResourceConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetResourceConfigOutcome ConfigServiceClient::BatchGetResourceConfig(const BatchGetResourceConfigRequest& request) const {
  return BatchGetResourceConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAggregationAuthorizationOutcome ConfigServiceClient::DeleteAggregationAuthorization(
    const DeleteAggregationAuthorizationRequest& request) const {
  return DeleteAggregationAuthorizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigRuleOutcome ConfigServiceClient::DeleteConfigRule(const DeleteConfigRuleRequest& request) const {
  return DeleteConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationAggregatorOutcome ConfigServiceClient::DeleteConfigurationAggregator(
    const DeleteConfigurationAggregatorRequest& request) const {
  return DeleteConfigurationAggregatorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationRecorderOutcome ConfigServiceClient::DeleteConfigurationRecorder(
    const DeleteConfigurationRecorderRequest& request) const {
  return DeleteConfigurationRecorderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConformancePackOutcome ConfigServiceClient::DeleteConformancePack(const DeleteConformancePackRequest& request) const {
  return DeleteConformancePackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeliveryChannelOutcome ConfigServiceClient::DeleteDeliveryChannel(const DeleteDeliveryChannelRequest& request) const {
  return DeleteDeliveryChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEvaluationResultsOutcome ConfigServiceClient::DeleteEvaluationResults(const DeleteEvaluationResultsRequest& request) const {
  return DeleteEvaluationResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOrganizationConfigRuleOutcome ConfigServiceClient::DeleteOrganizationConfigRule(
    const DeleteOrganizationConfigRuleRequest& request) const {
  return DeleteOrganizationConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOrganizationConformancePackOutcome ConfigServiceClient::DeleteOrganizationConformancePack(
    const DeleteOrganizationConformancePackRequest& request) const {
  return DeleteOrganizationConformancePackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePendingAggregationRequestOutcome ConfigServiceClient::DeletePendingAggregationRequest(
    const DeletePendingAggregationRequestRequest& request) const {
  return DeletePendingAggregationRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRemediationConfigurationOutcome ConfigServiceClient::DeleteRemediationConfiguration(
    const DeleteRemediationConfigurationRequest& request) const {
  return DeleteRemediationConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRemediationExceptionsOutcome ConfigServiceClient::DeleteRemediationExceptions(
    const DeleteRemediationExceptionsRequest& request) const {
  return DeleteRemediationExceptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourceConfigOutcome ConfigServiceClient::DeleteResourceConfig(const DeleteResourceConfigRequest& request) const {
  return DeleteResourceConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRetentionConfigurationOutcome ConfigServiceClient::DeleteRetentionConfiguration(
    const DeleteRetentionConfigurationRequest& request) const {
  return DeleteRetentionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServiceLinkedConfigurationRecorderOutcome ConfigServiceClient::DeleteServiceLinkedConfigurationRecorder(
    const DeleteServiceLinkedConfigurationRecorderRequest& request) const {
  return DeleteServiceLinkedConfigurationRecorderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStoredQueryOutcome ConfigServiceClient::DeleteStoredQuery(const DeleteStoredQueryRequest& request) const {
  return DeleteStoredQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeliverConfigSnapshotOutcome ConfigServiceClient::DeliverConfigSnapshot(const DeliverConfigSnapshotRequest& request) const {
  return DeliverConfigSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAggregateComplianceByConfigRulesOutcome ConfigServiceClient::DescribeAggregateComplianceByConfigRules(
    const DescribeAggregateComplianceByConfigRulesRequest& request) const {
  return DescribeAggregateComplianceByConfigRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAggregateComplianceByConformancePacksOutcome ConfigServiceClient::DescribeAggregateComplianceByConformancePacks(
    const DescribeAggregateComplianceByConformancePacksRequest& request) const {
  return DescribeAggregateComplianceByConformancePacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAggregationAuthorizationsOutcome ConfigServiceClient::DescribeAggregationAuthorizations(
    const DescribeAggregationAuthorizationsRequest& request) const {
  return DescribeAggregationAuthorizationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeComplianceByConfigRuleOutcome ConfigServiceClient::DescribeComplianceByConfigRule(
    const DescribeComplianceByConfigRuleRequest& request) const {
  return DescribeComplianceByConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeComplianceByResourceOutcome ConfigServiceClient::DescribeComplianceByResource(
    const DescribeComplianceByResourceRequest& request) const {
  return DescribeComplianceByResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigRuleEvaluationStatusOutcome ConfigServiceClient::DescribeConfigRuleEvaluationStatus(
    const DescribeConfigRuleEvaluationStatusRequest& request) const {
  return DescribeConfigRuleEvaluationStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigRulesOutcome ConfigServiceClient::DescribeConfigRules(const DescribeConfigRulesRequest& request) const {
  return DescribeConfigRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationAggregatorSourcesStatusOutcome ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus(
    const DescribeConfigurationAggregatorSourcesStatusRequest& request) const {
  return DescribeConfigurationAggregatorSourcesStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationAggregatorsOutcome ConfigServiceClient::DescribeConfigurationAggregators(
    const DescribeConfigurationAggregatorsRequest& request) const {
  return DescribeConfigurationAggregatorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationRecorderStatusOutcome ConfigServiceClient::DescribeConfigurationRecorderStatus(
    const DescribeConfigurationRecorderStatusRequest& request) const {
  return DescribeConfigurationRecorderStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationRecordersOutcome ConfigServiceClient::DescribeConfigurationRecorders(
    const DescribeConfigurationRecordersRequest& request) const {
  return DescribeConfigurationRecordersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConformancePackComplianceOutcome ConfigServiceClient::DescribeConformancePackCompliance(
    const DescribeConformancePackComplianceRequest& request) const {
  return DescribeConformancePackComplianceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConformancePackStatusOutcome ConfigServiceClient::DescribeConformancePackStatus(
    const DescribeConformancePackStatusRequest& request) const {
  return DescribeConformancePackStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConformancePacksOutcome ConfigServiceClient::DescribeConformancePacks(const DescribeConformancePacksRequest& request) const {
  return DescribeConformancePacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeliveryChannelStatusOutcome ConfigServiceClient::DescribeDeliveryChannelStatus(
    const DescribeDeliveryChannelStatusRequest& request) const {
  return DescribeDeliveryChannelStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeliveryChannelsOutcome ConfigServiceClient::DescribeDeliveryChannels(const DescribeDeliveryChannelsRequest& request) const {
  return DescribeDeliveryChannelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationConfigRuleStatusesOutcome ConfigServiceClient::DescribeOrganizationConfigRuleStatuses(
    const DescribeOrganizationConfigRuleStatusesRequest& request) const {
  return DescribeOrganizationConfigRuleStatusesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationConfigRulesOutcome ConfigServiceClient::DescribeOrganizationConfigRules(
    const DescribeOrganizationConfigRulesRequest& request) const {
  return DescribeOrganizationConfigRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationConformancePackStatusesOutcome ConfigServiceClient::DescribeOrganizationConformancePackStatuses(
    const DescribeOrganizationConformancePackStatusesRequest& request) const {
  return DescribeOrganizationConformancePackStatusesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationConformancePacksOutcome ConfigServiceClient::DescribeOrganizationConformancePacks(
    const DescribeOrganizationConformancePacksRequest& request) const {
  return DescribeOrganizationConformancePacksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePendingAggregationRequestsOutcome ConfigServiceClient::DescribePendingAggregationRequests(
    const DescribePendingAggregationRequestsRequest& request) const {
  return DescribePendingAggregationRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRemediationConfigurationsOutcome ConfigServiceClient::DescribeRemediationConfigurations(
    const DescribeRemediationConfigurationsRequest& request) const {
  return DescribeRemediationConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRemediationExceptionsOutcome ConfigServiceClient::DescribeRemediationExceptions(
    const DescribeRemediationExceptionsRequest& request) const {
  return DescribeRemediationExceptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRemediationExecutionStatusOutcome ConfigServiceClient::DescribeRemediationExecutionStatus(
    const DescribeRemediationExecutionStatusRequest& request) const {
  return DescribeRemediationExecutionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRetentionConfigurationsOutcome ConfigServiceClient::DescribeRetentionConfigurations(
    const DescribeRetentionConfigurationsRequest& request) const {
  return DescribeRetentionConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateResourceTypesOutcome ConfigServiceClient::DisassociateResourceTypes(const DisassociateResourceTypesRequest& request) const {
  return DisassociateResourceTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAggregateComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule(
    const GetAggregateComplianceDetailsByConfigRuleRequest& request) const {
  return GetAggregateComplianceDetailsByConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAggregateConfigRuleComplianceSummaryOutcome ConfigServiceClient::GetAggregateConfigRuleComplianceSummary(
    const GetAggregateConfigRuleComplianceSummaryRequest& request) const {
  return GetAggregateConfigRuleComplianceSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAggregateConformancePackComplianceSummaryOutcome ConfigServiceClient::GetAggregateConformancePackComplianceSummary(
    const GetAggregateConformancePackComplianceSummaryRequest& request) const {
  return GetAggregateConformancePackComplianceSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAggregateDiscoveredResourceCountsOutcome ConfigServiceClient::GetAggregateDiscoveredResourceCounts(
    const GetAggregateDiscoveredResourceCountsRequest& request) const {
  return GetAggregateDiscoveredResourceCountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAggregateResourceConfigOutcome ConfigServiceClient::GetAggregateResourceConfig(const GetAggregateResourceConfigRequest& request) const {
  return GetAggregateResourceConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetComplianceDetailsByConfigRule(
    const GetComplianceDetailsByConfigRuleRequest& request) const {
  return GetComplianceDetailsByConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComplianceDetailsByResourceOutcome ConfigServiceClient::GetComplianceDetailsByResource(
    const GetComplianceDetailsByResourceRequest& request) const {
  return GetComplianceDetailsByResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComplianceSummaryByConfigRuleOutcome ConfigServiceClient::GetComplianceSummaryByConfigRule(
    const GetComplianceSummaryByConfigRuleRequest& request) const {
  return GetComplianceSummaryByConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComplianceSummaryByResourceTypeOutcome ConfigServiceClient::GetComplianceSummaryByResourceType(
    const GetComplianceSummaryByResourceTypeRequest& request) const {
  return GetComplianceSummaryByResourceTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConformancePackComplianceDetailsOutcome ConfigServiceClient::GetConformancePackComplianceDetails(
    const GetConformancePackComplianceDetailsRequest& request) const {
  return GetConformancePackComplianceDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConformancePackComplianceSummaryOutcome ConfigServiceClient::GetConformancePackComplianceSummary(
    const GetConformancePackComplianceSummaryRequest& request) const {
  return GetConformancePackComplianceSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCustomRulePolicyOutcome ConfigServiceClient::GetCustomRulePolicy(const GetCustomRulePolicyRequest& request) const {
  return GetCustomRulePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDiscoveredResourceCountsOutcome ConfigServiceClient::GetDiscoveredResourceCounts(
    const GetDiscoveredResourceCountsRequest& request) const {
  return GetDiscoveredResourceCountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOrganizationConfigRuleDetailedStatusOutcome ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus(
    const GetOrganizationConfigRuleDetailedStatusRequest& request) const {
  return GetOrganizationConfigRuleDetailedStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOrganizationConformancePackDetailedStatusOutcome ConfigServiceClient::GetOrganizationConformancePackDetailedStatus(
    const GetOrganizationConformancePackDetailedStatusRequest& request) const {
  return GetOrganizationConformancePackDetailedStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOrganizationCustomRulePolicyOutcome ConfigServiceClient::GetOrganizationCustomRulePolicy(
    const GetOrganizationCustomRulePolicyRequest& request) const {
  return GetOrganizationCustomRulePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourceConfigHistoryOutcome ConfigServiceClient::GetResourceConfigHistory(const GetResourceConfigHistoryRequest& request) const {
  return GetResourceConfigHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourceEvaluationSummaryOutcome ConfigServiceClient::GetResourceEvaluationSummary(
    const GetResourceEvaluationSummaryRequest& request) const {
  return GetResourceEvaluationSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetStoredQueryOutcome ConfigServiceClient::GetStoredQuery(const GetStoredQueryRequest& request) const {
  return GetStoredQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAggregateDiscoveredResourcesOutcome ConfigServiceClient::ListAggregateDiscoveredResources(
    const ListAggregateDiscoveredResourcesRequest& request) const {
  return ListAggregateDiscoveredResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConfigurationRecordersOutcome ConfigServiceClient::ListConfigurationRecorders(const ListConfigurationRecordersRequest& request) const {
  return ListConfigurationRecordersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConformancePackComplianceScoresOutcome ConfigServiceClient::ListConformancePackComplianceScores(
    const ListConformancePackComplianceScoresRequest& request) const {
  return ListConformancePackComplianceScoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDiscoveredResourcesOutcome ConfigServiceClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const {
  return ListDiscoveredResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceEvaluationsOutcome ConfigServiceClient::ListResourceEvaluations(const ListResourceEvaluationsRequest& request) const {
  return ListResourceEvaluationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStoredQueriesOutcome ConfigServiceClient::ListStoredQueries(const ListStoredQueriesRequest& request) const {
  return ListStoredQueriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ConfigServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAggregationAuthorizationOutcome ConfigServiceClient::PutAggregationAuthorization(
    const PutAggregationAuthorizationRequest& request) const {
  return PutAggregationAuthorizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutConfigRuleOutcome ConfigServiceClient::PutConfigRule(const PutConfigRuleRequest& request) const {
  return PutConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutConfigurationAggregatorOutcome ConfigServiceClient::PutConfigurationAggregator(const PutConfigurationAggregatorRequest& request) const {
  return PutConfigurationAggregatorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutConfigurationRecorderOutcome ConfigServiceClient::PutConfigurationRecorder(const PutConfigurationRecorderRequest& request) const {
  return PutConfigurationRecorderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutConformancePackOutcome ConfigServiceClient::PutConformancePack(const PutConformancePackRequest& request) const {
  return PutConformancePackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDeliveryChannelOutcome ConfigServiceClient::PutDeliveryChannel(const PutDeliveryChannelRequest& request) const {
  return PutDeliveryChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEvaluationsOutcome ConfigServiceClient::PutEvaluations(const PutEvaluationsRequest& request) const {
  return PutEvaluationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutExternalEvaluationOutcome ConfigServiceClient::PutExternalEvaluation(const PutExternalEvaluationRequest& request) const {
  return PutExternalEvaluationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutOrganizationConfigRuleOutcome ConfigServiceClient::PutOrganizationConfigRule(const PutOrganizationConfigRuleRequest& request) const {
  return PutOrganizationConfigRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutOrganizationConformancePackOutcome ConfigServiceClient::PutOrganizationConformancePack(
    const PutOrganizationConformancePackRequest& request) const {
  return PutOrganizationConformancePackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRemediationConfigurationsOutcome ConfigServiceClient::PutRemediationConfigurations(
    const PutRemediationConfigurationsRequest& request) const {
  return PutRemediationConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRemediationExceptionsOutcome ConfigServiceClient::PutRemediationExceptions(const PutRemediationExceptionsRequest& request) const {
  return PutRemediationExceptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourceConfigOutcome ConfigServiceClient::PutResourceConfig(const PutResourceConfigRequest& request) const {
  return PutResourceConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRetentionConfigurationOutcome ConfigServiceClient::PutRetentionConfiguration(const PutRetentionConfigurationRequest& request) const {
  return PutRetentionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutServiceLinkedConfigurationRecorderOutcome ConfigServiceClient::PutServiceLinkedConfigurationRecorder(
    const PutServiceLinkedConfigurationRecorderRequest& request) const {
  return PutServiceLinkedConfigurationRecorderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutStoredQueryOutcome ConfigServiceClient::PutStoredQuery(const PutStoredQueryRequest& request) const {
  return PutStoredQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SelectAggregateResourceConfigOutcome ConfigServiceClient::SelectAggregateResourceConfig(
    const SelectAggregateResourceConfigRequest& request) const {
  return SelectAggregateResourceConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SelectResourceConfigOutcome ConfigServiceClient::SelectResourceConfig(const SelectResourceConfigRequest& request) const {
  return SelectResourceConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartConfigRulesEvaluationOutcome ConfigServiceClient::StartConfigRulesEvaluation(const StartConfigRulesEvaluationRequest& request) const {
  return StartConfigRulesEvaluationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartConfigurationRecorderOutcome ConfigServiceClient::StartConfigurationRecorder(const StartConfigurationRecorderRequest& request) const {
  return StartConfigurationRecorderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRemediationExecutionOutcome ConfigServiceClient::StartRemediationExecution(const StartRemediationExecutionRequest& request) const {
  return StartRemediationExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartResourceEvaluationOutcome ConfigServiceClient::StartResourceEvaluation(const StartResourceEvaluationRequest& request) const {
  return StartResourceEvaluationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopConfigurationRecorderOutcome ConfigServiceClient::StopConfigurationRecorder(const StopConfigurationRecorderRequest& request) const {
  return StopConfigurationRecorderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ConfigServiceClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ConfigServiceClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
