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

#include <aws/ivs/IVSClient.h>
#include <aws/ivs/IVSEndpoint.h>
#include <aws/ivs/IVSErrorMarshaller.h>
#include <aws/ivs/model/BatchGetChannelRequest.h>
#include <aws/ivs/model/BatchGetStreamKeyRequest.h>
#include <aws/ivs/model/CreateChannelRequest.h>
#include <aws/ivs/model/CreateRecordingConfigurationRequest.h>
#include <aws/ivs/model/CreateStreamKeyRequest.h>
#include <aws/ivs/model/DeleteChannelRequest.h>
#include <aws/ivs/model/DeletePlaybackKeyPairRequest.h>
#include <aws/ivs/model/DeleteRecordingConfigurationRequest.h>
#include <aws/ivs/model/DeleteStreamKeyRequest.h>
#include <aws/ivs/model/GetChannelRequest.h>
#include <aws/ivs/model/GetPlaybackKeyPairRequest.h>
#include <aws/ivs/model/GetRecordingConfigurationRequest.h>
#include <aws/ivs/model/GetStreamRequest.h>
#include <aws/ivs/model/GetStreamKeyRequest.h>
#include <aws/ivs/model/GetStreamSessionRequest.h>
#include <aws/ivs/model/ImportPlaybackKeyPairRequest.h>
#include <aws/ivs/model/ListChannelsRequest.h>
#include <aws/ivs/model/ListPlaybackKeyPairsRequest.h>
#include <aws/ivs/model/ListRecordingConfigurationsRequest.h>
#include <aws/ivs/model/ListStreamKeysRequest.h>
#include <aws/ivs/model/ListStreamSessionsRequest.h>
#include <aws/ivs/model/ListStreamsRequest.h>
#include <aws/ivs/model/ListTagsForResourceRequest.h>
#include <aws/ivs/model/PutMetadataRequest.h>
#include <aws/ivs/model/StopStreamRequest.h>
#include <aws/ivs/model/TagResourceRequest.h>
#include <aws/ivs/model/UntagResourceRequest.h>
#include <aws/ivs/model/UpdateChannelRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IVS;
using namespace Aws::IVS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ivs";
static const char* ALLOCATION_TAG = "IVSClient";


IVSClient::IVSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IVSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IVSClient::IVSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IVSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IVSClient::IVSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IVSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IVSClient::~IVSClient()
{
}

void IVSClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("ivs");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IVSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IVSClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchGetChannelOutcome IVSClient::BatchGetChannel(const BatchGetChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/BatchGetChannel");
  return BatchGetChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetChannelOutcomeCallable IVSClient::BatchGetChannelCallable(const BatchGetChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::BatchGetChannelAsync(const BatchGetChannelRequest& request, const BatchGetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetChannelAsyncHelper( request, handler, context ); } );
}

void IVSClient::BatchGetChannelAsyncHelper(const BatchGetChannelRequest& request, const BatchGetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetChannel(request), context);
}

BatchGetStreamKeyOutcome IVSClient::BatchGetStreamKey(const BatchGetStreamKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/BatchGetStreamKey");
  return BatchGetStreamKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetStreamKeyOutcomeCallable IVSClient::BatchGetStreamKeyCallable(const BatchGetStreamKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetStreamKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetStreamKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::BatchGetStreamKeyAsync(const BatchGetStreamKeyRequest& request, const BatchGetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetStreamKeyAsyncHelper( request, handler, context ); } );
}

void IVSClient::BatchGetStreamKeyAsyncHelper(const BatchGetStreamKeyRequest& request, const BatchGetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetStreamKey(request), context);
}

CreateChannelOutcome IVSClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateChannel");
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable IVSClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelAsyncHelper( request, handler, context ); } );
}

void IVSClient::CreateChannelAsyncHelper(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannel(request), context);
}

CreateRecordingConfigurationOutcome IVSClient::CreateRecordingConfiguration(const CreateRecordingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateRecordingConfiguration");
  return CreateRecordingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecordingConfigurationOutcomeCallable IVSClient::CreateRecordingConfigurationCallable(const CreateRecordingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecordingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecordingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::CreateRecordingConfigurationAsync(const CreateRecordingConfigurationRequest& request, const CreateRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRecordingConfigurationAsyncHelper( request, handler, context ); } );
}

void IVSClient::CreateRecordingConfigurationAsyncHelper(const CreateRecordingConfigurationRequest& request, const CreateRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRecordingConfiguration(request), context);
}

CreateStreamKeyOutcome IVSClient::CreateStreamKey(const CreateStreamKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateStreamKey");
  return CreateStreamKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamKeyOutcomeCallable IVSClient::CreateStreamKeyCallable(const CreateStreamKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::CreateStreamKeyAsync(const CreateStreamKeyRequest& request, const CreateStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamKeyAsyncHelper( request, handler, context ); } );
}

void IVSClient::CreateStreamKeyAsyncHelper(const CreateStreamKeyRequest& request, const CreateStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamKey(request), context);
}

DeleteChannelOutcome IVSClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteChannel");
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable IVSClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelAsyncHelper( request, handler, context ); } );
}

