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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateResourceTypesOutcome(result.GetResultWithOwnership())
                            : AssociateResourceTypesOutcome(std::move(result.GetError()));
}

BatchGetAggregateResourceConfigOutcome ConfigServiceClient::BatchGetAggregateResourceConfig(
    const BatchGetAggregateResourceConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetAggregateResourceConfigOutcome(result.GetResultWithOwnership())
                            : BatchGetAggregateResourceConfigOutcome(std::move(result.GetError()));
}

BatchGetResourceConfigOutcome ConfigServiceClient::BatchGetResourceConfig(const BatchGetResourceConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetResourceConfigOutcome(result.GetResultWithOwnership())
                            : BatchGetResourceConfigOutcome(std::move(result.GetError()));
}

DeleteAggregationAuthorizationOutcome ConfigServiceClient::DeleteAggregationAuthorization(
    const DeleteAggregationAuthorizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAggregationAuthorizationOutcome(result.GetResultWithOwnership())
                            : DeleteAggregationAuthorizationOutcome(std::move(result.GetError()));
}

DeleteConfigRuleOutcome ConfigServiceClient::DeleteConfigRule(const DeleteConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConfigRuleOutcome(result.GetResultWithOwnership())
                            : DeleteConfigRuleOutcome(std::move(result.GetError()));
}

DeleteConfigurationAggregatorOutcome ConfigServiceClient::DeleteConfigurationAggregator(
    const DeleteConfigurationAggregatorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConfigurationAggregatorOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationAggregatorOutcome(std::move(result.GetError()));
}

DeleteConfigurationRecorderOutcome ConfigServiceClient::DeleteConfigurationRecorder(
    const DeleteConfigurationRecorderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConfigurationRecorderOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationRecorderOutcome(std::move(result.GetError()));
}

DeleteConformancePackOutcome ConfigServiceClient::DeleteConformancePack(const DeleteConformancePackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConformancePackOutcome(result.GetResultWithOwnership())
                            : DeleteConformancePackOutcome(std::move(result.GetError()));
}

DeleteDeliveryChannelOutcome ConfigServiceClient::DeleteDeliveryChannel(const DeleteDeliveryChannelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDeliveryChannelOutcome(result.GetResultWithOwnership())
                            : DeleteDeliveryChannelOutcome(std::move(result.GetError()));
}

DeleteEvaluationResultsOutcome ConfigServiceClient::DeleteEvaluationResults(const DeleteEvaluationResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEvaluationResultsOutcome(result.GetResultWithOwnership())
                            : DeleteEvaluationResultsOutcome(std::move(result.GetError()));
}

DeleteOrganizationConfigRuleOutcome ConfigServiceClient::DeleteOrganizationConfigRule(
    const DeleteOrganizationConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOrganizationConfigRuleOutcome(result.GetResultWithOwnership())
                            : DeleteOrganizationConfigRuleOutcome(std::move(result.GetError()));
}

DeleteOrganizationConformancePackOutcome ConfigServiceClient::DeleteOrganizationConformancePack(
    const DeleteOrganizationConformancePackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOrganizationConformancePackOutcome(result.GetResultWithOwnership())
                            : DeleteOrganizationConformancePackOutcome(std::move(result.GetError()));
}

DeletePendingAggregationRequestOutcome ConfigServiceClient::DeletePendingAggregationRequest(
    const DeletePendingAggregationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePendingAggregationRequestOutcome(result.GetResultWithOwnership())
                            : DeletePendingAggregationRequestOutcome(std::move(result.GetError()));
}

DeleteRemediationConfigurationOutcome ConfigServiceClient::DeleteRemediationConfiguration(
    const DeleteRemediationConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRemediationConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteRemediationConfigurationOutcome(std::move(result.GetError()));
}

DeleteRemediationExceptionsOutcome ConfigServiceClient::DeleteRemediationExceptions(
    const DeleteRemediationExceptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRemediationExceptionsOutcome(result.GetResultWithOwnership())
                            : DeleteRemediationExceptionsOutcome(std::move(result.GetError()));
}

