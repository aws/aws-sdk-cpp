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
#include <aws/glue/GlueClient.h>
#include <aws/glue/GlueEndpointProvider.h>
#include <aws/glue/GlueErrorMarshaller.h>
#include <aws/glue/model/BatchCreatePartitionRequest.h>
#include <aws/glue/model/BatchDeleteConnectionRequest.h>
#include <aws/glue/model/BatchDeletePartitionRequest.h>
#include <aws/glue/model/BatchDeleteTableRequest.h>
#include <aws/glue/model/BatchDeleteTableVersionRequest.h>
#include <aws/glue/model/BatchGetBlueprintsRequest.h>
#include <aws/glue/model/BatchGetCrawlersRequest.h>
#include <aws/glue/model/BatchGetCustomEntityTypesRequest.h>
#include <aws/glue/model/BatchGetDataQualityResultRequest.h>
#include <aws/glue/model/BatchGetDevEndpointsRequest.h>
#include <aws/glue/model/BatchGetJobsRequest.h>
#include <aws/glue/model/BatchGetPartitionRequest.h>
#include <aws/glue/model/BatchGetTableOptimizerRequest.h>
#include <aws/glue/model/BatchGetTriggersRequest.h>
#include <aws/glue/model/BatchGetWorkflowsRequest.h>
#include <aws/glue/model/BatchPutDataQualityStatisticAnnotationRequest.h>
#include <aws/glue/model/BatchStopJobRunRequest.h>
#include <aws/glue/model/BatchUpdatePartitionRequest.h>
#include <aws/glue/model/CancelDataQualityRuleRecommendationRunRequest.h>
#include <aws/glue/model/CancelDataQualityRulesetEvaluationRunRequest.h>
#include <aws/glue/model/CancelMLTaskRunRequest.h>
#include <aws/glue/model/CancelStatementRequest.h>
#include <aws/glue/model/CheckSchemaVersionValidityRequest.h>
#include <aws/glue/model/CreateBlueprintRequest.h>
#include <aws/glue/model/CreateCatalogRequest.h>
#include <aws/glue/model/CreateClassifierRequest.h>
#include <aws/glue/model/CreateColumnStatisticsTaskSettingsRequest.h>
#include <aws/glue/model/CreateConnectionRequest.h>
#include <aws/glue/model/CreateCrawlerRequest.h>
#include <aws/glue/model/CreateCustomEntityTypeRequest.h>
#include <aws/glue/model/CreateDataQualityRulesetRequest.h>
#include <aws/glue/model/CreateDatabaseRequest.h>
#include <aws/glue/model/CreateDevEndpointRequest.h>
#include <aws/glue/model/CreateGlueIdentityCenterConfigurationRequest.h>
#include <aws/glue/model/CreateIntegrationRequest.h>
#include <aws/glue/model/CreateIntegrationResourcePropertyRequest.h>
#include <aws/glue/model/CreateIntegrationTablePropertiesRequest.h>
#include <aws/glue/model/CreateJobRequest.h>
#include <aws/glue/model/CreateMLTransformRequest.h>
#include <aws/glue/model/CreatePartitionIndexRequest.h>
#include <aws/glue/model/CreatePartitionRequest.h>
#include <aws/glue/model/CreateRegistryRequest.h>
#include <aws/glue/model/CreateSchemaRequest.h>
#include <aws/glue/model/CreateScriptRequest.h>
#include <aws/glue/model/CreateSecurityConfigurationRequest.h>
#include <aws/glue/model/CreateSessionRequest.h>
#include <aws/glue/model/CreateTableOptimizerRequest.h>
#include <aws/glue/model/CreateTableRequest.h>
#include <aws/glue/model/CreateTriggerRequest.h>
#include <aws/glue/model/CreateUsageProfileRequest.h>
#include <aws/glue/model/CreateUserDefinedFunctionRequest.h>
#include <aws/glue/model/CreateWorkflowRequest.h>
#include <aws/glue/model/DeleteBlueprintRequest.h>
#include <aws/glue/model/DeleteCatalogRequest.h>
#include <aws/glue/model/DeleteClassifierRequest.h>
#include <aws/glue/model/DeleteColumnStatisticsForPartitionRequest.h>
#include <aws/glue/model/DeleteColumnStatisticsForTableRequest.h>
#include <aws/glue/model/DeleteColumnStatisticsTaskSettingsRequest.h>
#include <aws/glue/model/DeleteConnectionRequest.h>
#include <aws/glue/model/DeleteConnectionTypeRequest.h>
#include <aws/glue/model/DeleteCrawlerRequest.h>
#include <aws/glue/model/DeleteCustomEntityTypeRequest.h>
#include <aws/glue/model/DeleteDataQualityRulesetRequest.h>
#include <aws/glue/model/DeleteDatabaseRequest.h>
#include <aws/glue/model/DeleteDevEndpointRequest.h>
#include <aws/glue/model/DeleteGlueIdentityCenterConfigurationRequest.h>
#include <aws/glue/model/DeleteIntegrationRequest.h>
#include <aws/glue/model/DeleteIntegrationResourcePropertyRequest.h>
#include <aws/glue/model/DeleteIntegrationTablePropertiesRequest.h>
#include <aws/glue/model/DeleteJobRequest.h>
#include <aws/glue/model/DeleteMLTransformRequest.h>
#include <aws/glue/model/DeletePartitionIndexRequest.h>
#include <aws/glue/model/DeletePartitionRequest.h>
#include <aws/glue/model/DeleteRegistryRequest.h>
#include <aws/glue/model/DeleteResourcePolicyRequest.h>
#include <aws/glue/model/DeleteSchemaRequest.h>
#include <aws/glue/model/DeleteSchemaVersionsRequest.h>
#include <aws/glue/model/DeleteSecurityConfigurationRequest.h>
#include <aws/glue/model/DeleteSessionRequest.h>
#include <aws/glue/model/DeleteTableOptimizerRequest.h>
#include <aws/glue/model/DeleteTableRequest.h>
#include <aws/glue/model/DeleteTableVersionRequest.h>
#include <aws/glue/model/DeleteTriggerRequest.h>
#include <aws/glue/model/DeleteUsageProfileRequest.h>
#include <aws/glue/model/DeleteUserDefinedFunctionRequest.h>
#include <aws/glue/model/DeleteWorkflowRequest.h>
#include <aws/glue/model/DescribeConnectionTypeRequest.h>
#include <aws/glue/model/DescribeEntityRequest.h>
#include <aws/glue/model/DescribeInboundIntegrationsRequest.h>
#include <aws/glue/model/DescribeIntegrationsRequest.h>
#include <aws/glue/model/GetBlueprintRequest.h>
#include <aws/glue/model/GetBlueprintRunRequest.h>
#include <aws/glue/model/GetBlueprintRunsRequest.h>
#include <aws/glue/model/GetCatalogImportStatusRequest.h>
#include <aws/glue/model/GetCatalogRequest.h>
#include <aws/glue/model/GetCatalogsRequest.h>
#include <aws/glue/model/GetClassifierRequest.h>
#include <aws/glue/model/GetClassifiersRequest.h>
#include <aws/glue/model/GetColumnStatisticsForPartitionRequest.h>
#include <aws/glue/model/GetColumnStatisticsForTableRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glue;
using namespace Aws::Glue::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Glue {
const char SERVICE_NAME[] = "glue";
const char ALLOCATION_TAG[] = "GlueClient";
}  // namespace Glue
}  // namespace Aws
const char* GlueClient::GetServiceName() { return SERVICE_NAME; }
const char* GlueClient::GetAllocationTag() { return ALLOCATION_TAG; }

