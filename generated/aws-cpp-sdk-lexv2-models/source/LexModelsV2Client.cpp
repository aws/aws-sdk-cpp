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

#include <aws/lexv2-models/LexModelsV2Client.h>
#include <aws/lexv2-models/LexModelsV2Endpoint.h>
#include <aws/lexv2-models/LexModelsV2ErrorMarshaller.h>
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

static const char* SERVICE_NAME = "lex";
static const char* ALLOCATION_TAG = "LexModelsV2Client";

LexModelsV2Client::LexModelsV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexModelsV2Client::LexModelsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LexModelsV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexModelsV2Client::~LexModelsV2Client()
{
}

void LexModelsV2Client::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Lex Models V2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LexModelsV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LexModelsV2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BuildBotLocaleOutcome LexModelsV2Client::BuildBotLocale(const BuildBotLocaleRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  return BuildBotLocaleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BuildBotLocaleAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::BuildBotLocaleAsyncHelper(const BuildBotLocaleRequest& request, const BuildBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BuildBotLocale(request), context);
}

CreateBotOutcome LexModelsV2Client::CreateBot(const CreateBotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  return CreateBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateBotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateBotAsyncHelper(const CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBot(request), context);
}

CreateBotAliasOutcome LexModelsV2Client::CreateBotAlias(const CreateBotAliasRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotAlias", "Required field: BotId, is not set");
    return CreateBotAliasOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botaliases/");
  return CreateBotAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateBotAliasAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateBotAliasAsyncHelper(const CreateBotAliasRequest& request, const CreateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBotAlias(request), context);
}

CreateBotLocaleOutcome LexModelsV2Client::CreateBotLocale(const CreateBotLocaleRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  return CreateBotLocaleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateBotLocaleAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateBotLocaleAsyncHelper(const CreateBotLocaleRequest& request, const CreateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBotLocale(request), context);
}

CreateBotVersionOutcome LexModelsV2Client::CreateBotVersion(const CreateBotVersionRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotVersion", "Required field: BotId, is not set");
    return CreateBotVersionOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  return CreateBotVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateBotVersionAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateBotVersionAsyncHelper(const CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBotVersion(request), context);
}

CreateExportOutcome LexModelsV2Client::CreateExport(const CreateExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/exports/");
  return CreateExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateExportAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateExportAsyncHelper(const CreateExportRequest& request, const CreateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateExport(request), context);
}

CreateIntentOutcome LexModelsV2Client::CreateIntent(const CreateIntentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  return CreateIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateIntentAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateIntentAsyncHelper(const CreateIntentRequest& request, const CreateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIntent(request), context);
}

CreateResourcePolicyOutcome LexModelsV2Client::CreateResourcePolicy(const CreateResourcePolicyRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicy", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetResourceArn());
  return CreateResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateResourcePolicyAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateResourcePolicyAsyncHelper(const CreateResourcePolicyRequest& request, const CreateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResourcePolicy(request), context);
}

CreateResourcePolicyStatementOutcome LexModelsV2Client::CreateResourcePolicyStatement(const CreateResourcePolicyStatementRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResourcePolicyStatement", "Required field: ResourceArn, is not set");
    return CreateResourcePolicyStatementOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/statements/");
  return CreateResourcePolicyStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateResourcePolicyStatementAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateResourcePolicyStatementAsyncHelper(const CreateResourcePolicyStatementRequest& request, const CreateResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResourcePolicyStatement(request), context);
}

CreateSlotOutcome LexModelsV2Client::CreateSlot(const CreateSlotRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  uri.AddPathSegments("/slots/");
  return CreateSlotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateSlotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateSlotAsyncHelper(const CreateSlotRequest& request, const CreateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSlot(request), context);
}

CreateSlotTypeOutcome LexModelsV2Client::CreateSlotType(const CreateSlotTypeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/slottypes/");
  return CreateSlotTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateSlotTypeAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateSlotTypeAsyncHelper(const CreateSlotTypeRequest& request, const CreateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSlotType(request), context);
}

CreateUploadUrlOutcome LexModelsV2Client::CreateUploadUrl(const CreateUploadUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/createuploadurl/");
  return CreateUploadUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateUploadUrlAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::CreateUploadUrlAsyncHelper(const CreateUploadUrlRequest& request, const CreateUploadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUploadUrl(request), context);
}

