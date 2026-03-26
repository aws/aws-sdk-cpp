/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/ComprehendClient.h>
#include <aws/comprehend/ComprehendEndpointProvider.h>
#include <aws/comprehend/ComprehendErrorMarshaller.h>
#include <aws/comprehend/model/BatchDetectDominantLanguageRequest.h>
#include <aws/comprehend/model/BatchDetectEntitiesRequest.h>
#include <aws/comprehend/model/BatchDetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/BatchDetectSentimentRequest.h>
#include <aws/comprehend/model/BatchDetectSyntaxRequest.h>
#include <aws/comprehend/model/BatchDetectTargetedSentimentRequest.h>
#include <aws/comprehend/model/ClassifyDocumentRequest.h>
#include <aws/comprehend/model/ContainsPiiEntitiesRequest.h>
#include <aws/comprehend/model/CreateDatasetRequest.h>
#include <aws/comprehend/model/CreateDocumentClassifierRequest.h>
#include <aws/comprehend/model/CreateEndpointRequest.h>
#include <aws/comprehend/model/CreateEntityRecognizerRequest.h>
#include <aws/comprehend/model/CreateFlywheelRequest.h>
#include <aws/comprehend/model/DeleteDocumentClassifierRequest.h>
#include <aws/comprehend/model/DeleteEndpointRequest.h>
#include <aws/comprehend/model/DeleteEntityRecognizerRequest.h>
#include <aws/comprehend/model/DeleteFlywheelRequest.h>
#include <aws/comprehend/model/DeleteResourcePolicyRequest.h>
#include <aws/comprehend/model/DescribeDatasetRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassifierRequest.h>
#include <aws/comprehend/model/DescribeDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEndpointRequest.h>
#include <aws/comprehend/model/DescribeEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEntityRecognizerRequest.h>
#include <aws/comprehend/model/DescribeEventsDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeFlywheelIterationRequest.h>
#include <aws/comprehend/model/DescribeFlywheelRequest.h>
#include <aws/comprehend/model/DescribeKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribePiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeResourcePolicyRequest.h>
#include <aws/comprehend/model/DescribeSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/DetectDominantLanguageRequest.h>
#include <aws/comprehend/model/DetectEntitiesRequest.h>
#include <aws/comprehend/model/DetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/DetectPiiEntitiesRequest.h>
#include <aws/comprehend/model/DetectSentimentRequest.h>
#include <aws/comprehend/model/DetectSyntaxRequest.h>
#include <aws/comprehend/model/DetectTargetedSentimentRequest.h>
#include <aws/comprehend/model/DetectToxicContentRequest.h>
#include <aws/comprehend/model/ImportModelRequest.h>
#include <aws/comprehend/model/ListDatasetsRequest.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsRequest.h>
#include <aws/comprehend/model/ListDocumentClassifierSummariesRequest.h>
#include <aws/comprehend/model/ListDocumentClassifiersRequest.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEndpointsRequest.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesRequest.h>
#include <aws/comprehend/model/ListEntityRecognizersRequest.h>
#include <aws/comprehend/model/ListEventsDetectionJobsRequest.h>
#include <aws/comprehend/model/ListFlywheelIterationHistoryRequest.h>
#include <aws/comprehend/model/ListFlywheelsRequest.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsRequest.h>
#include <aws/comprehend/model/ListTagsForResourceRequest.h>
#include <aws/comprehend/model/ListTargetedSentimentDetectionJobsRequest.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsRequest.h>
#include <aws/comprehend/model/PutResourcePolicyRequest.h>
#include <aws/comprehend/model/StartDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/StartDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StartEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StartEventsDetectionJobRequest.h>
#include <aws/comprehend/model/StartFlywheelIterationRequest.h>
#include <aws/comprehend/model/StartKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StartPiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StartSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StartTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StartTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/StopDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StopEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StopEventsDetectionJobRequest.h>
#include <aws/comprehend/model/StopKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StopPiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StopSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StopTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StopTrainingDocumentClassifierRequest.h>
#include <aws/comprehend/model/StopTrainingEntityRecognizerRequest.h>
#include <aws/comprehend/model/TagResourceRequest.h>
#include <aws/comprehend/model/UntagResourceRequest.h>
#include <aws/comprehend/model/UpdateEndpointRequest.h>
#include <aws/comprehend/model/UpdateFlywheelRequest.h>
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
using namespace Aws::Comprehend;
using namespace Aws::Comprehend::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Comprehend {
const char SERVICE_NAME[] = "comprehend";
const char ALLOCATION_TAG[] = "ComprehendClient";
}  // namespace Comprehend
}  // namespace Aws
const char* ComprehendClient::GetServiceName() { return SERVICE_NAME; }
const char* ComprehendClient::GetAllocationTag() { return ALLOCATION_TAG; }