GlueClient::GlueClient(const Glue::GlueClientConfiguration& clientConfiguration, std::shared_ptr<GlueEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueClient::GlueClient(const AWSCredentials& credentials, std::shared_ptr<GlueEndpointProviderBase> endpointProvider,
                       const Glue::GlueClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueClient::GlueClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<GlueEndpointProviderBase> endpointProvider, const Glue::GlueClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GlueClient::GlueClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueClient::GlueClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueClient::GlueClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GlueClient::~GlueClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GlueEndpointProviderBase>& GlueClient::accessEndpointProvider() { return m_endpointProvider; }

void GlueClient::init(const Glue::GlueClientConfiguration& config) {
  AWSClient::SetServiceClientName("Glue");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "glue");
}

void GlueClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GlueClient::InvokeOperationOutcome GlueClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

BatchCreatePartitionOutcome GlueClient::BatchCreatePartition(const BatchCreatePartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreatePartitionOutcome(result.GetResultWithOwnership())
                            : BatchCreatePartitionOutcome(std::move(result.GetError()));
}

BatchDeleteConnectionOutcome GlueClient::BatchDeleteConnection(const BatchDeleteConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteConnectionOutcome(result.GetResultWithOwnership())
                            : BatchDeleteConnectionOutcome(std::move(result.GetError()));
}

BatchDeletePartitionOutcome GlueClient::BatchDeletePartition(const BatchDeletePartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeletePartitionOutcome(result.GetResultWithOwnership())
                            : BatchDeletePartitionOutcome(std::move(result.GetError()));
}

BatchDeleteTableOutcome GlueClient::BatchDeleteTable(const BatchDeleteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteTableOutcome(result.GetResultWithOwnership())
                            : BatchDeleteTableOutcome(std::move(result.GetError()));
}

BatchDeleteTableVersionOutcome GlueClient::BatchDeleteTableVersion(const BatchDeleteTableVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteTableVersionOutcome(result.GetResultWithOwnership())
                            : BatchDeleteTableVersionOutcome(std::move(result.GetError()));
}

BatchGetBlueprintsOutcome GlueClient::BatchGetBlueprints(const BatchGetBlueprintsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetBlueprintsOutcome(result.GetResultWithOwnership())
                            : BatchGetBlueprintsOutcome(std::move(result.GetError()));
}

BatchGetCrawlersOutcome GlueClient::BatchGetCrawlers(const BatchGetCrawlersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCrawlersOutcome(result.GetResultWithOwnership())
                            : BatchGetCrawlersOutcome(std::move(result.GetError()));
}

BatchGetCustomEntityTypesOutcome GlueClient::BatchGetCustomEntityTypes(const BatchGetCustomEntityTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCustomEntityTypesOutcome(result.GetResultWithOwnership())
                            : BatchGetCustomEntityTypesOutcome(std::move(result.GetError()));
}

BatchGetDataQualityResultOutcome GlueClient::BatchGetDataQualityResult(const BatchGetDataQualityResultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetDataQualityResultOutcome(result.GetResultWithOwnership())
                            : BatchGetDataQualityResultOutcome(std::move(result.GetError()));
}

BatchGetDevEndpointsOutcome GlueClient::BatchGetDevEndpoints(const BatchGetDevEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetDevEndpointsOutcome(result.GetResultWithOwnership())
                            : BatchGetDevEndpointsOutcome(std::move(result.GetError()));
}

BatchGetJobsOutcome GlueClient::BatchGetJobs(const BatchGetJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetJobsOutcome(result.GetResultWithOwnership()) : BatchGetJobsOutcome(std::move(result.GetError()));
}

BatchGetPartitionOutcome GlueClient::BatchGetPartition(const BatchGetPartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetPartitionOutcome(result.GetResultWithOwnership())
                            : BatchGetPartitionOutcome(std::move(result.GetError()));
}

BatchGetTableOptimizerOutcome GlueClient::BatchGetTableOptimizer(const BatchGetTableOptimizerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetTableOptimizerOutcome(result.GetResultWithOwnership())
                            : BatchGetTableOptimizerOutcome(std::move(result.GetError()));
}

BatchGetTriggersOutcome GlueClient::BatchGetTriggers(const BatchGetTriggersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetTriggersOutcome(result.GetResultWithOwnership())
                            : BatchGetTriggersOutcome(std::move(result.GetError()));
}

BatchGetWorkflowsOutcome GlueClient::BatchGetWorkflows(const BatchGetWorkflowsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetWorkflowsOutcome(result.GetResultWithOwnership())
                            : BatchGetWorkflowsOutcome(std::move(result.GetError()));
}

BatchPutDataQualityStatisticAnnotationOutcome GlueClient::BatchPutDataQualityStatisticAnnotation(
    const BatchPutDataQualityStatisticAnnotationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchPutDataQualityStatisticAnnotationOutcome(result.GetResultWithOwnership())
                            : BatchPutDataQualityStatisticAnnotationOutcome(std::move(result.GetError()));
}

BatchStopJobRunOutcome GlueClient::BatchStopJobRun(const BatchStopJobRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchStopJobRunOutcome(result.GetResultWithOwnership())
                            : BatchStopJobRunOutcome(std::move(result.GetError()));
}

BatchUpdatePartitionOutcome GlueClient::BatchUpdatePartition(const BatchUpdatePartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdatePartitionOutcome(result.GetResultWithOwnership())
                            : BatchUpdatePartitionOutcome(std::move(result.GetError()));
}

CancelDataQualityRuleRecommendationRunOutcome GlueClient::CancelDataQualityRuleRecommendationRun(
    const CancelDataQualityRuleRecommendationRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelDataQualityRuleRecommendationRunOutcome(result.GetResultWithOwnership())
                            : CancelDataQualityRuleRecommendationRunOutcome(std::move(result.GetError()));
}

CancelDataQualityRulesetEvaluationRunOutcome GlueClient::CancelDataQualityRulesetEvaluationRun(
    const CancelDataQualityRulesetEvaluationRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelDataQualityRulesetEvaluationRunOutcome(result.GetResultWithOwnership())
                            : CancelDataQualityRulesetEvaluationRunOutcome(std::move(result.GetError()));
}

CancelMLTaskRunOutcome GlueClient::CancelMLTaskRun(const CancelMLTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelMLTaskRunOutcome(result.GetResultWithOwnership())
                            : CancelMLTaskRunOutcome(std::move(result.GetError()));
}

CancelStatementOutcome GlueClient::CancelStatement(const CancelStatementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelStatementOutcome(result.GetResultWithOwnership())
                            : CancelStatementOutcome(std::move(result.GetError()));
}

CheckSchemaVersionValidityOutcome GlueClient::CheckSchemaVersionValidity(const CheckSchemaVersionValidityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CheckSchemaVersionValidityOutcome(result.GetResultWithOwnership())
                            : CheckSchemaVersionValidityOutcome(std::move(result.GetError()));
}

CreateBlueprintOutcome GlueClient::CreateBlueprint(const CreateBlueprintRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBlueprintOutcome(result.GetResultWithOwnership())
                            : CreateBlueprintOutcome(std::move(result.GetError()));
}

CreateCatalogOutcome GlueClient::CreateCatalog(const CreateCatalogRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCatalogOutcome(result.GetResultWithOwnership()) : CreateCatalogOutcome(std::move(result.GetError()));
}

CreateClassifierOutcome GlueClient::CreateClassifier(const CreateClassifierRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClassifierOutcome(result.GetResultWithOwnership())
                            : CreateClassifierOutcome(std::move(result.GetError()));
}

CreateColumnStatisticsTaskSettingsOutcome GlueClient::CreateColumnStatisticsTaskSettings(
    const CreateColumnStatisticsTaskSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateColumnStatisticsTaskSettingsOutcome(result.GetResultWithOwnership())
                            : CreateColumnStatisticsTaskSettingsOutcome(std::move(result.GetError()));
}

CreateConnectionOutcome GlueClient::CreateConnection(const CreateConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionOutcome(result.GetResultWithOwnership())
                            : CreateConnectionOutcome(std::move(result.GetError()));
}

CreateCrawlerOutcome GlueClient::CreateCrawler(const CreateCrawlerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCrawlerOutcome(result.GetResultWithOwnership()) : CreateCrawlerOutcome(std::move(result.GetError()));
}

CreateCustomEntityTypeOutcome GlueClient::CreateCustomEntityType(const CreateCustomEntityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomEntityTypeOutcome(result.GetResultWithOwnership())
                            : CreateCustomEntityTypeOutcome(std::move(result.GetError()));
}

CreateDataQualityRulesetOutcome GlueClient::CreateDataQualityRuleset(const CreateDataQualityRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataQualityRulesetOutcome(result.GetResultWithOwnership())
                            : CreateDataQualityRulesetOutcome(std::move(result.GetError()));
}

CreateDatabaseOutcome GlueClient::CreateDatabase(const CreateDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDatabaseOutcome(result.GetResultWithOwnership()) : CreateDatabaseOutcome(std::move(result.GetError()));
}

CreateDevEndpointOutcome GlueClient::CreateDevEndpoint(const CreateDevEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDevEndpointOutcome(result.GetResultWithOwnership())
                            : CreateDevEndpointOutcome(std::move(result.GetError()));
}

CreateGlueIdentityCenterConfigurationOutcome GlueClient::CreateGlueIdentityCenterConfiguration(
    const CreateGlueIdentityCenterConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlueIdentityCenterConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateGlueIdentityCenterConfigurationOutcome(std::move(result.GetError()));
}

CreateIntegrationOutcome GlueClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationOutcome(std::move(result.GetError()));
}