DeleteBotOutcome LexModelsV2Client::DeleteBot(const DeleteBotRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: BotId, is not set");
    return DeleteBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  return DeleteBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteBotAsyncHelper(const DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBot(request), context);
}

DeleteBotAliasOutcome LexModelsV2Client::DeleteBotAlias(const DeleteBotAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botaliases/");
  uri.AddPathSegment(request.GetBotAliasId());
  return DeleteBotAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotAliasAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteBotAliasAsyncHelper(const DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBotAlias(request), context);
}

DeleteBotLocaleOutcome LexModelsV2Client::DeleteBotLocale(const DeleteBotLocaleRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  return DeleteBotLocaleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotLocaleAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteBotLocaleAsyncHelper(const DeleteBotLocaleRequest& request, const DeleteBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBotLocale(request), context);
}

DeleteBotVersionOutcome LexModelsV2Client::DeleteBotVersion(const DeleteBotVersionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  return DeleteBotVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotVersionAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteBotVersionAsyncHelper(const DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBotVersion(request), context);
}

DeleteCustomVocabularyOutcome LexModelsV2Client::DeleteCustomVocabulary(const DeleteCustomVocabularyRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/customvocabulary");
  return DeleteCustomVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomVocabularyAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteCustomVocabularyAsyncHelper(const DeleteCustomVocabularyRequest& request, const DeleteCustomVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomVocabulary(request), context);
}

DeleteExportOutcome LexModelsV2Client::DeleteExport(const DeleteExportRequest& request) const
{
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExport", "Required field: ExportId, is not set");
    return DeleteExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/exports/");
  uri.AddPathSegment(request.GetExportId());
  return DeleteExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteExportAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteExportAsyncHelper(const DeleteExportRequest& request, const DeleteExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteExport(request), context);
}

DeleteImportOutcome LexModelsV2Client::DeleteImport(const DeleteImportRequest& request) const
{
  if (!request.ImportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImport", "Required field: ImportId, is not set");
    return DeleteImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/imports/");
  uri.AddPathSegment(request.GetImportId());
  return DeleteImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteImportAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteImportAsyncHelper(const DeleteImportRequest& request, const DeleteImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteImport(request), context);
}

DeleteIntentOutcome LexModelsV2Client::DeleteIntent(const DeleteIntentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  return DeleteIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntentAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteIntentAsyncHelper(const DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntent(request), context);
}

DeleteResourcePolicyOutcome LexModelsV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetResourceArn());
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteResourcePolicyAsyncHelper(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicy(request), context);
}

DeleteResourcePolicyStatementOutcome LexModelsV2Client::DeleteResourcePolicyStatement(const DeleteResourcePolicyStatementRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/statements/");
  uri.AddPathSegment(request.GetStatementId());
  return DeleteResourcePolicyStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyStatementAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteResourcePolicyStatementAsyncHelper(const DeleteResourcePolicyStatementRequest& request, const DeleteResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicyStatement(request), context);
}

DeleteSlotOutcome LexModelsV2Client::DeleteSlot(const DeleteSlotRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  uri.AddPathSegments("/slots/");
  uri.AddPathSegment(request.GetSlotId());
  return DeleteSlotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSlotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteSlotAsyncHelper(const DeleteSlotRequest& request, const DeleteSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSlot(request), context);
}

DeleteSlotTypeOutcome LexModelsV2Client::DeleteSlotType(const DeleteSlotTypeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetSlotTypeId());
  return DeleteSlotTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSlotTypeAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteSlotTypeAsyncHelper(const DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSlotType(request), context);
}

DeleteUtterancesOutcome LexModelsV2Client::DeleteUtterances(const DeleteUtterancesRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: BotId, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/utterances/");
  return DeleteUtterancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUtterancesAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DeleteUtterancesAsyncHelper(const DeleteUtterancesRequest& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUtterances(request), context);
}

DescribeBotOutcome LexModelsV2Client::DescribeBot(const DescribeBotRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBot", "Required field: BotId, is not set");
    return DescribeBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  return DescribeBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeBotAsyncHelper(const DescribeBotRequest& request, const DescribeBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBot(request), context);
}

DescribeBotAliasOutcome LexModelsV2Client::DescribeBotAlias(const DescribeBotAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botaliases/");
  uri.AddPathSegment(request.GetBotAliasId());
  return DescribeBotAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBotAliasAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeBotAliasAsyncHelper(const DescribeBotAliasRequest& request, const DescribeBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBotAlias(request), context);
}

