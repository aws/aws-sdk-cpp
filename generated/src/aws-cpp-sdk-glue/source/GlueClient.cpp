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
  return BatchCreatePartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteConnectionOutcome GlueClient::BatchDeleteConnection(const BatchDeleteConnectionRequest& request) const {
  return BatchDeleteConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeletePartitionOutcome GlueClient::BatchDeletePartition(const BatchDeletePartitionRequest& request) const {
  return BatchDeletePartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteTableOutcome GlueClient::BatchDeleteTable(const BatchDeleteTableRequest& request) const {
  return BatchDeleteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteTableVersionOutcome GlueClient::BatchDeleteTableVersion(const BatchDeleteTableVersionRequest& request) const {
  return BatchDeleteTableVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetBlueprintsOutcome GlueClient::BatchGetBlueprints(const BatchGetBlueprintsRequest& request) const {
  return BatchGetBlueprintsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCrawlersOutcome GlueClient::BatchGetCrawlers(const BatchGetCrawlersRequest& request) const {
  return BatchGetCrawlersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCustomEntityTypesOutcome GlueClient::BatchGetCustomEntityTypes(const BatchGetCustomEntityTypesRequest& request) const {
  return BatchGetCustomEntityTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetDataQualityResultOutcome GlueClient::BatchGetDataQualityResult(const BatchGetDataQualityResultRequest& request) const {
  return BatchGetDataQualityResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetDevEndpointsOutcome GlueClient::BatchGetDevEndpoints(const BatchGetDevEndpointsRequest& request) const {
  return BatchGetDevEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetJobsOutcome GlueClient::BatchGetJobs(const BatchGetJobsRequest& request) const {
  return BatchGetJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetPartitionOutcome GlueClient::BatchGetPartition(const BatchGetPartitionRequest& request) const {
  return BatchGetPartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetTableOptimizerOutcome GlueClient::BatchGetTableOptimizer(const BatchGetTableOptimizerRequest& request) const {
  return BatchGetTableOptimizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetTriggersOutcome GlueClient::BatchGetTriggers(const BatchGetTriggersRequest& request) const {
  return BatchGetTriggersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetWorkflowsOutcome GlueClient::BatchGetWorkflows(const BatchGetWorkflowsRequest& request) const {
  return BatchGetWorkflowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchPutDataQualityStatisticAnnotationOutcome GlueClient::BatchPutDataQualityStatisticAnnotation(
    const BatchPutDataQualityStatisticAnnotationRequest& request) const {
  return BatchPutDataQualityStatisticAnnotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchStopJobRunOutcome GlueClient::BatchStopJobRun(const BatchStopJobRunRequest& request) const {
  return BatchStopJobRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdatePartitionOutcome GlueClient::BatchUpdatePartition(const BatchUpdatePartitionRequest& request) const {
  return BatchUpdatePartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelDataQualityRuleRecommendationRunOutcome GlueClient::CancelDataQualityRuleRecommendationRun(
    const CancelDataQualityRuleRecommendationRunRequest& request) const {
  return CancelDataQualityRuleRecommendationRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelDataQualityRulesetEvaluationRunOutcome GlueClient::CancelDataQualityRulesetEvaluationRun(
    const CancelDataQualityRulesetEvaluationRunRequest& request) const {
  return CancelDataQualityRulesetEvaluationRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelMLTaskRunOutcome GlueClient::CancelMLTaskRun(const CancelMLTaskRunRequest& request) const {
  return CancelMLTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelStatementOutcome GlueClient::CancelStatement(const CancelStatementRequest& request) const {
  return CancelStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckSchemaVersionValidityOutcome GlueClient::CheckSchemaVersionValidity(const CheckSchemaVersionValidityRequest& request) const {
  return CheckSchemaVersionValidityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBlueprintOutcome GlueClient::CreateBlueprint(const CreateBlueprintRequest& request) const {
  return CreateBlueprintOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCatalogOutcome GlueClient::CreateCatalog(const CreateCatalogRequest& request) const {
  return CreateCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClassifierOutcome GlueClient::CreateClassifier(const CreateClassifierRequest& request) const {
  return CreateClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateColumnStatisticsTaskSettingsOutcome GlueClient::CreateColumnStatisticsTaskSettings(
    const CreateColumnStatisticsTaskSettingsRequest& request) const {
  return CreateColumnStatisticsTaskSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionOutcome GlueClient::CreateConnection(const CreateConnectionRequest& request) const {
  return CreateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCrawlerOutcome GlueClient::CreateCrawler(const CreateCrawlerRequest& request) const {
  return CreateCrawlerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomEntityTypeOutcome GlueClient::CreateCustomEntityType(const CreateCustomEntityTypeRequest& request) const {
  return CreateCustomEntityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataQualityRulesetOutcome GlueClient::CreateDataQualityRuleset(const CreateDataQualityRulesetRequest& request) const {
  return CreateDataQualityRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatabaseOutcome GlueClient::CreateDatabase(const CreateDatabaseRequest& request) const {
  return CreateDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDevEndpointOutcome GlueClient::CreateDevEndpoint(const CreateDevEndpointRequest& request) const {
  return CreateDevEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGlueIdentityCenterConfigurationOutcome GlueClient::CreateGlueIdentityCenterConfiguration(
    const CreateGlueIdentityCenterConfigurationRequest& request) const {
  return CreateGlueIdentityCenterConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntegrationOutcome GlueClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  return CreateIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntegrationResourcePropertyOutcome GlueClient::CreateIntegrationResourceProperty(
    const CreateIntegrationResourcePropertyRequest& request) const {
  return CreateIntegrationResourcePropertyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntegrationTablePropertiesOutcome GlueClient::CreateIntegrationTableProperties(
    const CreateIntegrationTablePropertiesRequest& request) const {
  return CreateIntegrationTablePropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateJobOutcome GlueClient::CreateJob(const CreateJobRequest& request) const {
  return CreateJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMLTransformOutcome GlueClient::CreateMLTransform(const CreateMLTransformRequest& request) const {
  return CreateMLTransformOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartitionOutcome GlueClient::CreatePartition(const CreatePartitionRequest& request) const {
  return CreatePartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartitionIndexOutcome GlueClient::CreatePartitionIndex(const CreatePartitionIndexRequest& request) const {
  return CreatePartitionIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegistryOutcome GlueClient::CreateRegistry(const CreateRegistryRequest& request) const {
  return CreateRegistryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSchemaOutcome GlueClient::CreateSchema(const CreateSchemaRequest& request) const {
  return CreateSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateScriptOutcome GlueClient::CreateScript(const CreateScriptRequest& request) const {
  return CreateScriptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecurityConfigurationOutcome GlueClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const {
  return CreateSecurityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSessionOutcome GlueClient::CreateSession(const CreateSessionRequest& request) const {
  return CreateSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTableOutcome GlueClient::CreateTable(const CreateTableRequest& request) const {
  return CreateTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTableOptimizerOutcome GlueClient::CreateTableOptimizer(const CreateTableOptimizerRequest& request) const {
  return CreateTableOptimizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTriggerOutcome GlueClient::CreateTrigger(const CreateTriggerRequest& request) const {
  return CreateTriggerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUsageProfileOutcome GlueClient::CreateUsageProfile(const CreateUsageProfileRequest& request) const {
  return CreateUsageProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserDefinedFunctionOutcome GlueClient::CreateUserDefinedFunction(const CreateUserDefinedFunctionRequest& request) const {
  return CreateUserDefinedFunctionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkflowOutcome GlueClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  return CreateWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBlueprintOutcome GlueClient::DeleteBlueprint(const DeleteBlueprintRequest& request) const {
  return DeleteBlueprintOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCatalogOutcome GlueClient::DeleteCatalog(const DeleteCatalogRequest& request) const {
  return DeleteCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClassifierOutcome GlueClient::DeleteClassifier(const DeleteClassifierRequest& request) const {
  return DeleteClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteColumnStatisticsForPartitionOutcome GlueClient::DeleteColumnStatisticsForPartition(
    const DeleteColumnStatisticsForPartitionRequest& request) const {
  return DeleteColumnStatisticsForPartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteColumnStatisticsForTableOutcome GlueClient::DeleteColumnStatisticsForTable(
    const DeleteColumnStatisticsForTableRequest& request) const {
  return DeleteColumnStatisticsForTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteColumnStatisticsTaskSettingsOutcome GlueClient::DeleteColumnStatisticsTaskSettings(
    const DeleteColumnStatisticsTaskSettingsRequest& request) const {
  return DeleteColumnStatisticsTaskSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionOutcome GlueClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  return DeleteConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionTypeOutcome GlueClient::DeleteConnectionType(const DeleteConnectionTypeRequest& request) const {
  return DeleteConnectionTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCrawlerOutcome GlueClient::DeleteCrawler(const DeleteCrawlerRequest& request) const {
  return DeleteCrawlerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomEntityTypeOutcome GlueClient::DeleteCustomEntityType(const DeleteCustomEntityTypeRequest& request) const {
  return DeleteCustomEntityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataQualityRulesetOutcome GlueClient::DeleteDataQualityRuleset(const DeleteDataQualityRulesetRequest& request) const {
  return DeleteDataQualityRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatabaseOutcome GlueClient::DeleteDatabase(const DeleteDatabaseRequest& request) const {
  return DeleteDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDevEndpointOutcome GlueClient::DeleteDevEndpoint(const DeleteDevEndpointRequest& request) const {
  return DeleteDevEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGlueIdentityCenterConfigurationOutcome GlueClient::DeleteGlueIdentityCenterConfiguration(
    const DeleteGlueIdentityCenterConfigurationRequest& request) const {
  return DeleteGlueIdentityCenterConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIntegrationOutcome GlueClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  return DeleteIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIntegrationResourcePropertyOutcome GlueClient::DeleteIntegrationResourceProperty(
    const DeleteIntegrationResourcePropertyRequest& request) const {
  return DeleteIntegrationResourcePropertyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIntegrationTablePropertiesOutcome GlueClient::DeleteIntegrationTableProperties(
    const DeleteIntegrationTablePropertiesRequest& request) const {
  return DeleteIntegrationTablePropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteJobOutcome GlueClient::DeleteJob(const DeleteJobRequest& request) const {
  return DeleteJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMLTransformOutcome GlueClient::DeleteMLTransform(const DeleteMLTransformRequest& request) const {
  return DeleteMLTransformOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePartitionOutcome GlueClient::DeletePartition(const DeletePartitionRequest& request) const {
  return DeletePartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePartitionIndexOutcome GlueClient::DeletePartitionIndex(const DeletePartitionIndexRequest& request) const {
  return DeletePartitionIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegistryOutcome GlueClient::DeleteRegistry(const DeleteRegistryRequest& request) const {
  return DeleteRegistryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome GlueClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSchemaOutcome GlueClient::DeleteSchema(const DeleteSchemaRequest& request) const {
  return DeleteSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSchemaVersionsOutcome GlueClient::DeleteSchemaVersions(const DeleteSchemaVersionsRequest& request) const {
  return DeleteSchemaVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSecurityConfigurationOutcome GlueClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const {
  return DeleteSecurityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSessionOutcome GlueClient::DeleteSession(const DeleteSessionRequest& request) const {
  return DeleteSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTableOutcome GlueClient::DeleteTable(const DeleteTableRequest& request) const {
  return DeleteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTableOptimizerOutcome GlueClient::DeleteTableOptimizer(const DeleteTableOptimizerRequest& request) const {
  return DeleteTableOptimizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTableVersionOutcome GlueClient::DeleteTableVersion(const DeleteTableVersionRequest& request) const {
  return DeleteTableVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTriggerOutcome GlueClient::DeleteTrigger(const DeleteTriggerRequest& request) const {
  return DeleteTriggerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUsageProfileOutcome GlueClient::DeleteUsageProfile(const DeleteUsageProfileRequest& request) const {
  return DeleteUsageProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserDefinedFunctionOutcome GlueClient::DeleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest& request) const {
  return DeleteUserDefinedFunctionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkflowOutcome GlueClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  return DeleteWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectionTypeOutcome GlueClient::DescribeConnectionType(const DescribeConnectionTypeRequest& request) const {
  return DescribeConnectionTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEntityOutcome GlueClient::DescribeEntity(const DescribeEntityRequest& request) const {
  return DescribeEntityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInboundIntegrationsOutcome GlueClient::DescribeInboundIntegrations(const DescribeInboundIntegrationsRequest& request) const {
  return DescribeInboundIntegrationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIntegrationsOutcome GlueClient::DescribeIntegrations(const DescribeIntegrationsRequest& request) const {
  return DescribeIntegrationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBlueprintOutcome GlueClient::GetBlueprint(const GetBlueprintRequest& request) const {
  return GetBlueprintOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBlueprintRunOutcome GlueClient::GetBlueprintRun(const GetBlueprintRunRequest& request) const {
  return GetBlueprintRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBlueprintRunsOutcome GlueClient::GetBlueprintRuns(const GetBlueprintRunsRequest& request) const {
  return GetBlueprintRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCatalogOutcome GlueClient::GetCatalog(const GetCatalogRequest& request) const {
  return GetCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCatalogImportStatusOutcome GlueClient::GetCatalogImportStatus(const GetCatalogImportStatusRequest& request) const {
  return GetCatalogImportStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCatalogsOutcome GlueClient::GetCatalogs(const GetCatalogsRequest& request) const {
  return GetCatalogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetClassifierOutcome GlueClient::GetClassifier(const GetClassifierRequest& request) const {
  return GetClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetClassifiersOutcome GlueClient::GetClassifiers(const GetClassifiersRequest& request) const {
  return GetClassifiersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetColumnStatisticsForPartitionOutcome GlueClient::GetColumnStatisticsForPartition(
    const GetColumnStatisticsForPartitionRequest& request) const {
  return GetColumnStatisticsForPartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetColumnStatisticsForTableOutcome GlueClient::GetColumnStatisticsForTable(const GetColumnStatisticsForTableRequest& request) const {
  return GetColumnStatisticsForTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