CreateIntegrationResourcePropertyOutcome GlueClient::CreateIntegrationResourceProperty(
    const CreateIntegrationResourcePropertyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationResourcePropertyOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationResourcePropertyOutcome(std::move(result.GetError()));
}

CreateIntegrationTablePropertiesOutcome GlueClient::CreateIntegrationTableProperties(
    const CreateIntegrationTablePropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationTablePropertiesOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationTablePropertiesOutcome(std::move(result.GetError()));
}

CreateJobOutcome GlueClient::CreateJob(const CreateJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateJobOutcome(result.GetResultWithOwnership()) : CreateJobOutcome(std::move(result.GetError()));
}

CreateMLTransformOutcome GlueClient::CreateMLTransform(const CreateMLTransformRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMLTransformOutcome(result.GetResultWithOwnership())
                            : CreateMLTransformOutcome(std::move(result.GetError()));
}

CreatePartitionOutcome GlueClient::CreatePartition(const CreatePartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePartitionOutcome(result.GetResultWithOwnership())
                            : CreatePartitionOutcome(std::move(result.GetError()));
}

CreatePartitionIndexOutcome GlueClient::CreatePartitionIndex(const CreatePartitionIndexRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePartitionIndexOutcome(result.GetResultWithOwnership())
                            : CreatePartitionIndexOutcome(std::move(result.GetError()));
}

