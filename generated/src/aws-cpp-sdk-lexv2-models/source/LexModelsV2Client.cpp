/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/lexv2-models/LexModelsV2Client.h>
#include <aws/lexv2-models/LexModelsV2ErrorMarshaller.h>
#include <aws/lexv2-models/LexModelsV2EndpointProvider.h>
#include <aws/lexv2-models/model/BatchCreateCustomVocabularyItemRequest.h>
#include <aws/lexv2-models/model/BatchDeleteCustomVocabularyItemRequest.h>
#include <aws/lexv2-models/model/BatchUpdateCustomVocabularyItemRequest.h>
#include <aws/lexv2-models/model/BuildBotLocaleRequest.h>
#include <aws/lexv2-models/model/CreateBotRequest.h>
#include <aws/lexv2-models/model/CreateBotAliasRequest.h>
#include <aws/lexv2-models/model/CreateBotLocaleRequest.h>
#include <aws/lexv2-models/model/CreateBotReplicaRequest.h>
#include <aws/lexv2-models/model/CreateBotVersionRequest.h>
#include <aws/lexv2-models/model/CreateExportRequest.h>
#include <aws/lexv2-models/model/CreateIntentRequest.h>
#include <aws/lexv2-models/model/CreateResourcePolicyRequest.h>
#include <aws/lexv2-models/model/CreateResourcePolicyStatementRequest.h>
#include <aws/lexv2-models/model/CreateSlotRequest.h>
#include <aws/lexv2-models/model/CreateSlotTypeRequest.h>
#include <aws/lexv2-models/model/CreateTestSetDiscrepancyReportRequest.h>
#include <aws/lexv2-models/model/CreateUploadUrlRequest.h>
#include <aws/lexv2-models/model/DeleteBotRequest.h>
#include <aws/lexv2-models/model/DeleteBotAliasRequest.h>
#include <aws/lexv2-models/model/DeleteBotLocaleRequest.h>
#include <aws/lexv2-models/model/DeleteBotReplicaRequest.h>
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
#include <aws/lexv2-models/model/DescribeBotRequest.h>
#include <aws/lexv2-models/model/DescribeBotAliasRequest.h>
#include <aws/lexv2-models/model/DescribeBotLocaleRequest.h>
#include <aws/lexv2-models/model/DescribeBotRecommendationRequest.h>
#include <aws/lexv2-models/model/DescribeBotReplicaRequest.h>
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
#include <aws/lexv2-models/model/DescribeTestSetRequest.h>
#include <aws/lexv2-models/model/DescribeTestSetDiscrepancyReportRequest.h>
#include <aws/lexv2-models/model/DescribeTestSetGenerationRequest.h>
#include <aws/lexv2-models/model/GenerateBotElementRequest.h>
#include <aws/lexv2-models/model/GetTestExecutionArtifactsUrlRequest.h>
#include <aws/lexv2-models/model/ListAggregatedUtterancesRequest.h>
#include <aws/lexv2-models/model/ListBotAliasReplicasRequest.h>
#include <aws/lexv2-models/model/ListBotAliasesRequest.h>
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
#include <aws/lexv2-models/model/StartBotRecommendationRequest.h>
#include <aws/lexv2-models/model/StartBotResourceGenerationRequest.h>
#include <aws/lexv2-models/model/StartImportRequest.h>
#include <aws/lexv2-models/model/StartTestExecutionRequest.h>
#include <aws/lexv2-models/model/StartTestSetGenerationRequest.h>
#include <aws/lexv2-models/model/StopBotRecommendationRequest.h>
#include <aws/lexv2-models/model/TagResourceRequest.h>
#include <aws/lexv2-models/model/UntagResourceRequest.h>
#include <aws/lexv2-models/model/UpdateBotRequest.h>
#include <aws/lexv2-models/model/UpdateBotAliasRequest.h>
#include <aws/lexv2-models/model/UpdateBotLocaleRequest.h>
#include <aws/lexv2-models/model/UpdateBotRecommendationRequest.h>
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

namespace Aws
{
  namespace LexModelsV2
  {
    const char SERVICE_NAME[] = "lex";
    const char ALLOCATION_TAG[] = "LexModelsV2Client";
  }
}
const char* LexModelsV2Client::GetServiceName() {return SERVICE_NAME;}
const char* LexModelsV2Client::GetAllocationTag() {return ALLOCATION_TAG;}