DescribeBotLocaleOutcome LexModelsV2Client::DescribeBotLocale(const DescribeBotLocaleRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  return DescribeBotLocaleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBotLocaleAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeBotLocaleAsyncHelper(const DescribeBotLocaleRequest& request, const DescribeBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBotLocale(request), context);
}

DescribeBotRecommendationOutcome LexModelsV2Client::DescribeBotRecommendation(const DescribeBotRecommendationRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/botrecommendations/");
  uri.AddPathSegment(request.GetBotRecommendationId());
  return DescribeBotRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBotRecommendationAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeBotRecommendationAsyncHelper(const DescribeBotRecommendationRequest& request, const DescribeBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBotRecommendation(request), context);
}

DescribeBotVersionOutcome LexModelsV2Client::DescribeBotVersion(const DescribeBotVersionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  return DescribeBotVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBotVersionAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeBotVersionAsyncHelper(const DescribeBotVersionRequest& request, const DescribeBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBotVersion(request), context);
}

DescribeCustomVocabularyMetadataOutcome LexModelsV2Client::DescribeCustomVocabularyMetadata(const DescribeCustomVocabularyMetadataRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/customvocabulary/DEFAULT/metadata");
  return DescribeCustomVocabularyMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomVocabularyMetadataAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeCustomVocabularyMetadataAsyncHelper(const DescribeCustomVocabularyMetadataRequest& request, const DescribeCustomVocabularyMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomVocabularyMetadata(request), context);
}

DescribeExportOutcome LexModelsV2Client::DescribeExport(const DescribeExportRequest& request) const
{
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeExport", "Required field: ExportId, is not set");
    return DescribeExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/exports/");
  uri.AddPathSegment(request.GetExportId());
  return DescribeExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExportAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeExportAsyncHelper(const DescribeExportRequest& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExport(request), context);
}

DescribeImportOutcome LexModelsV2Client::DescribeImport(const DescribeImportRequest& request) const
{
  if (!request.ImportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeImport", "Required field: ImportId, is not set");
    return DescribeImportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/imports/");
  uri.AddPathSegment(request.GetImportId());
  return DescribeImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImportAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeImportAsyncHelper(const DescribeImportRequest& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImport(request), context);
}

DescribeIntentOutcome LexModelsV2Client::DescribeIntent(const DescribeIntentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  return DescribeIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIntentAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeIntentAsyncHelper(const DescribeIntentRequest& request, const DescribeIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIntent(request), context);
}

DescribeResourcePolicyOutcome LexModelsV2Client::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeResourcePolicy", "Required field: ResourceArn, is not set");
    return DescribeResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetResourceArn());
  return DescribeResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourcePolicyAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeResourcePolicyAsyncHelper(const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResourcePolicy(request), context);
}

DescribeSlotOutcome LexModelsV2Client::DescribeSlot(const DescribeSlotRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  uri.AddPathSegments("/slots/");
  uri.AddPathSegment(request.GetSlotId());
  return DescribeSlotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSlotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeSlotAsyncHelper(const DescribeSlotRequest& request, const DescribeSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSlot(request), context);
}

DescribeSlotTypeOutcome LexModelsV2Client::DescribeSlotType(const DescribeSlotTypeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetSlotTypeId());
  return DescribeSlotTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSlotTypeAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::DescribeSlotTypeAsyncHelper(const DescribeSlotTypeRequest& request, const DescribeSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSlotType(request), context);
}

ListAggregatedUtterancesOutcome LexModelsV2Client::ListAggregatedUtterances(const ListAggregatedUtterancesRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAggregatedUtterances", "Required field: BotId, is not set");
    return ListAggregatedUtterancesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/aggregatedutterances/");
  return ListAggregatedUtterancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAggregatedUtterancesAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListAggregatedUtterancesAsyncHelper(const ListAggregatedUtterancesRequest& request, const ListAggregatedUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAggregatedUtterances(request), context);
}

ListBotAliasesOutcome LexModelsV2Client::ListBotAliases(const ListBotAliasesRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotAliases", "Required field: BotId, is not set");
    return ListBotAliasesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botaliases/");
  return ListBotAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListBotAliasesAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListBotAliasesAsyncHelper(const ListBotAliasesRequest& request, const ListBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBotAliases(request), context);
}

