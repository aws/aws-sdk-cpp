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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IVSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IVSClient::IVSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IVSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IVSClient::IVSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  AWSClient::SetServiceClientName("ivs");
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

void IVSClientBatchGetChannelAsyncHelper(IVSClient const * const clientThis, const BatchGetChannelRequest& request, const BatchGetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetChannel(request), context);
}

void IVSClient::BatchGetChannelAsync(const BatchGetChannelRequest& request, const BatchGetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientBatchGetChannelAsyncHelper( this, request, handler, context ); } );
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

void IVSClientBatchGetStreamKeyAsyncHelper(IVSClient const * const clientThis, const BatchGetStreamKeyRequest& request, const BatchGetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetStreamKey(request), context);
}

void IVSClient::BatchGetStreamKeyAsync(const BatchGetStreamKeyRequest& request, const BatchGetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientBatchGetStreamKeyAsyncHelper( this, request, handler, context ); } );
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

void IVSClientCreateChannelAsyncHelper(IVSClient const * const clientThis, const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateChannel(request), context);
}

void IVSClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientCreateChannelAsyncHelper( this, request, handler, context ); } );
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

void IVSClientCreateRecordingConfigurationAsyncHelper(IVSClient const * const clientThis, const CreateRecordingConfigurationRequest& request, const CreateRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRecordingConfiguration(request), context);
}

void IVSClient::CreateRecordingConfigurationAsync(const CreateRecordingConfigurationRequest& request, const CreateRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientCreateRecordingConfigurationAsyncHelper( this, request, handler, context ); } );
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

void IVSClientCreateStreamKeyAsyncHelper(IVSClient const * const clientThis, const CreateStreamKeyRequest& request, const CreateStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStreamKey(request), context);
}

void IVSClient::CreateStreamKeyAsync(const CreateStreamKeyRequest& request, const CreateStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientCreateStreamKeyAsyncHelper( this, request, handler, context ); } );
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

void IVSClientDeleteChannelAsyncHelper(IVSClient const * const clientThis, const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteChannel(request), context);
}

void IVSClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientDeleteChannelAsyncHelper( this, request, handler, context ); } );
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

void IVSClientDeletePlaybackKeyPairAsyncHelper(IVSClient const * const clientThis, const DeletePlaybackKeyPairRequest& request, const DeletePlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePlaybackKeyPair(request), context);
}

void IVSClient::DeletePlaybackKeyPairAsync(const DeletePlaybackKeyPairRequest& request, const DeletePlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientDeletePlaybackKeyPairAsyncHelper( this, request, handler, context ); } );
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

void IVSClientDeleteRecordingConfigurationAsyncHelper(IVSClient const * const clientThis, const DeleteRecordingConfigurationRequest& request, const DeleteRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRecordingConfiguration(request), context);
}

void IVSClient::DeleteRecordingConfigurationAsync(const DeleteRecordingConfigurationRequest& request, const DeleteRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientDeleteRecordingConfigurationAsyncHelper( this, request, handler, context ); } );
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

void IVSClientDeleteStreamKeyAsyncHelper(IVSClient const * const clientThis, const DeleteStreamKeyRequest& request, const DeleteStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStreamKey(request), context);
}

void IVSClient::DeleteStreamKeyAsync(const DeleteStreamKeyRequest& request, const DeleteStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientDeleteStreamKeyAsyncHelper( this, request, handler, context ); } );
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

void IVSClientGetChannelAsyncHelper(IVSClient const * const clientThis, const GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChannel(request), context);
}

void IVSClient::GetChannelAsync(const GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientGetChannelAsyncHelper( this, request, handler, context ); } );
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

void IVSClientGetPlaybackKeyPairAsyncHelper(IVSClient const * const clientThis, const GetPlaybackKeyPairRequest& request, const GetPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPlaybackKeyPair(request), context);
}

void IVSClient::GetPlaybackKeyPairAsync(const GetPlaybackKeyPairRequest& request, const GetPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientGetPlaybackKeyPairAsyncHelper( this, request, handler, context ); } );
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

void IVSClientGetRecordingConfigurationAsyncHelper(IVSClient const * const clientThis, const GetRecordingConfigurationRequest& request, const GetRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRecordingConfiguration(request), context);
}

void IVSClient::GetRecordingConfigurationAsync(const GetRecordingConfigurationRequest& request, const GetRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientGetRecordingConfigurationAsyncHelper( this, request, handler, context ); } );
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

