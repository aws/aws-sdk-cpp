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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaClient.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpoint.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrorMarshaller.h>
#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListRequest.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideoArchivedMedia;
using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kinesisvideo";
static const char* ALLOCATION_TAG = "KinesisVideoArchivedMediaClient";


KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoArchivedMediaClient::~KinesisVideoArchivedMediaClient()
{
}

void KinesisVideoArchivedMediaClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << KinesisVideoArchivedMediaEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

GetMediaForFragmentListOutcome KinesisVideoArchivedMediaClient::GetMediaForFragmentList(const GetMediaForFragmentListRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/getMediaForFragmentList";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMediaForFragmentListOutcome(GetMediaForFragmentListResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetMediaForFragmentListOutcome(outcome.GetError());
  }
}

GetMediaForFragmentListOutcomeCallable KinesisVideoArchivedMediaClient::GetMediaForFragmentListCallable(const GetMediaForFragmentListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMediaForFragmentListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMediaForFragmentList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::GetMediaForFragmentListAsync(const GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMediaForFragmentListAsyncHelper( request, handler, context ); } );
}

void KinesisVideoArchivedMediaClient::GetMediaForFragmentListAsyncHelper(const GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMediaForFragmentList(request), context);
}

ListFragmentsOutcome KinesisVideoArchivedMediaClient::ListFragments(const ListFragmentsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/listFragments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFragmentsOutcome(ListFragmentsResult(outcome.GetResult()));
  }
  else
  {
    return ListFragmentsOutcome(outcome.GetError());
  }
}

ListFragmentsOutcomeCallable KinesisVideoArchivedMediaClient::ListFragmentsCallable(const ListFragmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFragmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFragments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::ListFragmentsAsync(const ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFragmentsAsyncHelper( request, handler, context ); } );
}

void KinesisVideoArchivedMediaClient::ListFragmentsAsyncHelper(const ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFragments(request), context);
}