ListBotLocalesOutcome LexModelsV2Client::ListBotLocales(const ListBotLocalesRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  return ListBotLocalesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListBotLocalesAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListBotLocalesAsyncHelper(const ListBotLocalesRequest& request, const ListBotLocalesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBotLocales(request), context);
}

ListBotRecommendationsOutcome LexModelsV2Client::ListBotRecommendations(const ListBotRecommendationsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/botrecommendations/");
  return ListBotRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListBotRecommendationsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListBotRecommendationsAsyncHelper(const ListBotRecommendationsRequest& request, const ListBotRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBotRecommendations(request), context);
}

ListBotVersionsOutcome LexModelsV2Client::ListBotVersions(const ListBotVersionsRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBotVersions", "Required field: BotId, is not set");
    return ListBotVersionsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  return ListBotVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListBotVersionsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListBotVersionsAsyncHelper(const ListBotVersionsRequest& request, const ListBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBotVersions(request), context);
}

ListBotsOutcome LexModelsV2Client::ListBots(const ListBotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  return ListBotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListBotsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListBotsAsyncHelper(const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBots(request), context);
}

ListBuiltInIntentsOutcome LexModelsV2Client::ListBuiltInIntents(const ListBuiltInIntentsRequest& request) const
{
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBuiltInIntents", "Required field: LocaleId, is not set");
    return ListBuiltInIntentsOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/builtins/locales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  return ListBuiltInIntentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListBuiltInIntentsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListBuiltInIntentsAsyncHelper(const ListBuiltInIntentsRequest& request, const ListBuiltInIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBuiltInIntents(request), context);
}

ListBuiltInSlotTypesOutcome LexModelsV2Client::ListBuiltInSlotTypes(const ListBuiltInSlotTypesRequest& request) const
{
  if (!request.LocaleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBuiltInSlotTypes", "Required field: LocaleId, is not set");
    return ListBuiltInSlotTypesOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LocaleId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/builtins/locales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/slottypes/");
  return ListBuiltInSlotTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListBuiltInSlotTypesAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListBuiltInSlotTypesAsyncHelper(const ListBuiltInSlotTypesRequest& request, const ListBuiltInSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBuiltInSlotTypes(request), context);
}

ListExportsOutcome LexModelsV2Client::ListExports(const ListExportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/exports/");
  return ListExportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListExportsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListExportsAsyncHelper(const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExports(request), context);
}

ListImportsOutcome LexModelsV2Client::ListImports(const ListImportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/imports/");
  return ListImportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListImportsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListImportsAsyncHelper(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListImports(request), context);
}

ListIntentsOutcome LexModelsV2Client::ListIntents(const ListIntentsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  return ListIntentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListIntentsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListIntentsAsyncHelper(const ListIntentsRequest& request, const ListIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIntents(request), context);
}

ListRecommendedIntentsOutcome LexModelsV2Client::ListRecommendedIntents(const ListRecommendedIntentsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/botrecommendations/");
  uri.AddPathSegment(request.GetBotRecommendationId());
  uri.AddPathSegments("/intents");
  return ListRecommendedIntentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListRecommendedIntentsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListRecommendedIntentsAsyncHelper(const ListRecommendedIntentsRequest& request, const ListRecommendedIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecommendedIntents(request), context);
}

ListSlotTypesOutcome LexModelsV2Client::ListSlotTypes(const ListSlotTypesRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/slottypes/");
  return ListSlotTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListSlotTypesAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListSlotTypesAsyncHelper(const ListSlotTypesRequest& request, const ListSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSlotTypes(request), context);
}

ListSlotsOutcome LexModelsV2Client::ListSlots(const ListSlotsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  uri.AddPathSegments("/slots/");
  return ListSlotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListSlotsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListSlotsAsyncHelper(const ListSlotsRequest& request, const ListSlotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSlots(request), context);
}

ListTagsForResourceOutcome LexModelsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceARN());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

SearchAssociatedTranscriptsOutcome LexModelsV2Client::SearchAssociatedTranscripts(const SearchAssociatedTranscriptsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/botrecommendations/");
  uri.AddPathSegment(request.GetBotRecommendationId());
  uri.AddPathSegments("/associatedtranscripts");
  return SearchAssociatedTranscriptsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->SearchAssociatedTranscriptsAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::SearchAssociatedTranscriptsAsyncHelper(const SearchAssociatedTranscriptsRequest& request, const SearchAssociatedTranscriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchAssociatedTranscripts(request), context);
}

