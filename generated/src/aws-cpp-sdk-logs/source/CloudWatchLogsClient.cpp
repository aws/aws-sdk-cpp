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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateKmsKeyOutcome(result.GetResultWithOwnership())
                            : AssociateKmsKeyOutcome(std::move(result.GetError()));
}

AssociateSourceToS3TableIntegrationOutcome CloudWatchLogsClient::AssociateSourceToS3TableIntegration(
    const AssociateSourceToS3TableIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSourceToS3TableIntegrationOutcome(result.GetResultWithOwnership())
                            : AssociateSourceToS3TableIntegrationOutcome(std::move(result.GetError()));
}

CancelExportTaskOutcome CloudWatchLogsClient::CancelExportTask(const CancelExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelExportTaskOutcome(result.GetResultWithOwnership())
                            : CancelExportTaskOutcome(std::move(result.GetError()));
}

CancelImportTaskOutcome CloudWatchLogsClient::CancelImportTask(const CancelImportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelImportTaskOutcome(result.GetResultWithOwnership())
                            : CancelImportTaskOutcome(std::move(result.GetError()));
}

CreateDeliveryOutcome CloudWatchLogsClient::CreateDelivery(const CreateDeliveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDeliveryOutcome(result.GetResultWithOwnership()) : CreateDeliveryOutcome(std::move(result.GetError()));
}

CreateExportTaskOutcome CloudWatchLogsClient::CreateExportTask(const CreateExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateExportTaskOutcome(result.GetResultWithOwnership())
                            : CreateExportTaskOutcome(std::move(result.GetError()));
}

CreateImportTaskOutcome CloudWatchLogsClient::CreateImportTask(const CreateImportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImportTaskOutcome(result.GetResultWithOwnership())
                            : CreateImportTaskOutcome(std::move(result.GetError()));
}

CreateLogAnomalyDetectorOutcome CloudWatchLogsClient::CreateLogAnomalyDetector(const CreateLogAnomalyDetectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLogAnomalyDetectorOutcome(result.GetResultWithOwnership())
                            : CreateLogAnomalyDetectorOutcome(std::move(result.GetError()));
}

CreateLogGroupOutcome CloudWatchLogsClient::CreateLogGroup(const CreateLogGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLogGroupOutcome(result.GetResultWithOwnership()) : CreateLogGroupOutcome(std::move(result.GetError()));
}

CreateLogStreamOutcome CloudWatchLogsClient::CreateLogStream(const CreateLogStreamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLogStreamOutcome(result.GetResultWithOwnership())
                            : CreateLogStreamOutcome(std::move(result.GetError()));
}

CreateScheduledQueryOutcome CloudWatchLogsClient::CreateScheduledQuery(const CreateScheduledQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScheduledQueryOutcome(result.GetResultWithOwnership())
                            : CreateScheduledQueryOutcome(std::move(result.GetError()));
}

DeleteAccountPolicyOutcome CloudWatchLogsClient::DeleteAccountPolicy(const DeleteAccountPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccountPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteAccountPolicyOutcome(std::move(result.GetError()));
}

DeleteDataProtectionPolicyOutcome CloudWatchLogsClient::DeleteDataProtectionPolicy(const DeleteDataProtectionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDataProtectionPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteDataProtectionPolicyOutcome(std::move(result.GetError()));
}

DeleteDeliveryOutcome CloudWatchLogsClient::DeleteDelivery(const DeleteDeliveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDeliveryOutcome(result.GetResultWithOwnership()) : DeleteDeliveryOutcome(std::move(result.GetError()));
}

DeleteDeliveryDestinationOutcome CloudWatchLogsClient::DeleteDeliveryDestination(const DeleteDeliveryDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDeliveryDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteDeliveryDestinationOutcome(std::move(result.GetError()));
}

DeleteDeliveryDestinationPolicyOutcome CloudWatchLogsClient::DeleteDeliveryDestinationPolicy(
    const DeleteDeliveryDestinationPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDeliveryDestinationPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteDeliveryDestinationPolicyOutcome(std::move(result.GetError()));
}

DeleteDeliverySourceOutcome CloudWatchLogsClient::DeleteDeliverySource(const DeleteDeliverySourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDeliverySourceOutcome(result.GetResultWithOwnership())
                            : DeleteDeliverySourceOutcome(std::move(result.GetError()));
}

