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

BatchCreateCustomVocabularyItemOutcomeCallable LexModelsV2Client::BatchCreateCustomVocabularyItemCallable(const BatchCreateCustomVocabularyItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateCustomVocabularyItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateCustomVocabularyItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::BatchCreateCustomVocabularyItemAsync(const BatchCreateCustomVocabularyItemRequest& request, const BatchCreateCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateCustomVocabularyItem(request), context);
    } );
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

BatchDeleteCustomVocabularyItemOutcomeCallable LexModelsV2Client::BatchDeleteCustomVocabularyItemCallable(const BatchDeleteCustomVocabularyItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteCustomVocabularyItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteCustomVocabularyItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::BatchDeleteCustomVocabularyItemAsync(const BatchDeleteCustomVocabularyItemRequest& request, const BatchDeleteCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeleteCustomVocabularyItem(request), context);
    } );
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

BatchUpdateCustomVocabularyItemOutcomeCallable LexModelsV2Client::BatchUpdateCustomVocabularyItemCallable(const BatchUpdateCustomVocabularyItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateCustomVocabularyItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateCustomVocabularyItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::BatchUpdateCustomVocabularyItemAsync(const BatchUpdateCustomVocabularyItemRequest& request, const BatchUpdateCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchUpdateCustomVocabularyItem(request), context);
    } );
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

BuildBotLocaleOutcomeCallable LexModelsV2Client::BuildBotLocaleCallable(const BuildBotLocaleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BuildBotLocaleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BuildBotLocale(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::BuildBotLocaleAsync(const BuildBotLocaleRequest& request, const BuildBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BuildBotLocale(request), context);
    } );
}

CreateBotOutcome LexModelsV2Client::CreateBot(const CreateBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  return CreateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBotOutcomeCallable LexModelsV2Client::CreateBotCallable(const CreateBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateBotAsync(const CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBot(request), context);
    } );
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

CreateBotAliasOutcomeCallable LexModelsV2Client::CreateBotAliasCallable(const CreateBotAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBotAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBotAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateBotAliasAsync(const CreateBotAliasRequest& request, const CreateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBotAlias(request), context);
    } );
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

CreateBotLocaleOutcomeCallable LexModelsV2Client::CreateBotLocaleCallable(const CreateBotLocaleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBotLocaleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBotLocale(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateBotLocaleAsync(const CreateBotLocaleRequest& request, const CreateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBotLocale(request), context);
    } );
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

CreateBotVersionOutcomeCallable LexModelsV2Client::CreateBotVersionCallable(const CreateBotVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBotVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBotVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateBotVersionAsync(const CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBotVersion(request), context);
    } );
}

CreateExportOutcome LexModelsV2Client::CreateExport(const CreateExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  return CreateExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateExportOutcomeCallable LexModelsV2Client::CreateExportCallable(const CreateExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateExportAsync(const CreateExportRequest& request, const CreateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExport(request), context);
    } );
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

CreateIntentOutcomeCallable LexModelsV2Client::CreateIntentCallable(const CreateIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateIntentAsync(const CreateIntentRequest& request, const CreateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIntent(request), context);
    } );
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

CreateResourcePolicyOutcomeCallable LexModelsV2Client::CreateResourcePolicyCallable(const CreateResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateResourcePolicyAsync(const CreateResourcePolicyRequest& request, const CreateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResourcePolicy(request), context);
    } );
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

CreateResourcePolicyStatementOutcomeCallable LexModelsV2Client::CreateResourcePolicyStatementCallable(const CreateResourcePolicyStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourcePolicyStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourcePolicyStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateResourcePolicyStatementAsync(const CreateResourcePolicyStatementRequest& request, const CreateResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResourcePolicyStatement(request), context);
    } );
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

CreateSlotOutcomeCallable LexModelsV2Client::CreateSlotCallable(const CreateSlotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSlotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSlot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateSlotAsync(const CreateSlotRequest& request, const CreateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSlot(request), context);
    } );
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

CreateSlotTypeOutcomeCallable LexModelsV2Client::CreateSlotTypeCallable(const CreateSlotTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSlotTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSlotType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateSlotTypeAsync(const CreateSlotTypeRequest& request, const CreateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSlotType(request), context);
    } );
}

CreateUploadUrlOutcome LexModelsV2Client::CreateUploadUrl(const CreateUploadUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createuploadurl/");
  return CreateUploadUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUploadUrlOutcomeCallable LexModelsV2Client::CreateUploadUrlCallable(const CreateUploadUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUploadUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUploadUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::CreateUploadUrlAsync(const CreateUploadUrlRequest& request, const CreateUploadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUploadUrl(request), context);
    } );
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