CreateRegistryOutcome GlueClient::CreateRegistry(const CreateRegistryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistryOutcome(result.GetResultWithOwnership()) : CreateRegistryOutcome(std::move(result.GetError()));
}

CreateSchemaOutcome GlueClient::CreateSchema(const CreateSchemaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSchemaOutcome(result.GetResultWithOwnership()) : CreateSchemaOutcome(std::move(result.GetError()));
}

CreateScriptOutcome GlueClient::CreateScript(const CreateScriptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScriptOutcome(result.GetResultWithOwnership()) : CreateScriptOutcome(std::move(result.GetError()));
}

CreateSecurityConfigurationOutcome GlueClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecurityConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateSecurityConfigurationOutcome(std::move(result.GetError()));
}

CreateSessionOutcome GlueClient::CreateSession(const CreateSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSessionOutcome(result.GetResultWithOwnership()) : CreateSessionOutcome(std::move(result.GetError()));
}

CreateTableOutcome GlueClient::CreateTable(const CreateTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTableOutcome(result.GetResultWithOwnership()) : CreateTableOutcome(std::move(result.GetError()));
}

CreateTableOptimizerOutcome GlueClient::CreateTableOptimizer(const CreateTableOptimizerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTableOptimizerOutcome(result.GetResultWithOwnership())
                            : CreateTableOptimizerOutcome(std::move(result.GetError()));
}