DeleteDestinationOutcome CloudWatchLogsClient::DeleteDestination(const DeleteDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteDestinationOutcome(std::move(result.GetError()));
}

DeleteIndexPolicyOutcome CloudWatchLogsClient::DeleteIndexPolicy(const DeleteIndexPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIndexPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteIndexPolicyOutcome(std::move(result.GetError()));
}

DeleteIntegrationOutcome CloudWatchLogsClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationOutcome(std::move(result.GetError()));
}

DeleteLogAnomalyDetectorOutcome CloudWatchLogsClient::DeleteLogAnomalyDetector(const DeleteLogAnomalyDetectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLogAnomalyDetectorOutcome(result.GetResultWithOwnership())
                            : DeleteLogAnomalyDetectorOutcome(std::move(result.GetError()));
}

DeleteLogGroupOutcome CloudWatchLogsClient::DeleteLogGroup(const DeleteLogGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLogGroupOutcome(result.GetResultWithOwnership()) : DeleteLogGroupOutcome(std::move(result.GetError()));
}

DeleteLogStreamOutcome CloudWatchLogsClient::DeleteLogStream(const DeleteLogStreamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLogStreamOutcome(result.GetResultWithOwnership())
                            : DeleteLogStreamOutcome(std::move(result.GetError()));
}

DeleteMetricFilterOutcome CloudWatchLogsClient::DeleteMetricFilter(const DeleteMetricFilterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMetricFilterOutcome(result.GetResultWithOwnership())
                            : DeleteMetricFilterOutcome(std::move(result.GetError()));
}

DeleteQueryDefinitionOutcome CloudWatchLogsClient::DeleteQueryDefinition(const DeleteQueryDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteQueryDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteQueryDefinitionOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome CloudWatchLogsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteRetentionPolicyOutcome CloudWatchLogsClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRetentionPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteRetentionPolicyOutcome(std::move(result.GetError()));
}

DeleteScheduledQueryOutcome CloudWatchLogsClient::DeleteScheduledQuery(const DeleteScheduledQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteScheduledQueryOutcome(result.GetResultWithOwnership())
                            : DeleteScheduledQueryOutcome(std::move(result.GetError()));
}

DeleteSubscriptionFilterOutcome CloudWatchLogsClient::DeleteSubscriptionFilter(const DeleteSubscriptionFilterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSubscriptionFilterOutcome(result.GetResultWithOwnership())
                            : DeleteSubscriptionFilterOutcome(std::move(result.GetError()));
}

DeleteTransformerOutcome CloudWatchLogsClient::DeleteTransformer(const DeleteTransformerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransformerOutcome(result.GetResultWithOwnership())
                            : DeleteTransformerOutcome(std::move(result.GetError()));
}

DescribeAccountPoliciesOutcome CloudWatchLogsClient::DescribeAccountPolicies(const DescribeAccountPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountPoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeAccountPoliciesOutcome(std::move(result.GetError()));
}

DescribeConfigurationTemplatesOutcome CloudWatchLogsClient::DescribeConfigurationTemplates(
    const DescribeConfigurationTemplatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigurationTemplatesOutcome(result.GetResultWithOwnership())
                            : DescribeConfigurationTemplatesOutcome(std::move(result.GetError()));
}

DescribeDeliveriesOutcome CloudWatchLogsClient::DescribeDeliveries(const DescribeDeliveriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeliveriesOutcome(result.GetResultWithOwnership())
                            : DescribeDeliveriesOutcome(std::move(result.GetError()));
}

DescribeDeliveryDestinationsOutcome CloudWatchLogsClient::DescribeDeliveryDestinations(
    const DescribeDeliveryDestinationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeliveryDestinationsOutcome(result.GetResultWithOwnership())
                            : DescribeDeliveryDestinationsOutcome(std::move(result.GetError()));
}

DescribeDeliverySourcesOutcome CloudWatchLogsClient::DescribeDeliverySources(const DescribeDeliverySourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeliverySourcesOutcome(result.GetResultWithOwnership())
                            : DescribeDeliverySourcesOutcome(std::move(result.GetError()));
}

