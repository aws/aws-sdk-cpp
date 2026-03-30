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
#include <aws/lexv2-models/LexModelsV2Client.h>
#include <aws/lexv2-models/LexModelsV2EndpointProvider.h>
#include <aws/lexv2-models/LexModelsV2ErrorMarshaller.h>
#include <aws/lexv2-models/model/BatchCreateCustomVocabularyItemRequest.h>
#include <aws/lexv2-models/model/BatchDeleteCustomVocabularyItemRequest.h>
#include <aws/lexv2-models/model/BatchUpdateCustomVocabularyItemRequest.h>
#include <aws/lexv2-models/model/BuildBotLocaleRequest.h>
#include <aws/lexv2-models/model/CreateBotAliasRequest.h>
#include <aws/lexv2-models/model/CreateBotLocaleRequest.h>
#include <aws/lexv2-models/model/CreateBotReplicaRequest.h>
#include <aws/lexv2-models/model/CreateBotRequest.h>
#include <aws/lexv2-models/model/CreateBotVersionRequest.h>
#include <aws/lexv2-models/model/CreateExportRequest.h>
#include <aws/lexv2-models/model/CreateIntentRequest.h>
#include <aws/lexv2-models/model/CreateResourcePolicyRequest.h>
#include <aws/lexv2-models/model/CreateResourcePolicyStatementRequest.h>
#include <aws/lexv2-models/model/CreateSlotRequest.h>
#include <aws/lexv2-models/model/CreateSlotTypeRequest.h>
#include <aws/lexv2-models/model/CreateTestSetDiscrepancyReportRequest.h>
#include <aws/lexv2-models/model/CreateUploadUrlRequest.h>
#include <aws/lexv2-models/model/DeleteBotAliasRequest.h>
#include <aws/lexv2-models/model/DeleteBotAnalyzerRecommendationRequest.h>
#include <aws/lexv2-models/model/DeleteBotLocaleRequest.h>
#include <aws/lexv2-models/model/DeleteBotReplicaRequest.h>
#include <aws/lexv2-models/model/DeleteBotRequest.h>
#include <aws/lexv2-models/model/DeleteBotVersionRequest.h>
#include <aws/lexv2-models/model/DeleteCustomVocabularyRequest.h>
#include <aws/lexv2-models/model/DeleteExportRequest.h>
#include <aws/lexv2-models/model/DeleteImportRequest.h>
#include <aws/lexv2-models/model/DeleteIntentRequest.h>
#include <aws/lexv2-models/model/DeleteResourcePolicyRequest.h>
#include <aws/lexv2-models/model/DeleteResourcePolicyStatementRequest.h>
#include <aws/lexv2-models/model/DeleteSlotRequest.h>
#include <aws/lexv2-models/model/DeleteSlotTypeRequest.h>
#include <aws/lexv2-models/model/DeleteTestSetRequest.h>
#include <aws/lexv2-models/model/DeleteUtterancesRequest.h>
#include <aws/lexv2-models/model/DescribeBotAliasRequest.h>
#include <aws/lexv2-models/model/DescribeBotAnalyzerRecommendationRequest.h>
#include <aws/lexv2-models/model/DescribeBotLocaleRequest.h>
#include <aws/lexv2-models/model/DescribeBotRecommendationRequest.h>
#include <aws/lexv2-models/model/DescribeBotReplicaRequest.h>
#include <aws/lexv2-models/model/DescribeBotRequest.h>
#include <aws/lexv2-models/model/DescribeBotResourceGenerationRequest.h>
#include <aws/lexv2-models/model/DescribeBotVersionRequest.h>
#include <aws/lexv2-models/model/DescribeCustomVocabularyMetadataRequest.h>
#include <aws/lexv2-models/model/DescribeExportRequest.h>
#include <aws/lexv2-models/model/DescribeImportRequest.h>
#include <aws/lexv2-models/model/DescribeIntentRequest.h>
#include <aws/lexv2-models/model/DescribeResourcePolicyRequest.h>
#include <aws/lexv2-models/model/DescribeSlotRequest.h>
#include <aws/lexv2-models/model/DescribeSlotTypeRequest.h>
#include <aws/lexv2-models/model/DescribeTestExecutionRequest.h>
#include <aws/lexv2-models/model/DescribeTestSetDiscrepancyReportRequest.h>
#include <aws/lexv2-models/model/DescribeTestSetGenerationRequest.h>
#include <aws/lexv2-models/model/DescribeTestSetRequest.h>
#include <aws/lexv2-models/model/GenerateBotElementRequest.h>
#include <aws/lexv2-models/model/GetTestExecutionArtifactsUrlRequest.h>
#include <aws/lexv2-models/model/ListAggregatedUtterancesRequest.h>
#include <aws/lexv2-models/model/ListBotAliasReplicasRequest.h>
#include <aws/lexv2-models/model/ListBotAliasesRequest.h>
#include <aws/lexv2-models/model/ListBotAnalyzerHistoryRequest.h>
#include <aws/lexv2-models/model/ListBotLocalesRequest.h>
#include <aws/lexv2-models/model/ListBotRecommendationsRequest.h>
#include <aws/lexv2-models/model/ListBotReplicasRequest.h>
#include <aws/lexv2-models/model/ListBotResourceGenerationsRequest.h>
#include <aws/lexv2-models/model/ListBotVersionReplicasRequest.h>
#include <aws/lexv2-models/model/ListBotVersionsRequest.h>
#include <aws/lexv2-models/model/ListBotsRequest.h>
#include <aws/lexv2-models/model/ListBuiltInIntentsRequest.h>
#include <aws/lexv2-models/model/ListBuiltInSlotTypesRequest.h>
#include <aws/lexv2-models/model/ListCustomVocabularyItemsRequest.h>
#include <aws/lexv2-models/model/ListExportsRequest.h>
#include <aws/lexv2-models/model/ListImportsRequest.h>
#include <aws/lexv2-models/model/ListIntentMetricsRequest.h>
#include <aws/lexv2-models/model/ListIntentPathsRequest.h>
#include <aws/lexv2-models/model/ListIntentStageMetricsRequest.h>
#include <aws/lexv2-models/model/ListIntentsRequest.h>
#include <aws/lexv2-models/model/ListRecommendedIntentsRequest.h>
#include <aws/lexv2-models/model/ListSessionAnalyticsDataRequest.h>
#include <aws/lexv2-models/model/ListSessionMetricsRequest.h>
#include <aws/lexv2-models/model/ListSlotTypesRequest.h>
#include <aws/lexv2-models/model/ListSlotsRequest.h>
#include <aws/lexv2-models/model/ListTagsForResourceRequest.h>
#include <aws/lexv2-models/model/ListTestExecutionResultItemsRequest.h>
#include <aws/lexv2-models/model/ListTestExecutionsRequest.h>
#include <aws/lexv2-models/model/ListTestSetRecordsRequest.h>
#include <aws/lexv2-models/model/ListTestSetsRequest.h>
#include <aws/lexv2-models/model/ListUtteranceAnalyticsDataRequest.h>
#include <aws/lexv2-models/model/ListUtteranceMetricsRequest.h>
#include <aws/lexv2-models/model/SearchAssociatedTranscriptsRequest.h>
#include <aws/lexv2-models/model/StartBotAnalyzerRequest.h>
#include <aws/lexv2-models/model/StartBotRecommendationRequest.h>
#include <aws/lexv2-models/model/StartBotResourceGenerationRequest.h>
#include <aws/lexv2-models/model/StartImportRequest.h>
#include <aws/lexv2-models/model/StartTestExecutionRequest.h>
#include <aws/lexv2-models/model/StartTestSetGenerationRequest.h>
#include <aws/lexv2-models/model/StopBotAnalyzerRequest.h>
#include <aws/lexv2-models/model/StopBotRecommendationRequest.h>
#include <aws/lexv2-models/model/TagResourceRequest.h>
#include <aws/lexv2-models/model/UntagResourceRequest.h>
#include <aws/lexv2-models/model/UpdateBotAliasRequest.h>
#include <aws/lexv2-models/model/UpdateBotLocaleRequest.h>
#include <aws/lexv2-models/model/UpdateBotRecommendationRequest.h>
#include <aws/lexv2-models/model/UpdateBotRequest.h>
#include <aws/lexv2-models/model/UpdateExportRequest.h>
#include <aws/lexv2-models/model/UpdateIntentRequest.h>
#include <aws/lexv2-models/model/UpdateResourcePolicyRequest.h>
#include <aws/lexv2-models/model/UpdateSlotRequest.h>
#include <aws/lexv2-models/model/UpdateSlotTypeRequest.h>
#include <aws/lexv2-models/model/UpdateTestSetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexModelsV2;
using namespace Aws::LexModelsV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LexModelsV2 {
const char SERVICE_NAME[] = "lex";
const char ALLOCATION_TAG[] = "LexModelsV2Client";
}  // namespace LexModelsV2
}  // namespace Aws
const char* LexModelsV2Client::GetServiceName() { return SERVICE_NAME; }
const char* LexModelsV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

