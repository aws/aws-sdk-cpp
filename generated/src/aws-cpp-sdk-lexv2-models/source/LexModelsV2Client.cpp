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
#include <aws/lexv2-models/model/CreateBotVersionRequest.h>
#include <aws/lexv2-models/model/CreateExportRequest.h>
#include <aws/lexv2-models/model/CreateIntentRequest.h>
#include <aws/lexv2-models/model/CreateResourcePolicyRequest.h>
#include <aws/lexv2-models/model/CreateResourcePolicyStatementRequest.h>
#include <aws/lexv2-models/model/CreateSlotRequest.h>
#include <aws/lexv2-models/model/CreateSlotTypeRequest.h>
#include <aws/lexv2-models/model/CreateUploadUrlRequest.h>
#include <aws/lexv2-models/model/DeleteBotRequest.h>
#include <aws/lexv2-models/model/DeleteBotAliasRequest.h>
#include <aws/lexv2-models/model/DeleteBotLocaleRequest.h>
#include <aws/lexv2-models/model/DeleteBotVersionRequest.h>
#include <aws/lexv2-models/model/DeleteCustomVocabularyRequest.h>
#include <aws/lexv2-models/model/DeleteExportRequest.h>
#include <aws/lexv2-models/model/DeleteImportRequest.h>
#include <aws/lexv2-models/model/DeleteIntentRequest.h>
#include <aws/lexv2-models/model/DeleteResourcePolicyRequest.h>
#include <aws/lexv2-models/model/DeleteResourcePolicyStatementRequest.h>
#include <aws/lexv2-models/model/DeleteSlotRequest.h>
#include <aws/lexv2-models/model/DeleteSlotTypeRequest.h>
#include <aws/lexv2-models/model/DeleteUtterancesRequest.h>
#include <aws/lexv2-models/model/DescribeBotRequest.h>
#include <aws/lexv2-models/model/DescribeBotAliasRequest.h>
#include <aws/lexv2-models/model/DescribeBotLocaleRequest.h>
#include <aws/lexv2-models/model/DescribeBotRecommendationRequest.h>
#include <aws/lexv2-models/model/DescribeBotVersionRequest.h>
#include <aws/lexv2-models/model/DescribeCustomVocabularyMetadataRequest.h>
#include <aws/lexv2-models/model/DescribeExportRequest.h>
#include <aws/lexv2-models/model/DescribeImportRequest.h>
#include <aws/lexv2-models/model/DescribeIntentRequest.h>
#include <aws/lexv2-models/model/DescribeResourcePolicyRequest.h>
#include <aws/lexv2-models/model/DescribeSlotRequest.h>
#include <aws/lexv2-models/model/DescribeSlotTypeRequest.h>
#include <aws/lexv2-models/model/ListAggregatedUtterancesRequest.h>
#include <aws/lexv2-models/model/ListBotAliasesRequest.h>
#include <aws/lexv2-models/model/ListBotLocalesRequest.h>
#include <aws/lexv2-models/model/ListBotRecommendationsRequest.h>
#include <aws/lexv2-models/model/ListBotVersionsRequest.h>
#include <aws/lexv2-models/model/ListBotsRequest.h>
#include <aws/lexv2-models/model/ListBuiltInIntentsRequest.h>
#include <aws/lexv2-models/model/ListBuiltInSlotTypesRequest.h>
#include <aws/lexv2-models/model/ListCustomVocabularyItemsRequest.h>
#include <aws/lexv2-models/model/ListExportsRequest.h>
#include <aws/lexv2-models/model/ListImportsRequest.h>
#include <aws/lexv2-models/model/ListIntentsRequest.h>
#include <aws/lexv2-models/model/ListRecommendedIntentsRequest.h>
#include <aws/lexv2-models/model/ListSlotTypesRequest.h>
#include <aws/lexv2-models/model/ListSlotsRequest.h>
#include <aws/lexv2-models/model/ListTagsForResourceRequest.h>
#include <aws/lexv2-models/model/SearchAssociatedTranscriptsRequest.h>
#include <aws/lexv2-models/model/StartBotRecommendationRequest.h>
#include <aws/lexv2-models/model/StartImportRequest.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexModelsV2;
using namespace Aws::LexModelsV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LexModelsV2Client::SERVICE_NAME = "lex";
const char* LexModelsV2Client::ALLOCATION_TAG = "LexModelsV2Client";

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
  m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchcreate");
  return BatchCreateCustomVocabularyItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteCustomVocabularyItemOutcome LexModelsV2Client::BatchDeleteCustomVocabularyItem(const BatchDeleteCustomVocabularyItemRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchdelete");
  return BatchDeleteCustomVocabularyItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateCustomVocabularyItemOutcome LexModelsV2Client::BatchUpdateCustomVocabularyItem(const BatchUpdateCustomVocabularyItemRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateCustomVocabularyItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/batchupdate");
  return BatchUpdateCustomVocabularyItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BuildBotLocaleOutcome LexModelsV2Client::BuildBotLocale(const BuildBotLocaleRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BuildBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  return BuildBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBotOutcome LexModelsV2Client::CreateBot(const CreateBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  return CreateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBotAliasOutcome LexModelsV2Client::CreateBotAlias(const CreateBotAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotAlias", "Required field: BotId, is not set");
    return CreateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  return CreateBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBotLocaleOutcome LexModelsV2Client::CreateBotLocale(const CreateBotLocaleRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  return CreateBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBotVersionOutcome LexModelsV2Client::CreateBotVersion(const CreateBotVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotVersion", "Required field: BotId, is not set");
    return CreateBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  return CreateBotVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateExportOutcome LexModelsV2Client::CreateExport(const CreateExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  return CreateExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateIntentOutcome LexModelsV2Client::CreateIntent(const CreateIntentRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIntent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
  return CreateIntentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateResourcePolicyOutcome LexModelsV2Client::CreateResourcePolicy(const CreateResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicy", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return CreateResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourcePolicyStatementOutcome LexModelsV2Client::CreateResourcePolicyStatement(const CreateResourcePolicyStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourcePolicyStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicyStatement", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourcePolicyStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/statements/");
  return CreateResourcePolicyStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSlotOutcome LexModelsV2Client::CreateSlot(const CreateSlotRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

CreateSlotTypeOutcome LexModelsV2Client::CreateSlotType(const CreateSlotTypeRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSlotType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
  return CreateSlotTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateUploadUrlOutcome LexModelsV2Client::CreateUploadUrl(const CreateUploadUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createuploadurl/");
  return CreateUploadUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotOutcome LexModelsV2Client::DeleteBot(const DeleteBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: BotId, is not set");
    return DeleteBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  return DeleteBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotAliasOutcome LexModelsV2Client::DeleteBotAlias(const DeleteBotAliasRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
  return DeleteBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotLocaleOutcome LexModelsV2Client::DeleteBotLocale(const DeleteBotLocaleRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  return DeleteBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotVersionOutcome LexModelsV2Client::DeleteBotVersion(const DeleteBotVersionRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  return DeleteBotVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomVocabularyOutcome LexModelsV2Client::DeleteCustomVocabulary(const DeleteCustomVocabularyRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary");
  return DeleteCustomVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExportOutcome LexModelsV2Client::DeleteExport(const DeleteExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExport", "Required field: ExportId, is not set");
    return DeleteExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  return DeleteExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteImportOutcome LexModelsV2Client::DeleteImport(const DeleteImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImport", "Required field: ImportId, is not set");
    return DeleteImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportId());
  return DeleteImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntentOutcome LexModelsV2Client::DeleteIntent(const DeleteIntentRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

DeleteResourcePolicyOutcome LexModelsV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyStatementOutcome LexModelsV2Client::DeleteResourcePolicyStatement(const DeleteResourcePolicyStatementRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicyStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/statements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  return DeleteResourcePolicyStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSlotOutcome LexModelsV2Client::DeleteSlot(const DeleteSlotRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

DeleteSlotTypeOutcome LexModelsV2Client::DeleteSlotType(const DeleteSlotTypeRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

DeleteUtterancesOutcome LexModelsV2Client::DeleteUtterances(const DeleteUtterancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: BotId, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/utterances/");
  return DeleteUtterancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeBotOutcome LexModelsV2Client::DescribeBot(const DescribeBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBot", "Required field: BotId, is not set");
    return DescribeBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  return DescribeBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBotAliasOutcome LexModelsV2Client::DescribeBotAlias(const DescribeBotAliasRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
  return DescribeBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBotLocaleOutcome LexModelsV2Client::DescribeBotLocale(const DescribeBotLocaleRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  return DescribeBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBotRecommendationOutcome LexModelsV2Client::DescribeBotRecommendation(const DescribeBotRecommendationRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

DescribeBotVersionOutcome LexModelsV2Client::DescribeBotVersion(const DescribeBotVersionRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBotVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  return DescribeBotVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomVocabularyMetadataOutcome LexModelsV2Client::DescribeCustomVocabularyMetadata(const DescribeCustomVocabularyMetadataRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomVocabularyMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/metadata");
  return DescribeCustomVocabularyMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeExportOutcome LexModelsV2Client::DescribeExport(const DescribeExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeExport", "Required field: ExportId, is not set");
    return DescribeExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  return DescribeExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeImportOutcome LexModelsV2Client::DescribeImport(const DescribeImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeImport", "Required field: ImportId, is not set");
    return DescribeImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportId());
  return DescribeImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIntentOutcome LexModelsV2Client::DescribeIntent(const DescribeIntentRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

DescribeResourcePolicyOutcome LexModelsV2Client::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeResourcePolicy", "Required field: ResourceArn, is not set");
    return DescribeResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return DescribeResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSlotOutcome LexModelsV2Client::DescribeSlot(const DescribeSlotRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

DescribeSlotTypeOutcome LexModelsV2Client::DescribeSlotType(const DescribeSlotTypeRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

ListAggregatedUtterancesOutcome LexModelsV2Client::ListAggregatedUtterances(const ListAggregatedUtterancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAggregatedUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAggregatedUtterances", "Required field: BotId, is not set");
    return ListAggregatedUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAggregatedUtterances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aggregatedutterances/");
  return ListAggregatedUtterancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBotAliasesOutcome LexModelsV2Client::ListBotAliases(const ListBotAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotAliases", "Required field: BotId, is not set");
    return ListBotAliasesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  return ListBotAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBotLocalesOutcome LexModelsV2Client::ListBotLocales(const ListBotLocalesRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotLocales, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  return ListBotLocalesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBotRecommendationsOutcome LexModelsV2Client::ListBotRecommendations(const ListBotRecommendationsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
  return ListBotRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBotVersionsOutcome LexModelsV2Client::ListBotVersions(const ListBotVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBotVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotVersions", "Required field: BotId, is not set");
    return ListBotVersionsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBotVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  return ListBotVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBotsOutcome LexModelsV2Client::ListBots(const ListBotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  return ListBotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuiltInIntentsOutcome LexModelsV2Client::ListBuiltInIntents(const ListBuiltInIntentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuiltInIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBuiltInIntents", "Required field: LocaleId, is not set");
    return ListBuiltInIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuiltInIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/locales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
  return ListBuiltInIntentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuiltInSlotTypesOutcome LexModelsV2Client::ListBuiltInSlotTypes(const ListBuiltInSlotTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuiltInSlotTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBuiltInSlotTypes", "Required field: LocaleId, is not set");
    return ListBuiltInSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBuiltInSlotTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/builtins/locales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
  return ListBuiltInSlotTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomVocabularyItemsOutcome LexModelsV2Client::ListCustomVocabularyItems(const ListCustomVocabularyItemsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomVocabularyItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customvocabulary/DEFAULT/list");
  return ListCustomVocabularyItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExportsOutcome LexModelsV2Client::ListExports(const ListExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  return ListExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImportsOutcome LexModelsV2Client::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  return ListImportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIntentsOutcome LexModelsV2Client::ListIntents(const ListIntentsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIntents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/intents/");
  return ListIntentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecommendedIntentsOutcome LexModelsV2Client::ListRecommendedIntents(const ListRecommendedIntentsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

ListSlotTypesOutcome LexModelsV2Client::ListSlotTypes(const ListSlotTypesRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSlotTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/slottypes/");
  return ListSlotTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSlotsOutcome LexModelsV2Client::ListSlots(const ListSlotsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

ListTagsForResourceOutcome LexModelsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

SearchAssociatedTranscriptsOutcome LexModelsV2Client::SearchAssociatedTranscripts(const SearchAssociatedTranscriptsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

StartBotRecommendationOutcome LexModelsV2Client::StartBotRecommendation(const StartBotRecommendationRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBotRecommendation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botrecommendations/");
  return StartBotRecommendationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartImportOutcome LexModelsV2Client::StartImport(const StartImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  return StartImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StopBotRecommendationOutcome LexModelsV2Client::StopBotRecommendation(const StopBotRecommendationRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

TagResourceOutcome LexModelsV2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceARN, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome LexModelsV2Client::UntagResource(const UntagResourceRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateBotOutcome LexModelsV2Client::UpdateBot(const UpdateBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: BotId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  return UpdateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBotAliasOutcome LexModelsV2Client::UpdateBotAlias(const UpdateBotAliasRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBotAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botaliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotAliasId());
  return UpdateBotAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBotLocaleOutcome LexModelsV2Client::UpdateBotLocale(const UpdateBotLocaleRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBotLocale, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/botlocales/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLocaleId());
  return UpdateBotLocaleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBotRecommendationOutcome LexModelsV2Client::UpdateBotRecommendation(const UpdateBotRecommendationRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

UpdateExportOutcome LexModelsV2Client::UpdateExport(const UpdateExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExport", "Required field: ExportId, is not set");
    return UpdateExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  return UpdateExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateIntentOutcome LexModelsV2Client::UpdateIntent(const UpdateIntentRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

UpdateResourcePolicyOutcome LexModelsV2Client::UpdateResourcePolicy(const UpdateResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourcePolicy", "Required field: ResourceArn, is not set");
    return UpdateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UpdateResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSlotOutcome LexModelsV2Client::UpdateSlot(const UpdateSlotRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

UpdateSlotTypeOutcome LexModelsV2Client::UpdateSlotType(const UpdateSlotTypeRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