DescribeDestinationsOutcome CloudWatchLogsClient::DescribeDestinations(const DescribeDestinationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDestinationsOutcome(result.GetResultWithOwnership())
                            : DescribeDestinationsOutcome(std::move(result.GetError()));
}

DescribeExportTasksOutcome CloudWatchLogsClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExportTasksOutcome(result.GetResultWithOwnership())
                            : DescribeExportTasksOutcome(std::move(result.GetError()));
}

DescribeFieldIndexesOutcome CloudWatchLogsClient::DescribeFieldIndexes(const DescribeFieldIndexesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFieldIndexesOutcome(result.GetResultWithOwnership())
                            : DescribeFieldIndexesOutcome(std::move(result.GetError()));
}

DescribeImportTaskBatchesOutcome CloudWatchLogsClient::DescribeImportTaskBatches(const DescribeImportTaskBatchesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImportTaskBatchesOutcome(result.GetResultWithOwnership())
                            : DescribeImportTaskBatchesOutcome(std::move(result.GetError()));
}

DescribeImportTasksOutcome CloudWatchLogsClient::DescribeImportTasks(const DescribeImportTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImportTasksOutcome(result.GetResultWithOwnership())
                            : DescribeImportTasksOutcome(std::move(result.GetError()));
}

DescribeIndexPoliciesOutcome CloudWatchLogsClient::DescribeIndexPolicies(const DescribeIndexPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIndexPoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeIndexPoliciesOutcome(std::move(result.GetError()));
}

DescribeLogGroupsOutcome CloudWatchLogsClient::DescribeLogGroups(const DescribeLogGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLogGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeLogGroupsOutcome(std::move(result.GetError()));
}

DescribeLogStreamsOutcome CloudWatchLogsClient::DescribeLogStreams(const DescribeLogStreamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLogStreamsOutcome(result.GetResultWithOwnership())
                            : DescribeLogStreamsOutcome(std::move(result.GetError()));
}

DescribeMetricFiltersOutcome CloudWatchLogsClient::DescribeMetricFilters(const DescribeMetricFiltersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetricFiltersOutcome(result.GetResultWithOwnership())
                            : DescribeMetricFiltersOutcome(std::move(result.GetError()));
}

DescribeQueriesOutcome CloudWatchLogsClient::DescribeQueries(const DescribeQueriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeQueriesOutcome(result.GetResultWithOwnership())
                            : DescribeQueriesOutcome(std::move(result.GetError()));
}

DescribeQueryDefinitionsOutcome CloudWatchLogsClient::DescribeQueryDefinitions(const DescribeQueryDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeQueryDefinitionsOutcome(result.GetResultWithOwnership())
                            : DescribeQueryDefinitionsOutcome(std::move(result.GetError()));
}

DescribeResourcePoliciesOutcome CloudWatchLogsClient::DescribeResourcePolicies(const DescribeResourcePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeResourcePoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeResourcePoliciesOutcome(std::move(result.GetError()));
}

DescribeSubscriptionFiltersOutcome CloudWatchLogsClient::DescribeSubscriptionFilters(
    const DescribeSubscriptionFiltersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSubscriptionFiltersOutcome(result.GetResultWithOwnership())
                            : DescribeSubscriptionFiltersOutcome(std::move(result.GetError()));
}

DisassociateKmsKeyOutcome CloudWatchLogsClient::DisassociateKmsKey(const DisassociateKmsKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateKmsKeyOutcome(result.GetResultWithOwnership())
                            : DisassociateKmsKeyOutcome(std::move(result.GetError()));
}

DisassociateSourceFromS3TableIntegrationOutcome CloudWatchLogsClient::DisassociateSourceFromS3TableIntegration(
    const DisassociateSourceFromS3TableIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateSourceFromS3TableIntegrationOutcome(result.GetResultWithOwnership())
                            : DisassociateSourceFromS3TableIntegrationOutcome(std::move(result.GetError()));
}

FilterLogEventsOutcome CloudWatchLogsClient::FilterLogEvents(const FilterLogEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FilterLogEventsOutcome(result.GetResultWithOwnership())
                            : FilterLogEventsOutcome(std::move(result.GetError()));
}