LexModelsV2Client::LexModelsV2Client(const LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration,
                                     std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const AWSCredentials& credentials, std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider,
                                     const LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider,
                                     const LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LexModelsV2Client::LexModelsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LexModelsV2Client::~LexModelsV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LexModelsV2EndpointProviderBase>& LexModelsV2Client::accessEndpointProvider() { return m_endpointProvider; }

void LexModelsV2Client::init(const LexModelsV2::LexModelsV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lex Models V2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lex");
}

void LexModelsV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LexModelsV2Client::InvokeOperationOutcome LexModelsV2Client::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchCreateCustomVocabularyItemOutcome LexModelsV2Client::BatchCreateCustomVocabularyItem(
    const BatchCreateCustomVocabularyItemRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateCustomVocabularyItem", "Required field: BotId, is not set");
    return BatchCreateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateCustomVocabularyItem", "Required field: BotVersion, is not set");
    return BatchCreateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateCustomVocabularyItem", "Required field: LocaleId, is not set");
    return BatchCreateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchcreate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? BatchCreateCustomVocabularyItemOutcome(result.GetResultWithOwnership())
                            : BatchCreateCustomVocabularyItemOutcome(std::move(result.GetError()));
}

BatchDeleteCustomVocabularyItemOutcome LexModelsV2Client::BatchDeleteCustomVocabularyItem(
    const BatchDeleteCustomVocabularyItemRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteCustomVocabularyItem", "Required field: BotId, is not set");
    return BatchDeleteCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteCustomVocabularyItem", "Required field: BotVersion, is not set");
    return BatchDeleteCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteCustomVocabularyItem", "Required field: LocaleId, is not set");
    return BatchDeleteCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchdelete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteCustomVocabularyItemOutcome(result.GetResultWithOwnership())
                            : BatchDeleteCustomVocabularyItemOutcome(std::move(result.GetError()));
}

BatchUpdateCustomVocabularyItemOutcome LexModelsV2Client::BatchUpdateCustomVocabularyItem(
    const BatchUpdateCustomVocabularyItemRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateCustomVocabularyItem", "Required field: BotId, is not set");
    return BatchUpdateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateCustomVocabularyItem", "Required field: BotVersion, is not set");
    return BatchUpdateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateCustomVocabularyItem", "Required field: LocaleId, is not set");
    return BatchUpdateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchupdate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? BatchUpdateCustomVocabularyItemOutcome(result.GetResultWithOwnership())
                            : BatchUpdateCustomVocabularyItemOutcome(std::move(result.GetError()));
}

BuildBotLocaleOutcome LexModelsV2Client::BuildBotLocale(const BuildBotLocaleRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BuildBotLocale", "Required field: BotId, is not set");
    return BuildBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BuildBotLocale", "Required field: BotVersion, is not set");
    return BuildBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BuildBotLocale", "Required field: LocaleId, is not set");
    return BuildBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BuildBotLocaleOutcome(result.GetResultWithOwnership()) : BuildBotLocaleOutcome(std::move(result.GetError()));
}

CreateBotOutcome LexModelsV2Client::CreateBot(const CreateBotRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBotOutcome(result.GetResultWithOwnership()) : CreateBotOutcome(std::move(result.GetError()));
}

CreateBotAliasOutcome LexModelsV2Client::CreateBotAlias(const CreateBotAliasRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBotAlias", "Required field: BotId, is not set");
    return CreateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBotAliasOutcome(result.GetResultWithOwnership()) : CreateBotAliasOutcome(std::move(result.GetError()));
}

CreateBotLocaleOutcome LexModelsV2Client::CreateBotLocale(const CreateBotLocaleRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBotLocale", "Required field: BotId, is not set");
    return CreateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBotLocale", "Required field: BotVersion, is not set");
    return CreateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBotLocaleOutcome(result.GetResultWithOwnership())
                            : CreateBotLocaleOutcome(std::move(result.GetError()));
}

CreateBotReplicaOutcome LexModelsV2Client::CreateBotReplica(const CreateBotReplicaRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBotReplica", "Required field: BotId, is not set");
    return CreateBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBotReplicaOutcome(result.GetResultWithOwnership())
                            : CreateBotReplicaOutcome(std::move(result.GetError()));
}

CreateBotVersionOutcome LexModelsV2Client::CreateBotVersion(const CreateBotVersionRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBotVersion", "Required field: BotId, is not set");
    return CreateBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBotVersionOutcome(result.GetResultWithOwnership())
                            : CreateBotVersionOutcome(std::move(result.GetError()));
}

CreateExportOutcome LexModelsV2Client::CreateExport(const CreateExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateExportOutcome(result.GetResultWithOwnership()) : CreateExportOutcome(std::move(result.GetError()));
}

CreateIntentOutcome LexModelsV2Client::CreateIntent(const CreateIntentRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntent", "Required field: BotId, is not set");
    return CreateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntent", "Required field: BotVersion, is not set");
    return CreateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntent", "Required field: LocaleId, is not set");
    return CreateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateIntentOutcome(result.GetResultWithOwnership()) : CreateIntentOutcome(std::move(result.GetError()));
}

CreateResourcePolicyOutcome LexModelsV2Client::CreateResourcePolicy(const CreateResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicy", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourcePolicyOutcome(result.GetResultWithOwnership())
                            : CreateResourcePolicyOutcome(std::move(result.GetError()));
}

CreateResourcePolicyStatementOutcome LexModelsV2Client::CreateResourcePolicyStatement(
    const CreateResourcePolicyStatementRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicyStatement", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/statements/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourcePolicyStatementOutcome(result.GetResultWithOwnership())
                            : CreateResourcePolicyStatementOutcome(std::move(result.GetError()));
}

CreateSlotOutcome LexModelsV2Client::CreateSlot(const CreateSlotRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: BotId, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: BotVersion, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: LocaleId, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: IntentId, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [IntentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slots/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateSlotOutcome(result.GetResultWithOwnership()) : CreateSlotOutcome(std::move(result.GetError()));
}

CreateSlotTypeOutcome LexModelsV2Client::CreateSlotType(const CreateSlotTypeRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlotType", "Required field: BotId, is not set");
    return CreateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlotType", "Required field: BotVersion, is not set");
    return CreateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSlotType", "Required field: LocaleId, is not set");
    return CreateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateSlotTypeOutcome(result.GetResultWithOwnership()) : CreateSlotTypeOutcome(std::move(result.GetError()));
}

CreateTestSetDiscrepancyReportOutcome LexModelsV2Client::CreateTestSetDiscrepancyReport(
    const CreateTestSetDiscrepancyReportRequest& request) const {
  if (!request.TestSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTestSetDiscrepancyReport", "Required field: TestSetId, is not set");
    return CreateTestSetDiscrepancyReportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsetdiscrepancy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTestSetDiscrepancyReportOutcome(result.GetResultWithOwnership())
                            : CreateTestSetDiscrepancyReportOutcome(std::move(result.GetError()));
}

CreateUploadUrlOutcome LexModelsV2Client::CreateUploadUrl(const CreateUploadUrlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createuploadurl/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUploadUrlOutcome(result.GetResultWithOwnership())
                            : CreateUploadUrlOutcome(std::move(result.GetError()));
}

DeleteBotOutcome LexModelsV2Client::DeleteBot(const DeleteBotRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: BotId, is not set");
    return DeleteBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBotOutcome(result.GetResultWithOwnership()) : DeleteBotOutcome(std::move(result.GetError()));
}

DeleteBotAliasOutcome LexModelsV2Client::DeleteBotAlias(const DeleteBotAliasRequest& request) const {
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: BotAliasId, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotAliasId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: BotId, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBotAliasOutcome(result.GetResultWithOwnership()) : DeleteBotAliasOutcome(std::move(result.GetError()));
}

DeleteBotAnalyzerRecommendationOutcome LexModelsV2Client::DeleteBotAnalyzerRecommendation(
    const DeleteBotAnalyzerRecommendationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotAnalyzerRecommendation", "Required field: BotId, is not set");
    return DeleteBotAnalyzerRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotAnalyzerRequestIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotAnalyzerRecommendation", "Required field: BotAnalyzerRequestId, is not set");
    return DeleteBotAnalyzerRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAnalyzerRequestId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botanalyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAnalyzerRequestId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBotAnalyzerRecommendationOutcome(result.GetResultWithOwnership())
                            : DeleteBotAnalyzerRecommendationOutcome(std::move(result.GetError()));
}

DeleteBotLocaleOutcome LexModelsV2Client::DeleteBotLocale(const DeleteBotLocaleRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotLocale", "Required field: BotId, is not set");
    return DeleteBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotLocale", "Required field: BotVersion, is not set");
    return DeleteBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotLocale", "Required field: LocaleId, is not set");
    return DeleteBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBotLocaleOutcome(result.GetResultWithOwnership())
                            : DeleteBotLocaleOutcome(std::move(result.GetError()));
}

DeleteBotReplicaOutcome LexModelsV2Client::DeleteBotReplica(const DeleteBotReplicaRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotReplica", "Required field: BotId, is not set");
    return DeleteBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotReplica", "Required field: ReplicaRegion, is not set");
    return DeleteBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ReplicaRegion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBotReplicaOutcome(result.GetResultWithOwnership())
                            : DeleteBotReplicaOutcome(std::move(result.GetError()));
}

DeleteBotVersionOutcome LexModelsV2Client::DeleteBotVersion(const DeleteBotVersionRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: BotId, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: BotVersion, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBotVersionOutcome(result.GetResultWithOwnership())
                            : DeleteBotVersionOutcome(std::move(result.GetError()));
}

DeleteCustomVocabularyOutcome LexModelsV2Client::DeleteCustomVocabulary(const DeleteCustomVocabularyRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomVocabulary", "Required field: BotId, is not set");
    return DeleteCustomVocabularyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomVocabulary", "Required field: BotVersion, is not set");
    return DeleteCustomVocabularyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomVocabulary", "Required field: LocaleId, is not set");
    return DeleteCustomVocabularyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCustomVocabularyOutcome(result.GetResultWithOwnership())
                            : DeleteCustomVocabularyOutcome(std::move(result.GetError()));
}

DeleteExportOutcome LexModelsV2Client::DeleteExport(const DeleteExportRequest& request) const {
  if (!request.ExportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteExport", "Required field: ExportId, is not set");
    return DeleteExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ExportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteExportOutcome(result.GetResultWithOwnership()) : DeleteExportOutcome(std::move(result.GetError()));
}

DeleteImportOutcome LexModelsV2Client::DeleteImport(const DeleteImportRequest& request) const {
  if (!request.ImportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImport", "Required field: ImportId, is not set");
    return DeleteImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ImportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteImportOutcome(result.GetResultWithOwnership()) : DeleteImportOutcome(std::move(result.GetError()));
}

DeleteIntentOutcome LexModelsV2Client::DeleteIntent(const DeleteIntentRequest& request) const {
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: IntentId, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IntentId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: BotId, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: BotVersion, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: LocaleId, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIntentOutcome(result.GetResultWithOwnership()) : DeleteIntentOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome LexModelsV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyStatementOutcome LexModelsV2Client::DeleteResourcePolicyStatement(
    const DeleteResourcePolicyStatementRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicyStatement", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.StatementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicyStatement", "Required field: StatementId, is not set");
    return DeleteResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/statements/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResourcePolicyStatementOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyStatementOutcome(std::move(result.GetError()));
}

DeleteSlotOutcome LexModelsV2Client::DeleteSlot(const DeleteSlotRequest& request) const {
  if (!request.SlotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: SlotId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SlotId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: BotId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: BotVersion, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: LocaleId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: IntentId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [IntentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSlotOutcome(result.GetResultWithOwnership()) : DeleteSlotOutcome(std::move(result.GetError()));
}

DeleteSlotTypeOutcome LexModelsV2Client::DeleteSlotType(const DeleteSlotTypeRequest& request) const {
  if (!request.SlotTypeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: SlotTypeId, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SlotTypeId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: BotId, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: BotVersion, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: LocaleId, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotTypeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSlotTypeOutcome(result.GetResultWithOwnership()) : DeleteSlotTypeOutcome(std::move(result.GetError()));
}

DeleteTestSetOutcome LexModelsV2Client::DeleteTestSet(const DeleteTestSetRequest& request) const {
  if (!request.TestSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTestSet", "Required field: TestSetId, is not set");
    return DeleteTestSetOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TestSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTestSetOutcome(result.GetResultWithOwnership()) : DeleteTestSetOutcome(std::move(result.GetError()));
}

DeleteUtterancesOutcome LexModelsV2Client::DeleteUtterances(const DeleteUtterancesRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: BotId, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/utterances/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteUtterancesOutcome(result.GetResultWithOwnership())
                            : DeleteUtterancesOutcome(std::move(result.GetError()));
}

DescribeBotOutcome LexModelsV2Client::DescribeBot(const DescribeBotRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBot", "Required field: BotId, is not set");
    return DescribeBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBotOutcome(result.GetResultWithOwnership()) : DescribeBotOutcome(std::move(result.GetError()));
}

DescribeBotAliasOutcome LexModelsV2Client::DescribeBotAlias(const DescribeBotAliasRequest& request) const {
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotAlias", "Required field: BotAliasId, is not set");
    return DescribeBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotAliasId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotAlias", "Required field: BotId, is not set");
    return DescribeBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBotAliasOutcome(result.GetResultWithOwnership())
                            : DescribeBotAliasOutcome(std::move(result.GetError()));
}

DescribeBotAnalyzerRecommendationOutcome LexModelsV2Client::DescribeBotAnalyzerRecommendation(
    const DescribeBotAnalyzerRecommendationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotAnalyzerRecommendation", "Required field: BotId, is not set");
    return DescribeBotAnalyzerRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotAnalyzerRequestIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotAnalyzerRecommendation", "Required field: BotAnalyzerRequestId, is not set");
    return DescribeBotAnalyzerRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAnalyzerRequestId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botanalyzer/describe/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAnalyzerRequestId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBotAnalyzerRecommendationOutcome(result.GetResultWithOwnership())
                            : DescribeBotAnalyzerRecommendationOutcome(std::move(result.GetError()));
}

DescribeBotLocaleOutcome LexModelsV2Client::DescribeBotLocale(const DescribeBotLocaleRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotLocale", "Required field: BotId, is not set");
    return DescribeBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotLocale", "Required field: BotVersion, is not set");
    return DescribeBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotLocale", "Required field: LocaleId, is not set");
    return DescribeBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBotLocaleOutcome(result.GetResultWithOwnership())
                            : DescribeBotLocaleOutcome(std::move(result.GetError()));
}

DescribeBotRecommendationOutcome LexModelsV2Client::DescribeBotRecommendation(const DescribeBotRecommendationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: BotId, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: BotVersion, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: LocaleId, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: BotRecommendationId, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBotRecommendationOutcome(result.GetResultWithOwnership())
                            : DescribeBotRecommendationOutcome(std::move(result.GetError()));
}

DescribeBotReplicaOutcome LexModelsV2Client::DescribeBotReplica(const DescribeBotReplicaRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotReplica", "Required field: BotId, is not set");
    return DescribeBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotReplica", "Required field: ReplicaRegion, is not set");
    return DescribeBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ReplicaRegion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBotReplicaOutcome(result.GetResultWithOwnership())
                            : DescribeBotReplicaOutcome(std::move(result.GetError()));
}

DescribeBotResourceGenerationOutcome LexModelsV2Client::DescribeBotResourceGeneration(
    const DescribeBotResourceGenerationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: BotId, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: BotVersion, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: LocaleId, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.GenerationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: GenerationId, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GenerationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/generations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGenerationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBotResourceGenerationOutcome(result.GetResultWithOwnership())
                            : DescribeBotResourceGenerationOutcome(std::move(result.GetError()));
}

DescribeBotVersionOutcome LexModelsV2Client::DescribeBotVersion(const DescribeBotVersionRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotVersion", "Required field: BotId, is not set");
    return DescribeBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBotVersion", "Required field: BotVersion, is not set");
    return DescribeBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BotVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBotVersionOutcome(result.GetResultWithOwnership())
                            : DescribeBotVersionOutcome(std::move(result.GetError()));
}

DescribeCustomVocabularyMetadataOutcome LexModelsV2Client::DescribeCustomVocabularyMetadata(
    const DescribeCustomVocabularyMetadataRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCustomVocabularyMetadata", "Required field: BotId, is not set");
    return DescribeCustomVocabularyMetadataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCustomVocabularyMetadata", "Required field: BotVersion, is not set");
    return DescribeCustomVocabularyMetadataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCustomVocabularyMetadata", "Required field: LocaleId, is not set");
    return DescribeCustomVocabularyMetadataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/metadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCustomVocabularyMetadataOutcome(result.GetResultWithOwnership())
                            : DescribeCustomVocabularyMetadataOutcome(std::move(result.GetError()));
}

DescribeExportOutcome LexModelsV2Client::DescribeExport(const DescribeExportRequest& request) const {
  if (!request.ExportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeExport", "Required field: ExportId, is not set");
    return DescribeExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ExportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeExportOutcome(result.GetResultWithOwnership()) : DescribeExportOutcome(std::move(result.GetError()));
}

DescribeImportOutcome LexModelsV2Client::DescribeImport(const DescribeImportRequest& request) const {
  if (!request.ImportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeImport", "Required field: ImportId, is not set");
    return DescribeImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ImportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeImportOutcome(result.GetResultWithOwnership()) : DescribeImportOutcome(std::move(result.GetError()));
}

DescribeIntentOutcome LexModelsV2Client::DescribeIntent(const DescribeIntentRequest& request) const {
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: IntentId, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IntentId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: BotId, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: BotVersion, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: LocaleId, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeIntentOutcome(result.GetResultWithOwnership()) : DescribeIntentOutcome(std::move(result.GetError()));
}

DescribeResourcePolicyOutcome LexModelsV2Client::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeResourcePolicy", "Required field: ResourceArn, is not set");
    return DescribeResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DescribeResourcePolicyOutcome(std::move(result.GetError()));
}

DescribeSlotOutcome LexModelsV2Client::DescribeSlot(const DescribeSlotRequest& request) const {
  if (!request.SlotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: SlotId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SlotId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: BotId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: BotVersion, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: LocaleId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: IntentId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IntentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeSlotOutcome(result.GetResultWithOwnership()) : DescribeSlotOutcome(std::move(result.GetError()));
}

DescribeSlotTypeOutcome LexModelsV2Client::DescribeSlotType(const DescribeSlotTypeRequest& request) const {
  if (!request.SlotTypeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: SlotTypeId, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SlotTypeId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: BotId, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: BotVersion, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: LocaleId, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotTypeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeSlotTypeOutcome(result.GetResultWithOwnership())
                            : DescribeSlotTypeOutcome(std::move(result.GetError()));
}

DescribeTestExecutionOutcome LexModelsV2Client::DescribeTestExecution(const DescribeTestExecutionRequest& request) const {
  if (!request.TestExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTestExecution", "Required field: TestExecutionId, is not set");
    return DescribeTestExecutionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [TestExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestExecutionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeTestExecutionOutcome(result.GetResultWithOwnership())
                            : DescribeTestExecutionOutcome(std::move(result.GetError()));
}

DescribeTestSetOutcome LexModelsV2Client::DescribeTestSet(const DescribeTestSetRequest& request) const {
  if (!request.TestSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTestSet", "Required field: TestSetId, is not set");
    return DescribeTestSetOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TestSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeTestSetOutcome(result.GetResultWithOwnership())
                            : DescribeTestSetOutcome(std::move(result.GetError()));
}

DescribeTestSetDiscrepancyReportOutcome LexModelsV2Client::DescribeTestSetDiscrepancyReport(
    const DescribeTestSetDiscrepancyReportRequest& request) const {
  if (!request.TestSetDiscrepancyReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTestSetDiscrepancyReport", "Required field: TestSetDiscrepancyReportId, is not set");
    return DescribeTestSetDiscrepancyReportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetDiscrepancyReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsetdiscrepancy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetDiscrepancyReportId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeTestSetDiscrepancyReportOutcome(result.GetResultWithOwnership())
                            : DescribeTestSetDiscrepancyReportOutcome(std::move(result.GetError()));
}

DescribeTestSetGenerationOutcome LexModelsV2Client::DescribeTestSetGeneration(const DescribeTestSetGenerationRequest& request) const {
  if (!request.TestSetGenerationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTestSetGeneration", "Required field: TestSetGenerationId, is not set");
    return DescribeTestSetGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetGenerationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsetgenerations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetGenerationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeTestSetGenerationOutcome(result.GetResultWithOwnership())
                            : DescribeTestSetGenerationOutcome(std::move(result.GetError()));
}

GenerateBotElementOutcome LexModelsV2Client::GenerateBotElement(const GenerateBotElementRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateBotElement", "Required field: BotId, is not set");
    return GenerateBotElementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateBotElement", "Required field: BotVersion, is not set");
    return GenerateBotElementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateBotElement", "Required field: LocaleId, is not set");
    return GenerateBotElementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/generate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateBotElementOutcome(result.GetResultWithOwnership())
                            : GenerateBotElementOutcome(std::move(result.GetError()));
}

GetTestExecutionArtifactsUrlOutcome LexModelsV2Client::GetTestExecutionArtifactsUrl(
    const GetTestExecutionArtifactsUrlRequest& request) const {
  if (!request.TestExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTestExecutionArtifactsUrl", "Required field: TestExecutionId, is not set");
    return GetTestExecutionArtifactsUrlOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestExecutionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/artifacturl");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTestExecutionArtifactsUrlOutcome(result.GetResultWithOwnership())
                            : GetTestExecutionArtifactsUrlOutcome(std::move(result.GetError()));
}

ListAggregatedUtterancesOutcome LexModelsV2Client::ListAggregatedUtterances(const ListAggregatedUtterancesRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAggregatedUtterances", "Required field: BotId, is not set");
    return ListAggregatedUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatedutterances/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAggregatedUtterancesOutcome(result.GetResultWithOwnership())
                            : ListAggregatedUtterancesOutcome(std::move(result.GetError()));
}

ListBotAliasReplicasOutcome LexModelsV2Client::ListBotAliasReplicas(const ListBotAliasReplicasRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotAliasReplicas", "Required field: BotId, is not set");
    return ListBotAliasReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotAliasReplicas", "Required field: ReplicaRegion, is not set");
    return ListBotAliasReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ReplicaRegion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotAliasReplicasOutcome(result.GetResultWithOwnership())
                            : ListBotAliasReplicasOutcome(std::move(result.GetError()));
}

ListBotAliasesOutcome LexModelsV2Client::ListBotAliases(const ListBotAliasesRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotAliases", "Required field: BotId, is not set");
    return ListBotAliasesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotAliasesOutcome(result.GetResultWithOwnership()) : ListBotAliasesOutcome(std::move(result.GetError()));
}

ListBotAnalyzerHistoryOutcome LexModelsV2Client::ListBotAnalyzerHistory(const ListBotAnalyzerHistoryRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotAnalyzerHistory", "Required field: BotId, is not set");
    return ListBotAnalyzerHistoryOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botanalyzer/history/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotAnalyzerHistoryOutcome(result.GetResultWithOwnership())
                            : ListBotAnalyzerHistoryOutcome(std::move(result.GetError()));
}

ListBotLocalesOutcome LexModelsV2Client::ListBotLocales(const ListBotLocalesRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotLocales", "Required field: BotId, is not set");
    return ListBotLocalesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotLocales", "Required field: BotVersion, is not set");
    return ListBotLocalesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotLocalesOutcome(result.GetResultWithOwnership()) : ListBotLocalesOutcome(std::move(result.GetError()));
}

ListBotRecommendationsOutcome LexModelsV2Client::ListBotRecommendations(const ListBotRecommendationsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotRecommendations", "Required field: BotId, is not set");
    return ListBotRecommendationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotRecommendations", "Required field: BotVersion, is not set");
    return ListBotRecommendationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotRecommendations", "Required field: LocaleId, is not set");
    return ListBotRecommendationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotRecommendationsOutcome(result.GetResultWithOwnership())
                            : ListBotRecommendationsOutcome(std::move(result.GetError()));
}

ListBotReplicasOutcome LexModelsV2Client::ListBotReplicas(const ListBotReplicasRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotReplicas", "Required field: BotId, is not set");
    return ListBotReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotReplicasOutcome(result.GetResultWithOwnership())
                            : ListBotReplicasOutcome(std::move(result.GetError()));
}

ListBotResourceGenerationsOutcome LexModelsV2Client::ListBotResourceGenerations(const ListBotResourceGenerationsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotResourceGenerations", "Required field: BotId, is not set");
    return ListBotResourceGenerationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotResourceGenerations", "Required field: BotVersion, is not set");
    return ListBotResourceGenerationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotResourceGenerations", "Required field: LocaleId, is not set");
    return ListBotResourceGenerationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/generations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotResourceGenerationsOutcome(result.GetResultWithOwnership())
                            : ListBotResourceGenerationsOutcome(std::move(result.GetError()));
}

ListBotVersionReplicasOutcome LexModelsV2Client::ListBotVersionReplicas(const ListBotVersionReplicasRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotVersionReplicas", "Required field: BotId, is not set");
    return ListBotVersionReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotVersionReplicas", "Required field: ReplicaRegion, is not set");
    return ListBotVersionReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ReplicaRegion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotVersionReplicasOutcome(result.GetResultWithOwnership())
                            : ListBotVersionReplicasOutcome(std::move(result.GetError()));
}

ListBotVersionsOutcome LexModelsV2Client::ListBotVersions(const ListBotVersionsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBotVersions", "Required field: BotId, is not set");
    return ListBotVersionsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotVersionsOutcome(result.GetResultWithOwnership())
                            : ListBotVersionsOutcome(std::move(result.GetError()));
}

ListBotsOutcome LexModelsV2Client::ListBots(const ListBotsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBotsOutcome(result.GetResultWithOwnership()) : ListBotsOutcome(std::move(result.GetError()));
}

ListBuiltInIntentsOutcome LexModelsV2Client::ListBuiltInIntents(const ListBuiltInIntentsRequest& request) const {
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBuiltInIntents", "Required field: LocaleId, is not set");
    return ListBuiltInIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/locales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBuiltInIntentsOutcome(result.GetResultWithOwnership())
                            : ListBuiltInIntentsOutcome(std::move(result.GetError()));
}

ListBuiltInSlotTypesOutcome LexModelsV2Client::ListBuiltInSlotTypes(const ListBuiltInSlotTypesRequest& request) const {
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBuiltInSlotTypes", "Required field: LocaleId, is not set");
    return ListBuiltInSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/locales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBuiltInSlotTypesOutcome(result.GetResultWithOwnership())
                            : ListBuiltInSlotTypesOutcome(std::move(result.GetError()));
}

ListCustomVocabularyItemsOutcome LexModelsV2Client::ListCustomVocabularyItems(const ListCustomVocabularyItemsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCustomVocabularyItems", "Required field: BotId, is not set");
    return ListCustomVocabularyItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCustomVocabularyItems", "Required field: BotVersion, is not set");
    return ListCustomVocabularyItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCustomVocabularyItems", "Required field: LocaleId, is not set");
    return ListCustomVocabularyItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCustomVocabularyItemsOutcome(result.GetResultWithOwnership())
                            : ListCustomVocabularyItemsOutcome(std::move(result.GetError()));
}

ListExportsOutcome LexModelsV2Client::ListExports(const ListExportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExportsOutcome(result.GetResultWithOwnership()) : ListExportsOutcome(std::move(result.GetError()));
}

ListImportsOutcome LexModelsV2Client::ListImports(const ListImportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportsOutcome(result.GetResultWithOwnership()) : ListImportsOutcome(std::move(result.GetError()));
}

ListIntentMetricsOutcome LexModelsV2Client::ListIntentMetrics(const ListIntentMetricsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntentMetrics", "Required field: BotId, is not set");
    return ListIntentMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/intentmetrics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntentMetricsOutcome(result.GetResultWithOwnership())
                            : ListIntentMetricsOutcome(std::move(result.GetError()));
}

ListIntentPathsOutcome LexModelsV2Client::ListIntentPaths(const ListIntentPathsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntentPaths", "Required field: BotId, is not set");
    return ListIntentPathsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/intentpaths");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntentPathsOutcome(result.GetResultWithOwnership())
                            : ListIntentPathsOutcome(std::move(result.GetError()));
}

ListIntentStageMetricsOutcome LexModelsV2Client::ListIntentStageMetrics(const ListIntentStageMetricsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntentStageMetrics", "Required field: BotId, is not set");
    return ListIntentStageMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/intentstagemetrics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntentStageMetricsOutcome(result.GetResultWithOwnership())
                            : ListIntentStageMetricsOutcome(std::move(result.GetError()));
}

ListIntentsOutcome LexModelsV2Client::ListIntents(const ListIntentsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntents", "Required field: BotId, is not set");
    return ListIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntents", "Required field: BotVersion, is not set");
    return ListIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIntents", "Required field: LocaleId, is not set");
    return ListIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntentsOutcome(result.GetResultWithOwnership()) : ListIntentsOutcome(std::move(result.GetError()));
}

ListRecommendedIntentsOutcome LexModelsV2Client::ListRecommendedIntents(const ListRecommendedIntentsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: BotId, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: BotVersion, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: LocaleId, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: BotRecommendationId, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotRecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRecommendedIntentsOutcome(result.GetResultWithOwnership())
                            : ListRecommendedIntentsOutcome(std::move(result.GetError()));
}

ListSessionAnalyticsDataOutcome LexModelsV2Client::ListSessionAnalyticsData(const ListSessionAnalyticsDataRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionAnalyticsData", "Required field: BotId, is not set");
    return ListSessionAnalyticsDataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/sessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSessionAnalyticsDataOutcome(result.GetResultWithOwnership())
                            : ListSessionAnalyticsDataOutcome(std::move(result.GetError()));
}

ListSessionMetricsOutcome LexModelsV2Client::ListSessionMetrics(const ListSessionMetricsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionMetrics", "Required field: BotId, is not set");
    return ListSessionMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/sessionmetrics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSessionMetricsOutcome(result.GetResultWithOwnership())
                            : ListSessionMetricsOutcome(std::move(result.GetError()));
}

ListSlotTypesOutcome LexModelsV2Client::ListSlotTypes(const ListSlotTypesRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSlotTypes", "Required field: BotId, is not set");
    return ListSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSlotTypes", "Required field: BotVersion, is not set");
    return ListSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSlotTypes", "Required field: LocaleId, is not set");
    return ListSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSlotTypesOutcome(result.GetResultWithOwnership()) : ListSlotTypesOutcome(std::move(result.GetError()));
}

ListSlotsOutcome LexModelsV2Client::ListSlots(const ListSlotsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: BotId, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: BotVersion, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: LocaleId, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: IntentId, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IntentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slots/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSlotsOutcome(result.GetResultWithOwnership()) : ListSlotsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome LexModelsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTestExecutionResultItemsOutcome LexModelsV2Client::ListTestExecutionResultItems(
    const ListTestExecutionResultItemsRequest& request) const {
  if (!request.TestExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestExecutionResultItems", "Required field: TestExecutionId, is not set");
    return ListTestExecutionResultItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestExecutionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/results");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTestExecutionResultItemsOutcome(result.GetResultWithOwnership())
                            : ListTestExecutionResultItemsOutcome(std::move(result.GetError()));
}

ListTestExecutionsOutcome LexModelsV2Client::ListTestExecutions(const ListTestExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTestExecutionsOutcome(result.GetResultWithOwnership())
                            : ListTestExecutionsOutcome(std::move(result.GetError()));
}

ListTestSetRecordsOutcome LexModelsV2Client::ListTestSetRecords(const ListTestSetRecordsRequest& request) const {
  if (!request.TestSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTestSetRecords", "Required field: TestSetId, is not set");
    return ListTestSetRecordsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TestSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTestSetRecordsOutcome(result.GetResultWithOwnership())
                            : ListTestSetRecordsOutcome(std::move(result.GetError()));
}

ListTestSetsOutcome LexModelsV2Client::ListTestSets(const ListTestSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTestSetsOutcome(result.GetResultWithOwnership()) : ListTestSetsOutcome(std::move(result.GetError()));
}

ListUtteranceAnalyticsDataOutcome LexModelsV2Client::ListUtteranceAnalyticsData(const ListUtteranceAnalyticsDataRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUtteranceAnalyticsData", "Required field: BotId, is not set");
    return ListUtteranceAnalyticsDataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/utterances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUtteranceAnalyticsDataOutcome(result.GetResultWithOwnership())
                            : ListUtteranceAnalyticsDataOutcome(std::move(result.GetError()));
}

ListUtteranceMetricsOutcome LexModelsV2Client::ListUtteranceMetrics(const ListUtteranceMetricsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUtteranceMetrics", "Required field: BotId, is not set");
    return ListUtteranceMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/utterancemetrics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUtteranceMetricsOutcome(result.GetResultWithOwnership())
                            : ListUtteranceMetricsOutcome(std::move(result.GetError()));
}

SearchAssociatedTranscriptsOutcome LexModelsV2Client::SearchAssociatedTranscripts(const SearchAssociatedTranscriptsRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: BotId, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: BotVersion, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: LocaleId, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: BotRecommendationId, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associatedtranscripts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchAssociatedTranscriptsOutcome(result.GetResultWithOwnership())
                            : SearchAssociatedTranscriptsOutcome(std::move(result.GetError()));
}

StartBotAnalyzerOutcome LexModelsV2Client::StartBotAnalyzer(const StartBotAnalyzerRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBotAnalyzer", "Required field: BotId, is not set");
    return StartBotAnalyzerOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botanalyzer/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartBotAnalyzerOutcome(result.GetResultWithOwnership())
                            : StartBotAnalyzerOutcome(std::move(result.GetError()));
}

StartBotRecommendationOutcome LexModelsV2Client::StartBotRecommendation(const StartBotRecommendationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBotRecommendation", "Required field: BotId, is not set");
    return StartBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBotRecommendation", "Required field: BotVersion, is not set");
    return StartBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBotRecommendation", "Required field: LocaleId, is not set");
    return StartBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartBotRecommendationOutcome(result.GetResultWithOwnership())
                            : StartBotRecommendationOutcome(std::move(result.GetError()));
}

StartBotResourceGenerationOutcome LexModelsV2Client::StartBotResourceGeneration(const StartBotResourceGenerationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBotResourceGeneration", "Required field: BotId, is not set");
    return StartBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBotResourceGeneration", "Required field: BotVersion, is not set");
    return StartBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBotResourceGeneration", "Required field: LocaleId, is not set");
    return StartBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/startgeneration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartBotResourceGenerationOutcome(result.GetResultWithOwnership())
                            : StartBotResourceGenerationOutcome(std::move(result.GetError()));
}

StartImportOutcome LexModelsV2Client::StartImport(const StartImportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartImportOutcome(result.GetResultWithOwnership()) : StartImportOutcome(std::move(result.GetError()));
}

StartTestExecutionOutcome LexModelsV2Client::StartTestExecution(const StartTestExecutionRequest& request) const {
  if (!request.TestSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartTestExecution", "Required field: TestSetId, is not set");
    return StartTestExecutionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TestSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTestExecutionOutcome(result.GetResultWithOwnership())
                            : StartTestExecutionOutcome(std::move(result.GetError()));
}

StartTestSetGenerationOutcome LexModelsV2Client::StartTestSetGeneration(const StartTestSetGenerationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsetgenerations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartTestSetGenerationOutcome(result.GetResultWithOwnership())
                            : StartTestSetGenerationOutcome(std::move(result.GetError()));
}

StopBotAnalyzerOutcome LexModelsV2Client::StopBotAnalyzer(const StopBotAnalyzerRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBotAnalyzer", "Required field: BotId, is not set");
    return StopBotAnalyzerOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotId]", false));
  }
  if (!request.BotAnalyzerRequestIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBotAnalyzer", "Required field: BotAnalyzerRequestId, is not set");
    return StopBotAnalyzerOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotAnalyzerRequestId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botanalyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAnalyzerRequestId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StopBotAnalyzerOutcome(result.GetResultWithOwnership())
                            : StopBotAnalyzerOutcome(std::move(result.GetError()));
}

StopBotRecommendationOutcome LexModelsV2Client::StopBotRecommendation(const StopBotRecommendationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: BotId, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: BotVersion, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: LocaleId, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: BotRecommendationId, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [BotRecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stopbotrecommendation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StopBotRecommendationOutcome(result.GetResultWithOwnership())
                            : StopBotRecommendationOutcome(std::move(result.GetError()));
}

TagResourceOutcome LexModelsV2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceARN, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome LexModelsV2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceARN, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceARN]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateBotOutcome LexModelsV2Client::UpdateBot(const UpdateBotRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: BotId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBotOutcome(result.GetResultWithOwnership()) : UpdateBotOutcome(std::move(result.GetError()));
}

UpdateBotAliasOutcome LexModelsV2Client::UpdateBotAlias(const UpdateBotAliasRequest& request) const {
  if (!request.BotAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotAlias", "Required field: BotAliasId, is not set");
    return UpdateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotAliasId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotAlias", "Required field: BotId, is not set");
    return UpdateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBotAliasOutcome(result.GetResultWithOwnership()) : UpdateBotAliasOutcome(std::move(result.GetError()));
}

UpdateBotLocaleOutcome LexModelsV2Client::UpdateBotLocale(const UpdateBotLocaleRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotLocale", "Required field: BotId, is not set");
    return UpdateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotLocale", "Required field: BotVersion, is not set");
    return UpdateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotLocale", "Required field: LocaleId, is not set");
    return UpdateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBotLocaleOutcome(result.GetResultWithOwnership())
                            : UpdateBotLocaleOutcome(std::move(result.GetError()));
}

UpdateBotRecommendationOutcome LexModelsV2Client::UpdateBotRecommendation(const UpdateBotRecommendationRequest& request) const {
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: BotId, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: BotVersion, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: LocaleId, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: BotRecommendationId, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(
        LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBotRecommendationOutcome(result.GetResultWithOwnership())
                            : UpdateBotRecommendationOutcome(std::move(result.GetError()));
}

UpdateExportOutcome LexModelsV2Client::UpdateExport(const UpdateExportRequest& request) const {
  if (!request.ExportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateExport", "Required field: ExportId, is not set");
    return UpdateExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ExportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateExportOutcome(result.GetResultWithOwnership()) : UpdateExportOutcome(std::move(result.GetError()));
}

UpdateIntentOutcome LexModelsV2Client::UpdateIntent(const UpdateIntentRequest& request) const {
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: IntentId, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IntentId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: BotId, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: BotVersion, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: LocaleId, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateIntentOutcome(result.GetResultWithOwnership()) : UpdateIntentOutcome(std::move(result.GetError()));
}

UpdateResourcePolicyOutcome LexModelsV2Client::UpdateResourcePolicy(const UpdateResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourcePolicy", "Required field: ResourceArn, is not set");
    return UpdateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateResourcePolicyOutcome(result.GetResultWithOwnership())
                            : UpdateResourcePolicyOutcome(std::move(result.GetError()));
}

UpdateSlotOutcome LexModelsV2Client::UpdateSlot(const UpdateSlotRequest& request) const {
  if (!request.SlotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: SlotId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SlotId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: BotId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: BotVersion, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: LocaleId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: IntentId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [IntentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSlotOutcome(result.GetResultWithOwnership()) : UpdateSlotOutcome(std::move(result.GetError()));
}

UpdateSlotTypeOutcome LexModelsV2Client::UpdateSlotType(const UpdateSlotTypeRequest& request) const {
  if (!request.SlotTypeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: SlotTypeId, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SlotTypeId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: BotId, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: BotVersion, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: LocaleId, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LocaleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotTypeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSlotTypeOutcome(result.GetResultWithOwnership()) : UpdateSlotTypeOutcome(std::move(result.GetError()));
}

UpdateTestSetOutcome LexModelsV2Client::UpdateTestSet(const UpdateTestSetRequest& request) const {
  if (!request.TestSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTestSet", "Required field: TestSetId, is not set");
    return UpdateTestSetOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TestSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTestSetOutcome(result.GetResultWithOwnership()) : UpdateTestSetOutcome(std::move(result.GetError()));
}