CreateTriggerOutcome GlueClient::CreateTrigger(const CreateTriggerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTriggerOutcome(result.GetResultWithOwnership()) : CreateTriggerOutcome(std::move(result.GetError()));
}

CreateUsageProfileOutcome GlueClient::CreateUsageProfile(const CreateUsageProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUsageProfileOutcome(result.GetResultWithOwnership())
                            : CreateUsageProfileOutcome(std::move(result.GetError()));
}

CreateUserDefinedFunctionOutcome GlueClient::CreateUserDefinedFunction(const CreateUserDefinedFunctionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserDefinedFunctionOutcome(result.GetResultWithOwnership())
                            : CreateUserDefinedFunctionOutcome(std::move(result.GetError()));
}

CreateWorkflowOutcome GlueClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkflowOutcome(result.GetResultWithOwnership()) : CreateWorkflowOutcome(std::move(result.GetError()));
}

DeleteBlueprintOutcome GlueClient::DeleteBlueprint(const DeleteBlueprintRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBlueprintOutcome(result.GetResultWithOwnership())
                            : DeleteBlueprintOutcome(std::move(result.GetError()));
}

DeleteCatalogOutcome GlueClient::DeleteCatalog(const DeleteCatalogRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCatalogOutcome(result.GetResultWithOwnership()) : DeleteCatalogOutcome(std::move(result.GetError()));
}