void IVSClientGetStreamAsyncHelper(IVSClient const * const clientThis, const GetStreamRequest& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStream(request), context);
}

void IVSClient::GetStreamAsync(const GetStreamRequest& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientGetStreamAsyncHelper( this, request, handler, context ); } );
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

void IVSClientGetStreamKeyAsyncHelper(IVSClient const * const clientThis, const GetStreamKeyRequest& request, const GetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStreamKey(request), context);
}

void IVSClient::GetStreamKeyAsync(const GetStreamKeyRequest& request, const GetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientGetStreamKeyAsyncHelper( this, request, handler, context ); } );
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

void IVSClientGetStreamSessionAsyncHelper(IVSClient const * const clientThis, const GetStreamSessionRequest& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStreamSession(request), context);
}

void IVSClient::GetStreamSessionAsync(const GetStreamSessionRequest& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientGetStreamSessionAsyncHelper( this, request, handler, context ); } );
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

void IVSClientImportPlaybackKeyPairAsyncHelper(IVSClient const * const clientThis, const ImportPlaybackKeyPairRequest& request, const ImportPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportPlaybackKeyPair(request), context);
}

void IVSClient::ImportPlaybackKeyPairAsync(const ImportPlaybackKeyPairRequest& request, const ImportPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientImportPlaybackKeyPairAsyncHelper( this, request, handler, context ); } );
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

void IVSClientListChannelsAsyncHelper(IVSClient const * const clientThis, const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListChannels(request), context);
}

void IVSClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientListChannelsAsyncHelper( this, request, handler, context ); } );
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

void IVSClientListPlaybackKeyPairsAsyncHelper(IVSClient const * const clientThis, const ListPlaybackKeyPairsRequest& request, const ListPlaybackKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPlaybackKeyPairs(request), context);
}

void IVSClient::ListPlaybackKeyPairsAsync(const ListPlaybackKeyPairsRequest& request, const ListPlaybackKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientListPlaybackKeyPairsAsyncHelper( this, request, handler, context ); } );
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

void IVSClientListRecordingConfigurationsAsyncHelper(IVSClient const * const clientThis, const ListRecordingConfigurationsRequest& request, const ListRecordingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRecordingConfigurations(request), context);
}

void IVSClient::ListRecordingConfigurationsAsync(const ListRecordingConfigurationsRequest& request, const ListRecordingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientListRecordingConfigurationsAsyncHelper( this, request, handler, context ); } );
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

void IVSClientListStreamKeysAsyncHelper(IVSClient const * const clientThis, const ListStreamKeysRequest& request, const ListStreamKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStreamKeys(request), context);
}

void IVSClient::ListStreamKeysAsync(const ListStreamKeysRequest& request, const ListStreamKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientListStreamKeysAsyncHelper( this, request, handler, context ); } );
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

void IVSClientListStreamSessionsAsyncHelper(IVSClient const * const clientThis, const ListStreamSessionsRequest& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStreamSessions(request), context);
}

void IVSClient::ListStreamSessionsAsync(const ListStreamSessionsRequest& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientListStreamSessionsAsyncHelper( this, request, handler, context ); } );
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

void IVSClientListStreamsAsyncHelper(IVSClient const * const clientThis, const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStreams(request), context);
}

void IVSClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientListStreamsAsyncHelper( this, request, handler, context ); } );
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

void IVSClientListTagsForResourceAsyncHelper(IVSClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void IVSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void IVSClientPutMetadataAsyncHelper(IVSClient const * const clientThis, const PutMetadataRequest& request, const PutMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMetadata(request), context);
}

void IVSClient::PutMetadataAsync(const PutMetadataRequest& request, const PutMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientPutMetadataAsyncHelper( this, request, handler, context ); } );
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

void IVSClientStopStreamAsyncHelper(IVSClient const * const clientThis, const StopStreamRequest& request, const StopStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopStream(request), context);
}

void IVSClient::StopStreamAsync(const StopStreamRequest& request, const StopStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientStopStreamAsyncHelper( this, request, handler, context ); } );
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

void IVSClientTagResourceAsyncHelper(IVSClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void IVSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void IVSClientUntagResourceAsyncHelper(IVSClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void IVSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void IVSClientUpdateChannelAsyncHelper(IVSClient const * const clientThis, const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateChannel(request), context);
}

void IVSClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IVSClientUpdateChannelAsyncHelper( this, request, handler, context ); } );
}