DeleteBotOutcomeCallable LexModelsV2Client::DeleteBotCallable(const DeleteBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteBotAsync(const DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBot(request), context);
    } );
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

DeleteBotAliasOutcomeCallable LexModelsV2Client::DeleteBotAliasCallable(const DeleteBotAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBotAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteBotAliasAsync(const DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBotAlias(request), context);
    } );
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

DeleteBotLocaleOutcomeCallable LexModelsV2Client::DeleteBotLocaleCallable(const DeleteBotLocaleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotLocaleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBotLocale(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteBotLocaleAsync(const DeleteBotLocaleRequest& request, const DeleteBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBotLocale(request), context);
    } );
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

DeleteBotVersionOutcomeCallable LexModelsV2Client::DeleteBotVersionCallable(const DeleteBotVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBotVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteBotVersionAsync(const DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBotVersion(request), context);
    } );
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

DeleteCustomVocabularyOutcomeCallable LexModelsV2Client::DeleteCustomVocabularyCallable(const DeleteCustomVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteCustomVocabularyAsync(const DeleteCustomVocabularyRequest& request, const DeleteCustomVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomVocabulary(request), context);
    } );
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

DeleteExportOutcomeCallable LexModelsV2Client::DeleteExportCallable(const DeleteExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteExportAsync(const DeleteExportRequest& request, const DeleteExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteExport(request), context);
    } );
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

DeleteImportOutcomeCallable LexModelsV2Client::DeleteImportCallable(const DeleteImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteImportAsync(const DeleteImportRequest& request, const DeleteImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImport(request), context);
    } );
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

DeleteIntentOutcomeCallable LexModelsV2Client::DeleteIntentCallable(const DeleteIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteIntentAsync(const DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIntent(request), context);
    } );
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

DeleteResourcePolicyOutcomeCallable LexModelsV2Client::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
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

DeleteResourcePolicyStatementOutcomeCallable LexModelsV2Client::DeleteResourcePolicyStatementCallable(const DeleteResourcePolicyStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicyStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteResourcePolicyStatementAsync(const DeleteResourcePolicyStatementRequest& request, const DeleteResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicyStatement(request), context);
    } );
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

DeleteSlotOutcomeCallable LexModelsV2Client::DeleteSlotCallable(const DeleteSlotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSlotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSlot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteSlotAsync(const DeleteSlotRequest& request, const DeleteSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSlot(request), context);
    } );
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

DeleteSlotTypeOutcomeCallable LexModelsV2Client::DeleteSlotTypeCallable(const DeleteSlotTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSlotTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSlotType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteSlotTypeAsync(const DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSlotType(request), context);
    } );
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

DeleteUtterancesOutcomeCallable LexModelsV2Client::DeleteUtterancesCallable(const DeleteUtterancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUtterancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUtterances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DeleteUtterancesAsync(const DeleteUtterancesRequest& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUtterances(request), context);
    } );
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

DescribeBotOutcomeCallable LexModelsV2Client::DescribeBotCallable(const DescribeBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeBotAsync(const DescribeBotRequest& request, const DescribeBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBot(request), context);
    } );
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

DescribeBotAliasOutcomeCallable LexModelsV2Client::DescribeBotAliasCallable(const DescribeBotAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBotAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBotAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeBotAliasAsync(const DescribeBotAliasRequest& request, const DescribeBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBotAlias(request), context);
    } );
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

DescribeBotLocaleOutcomeCallable LexModelsV2Client::DescribeBotLocaleCallable(const DescribeBotLocaleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBotLocaleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBotLocale(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeBotLocaleAsync(const DescribeBotLocaleRequest& request, const DescribeBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBotLocale(request), context);
    } );
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

DescribeBotRecommendationOutcomeCallable LexModelsV2Client::DescribeBotRecommendationCallable(const DescribeBotRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBotRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBotRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeBotRecommendationAsync(const DescribeBotRecommendationRequest& request, const DescribeBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBotRecommendation(request), context);
    } );
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

DescribeBotVersionOutcomeCallable LexModelsV2Client::DescribeBotVersionCallable(const DescribeBotVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBotVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBotVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeBotVersionAsync(const DescribeBotVersionRequest& request, const DescribeBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBotVersion(request), context);
    } );
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

DescribeCustomVocabularyMetadataOutcomeCallable LexModelsV2Client::DescribeCustomVocabularyMetadataCallable(const DescribeCustomVocabularyMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomVocabularyMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomVocabularyMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeCustomVocabularyMetadataAsync(const DescribeCustomVocabularyMetadataRequest& request, const DescribeCustomVocabularyMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomVocabularyMetadata(request), context);
    } );
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

