/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/mediatailor/MediaTailorClient.h>
#include <aws/mediatailor/MediaTailorEndpoint.h>
#include <aws/mediatailor/MediaTailorErrorMarshaller.h>
#include <aws/mediatailor/model/DeletePlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/GetPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsRequest.h>
#include <aws/mediatailor/model/PutPlaybackConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaTailor;
using namespace Aws::MediaTailor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediatailor";
static const char* ALLOCATION_TAG = "MediaTailorClient";


MediaTailorClient::MediaTailorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::~MediaTailorClient()
{
}

void MediaTailorClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << MediaTailorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DeletePlaybackConfigurationOutcome MediaTailorClient::DeletePlaybackConfiguration(const DeletePlaybackConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/playbackConfiguration/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePlaybackConfigurationOutcome(DeletePlaybackConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeletePlaybackConfigurationOutcome(outcome.GetError());
  }
}

DeletePlaybackConfigurationOutcomeCallable MediaTailorClient::DeletePlaybackConfigurationCallable(const DeletePlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DeletePlaybackConfigurationAsync(const DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePlaybackConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DeletePlaybackConfigurationAsyncHelper(const DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePlaybackConfiguration(request), context);
}

GetPlaybackConfigurationOutcome MediaTailorClient::GetPlaybackConfiguration(const GetPlaybackConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/playbackConfiguration/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPlaybackConfigurationOutcome(GetPlaybackConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetPlaybackConfigurationOutcome(outcome.GetError());
  }
}

GetPlaybackConfigurationOutcomeCallable MediaTailorClient::GetPlaybackConfigurationCallable(const GetPlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::GetPlaybackConfigurationAsync(const GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPlaybackConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::GetPlaybackConfigurationAsyncHelper(const GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPlaybackConfiguration(request), context);
}

ListPlaybackConfigurationsOutcome MediaTailorClient::ListPlaybackConfigurations(const ListPlaybackConfigurationsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/playbackConfigurations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPlaybackConfigurationsOutcome(ListPlaybackConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return ListPlaybackConfigurationsOutcome(outcome.GetError());
  }
}

ListPlaybackConfigurationsOutcomeCallable MediaTailorClient::ListPlaybackConfigurationsCallable(const ListPlaybackConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlaybackConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlaybackConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::ListPlaybackConfigurationsAsync(const ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPlaybackConfigurationsAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::ListPlaybackConfigurationsAsyncHelper(const ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPlaybackConfigurations(request), context);
}

PutPlaybackConfigurationOutcome MediaTailorClient::PutPlaybackConfiguration(const PutPlaybackConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/playbackConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutPlaybackConfigurationOutcome(PutPlaybackConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutPlaybackConfigurationOutcome(outcome.GetError());
  }
}

PutPlaybackConfigurationOutcomeCallable MediaTailorClient::PutPlaybackConfigurationCallable(const PutPlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::PutPlaybackConfigurationAsync(const PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPlaybackConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::PutPlaybackConfigurationAsyncHelper(const PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPlaybackConfiguration(request), context);
}