void IVSClient::DeleteChannelAsyncHelper(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannel(request), context);
}

DeletePlaybackKeyPairOutcome IVSClient::DeletePlaybackKeyPair(const DeletePlaybackKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeletePlaybackKeyPair");
  return DeletePlaybackKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePlaybackKeyPairOutcomeCallable IVSClient::DeletePlaybackKeyPairCallable(const DeletePlaybackKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlaybackKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlaybackKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::DeletePlaybackKeyPairAsync(const DeletePlaybackKeyPairRequest& request, const DeletePlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePlaybackKeyPairAsyncHelper( request, handler, context ); } );
}

void IVSClient::DeletePlaybackKeyPairAsyncHelper(const DeletePlaybackKeyPairRequest& request, const DeletePlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePlaybackKeyPair(request), context);
}

DeleteRecordingConfigurationOutcome IVSClient::DeleteRecordingConfiguration(const DeleteRecordingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteRecordingConfiguration");
  return DeleteRecordingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecordingConfigurationOutcomeCallable IVSClient::DeleteRecordingConfigurationCallable(const DeleteRecordingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecordingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecordingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::DeleteRecordingConfigurationAsync(const DeleteRecordingConfigurationRequest& request, const DeleteRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRecordingConfigurationAsyncHelper( request, handler, context ); } );
}

void IVSClient::DeleteRecordingConfigurationAsyncHelper(const DeleteRecordingConfigurationRequest& request, const DeleteRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRecordingConfiguration(request), context);
}

DeleteStreamKeyOutcome IVSClient::DeleteStreamKey(const DeleteStreamKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteStreamKey");
  return DeleteStreamKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamKeyOutcomeCallable IVSClient::DeleteStreamKeyCallable(const DeleteStreamKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::DeleteStreamKeyAsync(const DeleteStreamKeyRequest& request, const DeleteStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamKeyAsyncHelper( request, handler, context ); } );
}

void IVSClient::DeleteStreamKeyAsyncHelper(const DeleteStreamKeyRequest& request, const DeleteStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamKey(request), context);
}

GetChannelOutcome IVSClient::GetChannel(const GetChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetChannel");
  return GetChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChannelOutcomeCallable IVSClient::GetChannelCallable(const GetChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::GetChannelAsync(const GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelAsyncHelper( request, handler, context ); } );
}

void IVSClient::GetChannelAsyncHelper(const GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannel(request), context);
}

GetPlaybackKeyPairOutcome IVSClient::GetPlaybackKeyPair(const GetPlaybackKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetPlaybackKeyPair");
  return GetPlaybackKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPlaybackKeyPairOutcomeCallable IVSClient::GetPlaybackKeyPairCallable(const GetPlaybackKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlaybackKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlaybackKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::GetPlaybackKeyPairAsync(const GetPlaybackKeyPairRequest& request, const GetPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPlaybackKeyPairAsyncHelper( request, handler, context ); } );
}

void IVSClient::GetPlaybackKeyPairAsyncHelper(const GetPlaybackKeyPairRequest& request, const GetPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPlaybackKeyPair(request), context);
}

GetRecordingConfigurationOutcome IVSClient::GetRecordingConfiguration(const GetRecordingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetRecordingConfiguration");
  return GetRecordingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRecordingConfigurationOutcomeCallable IVSClient::GetRecordingConfigurationCallable(const GetRecordingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecordingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecordingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::GetRecordingConfigurationAsync(const GetRecordingConfigurationRequest& request, const GetRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRecordingConfigurationAsyncHelper( request, handler, context ); } );
}

void IVSClient::GetRecordingConfigurationAsyncHelper(const GetRecordingConfigurationRequest& request, const GetRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRecordingConfiguration(request), context);
}

GetStreamOutcome IVSClient::GetStream(const GetStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetStream");
  return GetStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStreamOutcomeCallable IVSClient::GetStreamCallable(const GetStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::GetStreamAsync(const GetStreamRequest& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamAsyncHelper( request, handler, context ); } );
}

void IVSClient::GetStreamAsyncHelper(const GetStreamRequest& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStream(request), context);
}

GetStreamKeyOutcome IVSClient::GetStreamKey(const GetStreamKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetStreamKey");
  return GetStreamKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStreamKeyOutcomeCallable IVSClient::GetStreamKeyCallable(const GetStreamKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::GetStreamKeyAsync(const GetStreamKeyRequest& request, const GetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamKeyAsyncHelper( request, handler, context ); } );
}

void IVSClient::GetStreamKeyAsyncHelper(const GetStreamKeyRequest& request, const GetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamKey(request), context);
}

GetStreamSessionOutcome IVSClient::GetStreamSession(const GetStreamSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetStreamSession");
  return GetStreamSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStreamSessionOutcomeCallable IVSClient::GetStreamSessionCallable(const GetStreamSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::GetStreamSessionAsync(const GetStreamSessionRequest& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamSessionAsyncHelper( request, handler, context ); } );
}

void IVSClient::GetStreamSessionAsyncHelper(const GetStreamSessionRequest& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamSession(request), context);
}