DescribeExportOutcomeCallable LexModelsV2Client::DescribeExportCallable(const DescribeExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeExportAsync(const DescribeExportRequest& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeExport(request), context);
    } );
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

DescribeImportOutcomeCallable LexModelsV2Client::DescribeImportCallable(const DescribeImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeImportAsync(const DescribeImportRequest& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImport(request), context);
    } );
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

DescribeIntentOutcomeCallable LexModelsV2Client::DescribeIntentCallable(const DescribeIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeIntentAsync(const DescribeIntentRequest& request, const DescribeIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIntent(request), context);
    } );
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

DescribeResourcePolicyOutcomeCallable LexModelsV2Client::DescribeResourcePolicyCallable(const DescribeResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeResourcePolicyAsync(const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResourcePolicy(request), context);
    } );
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

DescribeSlotOutcomeCallable LexModelsV2Client::DescribeSlotCallable(const DescribeSlotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSlotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSlot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeSlotAsync(const DescribeSlotRequest& request, const DescribeSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSlot(request), context);
    } );
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

DescribeSlotTypeOutcomeCallable LexModelsV2Client::DescribeSlotTypeCallable(const DescribeSlotTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSlotTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSlotType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::DescribeSlotTypeAsync(const DescribeSlotTypeRequest& request, const DescribeSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSlotType(request), context);
    } );
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

ListAggregatedUtterancesOutcomeCallable LexModelsV2Client::ListAggregatedUtterancesCallable(const ListAggregatedUtterancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAggregatedUtterancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAggregatedUtterances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListAggregatedUtterancesAsync(const ListAggregatedUtterancesRequest& request, const ListAggregatedUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAggregatedUtterances(request), context);
    } );
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

ListBotAliasesOutcomeCallable LexModelsV2Client::ListBotAliasesCallable(const ListBotAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBotAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBotAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListBotAliasesAsync(const ListBotAliasesRequest& request, const ListBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBotAliases(request), context);
    } );
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

ListBotLocalesOutcomeCallable LexModelsV2Client::ListBotLocalesCallable(const ListBotLocalesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBotLocalesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBotLocales(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListBotLocalesAsync(const ListBotLocalesRequest& request, const ListBotLocalesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBotLocales(request), context);
    } );
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

ListBotRecommendationsOutcomeCallable LexModelsV2Client::ListBotRecommendationsCallable(const ListBotRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBotRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBotRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListBotRecommendationsAsync(const ListBotRecommendationsRequest& request, const ListBotRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBotRecommendations(request), context);
    } );
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

ListBotVersionsOutcomeCallable LexModelsV2Client::ListBotVersionsCallable(const ListBotVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBotVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBotVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListBotVersionsAsync(const ListBotVersionsRequest& request, const ListBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBotVersions(request), context);
    } );
}

ListBotsOutcome LexModelsV2Client::ListBots(const ListBotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  return ListBotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBotsOutcomeCallable LexModelsV2Client::ListBotsCallable(const ListBotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListBotsAsync(const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBots(request), context);
    } );
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

ListBuiltInIntentsOutcomeCallable LexModelsV2Client::ListBuiltInIntentsCallable(const ListBuiltInIntentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuiltInIntentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuiltInIntents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListBuiltInIntentsAsync(const ListBuiltInIntentsRequest& request, const ListBuiltInIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBuiltInIntents(request), context);
    } );
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

ListBuiltInSlotTypesOutcomeCallable LexModelsV2Client::ListBuiltInSlotTypesCallable(const ListBuiltInSlotTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuiltInSlotTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuiltInSlotTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListBuiltInSlotTypesAsync(const ListBuiltInSlotTypesRequest& request, const ListBuiltInSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBuiltInSlotTypes(request), context);
    } );
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

ListCustomVocabularyItemsOutcomeCallable LexModelsV2Client::ListCustomVocabularyItemsCallable(const ListCustomVocabularyItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomVocabularyItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomVocabularyItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListCustomVocabularyItemsAsync(const ListCustomVocabularyItemsRequest& request, const ListCustomVocabularyItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomVocabularyItems(request), context);
    } );
}

ListExportsOutcome LexModelsV2Client::ListExports(const ListExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  return ListExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExportsOutcomeCallable LexModelsV2Client::ListExportsCallable(const ListExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListExportsAsync(const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExports(request), context);
    } );
}

ListImportsOutcome LexModelsV2Client::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  return ListImportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImportsOutcomeCallable LexModelsV2Client::ListImportsCallable(const ListImportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListImportsAsync(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImports(request), context);
    } );
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