LexModelsV2Client::LexModelsV2Client(const LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration,
                                     std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const AWSCredentials& credentials,
                                     std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider,
                                     const LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider,
                                     const LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LexModelsV2Client::LexModelsV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LexModelsV2Client::~LexModelsV2Client()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<LexModelsV2EndpointProviderBase>& LexModelsV2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LexModelsV2Client::init(const LexModelsV2::LexModelsV2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Lex Models V2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LexModelsV2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchCreateCustomVocabularyItemOutcome LexModelsV2Client::BatchCreateCustomVocabularyItem(const BatchCreateCustomVocabularyItemRequest& request) const
{
  AWS_OPERATION_GUARD(BatchCreateCustomVocabularyItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateCustomVocabularyItem", "Required field: BotId, is not set");
    return BatchCreateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateCustomVocabularyItem", "Required field: BotVersion, is not set");
    return BatchCreateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateCustomVocabularyItem", "Required field: LocaleId, is not set");
    return BatchCreateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchCreateCustomVocabularyItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchCreateCustomVocabularyItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchCreateCustomVocabularyItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchCreateCustomVocabularyItemOutcome>(
    [&]()-> BatchCreateCustomVocabularyItemOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchcreate");
      return BatchCreateCustomVocabularyItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDeleteCustomVocabularyItemOutcome LexModelsV2Client::BatchDeleteCustomVocabularyItem(const BatchDeleteCustomVocabularyItemRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDeleteCustomVocabularyItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteCustomVocabularyItem", "Required field: BotId, is not set");
    return BatchDeleteCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteCustomVocabularyItem", "Required field: BotVersion, is not set");
    return BatchDeleteCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteCustomVocabularyItem", "Required field: LocaleId, is not set");
    return BatchDeleteCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchDeleteCustomVocabularyItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDeleteCustomVocabularyItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDeleteCustomVocabularyItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDeleteCustomVocabularyItemOutcome>(
    [&]()-> BatchDeleteCustomVocabularyItemOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchdelete");
      return BatchDeleteCustomVocabularyItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchUpdateCustomVocabularyItemOutcome LexModelsV2Client::BatchUpdateCustomVocabularyItem(const BatchUpdateCustomVocabularyItemRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpdateCustomVocabularyItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateCustomVocabularyItem", "Required field: BotId, is not set");
    return BatchUpdateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateCustomVocabularyItem", "Required field: BotVersion, is not set");
    return BatchUpdateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateCustomVocabularyItem", "Required field: LocaleId, is not set");
    return BatchUpdateCustomVocabularyItemOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchUpdateCustomVocabularyItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchUpdateCustomVocabularyItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchUpdateCustomVocabularyItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchUpdateCustomVocabularyItemOutcome>(
    [&]()-> BatchUpdateCustomVocabularyItemOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchupdate");
      return BatchUpdateCustomVocabularyItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BuildBotLocaleOutcome LexModelsV2Client::BuildBotLocale(const BuildBotLocaleRequest& request) const
{
  AWS_OPERATION_GUARD(BuildBotLocale);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BuildBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BuildBotLocale", "Required field: BotId, is not set");
    return BuildBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BuildBotLocale", "Required field: BotVersion, is not set");
    return BuildBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BuildBotLocale", "Required field: LocaleId, is not set");
    return BuildBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BuildBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BuildBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BuildBotLocale",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BuildBotLocaleOutcome>(
    [&]()-> BuildBotLocaleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BuildBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      return BuildBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBotOutcome LexModelsV2Client::CreateBot(const CreateBotRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBotOutcome>(
    [&]()-> CreateBotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      return CreateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBotAliasOutcome LexModelsV2Client::CreateBotAlias(const CreateBotAliasRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBotAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotAlias", "Required field: BotId, is not set");
    return CreateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBotAlias",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBotAliasOutcome>(
    [&]()-> CreateBotAliasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
      return CreateBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBotLocaleOutcome LexModelsV2Client::CreateBotLocale(const CreateBotLocaleRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBotLocale);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotLocale", "Required field: BotId, is not set");
    return CreateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotLocale", "Required field: BotVersion, is not set");
    return CreateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBotLocale",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBotLocaleOutcome>(
    [&]()-> CreateBotLocaleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      return CreateBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBotReplicaOutcome LexModelsV2Client::CreateBotReplica(const CreateBotReplicaRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBotReplica);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBotReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotReplica", "Required field: BotId, is not set");
    return CreateBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBotReplica, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBotReplica, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBotReplica",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBotReplicaOutcome>(
    [&]()-> CreateBotReplicaOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBotReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
      return CreateBotReplicaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBotVersionOutcome LexModelsV2Client::CreateBotVersion(const CreateBotVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBotVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotVersion", "Required field: BotId, is not set");
    return CreateBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBotVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBotVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBotVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBotVersionOutcome>(
    [&]()-> CreateBotVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      return CreateBotVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateExportOutcome LexModelsV2Client::CreateExport(const CreateExportRequest& request) const
{
  AWS_OPERATION_GUARD(CreateExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateExport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateExportOutcome>(
    [&]()-> CreateExportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
      return CreateExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIntentOutcome LexModelsV2Client::CreateIntent(const CreateIntentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateIntent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntent", "Required field: BotId, is not set");
    return CreateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntent", "Required field: BotVersion, is not set");
    return CreateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntent", "Required field: LocaleId, is not set");
    return CreateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIntent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIntentOutcome>(
    [&]()-> CreateIntentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      return CreateIntentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateResourcePolicyOutcome LexModelsV2Client::CreateResourcePolicy(const CreateResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(CreateResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicy", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateResourcePolicyOutcome>(
    [&]()-> CreateResourcePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return CreateResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateResourcePolicyStatementOutcome LexModelsV2Client::CreateResourcePolicyStatement(const CreateResourcePolicyStatementRequest& request) const
{
  AWS_OPERATION_GUARD(CreateResourcePolicyStatement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourcePolicyStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicyStatement", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateResourcePolicyStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateResourcePolicyStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateResourcePolicyStatement",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateResourcePolicyStatementOutcome>(
    [&]()-> CreateResourcePolicyStatementOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourcePolicyStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      endpointResolutionOutcome.GetResult().AddPathSegments("/statements/");
      return CreateResourcePolicyStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSlotOutcome LexModelsV2Client::CreateSlot(const CreateSlotRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSlot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: BotId, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: BotVersion, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: LocaleId, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlot", "Required field: IntentId, is not set");
    return CreateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSlot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSlotOutcome>(
    [&]()-> CreateSlotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slots/");
      return CreateSlotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSlotTypeOutcome LexModelsV2Client::CreateSlotType(const CreateSlotTypeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSlotType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlotType", "Required field: BotId, is not set");
    return CreateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlotType", "Required field: BotVersion, is not set");
    return CreateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlotType", "Required field: LocaleId, is not set");
    return CreateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSlotType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSlotTypeOutcome>(
    [&]()-> CreateSlotTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
      return CreateSlotTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTestSetDiscrepancyReportOutcome LexModelsV2Client::CreateTestSetDiscrepancyReport(const CreateTestSetDiscrepancyReportRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTestSetDiscrepancyReport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTestSetDiscrepancyReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTestSetDiscrepancyReport", "Required field: TestSetId, is not set");
    return CreateTestSetDiscrepancyReportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTestSetDiscrepancyReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTestSetDiscrepancyReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTestSetDiscrepancyReport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTestSetDiscrepancyReportOutcome>(
    [&]()-> CreateTestSetDiscrepancyReportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTestSetDiscrepancyReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsetdiscrepancy");
      return CreateTestSetDiscrepancyReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUploadUrlOutcome LexModelsV2Client::CreateUploadUrl(const CreateUploadUrlRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUploadUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateUploadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUploadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUploadUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUploadUrlOutcome>(
    [&]()-> CreateUploadUrlOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/createuploadurl/");
      return CreateUploadUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBotOutcome LexModelsV2Client::DeleteBot(const DeleteBotRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: BotId, is not set");
    return DeleteBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBotOutcome>(
    [&]()-> DeleteBotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      return DeleteBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBotAliasOutcome LexModelsV2Client::DeleteBotAlias(const DeleteBotAliasRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBotAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: BotAliasId, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: BotId, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBotAlias",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBotAliasOutcome>(
    [&]()-> DeleteBotAliasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      return DeleteBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBotLocaleOutcome LexModelsV2Client::DeleteBotLocale(const DeleteBotLocaleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBotLocale);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotLocale", "Required field: BotId, is not set");
    return DeleteBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotLocale", "Required field: BotVersion, is not set");
    return DeleteBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotLocale", "Required field: LocaleId, is not set");
    return DeleteBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBotLocale",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBotLocaleOutcome>(
    [&]()-> DeleteBotLocaleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      return DeleteBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBotReplicaOutcome LexModelsV2Client::DeleteBotReplica(const DeleteBotReplicaRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBotReplica);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBotReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotReplica", "Required field: BotId, is not set");
    return DeleteBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotReplica", "Required field: ReplicaRegion, is not set");
    return DeleteBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReplicaRegion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBotReplica, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBotReplica, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBotReplica",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBotReplicaOutcome>(
    [&]()-> DeleteBotReplicaOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBotReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
      return DeleteBotReplicaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBotVersionOutcome LexModelsV2Client::DeleteBotVersion(const DeleteBotVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBotVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: BotId, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: BotVersion, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBotVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBotVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBotVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBotVersionOutcome>(
    [&]()-> DeleteBotVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      return DeleteBotVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCustomVocabularyOutcome LexModelsV2Client::DeleteCustomVocabulary(const DeleteCustomVocabularyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCustomVocabulary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomVocabulary", "Required field: BotId, is not set");
    return DeleteCustomVocabularyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomVocabulary", "Required field: BotVersion, is not set");
    return DeleteCustomVocabularyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomVocabulary", "Required field: LocaleId, is not set");
    return DeleteCustomVocabularyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteCustomVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCustomVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCustomVocabulary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteCustomVocabularyOutcome>(
    [&]()-> DeleteCustomVocabularyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary");
      return DeleteCustomVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteExportOutcome LexModelsV2Client::DeleteExport(const DeleteExportRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExport", "Required field: ExportId, is not set");
    return DeleteExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteExport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteExportOutcome>(
    [&]()-> DeleteExportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
      return DeleteExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteImportOutcome LexModelsV2Client::DeleteImport(const DeleteImportRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteImport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImport", "Required field: ImportId, is not set");
    return DeleteImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteImport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteImportOutcome>(
    [&]()-> DeleteImportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportId());
      return DeleteImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIntentOutcome LexModelsV2Client::DeleteIntent(const DeleteIntentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIntent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: IntentId, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: BotId, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: BotVersion, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: LocaleId, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIntent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIntentOutcome>(
    [&]()-> DeleteIntentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
      return DeleteIntentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResourcePolicyOutcome LexModelsV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteResourcePolicyOutcome>(
    [&]()-> DeleteResourcePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResourcePolicyStatementOutcome LexModelsV2Client::DeleteResourcePolicyStatement(const DeleteResourcePolicyStatementRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourcePolicyStatement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicyStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicyStatement", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.StatementIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicyStatement", "Required field: StatementId, is not set");
    return DeleteResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteResourcePolicyStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteResourcePolicyStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteResourcePolicyStatement",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteResourcePolicyStatementOutcome>(
    [&]()-> DeleteResourcePolicyStatementOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicyStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      endpointResolutionOutcome.GetResult().AddPathSegments("/statements/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
      return DeleteResourcePolicyStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSlotOutcome LexModelsV2Client::DeleteSlot(const DeleteSlotRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSlot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SlotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: SlotId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SlotId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: BotId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: BotVersion, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: LocaleId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlot", "Required field: IntentId, is not set");
    return DeleteSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSlot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSlotOutcome>(
    [&]()-> DeleteSlotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
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
      return DeleteSlotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSlotTypeOutcome LexModelsV2Client::DeleteSlotType(const DeleteSlotTypeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSlotType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SlotTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: SlotTypeId, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SlotTypeId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: BotId, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: BotVersion, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: LocaleId, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSlotType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSlotTypeOutcome>(
    [&]()-> DeleteSlotTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotTypeId());
      return DeleteSlotTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTestSetOutcome LexModelsV2Client::DeleteTestSet(const DeleteTestSetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTestSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTestSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTestSet", "Required field: TestSetId, is not set");
    return DeleteTestSetOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTestSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTestSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTestSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTestSetOutcome>(
    [&]()-> DeleteTestSetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTestSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
      return DeleteTestSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteUtterancesOutcome LexModelsV2Client::DeleteUtterances(const DeleteUtterancesRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUtterances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: BotId, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteUtterances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteUtterances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteUtterances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteUtterancesOutcome>(
    [&]()-> DeleteUtterancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/utterances/");
      return DeleteUtterancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBotOutcome LexModelsV2Client::DescribeBot(const DescribeBotRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBot", "Required field: BotId, is not set");
    return DescribeBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBotOutcome>(
    [&]()-> DescribeBotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      return DescribeBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBotAliasOutcome LexModelsV2Client::DescribeBotAlias(const DescribeBotAliasRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBotAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotAlias", "Required field: BotAliasId, is not set");
    return DescribeBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotAlias", "Required field: BotId, is not set");
    return DescribeBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBotAlias",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBotAliasOutcome>(
    [&]()-> DescribeBotAliasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      return DescribeBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBotLocaleOutcome LexModelsV2Client::DescribeBotLocale(const DescribeBotLocaleRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBotLocale);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotLocale", "Required field: BotId, is not set");
    return DescribeBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotLocale", "Required field: BotVersion, is not set");
    return DescribeBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotLocale", "Required field: LocaleId, is not set");
    return DescribeBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBotLocale",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBotLocaleOutcome>(
    [&]()-> DescribeBotLocaleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      return DescribeBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBotRecommendationOutcome LexModelsV2Client::DescribeBotRecommendation(const DescribeBotRecommendationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBotRecommendation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: BotId, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: BotVersion, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: LocaleId, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotRecommendation", "Required field: BotRecommendationId, is not set");
    return DescribeBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBotRecommendation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBotRecommendationOutcome>(
    [&]()-> DescribeBotRecommendationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
      return DescribeBotRecommendationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBotReplicaOutcome LexModelsV2Client::DescribeBotReplica(const DescribeBotReplicaRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBotReplica);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBotReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotReplica", "Required field: BotId, is not set");
    return DescribeBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotReplica", "Required field: ReplicaRegion, is not set");
    return DescribeBotReplicaOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReplicaRegion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBotReplica, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBotReplica, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBotReplica",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBotReplicaOutcome>(
    [&]()-> DescribeBotReplicaOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
      return DescribeBotReplicaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBotResourceGenerationOutcome LexModelsV2Client::DescribeBotResourceGeneration(const DescribeBotResourceGenerationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBotResourceGeneration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBotResourceGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: BotId, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: BotVersion, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: LocaleId, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.GenerationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotResourceGeneration", "Required field: GenerationId, is not set");
    return DescribeBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GenerationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBotResourceGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBotResourceGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBotResourceGeneration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBotResourceGenerationOutcome>(
    [&]()-> DescribeBotResourceGenerationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotResourceGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/generations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGenerationId());
      return DescribeBotResourceGenerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBotVersionOutcome LexModelsV2Client::DescribeBotVersion(const DescribeBotVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBotVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotVersion", "Required field: BotId, is not set");
    return DescribeBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBotVersion", "Required field: BotVersion, is not set");
    return DescribeBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBotVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBotVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBotVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBotVersionOutcome>(
    [&]()-> DescribeBotVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      return DescribeBotVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCustomVocabularyMetadataOutcome LexModelsV2Client::DescribeCustomVocabularyMetadata(const DescribeCustomVocabularyMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeCustomVocabularyMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomVocabularyMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCustomVocabularyMetadata", "Required field: BotId, is not set");
    return DescribeCustomVocabularyMetadataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCustomVocabularyMetadata", "Required field: BotVersion, is not set");
    return DescribeCustomVocabularyMetadataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCustomVocabularyMetadata", "Required field: LocaleId, is not set");
    return DescribeCustomVocabularyMetadataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeCustomVocabularyMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeCustomVocabularyMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeCustomVocabularyMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeCustomVocabularyMetadataOutcome>(
    [&]()-> DescribeCustomVocabularyMetadataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomVocabularyMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/metadata");
      return DescribeCustomVocabularyMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeExportOutcome LexModelsV2Client::DescribeExport(const DescribeExportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeExport", "Required field: ExportId, is not set");
    return DescribeExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeExport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeExportOutcome>(
    [&]()-> DescribeExportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
      return DescribeExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeImportOutcome LexModelsV2Client::DescribeImport(const DescribeImportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeImport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeImport", "Required field: ImportId, is not set");
    return DescribeImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeImport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeImportOutcome>(
    [&]()-> DescribeImportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportId());
      return DescribeImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIntentOutcome LexModelsV2Client::DescribeIntent(const DescribeIntentRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIntent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: IntentId, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: BotId, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: BotVersion, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIntent", "Required field: LocaleId, is not set");
    return DescribeIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeIntent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIntentOutcome>(
    [&]()-> DescribeIntentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
      return DescribeIntentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeResourcePolicyOutcome LexModelsV2Client::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeResourcePolicy", "Required field: ResourceArn, is not set");
    return DescribeResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeResourcePolicyOutcome>(
    [&]()-> DescribeResourcePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return DescribeResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSlotOutcome LexModelsV2Client::DescribeSlot(const DescribeSlotRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSlot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SlotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: SlotId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SlotId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: BotId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: BotVersion, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: LocaleId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlot", "Required field: IntentId, is not set");
    return DescribeSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeSlot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSlotOutcome>(
    [&]()-> DescribeSlotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
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
      return DescribeSlotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSlotTypeOutcome LexModelsV2Client::DescribeSlotType(const DescribeSlotTypeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSlotType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SlotTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: SlotTypeId, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SlotTypeId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: BotId, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: BotVersion, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSlotType", "Required field: LocaleId, is not set");
    return DescribeSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeSlotType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSlotTypeOutcome>(
    [&]()-> DescribeSlotTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotTypeId());
      return DescribeSlotTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTestExecutionOutcome LexModelsV2Client::DescribeTestExecution(const DescribeTestExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTestExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTestExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestExecutionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTestExecution", "Required field: TestExecutionId, is not set");
    return DescribeTestExecutionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestExecutionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTestExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTestExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTestExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTestExecutionOutcome>(
    [&]()-> DescribeTestExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTestExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestExecutionId());
      return DescribeTestExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTestSetOutcome LexModelsV2Client::DescribeTestSet(const DescribeTestSetRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTestSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTestSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTestSet", "Required field: TestSetId, is not set");
    return DescribeTestSetOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTestSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTestSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTestSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTestSetOutcome>(
    [&]()-> DescribeTestSetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTestSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
      return DescribeTestSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTestSetDiscrepancyReportOutcome LexModelsV2Client::DescribeTestSetDiscrepancyReport(const DescribeTestSetDiscrepancyReportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTestSetDiscrepancyReport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTestSetDiscrepancyReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetDiscrepancyReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTestSetDiscrepancyReport", "Required field: TestSetDiscrepancyReportId, is not set");
    return DescribeTestSetDiscrepancyReportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetDiscrepancyReportId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTestSetDiscrepancyReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTestSetDiscrepancyReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTestSetDiscrepancyReport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTestSetDiscrepancyReportOutcome>(
    [&]()-> DescribeTestSetDiscrepancyReportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTestSetDiscrepancyReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsetdiscrepancy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetDiscrepancyReportId());
      return DescribeTestSetDiscrepancyReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTestSetGenerationOutcome LexModelsV2Client::DescribeTestSetGeneration(const DescribeTestSetGenerationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTestSetGeneration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTestSetGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetGenerationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTestSetGeneration", "Required field: TestSetGenerationId, is not set");
    return DescribeTestSetGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetGenerationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTestSetGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTestSetGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTestSetGeneration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTestSetGenerationOutcome>(
    [&]()-> DescribeTestSetGenerationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTestSetGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsetgenerations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetGenerationId());
      return DescribeTestSetGenerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateBotElementOutcome LexModelsV2Client::GenerateBotElement(const GenerateBotElementRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateBotElement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateBotElement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateBotElement", "Required field: BotId, is not set");
    return GenerateBotElementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateBotElement", "Required field: BotVersion, is not set");
    return GenerateBotElementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateBotElement", "Required field: LocaleId, is not set");
    return GenerateBotElementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GenerateBotElement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateBotElement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateBotElement",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateBotElementOutcome>(
    [&]()-> GenerateBotElementOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateBotElement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/generate");
      return GenerateBotElementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTestExecutionArtifactsUrlOutcome LexModelsV2Client::GetTestExecutionArtifactsUrl(const GetTestExecutionArtifactsUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetTestExecutionArtifactsUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTestExecutionArtifactsUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestExecutionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTestExecutionArtifactsUrl", "Required field: TestExecutionId, is not set");
    return GetTestExecutionArtifactsUrlOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestExecutionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTestExecutionArtifactsUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTestExecutionArtifactsUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTestExecutionArtifactsUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTestExecutionArtifactsUrlOutcome>(
    [&]()-> GetTestExecutionArtifactsUrlOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTestExecutionArtifactsUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestExecutionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/artifacturl");
      return GetTestExecutionArtifactsUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAggregatedUtterancesOutcome LexModelsV2Client::ListAggregatedUtterances(const ListAggregatedUtterancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAggregatedUtterances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAggregatedUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAggregatedUtterances", "Required field: BotId, is not set");
    return ListAggregatedUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAggregatedUtterances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAggregatedUtterances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAggregatedUtterances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAggregatedUtterancesOutcome>(
    [&]()-> ListAggregatedUtterancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAggregatedUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatedutterances/");
      return ListAggregatedUtterancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotAliasReplicasOutcome LexModelsV2Client::ListBotAliasReplicas(const ListBotAliasReplicasRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotAliasReplicas);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotAliasReplicas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotAliasReplicas", "Required field: BotId, is not set");
    return ListBotAliasReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotAliasReplicas", "Required field: ReplicaRegion, is not set");
    return ListBotAliasReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReplicaRegion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotAliasReplicas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotAliasReplicas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotAliasReplicas",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotAliasReplicasOutcome>(
    [&]()-> ListBotAliasReplicasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotAliasReplicas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
      return ListBotAliasReplicasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotAliasesOutcome LexModelsV2Client::ListBotAliases(const ListBotAliasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotAliases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotAliases", "Required field: BotId, is not set");
    return ListBotAliasesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotAliases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotAliasesOutcome>(
    [&]()-> ListBotAliasesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
      return ListBotAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotLocalesOutcome LexModelsV2Client::ListBotLocales(const ListBotLocalesRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotLocales);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotLocales, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotLocales", "Required field: BotId, is not set");
    return ListBotLocalesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotLocales", "Required field: BotVersion, is not set");
    return ListBotLocalesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotLocales, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotLocales, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotLocales",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotLocalesOutcome>(
    [&]()-> ListBotLocalesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotLocales, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      return ListBotLocalesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotRecommendationsOutcome LexModelsV2Client::ListBotRecommendations(const ListBotRecommendationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotRecommendations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotRecommendations", "Required field: BotId, is not set");
    return ListBotRecommendationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotRecommendations", "Required field: BotVersion, is not set");
    return ListBotRecommendationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotRecommendations", "Required field: LocaleId, is not set");
    return ListBotRecommendationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotRecommendations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotRecommendations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotRecommendations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotRecommendationsOutcome>(
    [&]()-> ListBotRecommendationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
      return ListBotRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotReplicasOutcome LexModelsV2Client::ListBotReplicas(const ListBotReplicasRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotReplicas);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotReplicas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotReplicas", "Required field: BotId, is not set");
    return ListBotReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotReplicas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotReplicas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotReplicas",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotReplicasOutcome>(
    [&]()-> ListBotReplicasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotReplicas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
      return ListBotReplicasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotResourceGenerationsOutcome LexModelsV2Client::ListBotResourceGenerations(const ListBotResourceGenerationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotResourceGenerations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotResourceGenerations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotResourceGenerations", "Required field: BotId, is not set");
    return ListBotResourceGenerationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotResourceGenerations", "Required field: BotVersion, is not set");
    return ListBotResourceGenerationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotResourceGenerations", "Required field: LocaleId, is not set");
    return ListBotResourceGenerationsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotResourceGenerations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotResourceGenerations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotResourceGenerations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotResourceGenerationsOutcome>(
    [&]()-> ListBotResourceGenerationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotResourceGenerations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/generations");
      return ListBotResourceGenerationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotVersionReplicasOutcome LexModelsV2Client::ListBotVersionReplicas(const ListBotVersionReplicasRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotVersionReplicas);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotVersionReplicas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotVersionReplicas", "Required field: BotId, is not set");
    return ListBotVersionReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.ReplicaRegionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotVersionReplicas", "Required field: ReplicaRegion, is not set");
    return ListBotVersionReplicasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReplicaRegion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotVersionReplicas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotVersionReplicas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotVersionReplicas",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotVersionReplicasOutcome>(
    [&]()-> ListBotVersionReplicasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotVersionReplicas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/replicas/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicaRegion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      return ListBotVersionReplicasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotVersionsOutcome LexModelsV2Client::ListBotVersions(const ListBotVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBotVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotVersions", "Required field: BotId, is not set");
    return ListBotVersionsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBotVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBotVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBotVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotVersionsOutcome>(
    [&]()-> ListBotVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      return ListBotVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBotsOutcome LexModelsV2Client::ListBots(const ListBotsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBots);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBots",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBotsOutcome>(
    [&]()-> ListBotsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      return ListBotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBuiltInIntentsOutcome LexModelsV2Client::ListBuiltInIntents(const ListBuiltInIntentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBuiltInIntents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuiltInIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBuiltInIntents", "Required field: LocaleId, is not set");
    return ListBuiltInIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBuiltInIntents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBuiltInIntents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBuiltInIntents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBuiltInIntentsOutcome>(
    [&]()-> ListBuiltInIntentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuiltInIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/locales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      return ListBuiltInIntentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBuiltInSlotTypesOutcome LexModelsV2Client::ListBuiltInSlotTypes(const ListBuiltInSlotTypesRequest& request) const
{
  AWS_OPERATION_GUARD(ListBuiltInSlotTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuiltInSlotTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBuiltInSlotTypes", "Required field: LocaleId, is not set");
    return ListBuiltInSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBuiltInSlotTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBuiltInSlotTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBuiltInSlotTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBuiltInSlotTypesOutcome>(
    [&]()-> ListBuiltInSlotTypesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuiltInSlotTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/locales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
      return ListBuiltInSlotTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCustomVocabularyItemsOutcome LexModelsV2Client::ListCustomVocabularyItems(const ListCustomVocabularyItemsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCustomVocabularyItems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomVocabularyItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCustomVocabularyItems", "Required field: BotId, is not set");
    return ListCustomVocabularyItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCustomVocabularyItems", "Required field: BotVersion, is not set");
    return ListCustomVocabularyItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCustomVocabularyItems", "Required field: LocaleId, is not set");
    return ListCustomVocabularyItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListCustomVocabularyItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCustomVocabularyItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCustomVocabularyItems",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCustomVocabularyItemsOutcome>(
    [&]()-> ListCustomVocabularyItemsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomVocabularyItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/list");
      return ListCustomVocabularyItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListExportsOutcome LexModelsV2Client::ListExports(const ListExportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListExports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListExports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListExports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListExports",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListExportsOutcome>(
    [&]()-> ListExportsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
      return ListExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImportsOutcome LexModelsV2Client::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListImports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListImports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImports",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImportsOutcome>(
    [&]()-> ListImportsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
      return ListImportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIntentMetricsOutcome LexModelsV2Client::ListIntentMetrics(const ListIntentMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIntentMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIntentMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntentMetrics", "Required field: BotId, is not set");
    return ListIntentMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIntentMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIntentMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIntentMetrics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIntentMetricsOutcome>(
    [&]()-> ListIntentMetricsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIntentMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/intentmetrics");
      return ListIntentMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIntentPathsOutcome LexModelsV2Client::ListIntentPaths(const ListIntentPathsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIntentPaths);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIntentPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntentPaths", "Required field: BotId, is not set");
    return ListIntentPathsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIntentPaths, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIntentPaths, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIntentPaths",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIntentPathsOutcome>(
    [&]()-> ListIntentPathsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIntentPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/intentpaths");
      return ListIntentPathsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIntentStageMetricsOutcome LexModelsV2Client::ListIntentStageMetrics(const ListIntentStageMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIntentStageMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIntentStageMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntentStageMetrics", "Required field: BotId, is not set");
    return ListIntentStageMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIntentStageMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIntentStageMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIntentStageMetrics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIntentStageMetricsOutcome>(
    [&]()-> ListIntentStageMetricsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIntentStageMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/intentstagemetrics");
      return ListIntentStageMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIntentsOutcome LexModelsV2Client::ListIntents(const ListIntentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIntents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntents", "Required field: BotId, is not set");
    return ListIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntents", "Required field: BotVersion, is not set");
    return ListIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntents", "Required field: LocaleId, is not set");
    return ListIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIntents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIntents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIntents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIntentsOutcome>(
    [&]()-> ListIntentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      return ListIntentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecommendedIntentsOutcome LexModelsV2Client::ListRecommendedIntents(const ListRecommendedIntentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRecommendedIntents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecommendedIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: BotId, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: BotVersion, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: LocaleId, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendedIntents", "Required field: BotRecommendationId, is not set");
    return ListRecommendedIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRecommendedIntents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecommendedIntents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecommendedIntents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecommendedIntentsOutcome>(
    [&]()-> ListRecommendedIntentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecommendedIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents");
      return ListRecommendedIntentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionAnalyticsDataOutcome LexModelsV2Client::ListSessionAnalyticsData(const ListSessionAnalyticsDataRequest& request) const
{
  AWS_OPERATION_GUARD(ListSessionAnalyticsData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSessionAnalyticsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionAnalyticsData", "Required field: BotId, is not set");
    return ListSessionAnalyticsDataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSessionAnalyticsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessionAnalyticsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessionAnalyticsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionAnalyticsDataOutcome>(
    [&]()-> ListSessionAnalyticsDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSessionAnalyticsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/sessions");
      return ListSessionAnalyticsDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionMetricsOutcome LexModelsV2Client::ListSessionMetrics(const ListSessionMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSessionMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSessionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionMetrics", "Required field: BotId, is not set");
    return ListSessionMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSessionMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessionMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessionMetrics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionMetricsOutcome>(
    [&]()-> ListSessionMetricsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSessionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/sessionmetrics");
      return ListSessionMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSlotTypesOutcome LexModelsV2Client::ListSlotTypes(const ListSlotTypesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSlotTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSlotTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSlotTypes", "Required field: BotId, is not set");
    return ListSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSlotTypes", "Required field: BotVersion, is not set");
    return ListSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSlotTypes", "Required field: LocaleId, is not set");
    return ListSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSlotTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSlotTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSlotTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSlotTypesOutcome>(
    [&]()-> ListSlotTypesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSlotTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
      return ListSlotTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSlotsOutcome LexModelsV2Client::ListSlots(const ListSlotsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSlots);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSlots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: BotId, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: BotVersion, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: LocaleId, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSlots", "Required field: IntentId, is not set");
    return ListSlotsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSlots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSlots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSlots",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSlotsOutcome>(
    [&]()-> ListSlotsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSlots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slots/");
      return ListSlotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome LexModelsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTestExecutionResultItemsOutcome LexModelsV2Client::ListTestExecutionResultItems(const ListTestExecutionResultItemsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestExecutionResultItems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestExecutionResultItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestExecutionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTestExecutionResultItems", "Required field: TestExecutionId, is not set");
    return ListTestExecutionResultItemsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestExecutionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTestExecutionResultItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTestExecutionResultItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTestExecutionResultItems",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTestExecutionResultItemsOutcome>(
    [&]()-> ListTestExecutionResultItemsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestExecutionResultItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestExecutionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/results");
      return ListTestExecutionResultItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTestExecutionsOutcome LexModelsV2Client::ListTestExecutions(const ListTestExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTestExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTestExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTestExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTestExecutionsOutcome>(
    [&]()-> ListTestExecutionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions");
      return ListTestExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTestSetRecordsOutcome LexModelsV2Client::ListTestSetRecords(const ListTestSetRecordsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestSetRecords);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestSetRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTestSetRecords", "Required field: TestSetId, is not set");
    return ListTestSetRecordsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTestSetRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTestSetRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTestSetRecords",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTestSetRecordsOutcome>(
    [&]()-> ListTestSetRecordsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestSetRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/records");
      return ListTestSetRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTestSetsOutcome LexModelsV2Client::ListTestSets(const ListTestSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTestSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTestSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTestSets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTestSetsOutcome>(
    [&]()-> ListTestSetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsets");
      return ListTestSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUtteranceAnalyticsDataOutcome LexModelsV2Client::ListUtteranceAnalyticsData(const ListUtteranceAnalyticsDataRequest& request) const
{
  AWS_OPERATION_GUARD(ListUtteranceAnalyticsData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUtteranceAnalyticsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUtteranceAnalyticsData", "Required field: BotId, is not set");
    return ListUtteranceAnalyticsDataOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUtteranceAnalyticsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUtteranceAnalyticsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUtteranceAnalyticsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUtteranceAnalyticsDataOutcome>(
    [&]()-> ListUtteranceAnalyticsDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUtteranceAnalyticsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/utterances");
      return ListUtteranceAnalyticsDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUtteranceMetricsOutcome LexModelsV2Client::ListUtteranceMetrics(const ListUtteranceMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(ListUtteranceMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUtteranceMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUtteranceMetrics", "Required field: BotId, is not set");
    return ListUtteranceMetricsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUtteranceMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUtteranceMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUtteranceMetrics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUtteranceMetricsOutcome>(
    [&]()-> ListUtteranceMetricsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUtteranceMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analytics/utterancemetrics");
      return ListUtteranceMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchAssociatedTranscriptsOutcome LexModelsV2Client::SearchAssociatedTranscripts(const SearchAssociatedTranscriptsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchAssociatedTranscripts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAssociatedTranscripts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: BotId, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: BotVersion, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: LocaleId, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAssociatedTranscripts", "Required field: BotRecommendationId, is not set");
    return SearchAssociatedTranscriptsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchAssociatedTranscripts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchAssociatedTranscripts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchAssociatedTranscripts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchAssociatedTranscriptsOutcome>(
    [&]()-> SearchAssociatedTranscriptsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAssociatedTranscripts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associatedtranscripts");
      return SearchAssociatedTranscriptsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartBotRecommendationOutcome LexModelsV2Client::StartBotRecommendation(const StartBotRecommendationRequest& request) const
{
  AWS_OPERATION_GUARD(StartBotRecommendation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBotRecommendation", "Required field: BotId, is not set");
    return StartBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBotRecommendation", "Required field: BotVersion, is not set");
    return StartBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBotRecommendation", "Required field: LocaleId, is not set");
    return StartBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartBotRecommendation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartBotRecommendationOutcome>(
    [&]()-> StartBotRecommendationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
      return StartBotRecommendationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartBotResourceGenerationOutcome LexModelsV2Client::StartBotResourceGeneration(const StartBotResourceGenerationRequest& request) const
{
  AWS_OPERATION_GUARD(StartBotResourceGeneration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBotResourceGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBotResourceGeneration", "Required field: BotId, is not set");
    return StartBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBotResourceGeneration", "Required field: BotVersion, is not set");
    return StartBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBotResourceGeneration", "Required field: LocaleId, is not set");
    return StartBotResourceGenerationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartBotResourceGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartBotResourceGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartBotResourceGeneration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartBotResourceGenerationOutcome>(
    [&]()-> StartBotResourceGenerationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBotResourceGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/startgeneration");
      return StartBotResourceGenerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartImportOutcome LexModelsV2Client::StartImport(const StartImportRequest& request) const
{
  AWS_OPERATION_GUARD(StartImport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartImport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartImportOutcome>(
    [&]()-> StartImportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
      return StartImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartTestExecutionOutcome LexModelsV2Client::StartTestExecution(const StartTestExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(StartTestExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTestExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartTestExecution", "Required field: TestSetId, is not set");
    return StartTestExecutionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartTestExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartTestExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartTestExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartTestExecutionOutcome>(
    [&]()-> StartTestExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTestExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testexecutions");
      return StartTestExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartTestSetGenerationOutcome LexModelsV2Client::StartTestSetGeneration(const StartTestSetGenerationRequest& request) const
{
  AWS_OPERATION_GUARD(StartTestSetGeneration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTestSetGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartTestSetGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartTestSetGeneration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartTestSetGeneration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartTestSetGenerationOutcome>(
    [&]()-> StartTestSetGenerationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTestSetGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsetgenerations");
      return StartTestSetGenerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopBotRecommendationOutcome LexModelsV2Client::StopBotRecommendation(const StopBotRecommendationRequest& request) const
{
  AWS_OPERATION_GUARD(StopBotRecommendation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: BotId, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: BotVersion, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: LocaleId, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopBotRecommendation", "Required field: BotRecommendationId, is not set");
    return StopBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopBotRecommendation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopBotRecommendationOutcome>(
    [&]()-> StopBotRecommendationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stopbotrecommendation");
      return StopBotRecommendationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome LexModelsV2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceARN, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome LexModelsV2Client::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceARN, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBotOutcome LexModelsV2Client::UpdateBot(const UpdateBotRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: BotId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBotOutcome>(
    [&]()-> UpdateBotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      return UpdateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBotAliasOutcome LexModelsV2Client::UpdateBotAlias(const UpdateBotAliasRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBotAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotAliasIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotAlias", "Required field: BotAliasId, is not set");
    return UpdateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAliasId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotAlias", "Required field: BotId, is not set");
    return UpdateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBotAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBotAlias",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBotAliasOutcome>(
    [&]()-> UpdateBotAliasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
      return UpdateBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBotLocaleOutcome LexModelsV2Client::UpdateBotLocale(const UpdateBotLocaleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBotLocale);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotLocale", "Required field: BotId, is not set");
    return UpdateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotLocale", "Required field: BotVersion, is not set");
    return UpdateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotLocale", "Required field: LocaleId, is not set");
    return UpdateBotLocaleOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBotLocale, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBotLocale",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBotLocaleOutcome>(
    [&]()-> UpdateBotLocaleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      return UpdateBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBotRecommendationOutcome LexModelsV2Client::UpdateBotRecommendation(const UpdateBotRecommendationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBotRecommendation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: BotId, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: BotVersion, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: LocaleId, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.BotRecommendationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBotRecommendation", "Required field: BotRecommendationId, is not set");
    return UpdateBotRecommendationOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotRecommendationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBotRecommendation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBotRecommendation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBotRecommendationOutcome>(
    [&]()-> UpdateBotRecommendationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotRecommendationId());
      return UpdateBotRecommendationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateExportOutcome LexModelsV2Client::UpdateExport(const UpdateExportRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExport", "Required field: ExportId, is not set");
    return UpdateExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateExport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateExportOutcome>(
    [&]()-> UpdateExportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
      return UpdateExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIntentOutcome LexModelsV2Client::UpdateIntent(const UpdateIntentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIntent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: IntentId, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: BotId, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: BotVersion, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntent", "Required field: LocaleId, is not set");
    return UpdateIntentOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIntent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIntent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIntentOutcome>(
    [&]()-> UpdateIntentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntentId());
      return UpdateIntentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateResourcePolicyOutcome LexModelsV2Client::UpdateResourcePolicy(const UpdateResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourcePolicy", "Required field: ResourceArn, is not set");
    return UpdateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateResourcePolicyOutcome>(
    [&]()-> UpdateResourcePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UpdateResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSlotOutcome LexModelsV2Client::UpdateSlot(const UpdateSlotRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSlot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SlotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: SlotId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SlotId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: BotId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: BotVersion, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: LocaleId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  if (!request.IntentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlot", "Required field: IntentId, is not set");
    return UpdateSlotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSlot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSlot",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSlotOutcome>(
    [&]()-> UpdateSlotOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSlot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
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
      return UpdateSlotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSlotTypeOutcome LexModelsV2Client::UpdateSlotType(const UpdateSlotTypeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSlotType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SlotTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: SlotTypeId, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SlotTypeId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: BotId, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  if (!request.BotVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: BotVersion, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersion]", false));
  }
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSlotType", "Required field: LocaleId, is not set");
    return UpdateSlotTypeOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSlotType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSlotType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSlotTypeOutcome>(
    [&]()-> UpdateSlotTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
      endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSlotTypeId());
      return UpdateSlotTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTestSetOutcome LexModelsV2Client::UpdateTestSet(const UpdateTestSetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTestSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTestSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TestSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTestSet", "Required field: TestSetId, is not set");
    return UpdateTestSetOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTestSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTestSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTestSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTestSetOutcome>(
    [&]()-> UpdateTestSetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTestSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/testsets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestSetId());
      return UpdateTestSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