GetDataProtectionPolicyOutcome CloudWatchLogsClient::GetDataProtectionPolicy(const GetDataProtectionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataProtectionPolicyOutcome(result.GetResultWithOwnership())
                            : GetDataProtectionPolicyOutcome(std::move(result.GetError()));
}

GetDeliveryOutcome CloudWatchLogsClient::GetDelivery(const GetDeliveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeliveryOutcome(result.GetResultWithOwnership()) : GetDeliveryOutcome(std::move(result.GetError()));
}

GetDeliveryDestinationOutcome CloudWatchLogsClient::GetDeliveryDestination(const GetDeliveryDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeliveryDestinationOutcome(result.GetResultWithOwnership())
                            : GetDeliveryDestinationOutcome(std::move(result.GetError()));
}

GetDeliveryDestinationPolicyOutcome CloudWatchLogsClient::GetDeliveryDestinationPolicy(
    const GetDeliveryDestinationPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeliveryDestinationPolicyOutcome(result.GetResultWithOwnership())
                            : GetDeliveryDestinationPolicyOutcome(std::move(result.GetError()));
}

GetDeliverySourceOutcome CloudWatchLogsClient::GetDeliverySource(const GetDeliverySourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeliverySourceOutcome(result.GetResultWithOwnership())
                            : GetDeliverySourceOutcome(std::move(result.GetError()));
}

GetIntegrationOutcome CloudWatchLogsClient::GetIntegration(const GetIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIntegrationOutcome(result.GetResultWithOwnership()) : GetIntegrationOutcome(std::move(result.GetError()));
}

GetLogAnomalyDetectorOutcome CloudWatchLogsClient::GetLogAnomalyDetector(const GetLogAnomalyDetectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLogAnomalyDetectorOutcome(result.GetResultWithOwnership())
                            : GetLogAnomalyDetectorOutcome(std::move(result.GetError()));
}

GetLogEventsOutcome CloudWatchLogsClient::GetLogEvents(const GetLogEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLogEventsOutcome(result.GetResultWithOwnership()) : GetLogEventsOutcome(std::move(result.GetError()));
}

GetLogFieldsOutcome CloudWatchLogsClient::GetLogFields(const GetLogFieldsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLogFieldsOutcome(result.GetResultWithOwnership()) : GetLogFieldsOutcome(std::move(result.GetError()));
}