ListIntentsOutcomeCallable LexModelsV2Client::ListIntentsCallable(const ListIntentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIntentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIntents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListIntentsAsync(const ListIntentsRequest& request, const ListIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIntents(request), context);
    } );
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

ListRecommendedIntentsOutcomeCallable LexModelsV2Client::ListRecommendedIntentsCallable(const ListRecommendedIntentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecommendedIntentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecommendedIntents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListRecommendedIntentsAsync(const ListRecommendedIntentsRequest& request, const ListRecommendedIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecommendedIntents(request), context);
    } );
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

ListSlotTypesOutcomeCallable LexModelsV2Client::ListSlotTypesCallable(const ListSlotTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSlotTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSlotTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListSlotTypesAsync(const ListSlotTypesRequest& request, const ListSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSlotTypes(request), context);
    } );
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

ListSlotsOutcomeCallable LexModelsV2Client::ListSlotsCallable(const ListSlotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSlotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSlots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListSlotsAsync(const ListSlotsRequest& request, const ListSlotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSlots(request), context);
    } );
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

ListTagsForResourceOutcomeCallable LexModelsV2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
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

SearchAssociatedTranscriptsOutcomeCallable LexModelsV2Client::SearchAssociatedTranscriptsCallable(const SearchAssociatedTranscriptsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAssociatedTranscriptsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAssociatedTranscripts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::SearchAssociatedTranscriptsAsync(const SearchAssociatedTranscriptsRequest& request, const SearchAssociatedTranscriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchAssociatedTranscripts(request), context);
    } );
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

StartBotRecommendationOutcomeCallable LexModelsV2Client::StartBotRecommendationCallable(const StartBotRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBotRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBotRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::StartBotRecommendationAsync(const StartBotRecommendationRequest& request, const StartBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartBotRecommendation(request), context);
    } );
}

StartImportOutcome LexModelsV2Client::StartImport(const StartImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/imports/");
  return StartImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartImportOutcomeCallable LexModelsV2Client::StartImportCallable(const StartImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::StartImportAsync(const StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartImport(request), context);
    } );
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

StopBotRecommendationOutcomeCallable LexModelsV2Client::StopBotRecommendationCallable(const StopBotRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBotRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBotRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::StopBotRecommendationAsync(const StopBotRecommendationRequest& request, const StopBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopBotRecommendation(request), context);
    } );
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

TagResourceOutcomeCallable LexModelsV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
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

UntagResourceOutcomeCallable LexModelsV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
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

UpdateBotOutcomeCallable LexModelsV2Client::UpdateBotCallable(const UpdateBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateBotAsync(const UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBot(request), context);
    } );
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

UpdateBotAliasOutcomeCallable LexModelsV2Client::UpdateBotAliasCallable(const UpdateBotAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBotAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBotAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateBotAliasAsync(const UpdateBotAliasRequest& request, const UpdateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBotAlias(request), context);
    } );
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

UpdateBotLocaleOutcomeCallable LexModelsV2Client::UpdateBotLocaleCallable(const UpdateBotLocaleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBotLocaleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBotLocale(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateBotLocaleAsync(const UpdateBotLocaleRequest& request, const UpdateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBotLocale(request), context);
    } );
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

UpdateBotRecommendationOutcomeCallable LexModelsV2Client::UpdateBotRecommendationCallable(const UpdateBotRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBotRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBotRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateBotRecommendationAsync(const UpdateBotRecommendationRequest& request, const UpdateBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBotRecommendation(request), context);
    } );
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

UpdateExportOutcomeCallable LexModelsV2Client::UpdateExportCallable(const UpdateExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateExportAsync(const UpdateExportRequest& request, const UpdateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateExport(request), context);
    } );
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

UpdateIntentOutcomeCallable LexModelsV2Client::UpdateIntentCallable(const UpdateIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateIntentAsync(const UpdateIntentRequest& request, const UpdateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIntent(request), context);
    } );
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

UpdateResourcePolicyOutcomeCallable LexModelsV2Client::UpdateResourcePolicyCallable(const UpdateResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateResourcePolicyAsync(const UpdateResourcePolicyRequest& request, const UpdateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResourcePolicy(request), context);
    } );
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

UpdateSlotOutcomeCallable LexModelsV2Client::UpdateSlotCallable(const UpdateSlotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSlotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSlot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateSlotAsync(const UpdateSlotRequest& request, const UpdateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSlot(request), context);
    } );
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

UpdateSlotTypeOutcomeCallable LexModelsV2Client::UpdateSlotTypeCallable(const UpdateSlotTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSlotTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSlotType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelsV2Client::UpdateSlotTypeAsync(const UpdateSlotTypeRequest& request, const UpdateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSlotType(request), context);
    } );
}

