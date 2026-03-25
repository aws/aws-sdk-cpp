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
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/CloudWatchLogsEndpointProvider.h>
#include <aws/logs/CloudWatchLogsErrorMarshaller.h>
#include <aws/logs/model/AssociateKmsKeyRequest.h>
#include <aws/logs/model/AssociateSourceToS3TableIntegrationRequest.h>
#include <aws/logs/model/CancelExportTaskRequest.h>
#include <aws/logs/model/CancelImportTaskRequest.h>
#include <aws/logs/model/CreateDeliveryRequest.h>
#include <aws/logs/model/CreateExportTaskRequest.h>
#include <aws/logs/model/CreateImportTaskRequest.h>
#include <aws/logs/model/CreateLogAnomalyDetectorRequest.h>
#include <aws/logs/model/CreateLogGroupRequest.h>
#include <aws/logs/model/CreateLogStreamRequest.h>
#include <aws/logs/model/CreateScheduledQueryRequest.h>
#include <aws/logs/model/DeleteAccountPolicyRequest.h>
#include <aws/logs/model/DeleteDataProtectionPolicyRequest.h>
#include <aws/logs/model/DeleteDeliveryDestinationPolicyRequest.h>
#include <aws/logs/model/DeleteDeliveryDestinationRequest.h>
#include <aws/logs/model/DeleteDeliveryRequest.h>
#include <aws/logs/model/DeleteDeliverySourceRequest.h>
#include <aws/logs/model/DeleteDestinationRequest.h>
#include <aws/logs/model/DeleteIndexPolicyRequest.h>
#include <aws/logs/model/DeleteIntegrationRequest.h>
#include <aws/logs/model/DeleteLogAnomalyDetectorRequest.h>
#include <aws/logs/model/DeleteLogGroupRequest.h>
#include <aws/logs/model/DeleteLogStreamRequest.h>
#include <aws/logs/model/DeleteMetricFilterRequest.h>
#include <aws/logs/model/DeleteQueryDefinitionRequest.h>
#include <aws/logs/model/DeleteResourcePolicyRequest.h>
#include <aws/logs/model/DeleteRetentionPolicyRequest.h>
#include <aws/logs/model/DeleteScheduledQueryRequest.h>
#include <aws/logs/model/DeleteSubscriptionFilterRequest.h>
#include <aws/logs/model/DeleteTransformerRequest.h>
#include <aws/logs/model/DescribeAccountPoliciesRequest.h>
#include <aws/logs/model/DescribeConfigurationTemplatesRequest.h>
#include <aws/logs/model/DescribeDeliveriesRequest.h>
#include <aws/logs/model/DescribeDeliveryDestinationsRequest.h>
#include <aws/logs/model/DescribeDeliverySourcesRequest.h>
#include <aws/logs/model/DescribeDestinationsRequest.h>
#include <aws/logs/model/DescribeExportTasksRequest.h>
#include <aws/logs/model/DescribeFieldIndexesRequest.h>
#include <aws/logs/model/DescribeImportTaskBatchesRequest.h>
#include <aws/logs/model/DescribeImportTasksRequest.h>
#include <aws/logs/model/DescribeIndexPoliciesRequest.h>
#include <aws/logs/model/DescribeLogGroupsRequest.h>
#include <aws/logs/model/DescribeLogStreamsRequest.h>
#include <aws/logs/model/DescribeMetricFiltersRequest.h>
#include <aws/logs/model/DescribeQueriesRequest.h>
#include <aws/logs/model/DescribeQueryDefinitionsRequest.h>
#include <aws/logs/model/DescribeResourcePoliciesRequest.h>
#include <aws/logs/model/DescribeSubscriptionFiltersRequest.h>
#include <aws/logs/model/DisassociateKmsKeyRequest.h>
#include <aws/logs/model/DisassociateSourceFromS3TableIntegrationRequest.h>
#include <aws/logs/model/FilterLogEventsRequest.h>
#include <aws/logs/model/GetDataProtectionPolicyRequest.h>
#include <aws/logs/model/GetDeliveryDestinationPolicyRequest.h>
#include <aws/logs/model/GetDeliveryDestinationRequest.h>
#include <aws/logs/model/GetDeliveryRequest.h>
#include <aws/logs/model/GetDeliverySourceRequest.h>
#include <aws/logs/model/GetIntegrationRequest.h>
#include <aws/logs/model/GetLogAnomalyDetectorRequest.h>
#include <aws/logs/model/GetLogEventsRequest.h>
#include <aws/logs/model/GetLogFieldsRequest.h>
#include <aws/logs/model/GetLogGroupFieldsRequest.h>
#include <aws/logs/model/GetLogObjectRequest.h>
#include <aws/logs/model/GetLogRecordRequest.h>
#include <aws/logs/model/GetQueryResultsRequest.h>
#include <aws/logs/model/GetScheduledQueryHistoryRequest.h>
#include <aws/logs/model/GetScheduledQueryRequest.h>
#include <aws/logs/model/GetTransformerRequest.h>
#include <aws/logs/model/ListAggregateLogGroupSummariesRequest.h>
#include <aws/logs/model/ListAnomaliesRequest.h>
#include <aws/logs/model/ListIntegrationsRequest.h>
#include <aws/logs/model/ListLogAnomalyDetectorsRequest.h>
#include <aws/logs/model/ListLogGroupsForQueryRequest.h>
#include <aws/logs/model/ListLogGroupsRequest.h>
#include <aws/logs/model/ListScheduledQueriesRequest.h>
#include <aws/logs/model/ListSourcesForS3TableIntegrationRequest.h>
#include <aws/logs/model/ListTagsForResourceRequest.h>
#include <aws/logs/model/PutAccountPolicyRequest.h>
#include <aws/logs/model/PutBearerTokenAuthenticationRequest.h>
#include <aws/logs/model/PutDataProtectionPolicyRequest.h>
#include <aws/logs/model/PutDeliveryDestinationPolicyRequest.h>
#include <aws/logs/model/PutDeliveryDestinationRequest.h>
#include <aws/logs/model/PutDeliverySourceRequest.h>
#include <aws/logs/model/PutDestinationPolicyRequest.h>
#include <aws/logs/model/PutDestinationRequest.h>
#include <aws/logs/model/PutIndexPolicyRequest.h>
#include <aws/logs/model/PutIntegrationRequest.h>
#include <aws/logs/model/PutLogEventsRequest.h>
#include <aws/logs/model/PutLogGroupDeletionProtectionRequest.h>
#include <aws/logs/model/PutMetricFilterRequest.h>
#include <aws/logs/model/PutQueryDefinitionRequest.h>
#include <aws/logs/model/PutResourcePolicyRequest.h>
#include <aws/logs/model/PutRetentionPolicyRequest.h>
#include <aws/logs/model/PutSubscriptionFilterRequest.h>
#include <aws/logs/model/PutTransformerRequest.h>
#include <aws/logs/model/StartLiveTailRequest.h>
#include <aws/logs/model/StartQueryRequest.h>
#include <aws/logs/model/StopQueryRequest.h>
#include <aws/logs/model/TagResourceRequest.h>
#include <aws/logs/model/TestMetricFilterRequest.h>
#include <aws/logs/model/TestTransformerRequest.h>
#include <aws/logs/model/UntagResourceRequest.h>
#include <aws/logs/model/UpdateAnomalyRequest.h>
#include <aws/logs/model/UpdateDeliveryConfigurationRequest.h>
#include <aws/logs/model/UpdateLogAnomalyDetectorRequest.h>
#include <aws/logs/model/UpdateScheduledQueryRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudWatchLogs {
const char SERVICE_NAME[] = "logs";
const char ALLOCATION_TAG[] = "CloudWatchLogsClient";
}  // namespace CloudWatchLogs
}  // namespace Aws
const char* CloudWatchLogsClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudWatchLogsClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudWatchLogsClient::CloudWatchLogsClient(const CloudWatchLogs::CloudWatchLogsClientConfiguration& clientConfiguration,
                                           std::shared_ptr<CloudWatchLogsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const AWSCredentials& credentials,
                                           std::shared_ptr<CloudWatchLogsEndpointProviderBase> endpointProvider,
                                           const CloudWatchLogs::CloudWatchLogsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<CloudWatchLogsEndpointProviderBase> endpointProvider,
                                           const CloudWatchLogs::CloudWatchLogsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudWatchLogsClient::CloudWatchLogsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudWatchLogsClient::~CloudWatchLogsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudWatchLogsEndpointProviderBase>& CloudWatchLogsClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudWatchLogsClient::init(const CloudWatchLogs::CloudWatchLogsClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudWatch Logs");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "logs");
}

void CloudWatchLogsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudWatchLogsClient::InvokeOperationOutcome CloudWatchLogsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateKmsKeyOutcome CloudWatchLogsClient::AssociateKmsKey(const AssociateKmsKeyRequest& request) const {
  return AssociateKmsKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSourceToS3TableIntegrationOutcome CloudWatchLogsClient::AssociateSourceToS3TableIntegration(
    const AssociateSourceToS3TableIntegrationRequest& request) const {
  return AssociateSourceToS3TableIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelExportTaskOutcome CloudWatchLogsClient::CancelExportTask(const CancelExportTaskRequest& request) const {
  return CancelExportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelImportTaskOutcome CloudWatchLogsClient::CancelImportTask(const CancelImportTaskRequest& request) const {
  return CancelImportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeliveryOutcome CloudWatchLogsClient::CreateDelivery(const CreateDeliveryRequest& request) const {
  return CreateDeliveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExportTaskOutcome CloudWatchLogsClient::CreateExportTask(const CreateExportTaskRequest& request) const {
  return CreateExportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImportTaskOutcome CloudWatchLogsClient::CreateImportTask(const CreateImportTaskRequest& request) const {
  return CreateImportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLogAnomalyDetectorOutcome CloudWatchLogsClient::CreateLogAnomalyDetector(const CreateLogAnomalyDetectorRequest& request) const {
  return CreateLogAnomalyDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLogGroupOutcome CloudWatchLogsClient::CreateLogGroup(const CreateLogGroupRequest& request) const {
  return CreateLogGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLogStreamOutcome CloudWatchLogsClient::CreateLogStream(const CreateLogStreamRequest& request) const {
  return CreateLogStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateScheduledQueryOutcome CloudWatchLogsClient::CreateScheduledQuery(const CreateScheduledQueryRequest& request) const {
  return CreateScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountPolicyOutcome CloudWatchLogsClient::DeleteAccountPolicy(const DeleteAccountPolicyRequest& request) const {
  return DeleteAccountPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataProtectionPolicyOutcome CloudWatchLogsClient::DeleteDataProtectionPolicy(const DeleteDataProtectionPolicyRequest& request) const {
  return DeleteDataProtectionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeliveryOutcome CloudWatchLogsClient::DeleteDelivery(const DeleteDeliveryRequest& request) const {
  return DeleteDeliveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeliveryDestinationOutcome CloudWatchLogsClient::DeleteDeliveryDestination(const DeleteDeliveryDestinationRequest& request) const {
  return DeleteDeliveryDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeliveryDestinationPolicyOutcome CloudWatchLogsClient::DeleteDeliveryDestinationPolicy(
    const DeleteDeliveryDestinationPolicyRequest& request) const {
  return DeleteDeliveryDestinationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeliverySourceOutcome CloudWatchLogsClient::DeleteDeliverySource(const DeleteDeliverySourceRequest& request) const {
  return DeleteDeliverySourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDestinationOutcome CloudWatchLogsClient::DeleteDestination(const DeleteDestinationRequest& request) const {
  return DeleteDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIndexPolicyOutcome CloudWatchLogsClient::DeleteIndexPolicy(const DeleteIndexPolicyRequest& request) const {
  return DeleteIndexPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIntegrationOutcome CloudWatchLogsClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  return DeleteIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLogAnomalyDetectorOutcome CloudWatchLogsClient::DeleteLogAnomalyDetector(const DeleteLogAnomalyDetectorRequest& request) const {
  return DeleteLogAnomalyDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLogGroupOutcome CloudWatchLogsClient::DeleteLogGroup(const DeleteLogGroupRequest& request) const {
  return DeleteLogGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLogStreamOutcome CloudWatchLogsClient::DeleteLogStream(const DeleteLogStreamRequest& request) const {
  return DeleteLogStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMetricFilterOutcome CloudWatchLogsClient::DeleteMetricFilter(const DeleteMetricFilterRequest& request) const {
  return DeleteMetricFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteQueryDefinitionOutcome CloudWatchLogsClient::DeleteQueryDefinition(const DeleteQueryDefinitionRequest& request) const {
  return DeleteQueryDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome CloudWatchLogsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRetentionPolicyOutcome CloudWatchLogsClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const {
  return DeleteRetentionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteScheduledQueryOutcome CloudWatchLogsClient::DeleteScheduledQuery(const DeleteScheduledQueryRequest& request) const {
  return DeleteScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSubscriptionFilterOutcome CloudWatchLogsClient::DeleteSubscriptionFilter(const DeleteSubscriptionFilterRequest& request) const {
  return DeleteSubscriptionFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTransformerOutcome CloudWatchLogsClient::DeleteTransformer(const DeleteTransformerRequest& request) const {
  return DeleteTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountPoliciesOutcome CloudWatchLogsClient::DescribeAccountPolicies(const DescribeAccountPoliciesRequest& request) const {
  return DescribeAccountPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationTemplatesOutcome CloudWatchLogsClient::DescribeConfigurationTemplates(
    const DescribeConfigurationTemplatesRequest& request) const {
  return DescribeConfigurationTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeliveriesOutcome CloudWatchLogsClient::DescribeDeliveries(const DescribeDeliveriesRequest& request) const {
  return DescribeDeliveriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeliveryDestinationsOutcome CloudWatchLogsClient::DescribeDeliveryDestinations(
    const DescribeDeliveryDestinationsRequest& request) const {
  return DescribeDeliveryDestinationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeliverySourcesOutcome CloudWatchLogsClient::DescribeDeliverySources(const DescribeDeliverySourcesRequest& request) const {
  return DescribeDeliverySourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDestinationsOutcome CloudWatchLogsClient::DescribeDestinations(const DescribeDestinationsRequest& request) const {
  return DescribeDestinationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExportTasksOutcome CloudWatchLogsClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const {
  return DescribeExportTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFieldIndexesOutcome CloudWatchLogsClient::DescribeFieldIndexes(const DescribeFieldIndexesRequest& request) const {
  return DescribeFieldIndexesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImportTaskBatchesOutcome CloudWatchLogsClient::DescribeImportTaskBatches(const DescribeImportTaskBatchesRequest& request) const {
  return DescribeImportTaskBatchesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImportTasksOutcome CloudWatchLogsClient::DescribeImportTasks(const DescribeImportTasksRequest& request) const {
  return DescribeImportTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIndexPoliciesOutcome CloudWatchLogsClient::DescribeIndexPolicies(const DescribeIndexPoliciesRequest& request) const {
  return DescribeIndexPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLogGroupsOutcome CloudWatchLogsClient::DescribeLogGroups(const DescribeLogGroupsRequest& request) const {
  return DescribeLogGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLogStreamsOutcome CloudWatchLogsClient::DescribeLogStreams(const DescribeLogStreamsRequest& request) const {
  return DescribeLogStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetricFiltersOutcome CloudWatchLogsClient::DescribeMetricFilters(const DescribeMetricFiltersRequest& request) const {
  return DescribeMetricFiltersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeQueriesOutcome CloudWatchLogsClient::DescribeQueries(const DescribeQueriesRequest& request) const {
  return DescribeQueriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeQueryDefinitionsOutcome CloudWatchLogsClient::DescribeQueryDefinitions(const DescribeQueryDefinitionsRequest& request) const {
  return DescribeQueryDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourcePoliciesOutcome CloudWatchLogsClient::DescribeResourcePolicies(const DescribeResourcePoliciesRequest& request) const {
  return DescribeResourcePoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSubscriptionFiltersOutcome CloudWatchLogsClient::DescribeSubscriptionFilters(
    const DescribeSubscriptionFiltersRequest& request) const {
  return DescribeSubscriptionFiltersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateKmsKeyOutcome CloudWatchLogsClient::DisassociateKmsKey(const DisassociateKmsKeyRequest& request) const {
  return DisassociateKmsKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSourceFromS3TableIntegrationOutcome CloudWatchLogsClient::DisassociateSourceFromS3TableIntegration(
    const DisassociateSourceFromS3TableIntegrationRequest& request) const {
  return DisassociateSourceFromS3TableIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

FilterLogEventsOutcome CloudWatchLogsClient::FilterLogEvents(const FilterLogEventsRequest& request) const {
  return FilterLogEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataProtectionPolicyOutcome CloudWatchLogsClient::GetDataProtectionPolicy(const GetDataProtectionPolicyRequest& request) const {
  return GetDataProtectionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeliveryOutcome CloudWatchLogsClient::GetDelivery(const GetDeliveryRequest& request) const {
  return GetDeliveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeliveryDestinationOutcome CloudWatchLogsClient::GetDeliveryDestination(const GetDeliveryDestinationRequest& request) const {
  return GetDeliveryDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeliveryDestinationPolicyOutcome CloudWatchLogsClient::GetDeliveryDestinationPolicy(
    const GetDeliveryDestinationPolicyRequest& request) const {
  return GetDeliveryDestinationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeliverySourceOutcome CloudWatchLogsClient::GetDeliverySource(const GetDeliverySourceRequest& request) const {
  return GetDeliverySourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIntegrationOutcome CloudWatchLogsClient::GetIntegration(const GetIntegrationRequest& request) const {
  return GetIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLogAnomalyDetectorOutcome CloudWatchLogsClient::GetLogAnomalyDetector(const GetLogAnomalyDetectorRequest& request) const {
  return GetLogAnomalyDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLogEventsOutcome CloudWatchLogsClient::GetLogEvents(const GetLogEventsRequest& request) const {
  return GetLogEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLogFieldsOutcome CloudWatchLogsClient::GetLogFields(const GetLogFieldsRequest& request) const {
  return GetLogFieldsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLogGroupFieldsOutcome CloudWatchLogsClient::GetLogGroupFields(const GetLogGroupFieldsRequest& request) const {
  return GetLogGroupFieldsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLogObjectOutcome CloudWatchLogsClient::GetLogObject(GetLogObjectRequest& request) const {
  AWS_OPERATION_GUARD(GetLogObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLogObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetLogObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLogObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLogObject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLogObjectOutcome>(
      [&]() -> GetLogObjectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLogObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("streaming-");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetLogObjectOutcome(addPrefixErr.value()));
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("GetLogObject", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        return GetLogObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLogRecordOutcome CloudWatchLogsClient::GetLogRecord(const GetLogRecordRequest& request) const {
  return GetLogRecordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueryResultsOutcome CloudWatchLogsClient::GetQueryResults(const GetQueryResultsRequest& request) const {
  return GetQueryResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetScheduledQueryOutcome CloudWatchLogsClient::GetScheduledQuery(const GetScheduledQueryRequest& request) const {
  return GetScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetScheduledQueryHistoryOutcome CloudWatchLogsClient::GetScheduledQueryHistory(const GetScheduledQueryHistoryRequest& request) const {
  return GetScheduledQueryHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTransformerOutcome CloudWatchLogsClient::GetTransformer(const GetTransformerRequest& request) const {
  return GetTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAggregateLogGroupSummariesOutcome CloudWatchLogsClient::ListAggregateLogGroupSummaries(
    const ListAggregateLogGroupSummariesRequest& request) const {
  return ListAggregateLogGroupSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAnomaliesOutcome CloudWatchLogsClient::ListAnomalies(const ListAnomaliesRequest& request) const {
  return ListAnomaliesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIntegrationsOutcome CloudWatchLogsClient::ListIntegrations(const ListIntegrationsRequest& request) const {
  return ListIntegrationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLogAnomalyDetectorsOutcome CloudWatchLogsClient::ListLogAnomalyDetectors(const ListLogAnomalyDetectorsRequest& request) const {
  return ListLogAnomalyDetectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLogGroupsOutcome CloudWatchLogsClient::ListLogGroups(const ListLogGroupsRequest& request) const {
  return ListLogGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLogGroupsForQueryOutcome CloudWatchLogsClient::ListLogGroupsForQuery(const ListLogGroupsForQueryRequest& request) const {
  return ListLogGroupsForQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListScheduledQueriesOutcome CloudWatchLogsClient::ListScheduledQueries(const ListScheduledQueriesRequest& request) const {
  return ListScheduledQueriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSourcesForS3TableIntegrationOutcome CloudWatchLogsClient::ListSourcesForS3TableIntegration(
    const ListSourcesForS3TableIntegrationRequest& request) const {
  return ListSourcesForS3TableIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CloudWatchLogsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAccountPolicyOutcome CloudWatchLogsClient::PutAccountPolicy(const PutAccountPolicyRequest& request) const {
  return PutAccountPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutBearerTokenAuthenticationOutcome CloudWatchLogsClient::PutBearerTokenAuthentication(
    const PutBearerTokenAuthenticationRequest& request) const {
  return PutBearerTokenAuthenticationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDataProtectionPolicyOutcome CloudWatchLogsClient::PutDataProtectionPolicy(const PutDataProtectionPolicyRequest& request) const {
  return PutDataProtectionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDeliveryDestinationOutcome CloudWatchLogsClient::PutDeliveryDestination(const PutDeliveryDestinationRequest& request) const {
  return PutDeliveryDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDeliveryDestinationPolicyOutcome CloudWatchLogsClient::PutDeliveryDestinationPolicy(
    const PutDeliveryDestinationPolicyRequest& request) const {
  return PutDeliveryDestinationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDeliverySourceOutcome CloudWatchLogsClient::PutDeliverySource(const PutDeliverySourceRequest& request) const {
  return PutDeliverySourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDestinationOutcome CloudWatchLogsClient::PutDestination(const PutDestinationRequest& request) const {
  return PutDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDestinationPolicyOutcome CloudWatchLogsClient::PutDestinationPolicy(const PutDestinationPolicyRequest& request) const {
  return PutDestinationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutIndexPolicyOutcome CloudWatchLogsClient::PutIndexPolicy(const PutIndexPolicyRequest& request) const {
  return PutIndexPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutIntegrationOutcome CloudWatchLogsClient::PutIntegration(const PutIntegrationRequest& request) const {
  return PutIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLogEventsOutcome CloudWatchLogsClient::PutLogEvents(const PutLogEventsRequest& request) const {
  return PutLogEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLogGroupDeletionProtectionOutcome CloudWatchLogsClient::PutLogGroupDeletionProtection(
    const PutLogGroupDeletionProtectionRequest& request) const {
  return PutLogGroupDeletionProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMetricFilterOutcome CloudWatchLogsClient::PutMetricFilter(const PutMetricFilterRequest& request) const {
  return PutMetricFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutQueryDefinitionOutcome CloudWatchLogsClient::PutQueryDefinition(const PutQueryDefinitionRequest& request) const {
  return PutQueryDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome CloudWatchLogsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRetentionPolicyOutcome CloudWatchLogsClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const {
  return PutRetentionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutSubscriptionFilterOutcome CloudWatchLogsClient::PutSubscriptionFilter(const PutSubscriptionFilterRequest& request) const {
  return PutSubscriptionFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutTransformerOutcome CloudWatchLogsClient::PutTransformer(const PutTransformerRequest& request) const {
  return PutTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartLiveTailOutcome CloudWatchLogsClient::StartLiveTail(StartLiveTailRequest& request) const {
  AWS_OPERATION_GUARD(StartLiveTail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartLiveTail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartLiveTail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartLiveTail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartLiveTail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartLiveTailOutcome>(
      [&]() -> StartLiveTailOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartLiveTail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("streaming-");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), StartLiveTailOutcome(addPrefixErr.value()));
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("StartLiveTail", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        return StartLiveTailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartQueryOutcome CloudWatchLogsClient::StartQuery(const StartQueryRequest& request) const {
  return StartQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopQueryOutcome CloudWatchLogsClient::StopQuery(const StopQueryRequest& request) const {
  return StopQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CloudWatchLogsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestMetricFilterOutcome CloudWatchLogsClient::TestMetricFilter(const TestMetricFilterRequest& request) const {
  return TestMetricFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestTransformerOutcome CloudWatchLogsClient::TestTransformer(const TestTransformerRequest& request) const {
  return TestTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CloudWatchLogsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAnomalyOutcome CloudWatchLogsClient::UpdateAnomaly(const UpdateAnomalyRequest& request) const {
  return UpdateAnomalyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDeliveryConfigurationOutcome CloudWatchLogsClient::UpdateDeliveryConfiguration(
    const UpdateDeliveryConfigurationRequest& request) const {
  return UpdateDeliveryConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLogAnomalyDetectorOutcome CloudWatchLogsClient::UpdateLogAnomalyDetector(const UpdateLogAnomalyDetectorRequest& request) const {
  return UpdateLogAnomalyDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateScheduledQueryOutcome CloudWatchLogsClient::UpdateScheduledQuery(const UpdateScheduledQueryRequest& request) const {
  return UpdateScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