DeleteClassifierOutcome GlueClient::DeleteClassifier(const DeleteClassifierRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClassifierOutcome(result.GetResultWithOwnership())
                            : DeleteClassifierOutcome(std::move(result.GetError()));
}

DeleteColumnStatisticsForPartitionOutcome GlueClient::DeleteColumnStatisticsForPartition(
    const DeleteColumnStatisticsForPartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteColumnStatisticsForPartitionOutcome(result.GetResultWithOwnership())
                            : DeleteColumnStatisticsForPartitionOutcome(std::move(result.GetError()));
}

DeleteColumnStatisticsForTableOutcome GlueClient::DeleteColumnStatisticsForTable(
    const DeleteColumnStatisticsForTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteColumnStatisticsForTableOutcome(result.GetResultWithOwnership())
                            : DeleteColumnStatisticsForTableOutcome(std::move(result.GetError()));
}

DeleteColumnStatisticsTaskSettingsOutcome GlueClient::DeleteColumnStatisticsTaskSettings(
    const DeleteColumnStatisticsTaskSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteColumnStatisticsTaskSettingsOutcome(result.GetResultWithOwnership())
                            : DeleteColumnStatisticsTaskSettingsOutcome(std::move(result.GetError()));
}

DeleteConnectionOutcome GlueClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionOutcome(std::move(result.GetError()));
}

DeleteConnectionTypeOutcome GlueClient::DeleteConnectionType(const DeleteConnectionTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectionTypeOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionTypeOutcome(std::move(result.GetError()));
}

DeleteCrawlerOutcome GlueClient::DeleteCrawler(const DeleteCrawlerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCrawlerOutcome(result.GetResultWithOwnership()) : DeleteCrawlerOutcome(std::move(result.GetError()));
}

DeleteCustomEntityTypeOutcome GlueClient::DeleteCustomEntityType(const DeleteCustomEntityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCustomEntityTypeOutcome(result.GetResultWithOwnership())
                            : DeleteCustomEntityTypeOutcome(std::move(result.GetError()));
}

DeleteDataQualityRulesetOutcome GlueClient::DeleteDataQualityRuleset(const DeleteDataQualityRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDataQualityRulesetOutcome(result.GetResultWithOwnership())
                            : DeleteDataQualityRulesetOutcome(std::move(result.GetError()));
}

DeleteDatabaseOutcome GlueClient::DeleteDatabase(const DeleteDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDatabaseOutcome(result.GetResultWithOwnership()) : DeleteDatabaseOutcome(std::move(result.GetError()));
}