DeleteResourceConfigOutcome ConfigServiceClient::DeleteResourceConfig(const DeleteResourceConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourceConfigOutcome(result.GetResultWithOwnership())
                            : DeleteResourceConfigOutcome(std::move(result.GetError()));
}

DeleteRetentionConfigurationOutcome ConfigServiceClient::DeleteRetentionConfiguration(
    const DeleteRetentionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRetentionConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteRetentionConfigurationOutcome(std::move(result.GetError()));
}

DeleteServiceLinkedConfigurationRecorderOutcome ConfigServiceClient::DeleteServiceLinkedConfigurationRecorder(
    const DeleteServiceLinkedConfigurationRecorderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceLinkedConfigurationRecorderOutcome(result.GetResultWithOwnership())
                            : DeleteServiceLinkedConfigurationRecorderOutcome(std::move(result.GetError()));
}

DeleteStoredQueryOutcome ConfigServiceClient::DeleteStoredQuery(const DeleteStoredQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStoredQueryOutcome(result.GetResultWithOwnership())
                            : DeleteStoredQueryOutcome(std::move(result.GetError()));
}

DeliverConfigSnapshotOutcome ConfigServiceClient::DeliverConfigSnapshot(const DeliverConfigSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeliverConfigSnapshotOutcome(result.GetResultWithOwnership())
                            : DeliverConfigSnapshotOutcome(std::move(result.GetError()));
}

DescribeAggregateComplianceByConfigRulesOutcome ConfigServiceClient::DescribeAggregateComplianceByConfigRules(
    const DescribeAggregateComplianceByConfigRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAggregateComplianceByConfigRulesOutcome(result.GetResultWithOwnership())
                            : DescribeAggregateComplianceByConfigRulesOutcome(std::move(result.GetError()));
}

DescribeAggregateComplianceByConformancePacksOutcome ConfigServiceClient::DescribeAggregateComplianceByConformancePacks(
    const DescribeAggregateComplianceByConformancePacksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAggregateComplianceByConformancePacksOutcome(result.GetResultWithOwnership())
                            : DescribeAggregateComplianceByConformancePacksOutcome(std::move(result.GetError()));
}

DescribeAggregationAuthorizationsOutcome ConfigServiceClient::DescribeAggregationAuthorizations(
    const DescribeAggregationAuthorizationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAggregationAuthorizationsOutcome(result.GetResultWithOwnership())
                            : DescribeAggregationAuthorizationsOutcome(std::move(result.GetError()));
}

DescribeComplianceByConfigRuleOutcome ConfigServiceClient::DescribeComplianceByConfigRule(
    const DescribeComplianceByConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeComplianceByConfigRuleOutcome(result.GetResultWithOwnership())
                            : DescribeComplianceByConfigRuleOutcome(std::move(result.GetError()));
}

DescribeComplianceByResourceOutcome ConfigServiceClient::DescribeComplianceByResource(
    const DescribeComplianceByResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeComplianceByResourceOutcome(result.GetResultWithOwnership())
                            : DescribeComplianceByResourceOutcome(std::move(result.GetError()));
}

DescribeConfigRuleEvaluationStatusOutcome ConfigServiceClient::DescribeConfigRuleEvaluationStatus(
    const DescribeConfigRuleEvaluationStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigRuleEvaluationStatusOutcome(result.GetResultWithOwnership())
                            : DescribeConfigRuleEvaluationStatusOutcome(std::move(result.GetError()));
}

DescribeConfigRulesOutcome ConfigServiceClient::DescribeConfigRules(const DescribeConfigRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigRulesOutcome(result.GetResultWithOwnership())
                            : DescribeConfigRulesOutcome(std::move(result.GetError()));
}