ImportPlaybackKeyPairOutcome IVSClient::ImportPlaybackKeyPair(const ImportPlaybackKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ImportPlaybackKeyPair");
  return ImportPlaybackKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportPlaybackKeyPairOutcomeCallable IVSClient::ImportPlaybackKeyPairCallable(const ImportPlaybackKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportPlaybackKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportPlaybackKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ImportPlaybackKeyPairAsync(const ImportPlaybackKeyPairRequest& request, const ImportPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportPlaybackKeyPairAsyncHelper( request, handler, context ); } );
}

void IVSClient::ImportPlaybackKeyPairAsyncHelper(const ImportPlaybackKeyPairRequest& request, const ImportPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportPlaybackKeyPair(request), context);
}

ListChannelsOutcome IVSClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListChannels");
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable IVSClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAsyncHelper( request, handler, context ); } );
}

void IVSClient::ListChannelsAsyncHelper(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannels(request), context);
}

ListPlaybackKeyPairsOutcome IVSClient::ListPlaybackKeyPairs(const ListPlaybackKeyPairsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListPlaybackKeyPairs");
  return ListPlaybackKeyPairsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPlaybackKeyPairsOutcomeCallable IVSClient::ListPlaybackKeyPairsCallable(const ListPlaybackKeyPairsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlaybackKeyPairsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlaybackKeyPairs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ListPlaybackKeyPairsAsync(const ListPlaybackKeyPairsRequest& request, const ListPlaybackKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPlaybackKeyPairsAsyncHelper( request, handler, context ); } );
}

void IVSClient::ListPlaybackKeyPairsAsyncHelper(const ListPlaybackKeyPairsRequest& request, const ListPlaybackKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPlaybackKeyPairs(request), context);
}

ListRecordingConfigurationsOutcome IVSClient::ListRecordingConfigurations(const ListRecordingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListRecordingConfigurations");
  return ListRecordingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecordingConfigurationsOutcomeCallable IVSClient::ListRecordingConfigurationsCallable(const ListRecordingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecordingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecordingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ListRecordingConfigurationsAsync(const ListRecordingConfigurationsRequest& request, const ListRecordingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecordingConfigurationsAsyncHelper( request, handler, context ); } );
}

void IVSClient::ListRecordingConfigurationsAsyncHelper(const ListRecordingConfigurationsRequest& request, const ListRecordingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecordingConfigurations(request), context);
}

ListStreamKeysOutcome IVSClient::ListStreamKeys(const ListStreamKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListStreamKeys");
  return ListStreamKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamKeysOutcomeCallable IVSClient::ListStreamKeysCallable(const ListStreamKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ListStreamKeysAsync(const ListStreamKeysRequest& request, const ListStreamKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamKeysAsyncHelper( request, handler, context ); } );
}

void IVSClient::ListStreamKeysAsyncHelper(const ListStreamKeysRequest& request, const ListStreamKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamKeys(request), context);
}

ListStreamSessionsOutcome IVSClient::ListStreamSessions(const ListStreamSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListStreamSessions");
  return ListStreamSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamSessionsOutcomeCallable IVSClient::ListStreamSessionsCallable(const ListStreamSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ListStreamSessionsAsync(const ListStreamSessionsRequest& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamSessionsAsyncHelper( request, handler, context ); } );
}

void IVSClient::ListStreamSessionsAsyncHelper(const ListStreamSessionsRequest& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamSessions(request), context);
}

ListStreamsOutcome IVSClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListStreams");
  return ListStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamsOutcomeCallable IVSClient::ListStreamsCallable(const ListStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamsAsyncHelper( request, handler, context ); } );
}

void IVSClient::ListStreamsAsyncHelper(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreams(request), context);
}

ListTagsForResourceOutcome IVSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IVSErrors>(IVSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IVSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void IVSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutMetadataOutcome IVSClient::PutMetadata(const PutMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/PutMetadata");
  return PutMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMetadataOutcomeCallable IVSClient::PutMetadataCallable(const PutMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::PutMetadataAsync(const PutMetadataRequest& request, const PutMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutMetadataAsyncHelper( request, handler, context ); } );
}

void IVSClient::PutMetadataAsyncHelper(const PutMetadataRequest& request, const PutMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMetadata(request), context);
}

StopStreamOutcome IVSClient::StopStream(const StopStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StopStream");
  return StopStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopStreamOutcomeCallable IVSClient::StopStreamCallable(const StopStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::StopStreamAsync(const StopStreamRequest& request, const StopStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopStreamAsyncHelper( request, handler, context ); } );
}

void IVSClient::StopStreamAsyncHelper(const StopStreamRequest& request, const StopStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopStream(request), context);
}

TagResourceOutcome IVSClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IVSErrors>(IVSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IVSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void IVSClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome IVSClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IVSErrors>(IVSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IVSErrors>(IVSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IVSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void IVSClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateChannelOutcome IVSClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateChannel");
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable IVSClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IVSClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelAsyncHelper( request, handler, context ); } );
}

void IVSClient::UpdateChannelAsyncHelper(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannel(request), context);
}