DeleteDevEndpointOutcome GlueClient::DeleteDevEndpoint(const DeleteDevEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDevEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteDevEndpointOutcome(std::move(result.GetError()));
}

DeleteGlueIdentityCenterConfigurationOutcome GlueClient::DeleteGlueIdentityCenterConfiguration(
    const DeleteGlueIdentityCenterConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGlueIdentityCenterConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteGlueIdentityCenterConfigurationOutcome(std::move(result.GetError()));
}

DeleteIntegrationOutcome GlueClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationOutcome(std::move(result.GetError()));
}

DeleteIntegrationResourcePropertyOutcome GlueClient::DeleteIntegrationResourceProperty(
    const DeleteIntegrationResourcePropertyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationResourcePropertyOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationResourcePropertyOutcome(std::move(result.GetError()));
}

DeleteIntegrationTablePropertiesOutcome GlueClient::DeleteIntegrationTableProperties(
    const DeleteIntegrationTablePropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationTablePropertiesOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationTablePropertiesOutcome(std::move(result.GetError()));
}

DeleteJobOutcome GlueClient::DeleteJob(const DeleteJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteJobOutcome(result.GetResultWithOwnership()) : DeleteJobOutcome(std::move(result.GetError()));
}

DeleteMLTransformOutcome GlueClient::DeleteMLTransform(const DeleteMLTransformRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMLTransformOutcome(result.GetResultWithOwnership())
                            : DeleteMLTransformOutcome(std::move(result.GetError()));
}

DeletePartitionOutcome GlueClient::DeletePartition(const DeletePartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePartitionOutcome(result.GetResultWithOwnership())
                            : DeletePartitionOutcome(std::move(result.GetError()));
}

DeletePartitionIndexOutcome GlueClient::DeletePartitionIndex(const DeletePartitionIndexRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePartitionIndexOutcome(result.GetResultWithOwnership())
                            : DeletePartitionIndexOutcome(std::move(result.GetError()));
}

DeleteRegistryOutcome GlueClient::DeleteRegistry(const DeleteRegistryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRegistryOutcome(result.GetResultWithOwnership()) : DeleteRegistryOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome GlueClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteSchemaOutcome GlueClient::DeleteSchema(const DeleteSchemaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSchemaOutcome(result.GetResultWithOwnership()) : DeleteSchemaOutcome(std::move(result.GetError()));
}

DeleteSchemaVersionsOutcome GlueClient::DeleteSchemaVersions(const DeleteSchemaVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSchemaVersionsOutcome(result.GetResultWithOwnership())
                            : DeleteSchemaVersionsOutcome(std::move(result.GetError()));
}

DeleteSecurityConfigurationOutcome GlueClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSecurityConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteSecurityConfigurationOutcome(std::move(result.GetError()));
}

DeleteSessionOutcome GlueClient::DeleteSession(const DeleteSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSessionOutcome(result.GetResultWithOwnership()) : DeleteSessionOutcome(std::move(result.GetError()));
}

DeleteTableOutcome GlueClient::DeleteTable(const DeleteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTableOutcome(result.GetResultWithOwnership()) : DeleteTableOutcome(std::move(result.GetError()));
}

DeleteTableOptimizerOutcome GlueClient::DeleteTableOptimizer(const DeleteTableOptimizerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTableOptimizerOutcome(result.GetResultWithOwnership())
                            : DeleteTableOptimizerOutcome(std::move(result.GetError()));
}

DeleteTableVersionOutcome GlueClient::DeleteTableVersion(const DeleteTableVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTableVersionOutcome(result.GetResultWithOwnership())
                            : DeleteTableVersionOutcome(std::move(result.GetError()));
}

DeleteTriggerOutcome GlueClient::DeleteTrigger(const DeleteTriggerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTriggerOutcome(result.GetResultWithOwnership()) : DeleteTriggerOutcome(std::move(result.GetError()));
}