DescribeConfigurationAggregatorSourcesStatusOutcome ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus(
    const DescribeConfigurationAggregatorSourcesStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigurationAggregatorSourcesStatusOutcome(result.GetResultWithOwnership())
                            : DescribeConfigurationAggregatorSourcesStatusOutcome(std::move(result.GetError()));
}

DescribeConfigurationAggregatorsOutcome ConfigServiceClient::DescribeConfigurationAggregators(
    const DescribeConfigurationAggregatorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigurationAggregatorsOutcome(result.GetResultWithOwnership())
                            : DescribeConfigurationAggregatorsOutcome(std::move(result.GetError()));
}

DescribeConfigurationRecorderStatusOutcome ConfigServiceClient::DescribeConfigurationRecorderStatus(
    const DescribeConfigurationRecorderStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigurationRecorderStatusOutcome(result.GetResultWithOwnership())
                            : DescribeConfigurationRecorderStatusOutcome(std::move(result.GetError()));
}

DescribeConfigurationRecordersOutcome ConfigServiceClient::DescribeConfigurationRecorders(
    const DescribeConfigurationRecordersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigurationRecordersOutcome(result.GetResultWithOwnership())
                            : DescribeConfigurationRecordersOutcome(std::move(result.GetError()));
}

DescribeConformancePackComplianceOutcome ConfigServiceClient::DescribeConformancePackCompliance(
    const DescribeConformancePackComplianceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConformancePackComplianceOutcome(result.GetResultWithOwnership())
                            : DescribeConformancePackComplianceOutcome(std::move(result.GetError()));
}

DescribeConformancePackStatusOutcome ConfigServiceClient::DescribeConformancePackStatus(
    const DescribeConformancePackStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConformancePackStatusOutcome(result.GetResultWithOwnership())
                            : DescribeConformancePackStatusOutcome(std::move(result.GetError()));
}

DescribeConformancePacksOutcome ConfigServiceClient::DescribeConformancePacks(const DescribeConformancePacksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConformancePacksOutcome(result.GetResultWithOwnership())
                            : DescribeConformancePacksOutcome(std::move(result.GetError()));
}

DescribeDeliveryChannelStatusOutcome ConfigServiceClient::DescribeDeliveryChannelStatus(
    const DescribeDeliveryChannelStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeliveryChannelStatusOutcome(result.GetResultWithOwnership())
                            : DescribeDeliveryChannelStatusOutcome(std::move(result.GetError()));
}

DescribeDeliveryChannelsOutcome ConfigServiceClient::DescribeDeliveryChannels(const DescribeDeliveryChannelsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeliveryChannelsOutcome(result.GetResultWithOwnership())
                            : DescribeDeliveryChannelsOutcome(std::move(result.GetError()));
}

DescribeOrganizationConfigRuleStatusesOutcome ConfigServiceClient::DescribeOrganizationConfigRuleStatuses(
    const DescribeOrganizationConfigRuleStatusesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationConfigRuleStatusesOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationConfigRuleStatusesOutcome(std::move(result.GetError()));
}

DescribeOrganizationConfigRulesOutcome ConfigServiceClient::DescribeOrganizationConfigRules(
    const DescribeOrganizationConfigRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationConfigRulesOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationConfigRulesOutcome(std::move(result.GetError()));
}

DescribeOrganizationConformancePackStatusesOutcome ConfigServiceClient::DescribeOrganizationConformancePackStatuses(
    const DescribeOrganizationConformancePackStatusesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationConformancePackStatusesOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationConformancePackStatusesOutcome(std::move(result.GetError()));
}

DescribeOrganizationConformancePacksOutcome ConfigServiceClient::DescribeOrganizationConformancePacks(
    const DescribeOrganizationConformancePacksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationConformancePacksOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationConformancePacksOutcome(std::move(result.GetError()));
}

DescribePendingAggregationRequestsOutcome ConfigServiceClient::DescribePendingAggregationRequests(
    const DescribePendingAggregationRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePendingAggregationRequestsOutcome(result.GetResultWithOwnership())
                            : DescribePendingAggregationRequestsOutcome(std::move(result.GetError()));
}