StartBotRecommendationOutcome LexModelsV2Client::StartBotRecommendation(const StartBotRecommendationRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/botrecommendations/");
  return StartBotRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->StartBotRecommendationAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::StartBotRecommendationAsyncHelper(const StartBotRecommendationRequest& request, const StartBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartBotRecommendation(request), context);
}

StartImportOutcome LexModelsV2Client::StartImport(const StartImportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/imports/");
  return StartImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->StartImportAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::StartImportAsyncHelper(const StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartImport(request), context);
}

StopBotRecommendationOutcome LexModelsV2Client::StopBotRecommendation(const StopBotRecommendationRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/botrecommendations/");
  uri.AddPathSegment(request.GetBotRecommendationId());
  uri.AddPathSegments("/stopbotrecommendation");
  return StopBotRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->StopBotRecommendationAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::StopBotRecommendationAsyncHelper(const StopBotRecommendationRequest& request, const StopBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopBotRecommendation(request), context);
}

TagResourceOutcome LexModelsV2Client::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceARN, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceARN());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome LexModelsV2Client::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceARN());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateBotOutcome LexModelsV2Client::UpdateBot(const UpdateBotRequest& request) const
{
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: BotId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  return UpdateBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateBotAsyncHelper(const UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBot(request), context);
}

UpdateBotAliasOutcome LexModelsV2Client::UpdateBotAlias(const UpdateBotAliasRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botaliases/");
  uri.AddPathSegment(request.GetBotAliasId());
  return UpdateBotAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBotAliasAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateBotAliasAsyncHelper(const UpdateBotAliasRequest& request, const UpdateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBotAlias(request), context);
}

UpdateBotLocaleOutcome LexModelsV2Client::UpdateBotLocale(const UpdateBotLocaleRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  return UpdateBotLocaleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBotLocaleAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateBotLocaleAsyncHelper(const UpdateBotLocaleRequest& request, const UpdateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBotLocale(request), context);
}

UpdateBotRecommendationOutcome LexModelsV2Client::UpdateBotRecommendation(const UpdateBotRecommendationRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/botrecommendations/");
  uri.AddPathSegment(request.GetBotRecommendationId());
  return UpdateBotRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBotRecommendationAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateBotRecommendationAsyncHelper(const UpdateBotRecommendationRequest& request, const UpdateBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBotRecommendation(request), context);
}

UpdateExportOutcome LexModelsV2Client::UpdateExport(const UpdateExportRequest& request) const
{
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExport", "Required field: ExportId, is not set");
    return UpdateExportOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/exports/");
  uri.AddPathSegment(request.GetExportId());
  return UpdateExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateExportAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateExportAsyncHelper(const UpdateExportRequest& request, const UpdateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateExport(request), context);
}

UpdateIntentOutcome LexModelsV2Client::UpdateIntent(const UpdateIntentRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  return UpdateIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIntentAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateIntentAsyncHelper(const UpdateIntentRequest& request, const UpdateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIntent(request), context);
}

UpdateResourcePolicyOutcome LexModelsV2Client::UpdateResourcePolicy(const UpdateResourcePolicyRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourcePolicy", "Required field: ResourceArn, is not set");
    return UpdateResourcePolicyOutcome(Aws::Client::AWSError<LexModelsV2Errors>(LexModelsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetResourceArn());
  return UpdateResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourcePolicyAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateResourcePolicyAsyncHelper(const UpdateResourcePolicyRequest& request, const UpdateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResourcePolicy(request), context);
}

UpdateSlotOutcome LexModelsV2Client::UpdateSlot(const UpdateSlotRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetIntentId());
  uri.AddPathSegments("/slots/");
  uri.AddPathSegment(request.GetSlotId());
  return UpdateSlotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSlotAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateSlotAsyncHelper(const UpdateSlotRequest& request, const UpdateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSlot(request), context);
}

UpdateSlotTypeOutcome LexModelsV2Client::UpdateSlotType(const UpdateSlotTypeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotId());
  uri.AddPathSegments("/botversions/");
  uri.AddPathSegment(request.GetBotVersion());
  uri.AddPathSegments("/botlocales/");
  uri.AddPathSegment(request.GetLocaleId());
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetSlotTypeId());
  return UpdateSlotTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSlotTypeAsyncHelper( request, handler, context ); } );
}

void LexModelsV2Client::UpdateSlotTypeAsyncHelper(const UpdateSlotTypeRequest& request, const UpdateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSlotType(request), context);
}