DeleteUsageProfileOutcome GlueClient::DeleteUsageProfile(const DeleteUsageProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUsageProfileOutcome(result.GetResultWithOwnership())
                            : DeleteUsageProfileOutcome(std::move(result.GetError()));
}

DeleteUserDefinedFunctionOutcome GlueClient::DeleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserDefinedFunctionOutcome(result.GetResultWithOwnership())
                            : DeleteUserDefinedFunctionOutcome(std::move(result.GetError()));
}

DeleteWorkflowOutcome GlueClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkflowOutcome(result.GetResultWithOwnership()) : DeleteWorkflowOutcome(std::move(result.GetError()));
}

DescribeConnectionTypeOutcome GlueClient::DescribeConnectionType(const DescribeConnectionTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConnectionTypeOutcome(result.GetResultWithOwnership())
                            : DescribeConnectionTypeOutcome(std::move(result.GetError()));
}

DescribeEntityOutcome GlueClient::DescribeEntity(const DescribeEntityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEntityOutcome(result.GetResultWithOwnership()) : DescribeEntityOutcome(std::move(result.GetError()));
}

DescribeInboundIntegrationsOutcome GlueClient::DescribeInboundIntegrations(const DescribeInboundIntegrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInboundIntegrationsOutcome(result.GetResultWithOwnership())
                            : DescribeInboundIntegrationsOutcome(std::move(result.GetError()));
}

DescribeIntegrationsOutcome GlueClient::DescribeIntegrations(const DescribeIntegrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIntegrationsOutcome(result.GetResultWithOwnership())
                            : DescribeIntegrationsOutcome(std::move(result.GetError()));
}

GetBlueprintOutcome GlueClient::GetBlueprint(const GetBlueprintRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBlueprintOutcome(result.GetResultWithOwnership()) : GetBlueprintOutcome(std::move(result.GetError()));
}

GetBlueprintRunOutcome GlueClient::GetBlueprintRun(const GetBlueprintRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBlueprintRunOutcome(result.GetResultWithOwnership())
                            : GetBlueprintRunOutcome(std::move(result.GetError()));
}

GetBlueprintRunsOutcome GlueClient::GetBlueprintRuns(const GetBlueprintRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBlueprintRunsOutcome(result.GetResultWithOwnership())
                            : GetBlueprintRunsOutcome(std::move(result.GetError()));
}

GetCatalogOutcome GlueClient::GetCatalog(const GetCatalogRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCatalogOutcome(result.GetResultWithOwnership()) : GetCatalogOutcome(std::move(result.GetError()));
}

GetCatalogImportStatusOutcome GlueClient::GetCatalogImportStatus(const GetCatalogImportStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCatalogImportStatusOutcome(result.GetResultWithOwnership())
                            : GetCatalogImportStatusOutcome(std::move(result.GetError()));
}

GetCatalogsOutcome GlueClient::GetCatalogs(const GetCatalogsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCatalogsOutcome(result.GetResultWithOwnership()) : GetCatalogsOutcome(std::move(result.GetError()));
}

GetClassifierOutcome GlueClient::GetClassifier(const GetClassifierRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetClassifierOutcome(result.GetResultWithOwnership()) : GetClassifierOutcome(std::move(result.GetError()));
}

GetClassifiersOutcome GlueClient::GetClassifiers(const GetClassifiersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetClassifiersOutcome(result.GetResultWithOwnership()) : GetClassifiersOutcome(std::move(result.GetError()));
}

GetColumnStatisticsForPartitionOutcome GlueClient::GetColumnStatisticsForPartition(
    const GetColumnStatisticsForPartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetColumnStatisticsForPartitionOutcome(result.GetResultWithOwnership())
                            : GetColumnStatisticsForPartitionOutcome(std::move(result.GetError()));
}

GetColumnStatisticsForTableOutcome GlueClient::GetColumnStatisticsForTable(const GetColumnStatisticsForTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetColumnStatisticsForTableOutcome(result.GetResultWithOwnership())
                            : GetColumnStatisticsForTableOutcome(std::move(result.GetError()));
}