DescribeRemediationConfigurationsOutcome ConfigServiceClient::DescribeRemediationConfigurations(
    const DescribeRemediationConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRemediationConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeRemediationConfigurationsOutcome(std::move(result.GetError()));
}

DescribeRemediationExceptionsOutcome ConfigServiceClient::DescribeRemediationExceptions(
    const DescribeRemediationExceptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRemediationExceptionsOutcome(result.GetResultWithOwnership())
                            : DescribeRemediationExceptionsOutcome(std::move(result.GetError()));
}

DescribeRemediationExecutionStatusOutcome ConfigServiceClient::DescribeRemediationExecutionStatus(
    const DescribeRemediationExecutionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRemediationExecutionStatusOutcome(result.GetResultWithOwnership())
                            : DescribeRemediationExecutionStatusOutcome(std::move(result.GetError()));
}

DescribeRetentionConfigurationsOutcome ConfigServiceClient::DescribeRetentionConfigurations(
    const DescribeRetentionConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRetentionConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeRetentionConfigurationsOutcome(std::move(result.GetError()));
}

DisassociateResourceTypesOutcome ConfigServiceClient::DisassociateResourceTypes(const DisassociateResourceTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateResourceTypesOutcome(result.GetResultWithOwnership())
                            : DisassociateResourceTypesOutcome(std::move(result.GetError()));
}

GetAggregateComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule(
    const GetAggregateComplianceDetailsByConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAggregateComplianceDetailsByConfigRuleOutcome(result.GetResultWithOwnership())
                            : GetAggregateComplianceDetailsByConfigRuleOutcome(std::move(result.GetError()));
}

GetAggregateConfigRuleComplianceSummaryOutcome ConfigServiceClient::GetAggregateConfigRuleComplianceSummary(
    const GetAggregateConfigRuleComplianceSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAggregateConfigRuleComplianceSummaryOutcome(result.GetResultWithOwnership())
                            : GetAggregateConfigRuleComplianceSummaryOutcome(std::move(result.GetError()));
}

GetAggregateConformancePackComplianceSummaryOutcome ConfigServiceClient::GetAggregateConformancePackComplianceSummary(
    const GetAggregateConformancePackComplianceSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAggregateConformancePackComplianceSummaryOutcome(result.GetResultWithOwnership())
                            : GetAggregateConformancePackComplianceSummaryOutcome(std::move(result.GetError()));
}

GetAggregateDiscoveredResourceCountsOutcome ConfigServiceClient::GetAggregateDiscoveredResourceCounts(
    const GetAggregateDiscoveredResourceCountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAggregateDiscoveredResourceCountsOutcome(result.GetResultWithOwnership())
                            : GetAggregateDiscoveredResourceCountsOutcome(std::move(result.GetError()));
}

GetAggregateResourceConfigOutcome ConfigServiceClient::GetAggregateResourceConfig(const GetAggregateResourceConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAggregateResourceConfigOutcome(result.GetResultWithOwnership())
                            : GetAggregateResourceConfigOutcome(std::move(result.GetError()));
}

GetComplianceDetailsByConfigRuleOutcome ConfigServiceClient::GetComplianceDetailsByConfigRule(
    const GetComplianceDetailsByConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetComplianceDetailsByConfigRuleOutcome(result.GetResultWithOwnership())
                            : GetComplianceDetailsByConfigRuleOutcome(std::move(result.GetError()));
}

GetComplianceDetailsByResourceOutcome ConfigServiceClient::GetComplianceDetailsByResource(
    const GetComplianceDetailsByResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetComplianceDetailsByResourceOutcome(result.GetResultWithOwnership())
                            : GetComplianceDetailsByResourceOutcome(std::move(result.GetError()));
}

