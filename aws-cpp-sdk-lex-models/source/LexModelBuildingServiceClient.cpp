﻿/**
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

#include <aws/lex-models/LexModelBuildingServiceClient.h>
#include <aws/lex-models/LexModelBuildingServiceEndpoint.h>
#include <aws/lex-models/LexModelBuildingServiceErrorMarshaller.h>
#include <aws/lex-models/model/CreateBotVersionRequest.h>
#include <aws/lex-models/model/CreateIntentVersionRequest.h>
#include <aws/lex-models/model/CreateSlotTypeVersionRequest.h>
#include <aws/lex-models/model/DeleteBotRequest.h>
#include <aws/lex-models/model/DeleteBotAliasRequest.h>
#include <aws/lex-models/model/DeleteBotChannelAssociationRequest.h>
#include <aws/lex-models/model/DeleteBotVersionRequest.h>
#include <aws/lex-models/model/DeleteIntentRequest.h>
#include <aws/lex-models/model/DeleteIntentVersionRequest.h>
#include <aws/lex-models/model/DeleteSlotTypeRequest.h>
#include <aws/lex-models/model/DeleteSlotTypeVersionRequest.h>
#include <aws/lex-models/model/DeleteUtterancesRequest.h>
#include <aws/lex-models/model/GetBotRequest.h>
#include <aws/lex-models/model/GetBotAliasRequest.h>
#include <aws/lex-models/model/GetBotAliasesRequest.h>
#include <aws/lex-models/model/GetBotChannelAssociationRequest.h>
#include <aws/lex-models/model/GetBotChannelAssociationsRequest.h>
#include <aws/lex-models/model/GetBotVersionsRequest.h>
#include <aws/lex-models/model/GetBotsRequest.h>
#include <aws/lex-models/model/GetBuiltinIntentRequest.h>
#include <aws/lex-models/model/GetBuiltinIntentsRequest.h>
#include <aws/lex-models/model/GetBuiltinSlotTypesRequest.h>
#include <aws/lex-models/model/GetExportRequest.h>
#include <aws/lex-models/model/GetImportRequest.h>
#include <aws/lex-models/model/GetIntentRequest.h>
#include <aws/lex-models/model/GetIntentVersionsRequest.h>
#include <aws/lex-models/model/GetIntentsRequest.h>
#include <aws/lex-models/model/GetMigrationRequest.h>
#include <aws/lex-models/model/GetMigrationsRequest.h>
#include <aws/lex-models/model/GetSlotTypeRequest.h>
#include <aws/lex-models/model/GetSlotTypeVersionsRequest.h>
#include <aws/lex-models/model/GetSlotTypesRequest.h>
#include <aws/lex-models/model/GetUtterancesViewRequest.h>
#include <aws/lex-models/model/ListTagsForResourceRequest.h>
#include <aws/lex-models/model/PutBotRequest.h>
#include <aws/lex-models/model/PutBotAliasRequest.h>
#include <aws/lex-models/model/PutIntentRequest.h>
#include <aws/lex-models/model/PutSlotTypeRequest.h>
#include <aws/lex-models/model/StartImportRequest.h>
#include <aws/lex-models/model/StartMigrationRequest.h>
#include <aws/lex-models/model/TagResourceRequest.h>
#include <aws/lex-models/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexModelBuildingService;
using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "lex";
static const char* ALLOCATION_TAG = "LexModelBuildingServiceClient";


LexModelBuildingServiceClient::LexModelBuildingServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexModelBuildingServiceClient::LexModelBuildingServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexModelBuildingServiceClient::LexModelBuildingServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LexModelBuildingServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LexModelBuildingServiceClient::~LexModelBuildingServiceClient()
{
}

void LexModelBuildingServiceClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Lex Model Building Service");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LexModelBuildingServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LexModelBuildingServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateBotVersionOutcome LexModelBuildingServiceClient::CreateBotVersion(const CreateBotVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBotVersion", "Required field: Name, is not set");
    return CreateBotVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions");
  return CreateBotVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBotVersionOutcomeCallable LexModelBuildingServiceClient::CreateBotVersionCallable(const CreateBotVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBotVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBotVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::CreateBotVersionAsync(const CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBotVersionAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::CreateBotVersionAsyncHelper(const CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBotVersion(request), context);
}

CreateIntentVersionOutcome LexModelBuildingServiceClient::CreateIntentVersion(const CreateIntentVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntentVersion", "Required field: Name, is not set");
    return CreateIntentVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions");
  return CreateIntentVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIntentVersionOutcomeCallable LexModelBuildingServiceClient::CreateIntentVersionCallable(const CreateIntentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIntentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIntentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::CreateIntentVersionAsync(const CreateIntentVersionRequest& request, const CreateIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIntentVersionAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::CreateIntentVersionAsyncHelper(const CreateIntentVersionRequest& request, const CreateIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIntentVersion(request), context);
}

CreateSlotTypeVersionOutcome LexModelBuildingServiceClient::CreateSlotTypeVersion(const CreateSlotTypeVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSlotTypeVersion", "Required field: Name, is not set");
    return CreateSlotTypeVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions");
  return CreateSlotTypeVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSlotTypeVersionOutcomeCallable LexModelBuildingServiceClient::CreateSlotTypeVersionCallable(const CreateSlotTypeVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSlotTypeVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSlotTypeVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::CreateSlotTypeVersionAsync(const CreateSlotTypeVersionRequest& request, const CreateSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSlotTypeVersionAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::CreateSlotTypeVersionAsyncHelper(const CreateSlotTypeVersionRequest& request, const CreateSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSlotTypeVersion(request), context);
}

DeleteBotOutcome LexModelBuildingServiceClient::DeleteBot(const DeleteBotRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBot", "Required field: Name, is not set");
    return DeleteBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetName());
  return DeleteBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotOutcomeCallable LexModelBuildingServiceClient::DeleteBotCallable(const DeleteBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteBotAsync(const DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteBotAsyncHelper(const DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBot(request), context);
}

DeleteBotAliasOutcome LexModelBuildingServiceClient::DeleteBotAlias(const DeleteBotAliasRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: Name, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotAlias", "Required field: BotName, is not set");
    return DeleteBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetName());
  return DeleteBotAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotAliasOutcomeCallable LexModelBuildingServiceClient::DeleteBotAliasCallable(const DeleteBotAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBotAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteBotAliasAsync(const DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotAliasAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteBotAliasAsyncHelper(const DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBotAlias(request), context);
}

DeleteBotChannelAssociationOutcome LexModelBuildingServiceClient::DeleteBotChannelAssociation(const DeleteBotChannelAssociationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotChannelAssociation", "Required field: Name, is not set");
    return DeleteBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotChannelAssociation", "Required field: BotName, is not set");
    return DeleteBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotChannelAssociation", "Required field: BotAlias, is not set");
    return DeleteBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetBotAlias());
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetName());
  return DeleteBotChannelAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotChannelAssociationOutcomeCallable LexModelBuildingServiceClient::DeleteBotChannelAssociationCallable(const DeleteBotChannelAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotChannelAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBotChannelAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteBotChannelAssociationAsync(const DeleteBotChannelAssociationRequest& request, const DeleteBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotChannelAssociationAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteBotChannelAssociationAsyncHelper(const DeleteBotChannelAssociationRequest& request, const DeleteBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBotChannelAssociation(request), context);
}

DeleteBotVersionOutcome LexModelBuildingServiceClient::DeleteBotVersion(const DeleteBotVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: Name, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBotVersion", "Required field: Version, is not set");
    return DeleteBotVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersion());
  return DeleteBotVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBotVersionOutcomeCallable LexModelBuildingServiceClient::DeleteBotVersionCallable(const DeleteBotVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBotVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBotVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteBotVersionAsync(const DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBotVersionAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteBotVersionAsyncHelper(const DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBotVersion(request), context);
}

DeleteIntentOutcome LexModelBuildingServiceClient::DeleteIntent(const DeleteIntentRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntent", "Required field: Name, is not set");
    return DeleteIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetName());
  return DeleteIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntentOutcomeCallable LexModelBuildingServiceClient::DeleteIntentCallable(const DeleteIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteIntentAsync(const DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntentAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteIntentAsyncHelper(const DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntent(request), context);
}

DeleteIntentVersionOutcome LexModelBuildingServiceClient::DeleteIntentVersion(const DeleteIntentVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntentVersion", "Required field: Name, is not set");
    return DeleteIntentVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntentVersion", "Required field: Version, is not set");
    return DeleteIntentVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersion());
  return DeleteIntentVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntentVersionOutcomeCallable LexModelBuildingServiceClient::DeleteIntentVersionCallable(const DeleteIntentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteIntentVersionAsync(const DeleteIntentVersionRequest& request, const DeleteIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntentVersionAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteIntentVersionAsyncHelper(const DeleteIntentVersionRequest& request, const DeleteIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntentVersion(request), context);
}

DeleteSlotTypeOutcome LexModelBuildingServiceClient::DeleteSlotType(const DeleteSlotTypeRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlotType", "Required field: Name, is not set");
    return DeleteSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetName());
  return DeleteSlotTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSlotTypeOutcomeCallable LexModelBuildingServiceClient::DeleteSlotTypeCallable(const DeleteSlotTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSlotTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSlotType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteSlotTypeAsync(const DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSlotTypeAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteSlotTypeAsyncHelper(const DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSlotType(request), context);
}

DeleteSlotTypeVersionOutcome LexModelBuildingServiceClient::DeleteSlotTypeVersion(const DeleteSlotTypeVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlotTypeVersion", "Required field: Name, is not set");
    return DeleteSlotTypeVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSlotTypeVersion", "Required field: Version, is not set");
    return DeleteSlotTypeVersionOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/version/");
  uri.AddPathSegment(request.GetVersion());
  return DeleteSlotTypeVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSlotTypeVersionOutcomeCallable LexModelBuildingServiceClient::DeleteSlotTypeVersionCallable(const DeleteSlotTypeVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSlotTypeVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSlotTypeVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteSlotTypeVersionAsync(const DeleteSlotTypeVersionRequest& request, const DeleteSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSlotTypeVersionAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteSlotTypeVersionAsyncHelper(const DeleteSlotTypeVersionRequest& request, const DeleteSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSlotTypeVersion(request), context);
}

DeleteUtterancesOutcome LexModelBuildingServiceClient::DeleteUtterances(const DeleteUtterancesRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: BotName, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUtterances", "Required field: UserId, is not set");
    return DeleteUtterancesOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/utterances/");
  uri.AddPathSegment(request.GetUserId());
  return DeleteUtterancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUtterancesOutcomeCallable LexModelBuildingServiceClient::DeleteUtterancesCallable(const DeleteUtterancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUtterancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUtterances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::DeleteUtterancesAsync(const DeleteUtterancesRequest& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUtterancesAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::DeleteUtterancesAsyncHelper(const DeleteUtterancesRequest& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUtterances(request), context);
}

GetBotOutcome LexModelBuildingServiceClient::GetBot(const GetBotRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: Name, is not set");
    return GetBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionOrAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: VersionOrAlias, is not set");
    return GetBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionOrAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionOrAlias());
  return GetBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBotOutcomeCallable LexModelBuildingServiceClient::GetBotCallable(const GetBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBotAsync(const GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBotAsyncHelper(const GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBot(request), context);
}

GetBotAliasOutcome LexModelBuildingServiceClient::GetBotAlias(const GetBotAliasRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotAlias", "Required field: Name, is not set");
    return GetBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotAlias", "Required field: BotName, is not set");
    return GetBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetName());
  return GetBotAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBotAliasOutcomeCallable LexModelBuildingServiceClient::GetBotAliasCallable(const GetBotAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBotAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBotAliasAsync(const GetBotAliasRequest& request, const GetBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotAliasAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBotAliasAsyncHelper(const GetBotAliasRequest& request, const GetBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBotAlias(request), context);
}

GetBotAliasesOutcome LexModelBuildingServiceClient::GetBotAliases(const GetBotAliasesRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotAliases", "Required field: BotName, is not set");
    return GetBotAliasesOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/aliases/");
  return GetBotAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBotAliasesOutcomeCallable LexModelBuildingServiceClient::GetBotAliasesCallable(const GetBotAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBotAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBotAliasesAsync(const GetBotAliasesRequest& request, const GetBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotAliasesAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBotAliasesAsyncHelper(const GetBotAliasesRequest& request, const GetBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBotAliases(request), context);
}

GetBotChannelAssociationOutcome LexModelBuildingServiceClient::GetBotChannelAssociation(const GetBotChannelAssociationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociation", "Required field: Name, is not set");
    return GetBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociation", "Required field: BotName, is not set");
    return GetBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociation", "Required field: BotAlias, is not set");
    return GetBotChannelAssociationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetBotAlias());
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetName());
  return GetBotChannelAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBotChannelAssociationOutcomeCallable LexModelBuildingServiceClient::GetBotChannelAssociationCallable(const GetBotChannelAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotChannelAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBotChannelAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBotChannelAssociationAsync(const GetBotChannelAssociationRequest& request, const GetBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotChannelAssociationAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBotChannelAssociationAsyncHelper(const GetBotChannelAssociationRequest& request, const GetBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBotChannelAssociation(request), context);
}

GetBotChannelAssociationsOutcome LexModelBuildingServiceClient::GetBotChannelAssociations(const GetBotChannelAssociationsRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociations", "Required field: BotName, is not set");
    return GetBotChannelAssociationsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotChannelAssociations", "Required field: BotAlias, is not set");
    return GetBotChannelAssociationsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetBotAlias());
  uri.AddPathSegments("/channels/");
  return GetBotChannelAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBotChannelAssociationsOutcomeCallable LexModelBuildingServiceClient::GetBotChannelAssociationsCallable(const GetBotChannelAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotChannelAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBotChannelAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBotChannelAssociationsAsync(const GetBotChannelAssociationsRequest& request, const GetBotChannelAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotChannelAssociationsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBotChannelAssociationsAsyncHelper(const GetBotChannelAssociationsRequest& request, const GetBotChannelAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBotChannelAssociations(request), context);
}

GetBotVersionsOutcome LexModelBuildingServiceClient::GetBotVersions(const GetBotVersionsRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBotVersions", "Required field: Name, is not set");
    return GetBotVersionsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  return GetBotVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBotVersionsOutcomeCallable LexModelBuildingServiceClient::GetBotVersionsCallable(const GetBotVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBotVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBotVersionsAsync(const GetBotVersionsRequest& request, const GetBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotVersionsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBotVersionsAsyncHelper(const GetBotVersionsRequest& request, const GetBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBotVersions(request), context);
}

GetBotsOutcome LexModelBuildingServiceClient::GetBots(const GetBotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  return GetBotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBotsOutcomeCallable LexModelBuildingServiceClient::GetBotsCallable(const GetBotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBotsAsync(const GetBotsRequest& request, const GetBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBotsAsyncHelper(const GetBotsRequest& request, const GetBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBots(request), context);
}

GetBuiltinIntentOutcome LexModelBuildingServiceClient::GetBuiltinIntent(const GetBuiltinIntentRequest& request) const
{
  if (!request.SignatureHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBuiltinIntent", "Required field: Signature, is not set");
    return GetBuiltinIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Signature]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/builtins/intents/");
  uri.AddPathSegment(request.GetSignature());
  return GetBuiltinIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBuiltinIntentOutcomeCallable LexModelBuildingServiceClient::GetBuiltinIntentCallable(const GetBuiltinIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBuiltinIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBuiltinIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBuiltinIntentAsync(const GetBuiltinIntentRequest& request, const GetBuiltinIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBuiltinIntentAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBuiltinIntentAsyncHelper(const GetBuiltinIntentRequest& request, const GetBuiltinIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBuiltinIntent(request), context);
}

GetBuiltinIntentsOutcome LexModelBuildingServiceClient::GetBuiltinIntents(const GetBuiltinIntentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/builtins/intents/");
  return GetBuiltinIntentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBuiltinIntentsOutcomeCallable LexModelBuildingServiceClient::GetBuiltinIntentsCallable(const GetBuiltinIntentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBuiltinIntentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBuiltinIntents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBuiltinIntentsAsync(const GetBuiltinIntentsRequest& request, const GetBuiltinIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBuiltinIntentsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBuiltinIntentsAsyncHelper(const GetBuiltinIntentsRequest& request, const GetBuiltinIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBuiltinIntents(request), context);
}

GetBuiltinSlotTypesOutcome LexModelBuildingServiceClient::GetBuiltinSlotTypes(const GetBuiltinSlotTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/builtins/slottypes/");
  return GetBuiltinSlotTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBuiltinSlotTypesOutcomeCallable LexModelBuildingServiceClient::GetBuiltinSlotTypesCallable(const GetBuiltinSlotTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBuiltinSlotTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBuiltinSlotTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetBuiltinSlotTypesAsync(const GetBuiltinSlotTypesRequest& request, const GetBuiltinSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBuiltinSlotTypesAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetBuiltinSlotTypesAsyncHelper(const GetBuiltinSlotTypesRequest& request, const GetBuiltinSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBuiltinSlotTypes(request), context);
}

GetExportOutcome LexModelBuildingServiceClient::GetExport(const GetExportRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: Name, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: Version, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: ResourceType, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ExportTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: ExportType, is not set");
    return GetExportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/exports/");
  return GetExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExportOutcomeCallable LexModelBuildingServiceClient::GetExportCallable(const GetExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetExportAsync(const GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExportAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetExportAsyncHelper(const GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExport(request), context);
}

GetImportOutcome LexModelBuildingServiceClient::GetImport(const GetImportRequest& request) const
{
  if (!request.ImportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImport", "Required field: ImportId, is not set");
    return GetImportOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/imports/");
  uri.AddPathSegment(request.GetImportId());
  return GetImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImportOutcomeCallable LexModelBuildingServiceClient::GetImportCallable(const GetImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetImportAsync(const GetImportRequest& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetImportAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetImportAsyncHelper(const GetImportRequest& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetImport(request), context);
}

GetIntentOutcome LexModelBuildingServiceClient::GetIntent(const GetIntentRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntent", "Required field: Name, is not set");
    return GetIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntent", "Required field: Version, is not set");
    return GetIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersion());
  return GetIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntentOutcomeCallable LexModelBuildingServiceClient::GetIntentCallable(const GetIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetIntentAsync(const GetIntentRequest& request, const GetIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntentAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetIntentAsyncHelper(const GetIntentRequest& request, const GetIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntent(request), context);
}

GetIntentVersionsOutcome LexModelBuildingServiceClient::GetIntentVersions(const GetIntentVersionsRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntentVersions", "Required field: Name, is not set");
    return GetIntentVersionsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  return GetIntentVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntentVersionsOutcomeCallable LexModelBuildingServiceClient::GetIntentVersionsCallable(const GetIntentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetIntentVersionsAsync(const GetIntentVersionsRequest& request, const GetIntentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntentVersionsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetIntentVersionsAsyncHelper(const GetIntentVersionsRequest& request, const GetIntentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntentVersions(request), context);
}

GetIntentsOutcome LexModelBuildingServiceClient::GetIntents(const GetIntentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/intents/");
  return GetIntentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntentsOutcomeCallable LexModelBuildingServiceClient::GetIntentsCallable(const GetIntentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetIntentsAsync(const GetIntentsRequest& request, const GetIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntentsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetIntentsAsyncHelper(const GetIntentsRequest& request, const GetIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntents(request), context);
}

GetMigrationOutcome LexModelBuildingServiceClient::GetMigration(const GetMigrationRequest& request) const
{
  if (!request.MigrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMigration", "Required field: MigrationId, is not set");
    return GetMigrationOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MigrationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrations/");
  uri.AddPathSegment(request.GetMigrationId());
  return GetMigrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMigrationOutcomeCallable LexModelBuildingServiceClient::GetMigrationCallable(const GetMigrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMigrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMigration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetMigrationAsync(const GetMigrationRequest& request, const GetMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMigrationAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetMigrationAsyncHelper(const GetMigrationRequest& request, const GetMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMigration(request), context);
}

GetMigrationsOutcome LexModelBuildingServiceClient::GetMigrations(const GetMigrationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrations");
  return GetMigrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMigrationsOutcomeCallable LexModelBuildingServiceClient::GetMigrationsCallable(const GetMigrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMigrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMigrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetMigrationsAsync(const GetMigrationsRequest& request, const GetMigrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMigrationsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetMigrationsAsyncHelper(const GetMigrationsRequest& request, const GetMigrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMigrations(request), context);
}

GetSlotTypeOutcome LexModelBuildingServiceClient::GetSlotType(const GetSlotTypeRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSlotType", "Required field: Name, is not set");
    return GetSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSlotType", "Required field: Version, is not set");
    return GetSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersion());
  return GetSlotTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSlotTypeOutcomeCallable LexModelBuildingServiceClient::GetSlotTypeCallable(const GetSlotTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSlotTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSlotType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetSlotTypeAsync(const GetSlotTypeRequest& request, const GetSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSlotTypeAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetSlotTypeAsyncHelper(const GetSlotTypeRequest& request, const GetSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSlotType(request), context);
}

GetSlotTypeVersionsOutcome LexModelBuildingServiceClient::GetSlotTypeVersions(const GetSlotTypeVersionsRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSlotTypeVersions", "Required field: Name, is not set");
    return GetSlotTypeVersionsOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/");
  return GetSlotTypeVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSlotTypeVersionsOutcomeCallable LexModelBuildingServiceClient::GetSlotTypeVersionsCallable(const GetSlotTypeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSlotTypeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSlotTypeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetSlotTypeVersionsAsync(const GetSlotTypeVersionsRequest& request, const GetSlotTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSlotTypeVersionsAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetSlotTypeVersionsAsyncHelper(const GetSlotTypeVersionsRequest& request, const GetSlotTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSlotTypeVersions(request), context);
}

GetSlotTypesOutcome LexModelBuildingServiceClient::GetSlotTypes(const GetSlotTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/slottypes/");
  return GetSlotTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSlotTypesOutcomeCallable LexModelBuildingServiceClient::GetSlotTypesCallable(const GetSlotTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSlotTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSlotTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetSlotTypesAsync(const GetSlotTypesRequest& request, const GetSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSlotTypesAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetSlotTypesAsyncHelper(const GetSlotTypesRequest& request, const GetSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSlotTypes(request), context);
}

GetUtterancesViewOutcome LexModelBuildingServiceClient::GetUtterancesView(const GetUtterancesViewRequest& request) const
{
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUtterancesView", "Required field: BotName, is not set");
    return GetUtterancesViewOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotVersionsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUtterancesView", "Required field: BotVersions, is not set");
    return GetUtterancesViewOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotVersions]", false));
  }
  if (!request.StatusTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUtterancesView", "Required field: StatusType, is not set");
    return GetUtterancesViewOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/utterances");
  ss.str("?view=aggregation");
  uri.SetQueryString(ss.str());
  return GetUtterancesViewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUtterancesViewOutcomeCallable LexModelBuildingServiceClient::GetUtterancesViewCallable(const GetUtterancesViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUtterancesViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUtterancesView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::GetUtterancesViewAsync(const GetUtterancesViewRequest& request, const GetUtterancesViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUtterancesViewAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::GetUtterancesViewAsyncHelper(const GetUtterancesViewRequest& request, const GetUtterancesViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUtterancesView(request), context);
}

ListTagsForResourceOutcome LexModelBuildingServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable LexModelBuildingServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutBotOutcome LexModelBuildingServiceClient::PutBot(const PutBotRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBot", "Required field: Name, is not set");
    return PutBotOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/$LATEST");
  return PutBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutBotOutcomeCallable LexModelBuildingServiceClient::PutBotCallable(const PutBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::PutBotAsync(const PutBotRequest& request, const PutBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutBotAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::PutBotAsyncHelper(const PutBotRequest& request, const PutBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBot(request), context);
}

PutBotAliasOutcome LexModelBuildingServiceClient::PutBotAlias(const PutBotAliasRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBotAlias", "Required field: Name, is not set");
    return PutBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBotAlias", "Required field: BotName, is not set");
    return PutBotAliasOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/bots/");
  uri.AddPathSegment(request.GetBotName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetName());
  return PutBotAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutBotAliasOutcomeCallable LexModelBuildingServiceClient::PutBotAliasCallable(const PutBotAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBotAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBotAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::PutBotAliasAsync(const PutBotAliasRequest& request, const PutBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutBotAliasAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::PutBotAliasAsyncHelper(const PutBotAliasRequest& request, const PutBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBotAlias(request), context);
}

PutIntentOutcome LexModelBuildingServiceClient::PutIntent(const PutIntentRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntent", "Required field: Name, is not set");
    return PutIntentOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/intents/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/$LATEST");
  return PutIntentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutIntentOutcomeCallable LexModelBuildingServiceClient::PutIntentCallable(const PutIntentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::PutIntentAsync(const PutIntentRequest& request, const PutIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutIntentAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::PutIntentAsyncHelper(const PutIntentRequest& request, const PutIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutIntent(request), context);
}

PutSlotTypeOutcome LexModelBuildingServiceClient::PutSlotType(const PutSlotTypeRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSlotType", "Required field: Name, is not set");
    return PutSlotTypeOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/slottypes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/versions/$LATEST");
  return PutSlotTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSlotTypeOutcomeCallable LexModelBuildingServiceClient::PutSlotTypeCallable(const PutSlotTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSlotTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSlotType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::PutSlotTypeAsync(const PutSlotTypeRequest& request, const PutSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSlotTypeAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::PutSlotTypeAsyncHelper(const PutSlotTypeRequest& request, const PutSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSlotType(request), context);
}

StartImportOutcome LexModelBuildingServiceClient::StartImport(const StartImportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/imports/");
  return StartImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImportOutcomeCallable LexModelBuildingServiceClient::StartImportCallable(const StartImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::StartImportAsync(const StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartImportAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::StartImportAsyncHelper(const StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartImport(request), context);
}

StartMigrationOutcome LexModelBuildingServiceClient::StartMigration(const StartMigrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrations");
  return StartMigrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMigrationOutcomeCallable LexModelBuildingServiceClient::StartMigrationCallable(const StartMigrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMigrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMigration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::StartMigrationAsync(const StartMigrationRequest& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartMigrationAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::StartMigrationAsyncHelper(const StartMigrationRequest& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartMigration(request), context);
}

TagResourceOutcome LexModelBuildingServiceClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LexModelBuildingServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome LexModelBuildingServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LexModelBuildingServiceErrors>(LexModelBuildingServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LexModelBuildingServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LexModelBuildingServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void LexModelBuildingServiceClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