GetLogGroupFieldsOutcome CloudWatchLogsClient::GetLogGroupFields(const GetLogGroupFieldsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLogGroupFieldsOutcome(result.GetResultWithOwnership())
                            : GetLogGroupFieldsOutcome(std::move(result.GetError()));
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
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? GetLogObjectOutcome(result.GetResultWithOwnership())
                                  : GetLogObjectOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLogRecordOutcome CloudWatchLogsClient::GetLogRecord(const GetLogRecordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLogRecordOutcome(result.GetResultWithOwnership()) : GetLogRecordOutcome(std::move(result.GetError()));
}

GetQueryResultsOutcome CloudWatchLogsClient::GetQueryResults(const GetQueryResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetQueryResultsOutcome(result.GetResultWithOwnership())
                            : GetQueryResultsOutcome(std::move(result.GetError()));
}

GetScheduledQueryOutcome CloudWatchLogsClient::GetScheduledQuery(const GetScheduledQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetScheduledQueryOutcome(result.GetResultWithOwnership())
                            : GetScheduledQueryOutcome(std::move(result.GetError()));
}

GetScheduledQueryHistoryOutcome CloudWatchLogsClient::GetScheduledQueryHistory(const GetScheduledQueryHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetScheduledQueryHistoryOutcome(result.GetResultWithOwnership())
                            : GetScheduledQueryHistoryOutcome(std::move(result.GetError()));
}

GetTransformerOutcome CloudWatchLogsClient::GetTransformer(const GetTransformerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransformerOutcome(result.GetResultWithOwnership()) : GetTransformerOutcome(std::move(result.GetError()));
}

ListAggregateLogGroupSummariesOutcome CloudWatchLogsClient::ListAggregateLogGroupSummaries(
    const ListAggregateLogGroupSummariesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAggregateLogGroupSummariesOutcome(result.GetResultWithOwnership())
                            : ListAggregateLogGroupSummariesOutcome(std::move(result.GetError()));
}

ListAnomaliesOutcome CloudWatchLogsClient::ListAnomalies(const ListAnomaliesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAnomaliesOutcome(result.GetResultWithOwnership()) : ListAnomaliesOutcome(std::move(result.GetError()));
}

ListIntegrationsOutcome CloudWatchLogsClient::ListIntegrations(const ListIntegrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntegrationsOutcome(result.GetResultWithOwnership())
                            : ListIntegrationsOutcome(std::move(result.GetError()));
}

ListLogAnomalyDetectorsOutcome CloudWatchLogsClient::ListLogAnomalyDetectors(const ListLogAnomalyDetectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLogAnomalyDetectorsOutcome(result.GetResultWithOwnership())
                            : ListLogAnomalyDetectorsOutcome(std::move(result.GetError()));
}

ListLogGroupsOutcome CloudWatchLogsClient::ListLogGroups(const ListLogGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLogGroupsOutcome(result.GetResultWithOwnership()) : ListLogGroupsOutcome(std::move(result.GetError()));
}

ListLogGroupsForQueryOutcome CloudWatchLogsClient::ListLogGroupsForQuery(const ListLogGroupsForQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLogGroupsForQueryOutcome(result.GetResultWithOwnership())
                            : ListLogGroupsForQueryOutcome(std::move(result.GetError()));
}

ListScheduledQueriesOutcome CloudWatchLogsClient::ListScheduledQueries(const ListScheduledQueriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListScheduledQueriesOutcome(result.GetResultWithOwnership())
                            : ListScheduledQueriesOutcome(std::move(result.GetError()));
}

ListSourcesForS3TableIntegrationOutcome CloudWatchLogsClient::ListSourcesForS3TableIntegration(
    const ListSourcesForS3TableIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSourcesForS3TableIntegrationOutcome(result.GetResultWithOwnership())
                            : ListSourcesForS3TableIntegrationOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome CloudWatchLogsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutAccountPolicyOutcome CloudWatchLogsClient::PutAccountPolicy(const PutAccountPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAccountPolicyOutcome(result.GetResultWithOwnership())
                            : PutAccountPolicyOutcome(std::move(result.GetError()));
}

PutBearerTokenAuthenticationOutcome CloudWatchLogsClient::PutBearerTokenAuthentication(
    const PutBearerTokenAuthenticationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutBearerTokenAuthenticationOutcome(result.GetResultWithOwnership())
                            : PutBearerTokenAuthenticationOutcome(std::move(result.GetError()));
}

PutDataProtectionPolicyOutcome CloudWatchLogsClient::PutDataProtectionPolicy(const PutDataProtectionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDataProtectionPolicyOutcome(result.GetResultWithOwnership())
                            : PutDataProtectionPolicyOutcome(std::move(result.GetError()));
}

PutDeliveryDestinationOutcome CloudWatchLogsClient::PutDeliveryDestination(const PutDeliveryDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDeliveryDestinationOutcome(result.GetResultWithOwnership())
                            : PutDeliveryDestinationOutcome(std::move(result.GetError()));
}

PutDeliveryDestinationPolicyOutcome CloudWatchLogsClient::PutDeliveryDestinationPolicy(
    const PutDeliveryDestinationPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDeliveryDestinationPolicyOutcome(result.GetResultWithOwnership())
                            : PutDeliveryDestinationPolicyOutcome(std::move(result.GetError()));
}

PutDeliverySourceOutcome CloudWatchLogsClient::PutDeliverySource(const PutDeliverySourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDeliverySourceOutcome(result.GetResultWithOwnership())
                            : PutDeliverySourceOutcome(std::move(result.GetError()));
}

PutDestinationOutcome CloudWatchLogsClient::PutDestination(const PutDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDestinationOutcome(result.GetResultWithOwnership()) : PutDestinationOutcome(std::move(result.GetError()));
}

PutDestinationPolicyOutcome CloudWatchLogsClient::PutDestinationPolicy(const PutDestinationPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDestinationPolicyOutcome(result.GetResultWithOwnership())
                            : PutDestinationPolicyOutcome(std::move(result.GetError()));
}

PutIndexPolicyOutcome CloudWatchLogsClient::PutIndexPolicy(const PutIndexPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutIndexPolicyOutcome(result.GetResultWithOwnership()) : PutIndexPolicyOutcome(std::move(result.GetError()));
}

PutIntegrationOutcome CloudWatchLogsClient::PutIntegration(const PutIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutIntegrationOutcome(result.GetResultWithOwnership()) : PutIntegrationOutcome(std::move(result.GetError()));
}

PutLogEventsOutcome CloudWatchLogsClient::PutLogEvents(const PutLogEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutLogEventsOutcome(result.GetResultWithOwnership()) : PutLogEventsOutcome(std::move(result.GetError()));
}

PutLogGroupDeletionProtectionOutcome CloudWatchLogsClient::PutLogGroupDeletionProtection(
    const PutLogGroupDeletionProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutLogGroupDeletionProtectionOutcome(result.GetResultWithOwnership())
                            : PutLogGroupDeletionProtectionOutcome(std::move(result.GetError()));
}

PutMetricFilterOutcome CloudWatchLogsClient::PutMetricFilter(const PutMetricFilterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutMetricFilterOutcome(result.GetResultWithOwnership())
                            : PutMetricFilterOutcome(std::move(result.GetError()));
}

PutQueryDefinitionOutcome CloudWatchLogsClient::PutQueryDefinition(const PutQueryDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutQueryDefinitionOutcome(result.GetResultWithOwnership())
                            : PutQueryDefinitionOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome CloudWatchLogsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

PutRetentionPolicyOutcome CloudWatchLogsClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRetentionPolicyOutcome(result.GetResultWithOwnership())
                            : PutRetentionPolicyOutcome(std::move(result.GetError()));
}

PutSubscriptionFilterOutcome CloudWatchLogsClient::PutSubscriptionFilter(const PutSubscriptionFilterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutSubscriptionFilterOutcome(result.GetResultWithOwnership())
                            : PutSubscriptionFilterOutcome(std::move(result.GetError()));
}

PutTransformerOutcome CloudWatchLogsClient::PutTransformer(const PutTransformerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutTransformerOutcome(result.GetResultWithOwnership()) : PutTransformerOutcome(std::move(result.GetError()));
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
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? StartLiveTailOutcome(result.GetResultWithOwnership())
                                  : StartLiveTailOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartQueryOutcome CloudWatchLogsClient::StartQuery(const StartQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQueryOutcome(result.GetResultWithOwnership()) : StartQueryOutcome(std::move(result.GetError()));
}

StopQueryOutcome CloudWatchLogsClient::StopQuery(const StopQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopQueryOutcome(result.GetResultWithOwnership()) : StopQueryOutcome(std::move(result.GetError()));
}

TagResourceOutcome CloudWatchLogsClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestMetricFilterOutcome CloudWatchLogsClient::TestMetricFilter(const TestMetricFilterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestMetricFilterOutcome(result.GetResultWithOwnership())
                            : TestMetricFilterOutcome(std::move(result.GetError()));
}

TestTransformerOutcome CloudWatchLogsClient::TestTransformer(const TestTransformerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestTransformerOutcome(result.GetResultWithOwnership())
                            : TestTransformerOutcome(std::move(result.GetError()));
}

UntagResourceOutcome CloudWatchLogsClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAnomalyOutcome CloudWatchLogsClient::UpdateAnomaly(const UpdateAnomalyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAnomalyOutcome(result.GetResultWithOwnership()) : UpdateAnomalyOutcome(std::move(result.GetError()));
}

UpdateDeliveryConfigurationOutcome CloudWatchLogsClient::UpdateDeliveryConfiguration(
    const UpdateDeliveryConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDeliveryConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateDeliveryConfigurationOutcome(std::move(result.GetError()));
}

UpdateLogAnomalyDetectorOutcome CloudWatchLogsClient::UpdateLogAnomalyDetector(const UpdateLogAnomalyDetectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLogAnomalyDetectorOutcome(result.GetResultWithOwnership())
                            : UpdateLogAnomalyDetectorOutcome(std::move(result.GetError()));
}

UpdateScheduledQueryOutcome CloudWatchLogsClient::UpdateScheduledQuery(const UpdateScheduledQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateScheduledQueryOutcome(result.GetResultWithOwnership())
                            : UpdateScheduledQueryOutcome(std::move(result.GetError()));
}