ComprehendClient::ComprehendClient(const Comprehend::ComprehendClientConfiguration& clientConfiguration,
                                   std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendClient::ComprehendClient(const AWSCredentials& credentials, std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider,
                                   const Comprehend::ComprehendClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendClient::ComprehendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<ComprehendEndpointProviderBase> endpointProvider,
                                   const Comprehend::ComprehendClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ComprehendClient::ComprehendClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendClient::ComprehendClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendClient::ComprehendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComprehendEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ComprehendClient::~ComprehendClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ComprehendEndpointProviderBase>& ComprehendClient::accessEndpointProvider() { return m_endpointProvider; }

void ComprehendClient::init(const Comprehend::ComprehendClientConfiguration& config) {
  AWSClient::SetServiceClientName("Comprehend");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "comprehend");
}

void ComprehendClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ComprehendClient::InvokeOperationOutcome ComprehendClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

BatchDetectDominantLanguageOutcome ComprehendClient::BatchDetectDominantLanguage(const BatchDetectDominantLanguageRequest& request) const {
  return BatchDetectDominantLanguageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDetectEntitiesOutcome ComprehendClient::BatchDetectEntities(const BatchDetectEntitiesRequest& request) const {
  return BatchDetectEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDetectKeyPhrasesOutcome ComprehendClient::BatchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest& request) const {
  return BatchDetectKeyPhrasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDetectSentimentOutcome ComprehendClient::BatchDetectSentiment(const BatchDetectSentimentRequest& request) const {
  return BatchDetectSentimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDetectSyntaxOutcome ComprehendClient::BatchDetectSyntax(const BatchDetectSyntaxRequest& request) const {
  return BatchDetectSyntaxOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDetectTargetedSentimentOutcome ComprehendClient::BatchDetectTargetedSentiment(
    const BatchDetectTargetedSentimentRequest& request) const {
  return BatchDetectTargetedSentimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ClassifyDocumentOutcome ComprehendClient::ClassifyDocument(const ClassifyDocumentRequest& request) const {
  return ClassifyDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ContainsPiiEntitiesOutcome ComprehendClient::ContainsPiiEntities(const ContainsPiiEntitiesRequest& request) const {
  return ContainsPiiEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetOutcome ComprehendClient::CreateDataset(const CreateDatasetRequest& request) const {
  return CreateDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDocumentClassifierOutcome ComprehendClient::CreateDocumentClassifier(const CreateDocumentClassifierRequest& request) const {
  return CreateDocumentClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEndpointOutcome ComprehendClient::CreateEndpoint(const CreateEndpointRequest& request) const {
  return CreateEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEntityRecognizerOutcome ComprehendClient::CreateEntityRecognizer(const CreateEntityRecognizerRequest& request) const {
  return CreateEntityRecognizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFlywheelOutcome ComprehendClient::CreateFlywheel(const CreateFlywheelRequest& request) const {
  return CreateFlywheelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDocumentClassifierOutcome ComprehendClient::DeleteDocumentClassifier(const DeleteDocumentClassifierRequest& request) const {
  return DeleteDocumentClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEndpointOutcome ComprehendClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  return DeleteEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEntityRecognizerOutcome ComprehendClient::DeleteEntityRecognizer(const DeleteEntityRecognizerRequest& request) const {
  return DeleteEntityRecognizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFlywheelOutcome ComprehendClient::DeleteFlywheel(const DeleteFlywheelRequest& request) const {
  return DeleteFlywheelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome ComprehendClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetOutcome ComprehendClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  return DescribeDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDocumentClassificationJobOutcome ComprehendClient::DescribeDocumentClassificationJob(
    const DescribeDocumentClassificationJobRequest& request) const {
  return DescribeDocumentClassificationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDocumentClassifierOutcome ComprehendClient::DescribeDocumentClassifier(const DescribeDocumentClassifierRequest& request) const {
  return DescribeDocumentClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDominantLanguageDetectionJobOutcome ComprehendClient::DescribeDominantLanguageDetectionJob(
    const DescribeDominantLanguageDetectionJobRequest& request) const {
  return DescribeDominantLanguageDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointOutcome ComprehendClient::DescribeEndpoint(const DescribeEndpointRequest& request) const {
  return DescribeEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEntitiesDetectionJobOutcome ComprehendClient::DescribeEntitiesDetectionJob(
    const DescribeEntitiesDetectionJobRequest& request) const {
  return DescribeEntitiesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEntityRecognizerOutcome ComprehendClient::DescribeEntityRecognizer(const DescribeEntityRecognizerRequest& request) const {
  return DescribeEntityRecognizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsDetectionJobOutcome ComprehendClient::DescribeEventsDetectionJob(const DescribeEventsDetectionJobRequest& request) const {
  return DescribeEventsDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFlywheelOutcome ComprehendClient::DescribeFlywheel(const DescribeFlywheelRequest& request) const {
  return DescribeFlywheelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFlywheelIterationOutcome ComprehendClient::DescribeFlywheelIteration(const DescribeFlywheelIterationRequest& request) const {
  return DescribeFlywheelIterationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeKeyPhrasesDetectionJobOutcome ComprehendClient::DescribeKeyPhrasesDetectionJob(
    const DescribeKeyPhrasesDetectionJobRequest& request) const {
  return DescribeKeyPhrasesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePiiEntitiesDetectionJobOutcome ComprehendClient::DescribePiiEntitiesDetectionJob(
    const DescribePiiEntitiesDetectionJobRequest& request) const {
  return DescribePiiEntitiesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourcePolicyOutcome ComprehendClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const {
  return DescribeResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSentimentDetectionJobOutcome ComprehendClient::DescribeSentimentDetectionJob(
    const DescribeSentimentDetectionJobRequest& request) const {
  return DescribeSentimentDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTargetedSentimentDetectionJobOutcome ComprehendClient::DescribeTargetedSentimentDetectionJob(
    const DescribeTargetedSentimentDetectionJobRequest& request) const {
  return DescribeTargetedSentimentDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTopicsDetectionJobOutcome ComprehendClient::DescribeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest& request) const {
  return DescribeTopicsDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectDominantLanguageOutcome ComprehendClient::DetectDominantLanguage(const DetectDominantLanguageRequest& request) const {
  return DetectDominantLanguageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectEntitiesOutcome ComprehendClient::DetectEntities(const DetectEntitiesRequest& request) const {
  return DetectEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectKeyPhrasesOutcome ComprehendClient::DetectKeyPhrases(const DetectKeyPhrasesRequest& request) const {
  return DetectKeyPhrasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectPiiEntitiesOutcome ComprehendClient::DetectPiiEntities(const DetectPiiEntitiesRequest& request) const {
  return DetectPiiEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectSentimentOutcome ComprehendClient::DetectSentiment(const DetectSentimentRequest& request) const {
  return DetectSentimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectSyntaxOutcome ComprehendClient::DetectSyntax(const DetectSyntaxRequest& request) const {
  return DetectSyntaxOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectTargetedSentimentOutcome ComprehendClient::DetectTargetedSentiment(const DetectTargetedSentimentRequest& request) const {
  return DetectTargetedSentimentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectToxicContentOutcome ComprehendClient::DetectToxicContent(const DetectToxicContentRequest& request) const {
  return DetectToxicContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportModelOutcome ComprehendClient::ImportModel(const ImportModelRequest& request) const {
  return ImportModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetsOutcome ComprehendClient::ListDatasets(const ListDatasetsRequest& request) const {
  return ListDatasetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDocumentClassificationJobsOutcome ComprehendClient::ListDocumentClassificationJobs(
    const ListDocumentClassificationJobsRequest& request) const {
  return ListDocumentClassificationJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDocumentClassifierSummariesOutcome ComprehendClient::ListDocumentClassifierSummaries(
    const ListDocumentClassifierSummariesRequest& request) const {
  return ListDocumentClassifierSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDocumentClassifiersOutcome ComprehendClient::ListDocumentClassifiers(const ListDocumentClassifiersRequest& request) const {
  return ListDocumentClassifiersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDominantLanguageDetectionJobsOutcome ComprehendClient::ListDominantLanguageDetectionJobs(
    const ListDominantLanguageDetectionJobsRequest& request) const {
  return ListDominantLanguageDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEndpointsOutcome ComprehendClient::ListEndpoints(const ListEndpointsRequest& request) const {
  return ListEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntitiesDetectionJobsOutcome ComprehendClient::ListEntitiesDetectionJobs(const ListEntitiesDetectionJobsRequest& request) const {
  return ListEntitiesDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntityRecognizerSummariesOutcome ComprehendClient::ListEntityRecognizerSummaries(
    const ListEntityRecognizerSummariesRequest& request) const {
  return ListEntityRecognizerSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntityRecognizersOutcome ComprehendClient::ListEntityRecognizers(const ListEntityRecognizersRequest& request) const {
  return ListEntityRecognizersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventsDetectionJobsOutcome ComprehendClient::ListEventsDetectionJobs(const ListEventsDetectionJobsRequest& request) const {
  return ListEventsDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFlywheelIterationHistoryOutcome ComprehendClient::ListFlywheelIterationHistory(
    const ListFlywheelIterationHistoryRequest& request) const {
  return ListFlywheelIterationHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFlywheelsOutcome ComprehendClient::ListFlywheels(const ListFlywheelsRequest& request) const {
  return ListFlywheelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListKeyPhrasesDetectionJobsOutcome ComprehendClient::ListKeyPhrasesDetectionJobs(const ListKeyPhrasesDetectionJobsRequest& request) const {
  return ListKeyPhrasesDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPiiEntitiesDetectionJobsOutcome ComprehendClient::ListPiiEntitiesDetectionJobs(
    const ListPiiEntitiesDetectionJobsRequest& request) const {
  return ListPiiEntitiesDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSentimentDetectionJobsOutcome ComprehendClient::ListSentimentDetectionJobs(const ListSentimentDetectionJobsRequest& request) const {
  return ListSentimentDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ComprehendClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTargetedSentimentDetectionJobsOutcome ComprehendClient::ListTargetedSentimentDetectionJobs(
    const ListTargetedSentimentDetectionJobsRequest& request) const {
  return ListTargetedSentimentDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTopicsDetectionJobsOutcome ComprehendClient::ListTopicsDetectionJobs(const ListTopicsDetectionJobsRequest& request) const {
  return ListTopicsDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome ComprehendClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDocumentClassificationJobOutcome ComprehendClient::StartDocumentClassificationJob(
    const StartDocumentClassificationJobRequest& request) const {
  return StartDocumentClassificationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDominantLanguageDetectionJobOutcome ComprehendClient::StartDominantLanguageDetectionJob(
    const StartDominantLanguageDetectionJobRequest& request) const {
  return StartDominantLanguageDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEntitiesDetectionJobOutcome ComprehendClient::StartEntitiesDetectionJob(const StartEntitiesDetectionJobRequest& request) const {
  return StartEntitiesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEventsDetectionJobOutcome ComprehendClient::StartEventsDetectionJob(const StartEventsDetectionJobRequest& request) const {
  return StartEventsDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFlywheelIterationOutcome ComprehendClient::StartFlywheelIteration(const StartFlywheelIterationRequest& request) const {
  return StartFlywheelIterationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartKeyPhrasesDetectionJobOutcome ComprehendClient::StartKeyPhrasesDetectionJob(const StartKeyPhrasesDetectionJobRequest& request) const {
  return StartKeyPhrasesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartPiiEntitiesDetectionJobOutcome ComprehendClient::StartPiiEntitiesDetectionJob(
    const StartPiiEntitiesDetectionJobRequest& request) const {
  return StartPiiEntitiesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSentimentDetectionJobOutcome ComprehendClient::StartSentimentDetectionJob(const StartSentimentDetectionJobRequest& request) const {
  return StartSentimentDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTargetedSentimentDetectionJobOutcome ComprehendClient::StartTargetedSentimentDetectionJob(
    const StartTargetedSentimentDetectionJobRequest& request) const {
  return StartTargetedSentimentDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTopicsDetectionJobOutcome ComprehendClient::StartTopicsDetectionJob(const StartTopicsDetectionJobRequest& request) const {
  return StartTopicsDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDominantLanguageDetectionJobOutcome ComprehendClient::StopDominantLanguageDetectionJob(
    const StopDominantLanguageDetectionJobRequest& request) const {
  return StopDominantLanguageDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEntitiesDetectionJobOutcome ComprehendClient::StopEntitiesDetectionJob(const StopEntitiesDetectionJobRequest& request) const {
  return StopEntitiesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEventsDetectionJobOutcome ComprehendClient::StopEventsDetectionJob(const StopEventsDetectionJobRequest& request) const {
  return StopEventsDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopKeyPhrasesDetectionJobOutcome ComprehendClient::StopKeyPhrasesDetectionJob(const StopKeyPhrasesDetectionJobRequest& request) const {
  return StopKeyPhrasesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopPiiEntitiesDetectionJobOutcome ComprehendClient::StopPiiEntitiesDetectionJob(const StopPiiEntitiesDetectionJobRequest& request) const {
  return StopPiiEntitiesDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopSentimentDetectionJobOutcome ComprehendClient::StopSentimentDetectionJob(const StopSentimentDetectionJobRequest& request) const {
  return StopSentimentDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTargetedSentimentDetectionJobOutcome ComprehendClient::StopTargetedSentimentDetectionJob(
    const StopTargetedSentimentDetectionJobRequest& request) const {
  return StopTargetedSentimentDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTrainingDocumentClassifierOutcome ComprehendClient::StopTrainingDocumentClassifier(
    const StopTrainingDocumentClassifierRequest& request) const {
  return StopTrainingDocumentClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTrainingEntityRecognizerOutcome ComprehendClient::StopTrainingEntityRecognizer(
    const StopTrainingEntityRecognizerRequest& request) const {
  return StopTrainingEntityRecognizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ComprehendClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ComprehendClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEndpointOutcome ComprehendClient::UpdateEndpoint(const UpdateEndpointRequest& request) const {
  return UpdateEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFlywheelOutcome ComprehendClient::UpdateFlywheel(const UpdateFlywheelRequest& request) const {
  return UpdateFlywheelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