GetComplianceSummaryByConfigRuleOutcome ConfigServiceClient::GetComplianceSummaryByConfigRule(
    const GetComplianceSummaryByConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetComplianceSummaryByConfigRuleOutcome(result.GetResultWithOwnership())
                            : GetComplianceSummaryByConfigRuleOutcome(std::move(result.GetError()));
}

GetComplianceSummaryByResourceTypeOutcome ConfigServiceClient::GetComplianceSummaryByResourceType(
    const GetComplianceSummaryByResourceTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetComplianceSummaryByResourceTypeOutcome(result.GetResultWithOwnership())
                            : GetComplianceSummaryByResourceTypeOutcome(std::move(result.GetError()));
}

GetConformancePackComplianceDetailsOutcome ConfigServiceClient::GetConformancePackComplianceDetails(
    const GetConformancePackComplianceDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConformancePackComplianceDetailsOutcome(result.GetResultWithOwnership())
                            : GetConformancePackComplianceDetailsOutcome(std::move(result.GetError()));
}

GetConformancePackComplianceSummaryOutcome ConfigServiceClient::GetConformancePackComplianceSummary(
    const GetConformancePackComplianceSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConformancePackComplianceSummaryOutcome(result.GetResultWithOwnership())
                            : GetConformancePackComplianceSummaryOutcome(std::move(result.GetError()));
}

GetCustomRulePolicyOutcome ConfigServiceClient::GetCustomRulePolicy(const GetCustomRulePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCustomRulePolicyOutcome(result.GetResultWithOwnership())
                            : GetCustomRulePolicyOutcome(std::move(result.GetError()));
}

GetDiscoveredResourceCountsOutcome ConfigServiceClient::GetDiscoveredResourceCounts(
    const GetDiscoveredResourceCountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDiscoveredResourceCountsOutcome(result.GetResultWithOwnership())
                            : GetDiscoveredResourceCountsOutcome(std::move(result.GetError()));
}

GetOrganizationConfigRuleDetailedStatusOutcome ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus(
    const GetOrganizationConfigRuleDetailedStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOrganizationConfigRuleDetailedStatusOutcome(result.GetResultWithOwnership())
                            : GetOrganizationConfigRuleDetailedStatusOutcome(std::move(result.GetError()));
}

GetOrganizationConformancePackDetailedStatusOutcome ConfigServiceClient::GetOrganizationConformancePackDetailedStatus(
    const GetOrganizationConformancePackDetailedStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOrganizationConformancePackDetailedStatusOutcome(result.GetResultWithOwnership())
                            : GetOrganizationConformancePackDetailedStatusOutcome(std::move(result.GetError()));
}

GetOrganizationCustomRulePolicyOutcome ConfigServiceClient::GetOrganizationCustomRulePolicy(
    const GetOrganizationCustomRulePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOrganizationCustomRulePolicyOutcome(result.GetResultWithOwnership())
                            : GetOrganizationCustomRulePolicyOutcome(std::move(result.GetError()));
}

GetResourceConfigHistoryOutcome ConfigServiceClient::GetResourceConfigHistory(const GetResourceConfigHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceConfigHistoryOutcome(result.GetResultWithOwnership())
                            : GetResourceConfigHistoryOutcome(std::move(result.GetError()));
}

GetResourceEvaluationSummaryOutcome ConfigServiceClient::GetResourceEvaluationSummary(
    const GetResourceEvaluationSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceEvaluationSummaryOutcome(result.GetResultWithOwnership())
                            : GetResourceEvaluationSummaryOutcome(std::move(result.GetError()));
}

GetStoredQueryOutcome ConfigServiceClient::GetStoredQuery(const GetStoredQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStoredQueryOutcome(result.GetResultWithOwnership()) : GetStoredQueryOutcome(std::move(result.GetError()));
}

ListAggregateDiscoveredResourcesOutcome ConfigServiceClient::ListAggregateDiscoveredResources(
    const ListAggregateDiscoveredResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAggregateDiscoveredResourcesOutcome(result.GetResultWithOwnership())
                            : ListAggregateDiscoveredResourcesOutcome(std::move(result.GetError()));
}

ListConfigurationRecordersOutcome ConfigServiceClient::ListConfigurationRecorders(const ListConfigurationRecordersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConfigurationRecordersOutcome(result.GetResultWithOwnership())
                            : ListConfigurationRecordersOutcome(std::move(result.GetError()));
}

ListConformancePackComplianceScoresOutcome ConfigServiceClient::ListConformancePackComplianceScores(
    const ListConformancePackComplianceScoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConformancePackComplianceScoresOutcome(result.GetResultWithOwnership())
                            : ListConformancePackComplianceScoresOutcome(std::move(result.GetError()));
}

ListDiscoveredResourcesOutcome ConfigServiceClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDiscoveredResourcesOutcome(result.GetResultWithOwnership())
                            : ListDiscoveredResourcesOutcome(std::move(result.GetError()));
}

ListResourceEvaluationsOutcome ConfigServiceClient::ListResourceEvaluations(const ListResourceEvaluationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceEvaluationsOutcome(result.GetResultWithOwnership())
                            : ListResourceEvaluationsOutcome(std::move(result.GetError()));
}

ListStoredQueriesOutcome ConfigServiceClient::ListStoredQueries(const ListStoredQueriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStoredQueriesOutcome(result.GetResultWithOwnership())
                            : ListStoredQueriesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ConfigServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutAggregationAuthorizationOutcome ConfigServiceClient::PutAggregationAuthorization(
    const PutAggregationAuthorizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAggregationAuthorizationOutcome(result.GetResultWithOwnership())
                            : PutAggregationAuthorizationOutcome(std::move(result.GetError()));
}

PutConfigRuleOutcome ConfigServiceClient::PutConfigRule(const PutConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutConfigRuleOutcome(result.GetResultWithOwnership()) : PutConfigRuleOutcome(std::move(result.GetError()));
}

PutConfigurationAggregatorOutcome ConfigServiceClient::PutConfigurationAggregator(const PutConfigurationAggregatorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutConfigurationAggregatorOutcome(result.GetResultWithOwnership())
                            : PutConfigurationAggregatorOutcome(std::move(result.GetError()));
}

PutConfigurationRecorderOutcome ConfigServiceClient::PutConfigurationRecorder(const PutConfigurationRecorderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutConfigurationRecorderOutcome(result.GetResultWithOwnership())
                            : PutConfigurationRecorderOutcome(std::move(result.GetError()));
}

PutConformancePackOutcome ConfigServiceClient::PutConformancePack(const PutConformancePackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutConformancePackOutcome(result.GetResultWithOwnership())
                            : PutConformancePackOutcome(std::move(result.GetError()));
}

PutDeliveryChannelOutcome ConfigServiceClient::PutDeliveryChannel(const PutDeliveryChannelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDeliveryChannelOutcome(result.GetResultWithOwnership())
                            : PutDeliveryChannelOutcome(std::move(result.GetError()));
}

PutEvaluationsOutcome ConfigServiceClient::PutEvaluations(const PutEvaluationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEvaluationsOutcome(result.GetResultWithOwnership()) : PutEvaluationsOutcome(std::move(result.GetError()));
}

PutExternalEvaluationOutcome ConfigServiceClient::PutExternalEvaluation(const PutExternalEvaluationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutExternalEvaluationOutcome(result.GetResultWithOwnership())
                            : PutExternalEvaluationOutcome(std::move(result.GetError()));
}

PutOrganizationConfigRuleOutcome ConfigServiceClient::PutOrganizationConfigRule(const PutOrganizationConfigRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutOrganizationConfigRuleOutcome(result.GetResultWithOwnership())
                            : PutOrganizationConfigRuleOutcome(std::move(result.GetError()));
}

PutOrganizationConformancePackOutcome ConfigServiceClient::PutOrganizationConformancePack(
    const PutOrganizationConformancePackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutOrganizationConformancePackOutcome(result.GetResultWithOwnership())
                            : PutOrganizationConformancePackOutcome(std::move(result.GetError()));
}

PutRemediationConfigurationsOutcome ConfigServiceClient::PutRemediationConfigurations(
    const PutRemediationConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRemediationConfigurationsOutcome(result.GetResultWithOwnership())
                            : PutRemediationConfigurationsOutcome(std::move(result.GetError()));
}

PutRemediationExceptionsOutcome ConfigServiceClient::PutRemediationExceptions(const PutRemediationExceptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRemediationExceptionsOutcome(result.GetResultWithOwnership())
                            : PutRemediationExceptionsOutcome(std::move(result.GetError()));
}

PutResourceConfigOutcome ConfigServiceClient::PutResourceConfig(const PutResourceConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourceConfigOutcome(result.GetResultWithOwnership())
                            : PutResourceConfigOutcome(std::move(result.GetError()));
}

PutRetentionConfigurationOutcome ConfigServiceClient::PutRetentionConfiguration(const PutRetentionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRetentionConfigurationOutcome(result.GetResultWithOwnership())
                            : PutRetentionConfigurationOutcome(std::move(result.GetError()));
}

PutServiceLinkedConfigurationRecorderOutcome ConfigServiceClient::PutServiceLinkedConfigurationRecorder(
    const PutServiceLinkedConfigurationRecorderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutServiceLinkedConfigurationRecorderOutcome(result.GetResultWithOwnership())
                            : PutServiceLinkedConfigurationRecorderOutcome(std::move(result.GetError()));
}

PutStoredQueryOutcome ConfigServiceClient::PutStoredQuery(const PutStoredQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutStoredQueryOutcome(result.GetResultWithOwnership()) : PutStoredQueryOutcome(std::move(result.GetError()));
}

SelectAggregateResourceConfigOutcome ConfigServiceClient::SelectAggregateResourceConfig(
    const SelectAggregateResourceConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SelectAggregateResourceConfigOutcome(result.GetResultWithOwnership())
                            : SelectAggregateResourceConfigOutcome(std::move(result.GetError()));
}

SelectResourceConfigOutcome ConfigServiceClient::SelectResourceConfig(const SelectResourceConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SelectResourceConfigOutcome(result.GetResultWithOwnership())
                            : SelectResourceConfigOutcome(std::move(result.GetError()));
}

StartConfigRulesEvaluationOutcome ConfigServiceClient::StartConfigRulesEvaluation(const StartConfigRulesEvaluationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartConfigRulesEvaluationOutcome(result.GetResultWithOwnership())
                            : StartConfigRulesEvaluationOutcome(std::move(result.GetError()));
}

StartConfigurationRecorderOutcome ConfigServiceClient::StartConfigurationRecorder(const StartConfigurationRecorderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartConfigurationRecorderOutcome(result.GetResultWithOwnership())
                            : StartConfigurationRecorderOutcome(std::move(result.GetError()));
}

StartRemediationExecutionOutcome ConfigServiceClient::StartRemediationExecution(const StartRemediationExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRemediationExecutionOutcome(result.GetResultWithOwnership())
                            : StartRemediationExecutionOutcome(std::move(result.GetError()));
}

StartResourceEvaluationOutcome ConfigServiceClient::StartResourceEvaluation(const StartResourceEvaluationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartResourceEvaluationOutcome(result.GetResultWithOwnership())
                            : StartResourceEvaluationOutcome(std::move(result.GetError()));
}

StopConfigurationRecorderOutcome ConfigServiceClient::StopConfigurationRecorder(const StopConfigurationRecorderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopConfigurationRecorderOutcome(result.GetResultWithOwnership())
                            : StopConfigurationRecorderOutcome(std::move(result.GetError()));
}

TagResourceOutcome ConfigServiceClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ConfigServiceClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
