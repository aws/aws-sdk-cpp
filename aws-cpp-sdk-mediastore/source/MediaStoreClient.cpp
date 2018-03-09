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
#include <aws/mediastore/MediaStoreClient.h>
#include <aws/mediastore/MediaStoreEndpoint.h>
#include <aws/mediastore/MediaStoreErrorMarshaller.h>
#include <aws/mediastore/model/CreateContainerRequest.h>
#include <aws/mediastore/model/DeleteContainerRequest.h>
#include <aws/mediastore/model/DeleteContainerPolicyRequest.h>
#include <aws/mediastore/model/DeleteCorsPolicyRequest.h>
#include <aws/mediastore/model/DescribeContainerRequest.h>
#include <aws/mediastore/model/GetContainerPolicyRequest.h>
#include <aws/mediastore/model/GetCorsPolicyRequest.h>
#include <aws/mediastore/model/ListContainersRequest.h>
#include <aws/mediastore/model/PutContainerPolicyRequest.h>
#include <aws/mediastore/model/PutCorsPolicyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaStore;
using namespace Aws::MediaStore::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediastore";
static const char* ALLOCATION_TAG = "MediaStoreClient";


MediaStoreClient::MediaStoreClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreClient::~MediaStoreClient()
{
}

void MediaStoreClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << MediaStoreEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateContainerOutcome MediaStoreClient::CreateContainer(const CreateContainerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateContainerOutcome(CreateContainerResult(outcome.GetResult()));
  }
  else
  {
    return CreateContainerOutcome(outcome.GetError());
  }
}

CreateContainerOutcomeCallable MediaStoreClient::CreateContainerCallable(const CreateContainerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContainerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContainer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::CreateContainerAsync(const CreateContainerRequest& request, const CreateContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateContainerAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::CreateContainerAsyncHelper(const CreateContainerRequest& request, const CreateContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateContainer(request), context);
}

DeleteContainerOutcome MediaStoreClient::DeleteContainer(const DeleteContainerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteContainerOutcome(DeleteContainerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteContainerOutcome(outcome.GetError());
  }
}

DeleteContainerOutcomeCallable MediaStoreClient::DeleteContainerCallable(const DeleteContainerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContainerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContainer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::DeleteContainerAsync(const DeleteContainerRequest& request, const DeleteContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContainerAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::DeleteContainerAsyncHelper(const DeleteContainerRequest& request, const DeleteContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContainer(request), context);
}

DeleteContainerPolicyOutcome MediaStoreClient::DeleteContainerPolicy(const DeleteContainerPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteContainerPolicyOutcome(DeleteContainerPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteContainerPolicyOutcome(outcome.GetError());
  }
}

DeleteContainerPolicyOutcomeCallable MediaStoreClient::DeleteContainerPolicyCallable(const DeleteContainerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContainerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContainerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::DeleteContainerPolicyAsync(const DeleteContainerPolicyRequest& request, const DeleteContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContainerPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::DeleteContainerPolicyAsyncHelper(const DeleteContainerPolicyRequest& request, const DeleteContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContainerPolicy(request), context);
}

DeleteCorsPolicyOutcome MediaStoreClient::DeleteCorsPolicy(const DeleteCorsPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCorsPolicyOutcome(DeleteCorsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCorsPolicyOutcome(outcome.GetError());
  }
}

DeleteCorsPolicyOutcomeCallable MediaStoreClient::DeleteCorsPolicyCallable(const DeleteCorsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCorsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCorsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::DeleteCorsPolicyAsync(const DeleteCorsPolicyRequest& request, const DeleteCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCorsPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::DeleteCorsPolicyAsyncHelper(const DeleteCorsPolicyRequest& request, const DeleteCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCorsPolicy(request), context);
}

DescribeContainerOutcome MediaStoreClient::DescribeContainer(const DescribeContainerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeContainerOutcome(DescribeContainerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeContainerOutcome(outcome.GetError());
  }
}

DescribeContainerOutcomeCallable MediaStoreClient::DescribeContainerCallable(const DescribeContainerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContainerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContainer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::DescribeContainerAsync(const DescribeContainerRequest& request, const DescribeContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContainerAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::DescribeContainerAsyncHelper(const DescribeContainerRequest& request, const DescribeContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContainer(request), context);
}

GetContainerPolicyOutcome MediaStoreClient::GetContainerPolicy(const GetContainerPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetContainerPolicyOutcome(GetContainerPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetContainerPolicyOutcome(outcome.GetError());
  }
}

GetContainerPolicyOutcomeCallable MediaStoreClient::GetContainerPolicyCallable(const GetContainerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::GetContainerPolicyAsync(const GetContainerPolicyRequest& request, const GetContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContainerPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::GetContainerPolicyAsyncHelper(const GetContainerPolicyRequest& request, const GetContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContainerPolicy(request), context);
}

GetCorsPolicyOutcome MediaStoreClient::GetCorsPolicy(const GetCorsPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCorsPolicyOutcome(GetCorsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetCorsPolicyOutcome(outcome.GetError());
  }
}

GetCorsPolicyOutcomeCallable MediaStoreClient::GetCorsPolicyCallable(const GetCorsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCorsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCorsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::GetCorsPolicyAsync(const GetCorsPolicyRequest& request, const GetCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCorsPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::GetCorsPolicyAsyncHelper(const GetCorsPolicyRequest& request, const GetCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCorsPolicy(request), context);
}

ListContainersOutcome MediaStoreClient::ListContainers(const ListContainersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListContainersOutcome(ListContainersResult(outcome.GetResult()));
  }
  else
  {
    return ListContainersOutcome(outcome.GetError());
  }
}

ListContainersOutcomeCallable MediaStoreClient::ListContainersCallable(const ListContainersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContainersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContainers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::ListContainersAsync(const ListContainersRequest& request, const ListContainersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContainersAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::ListContainersAsyncHelper(const ListContainersRequest& request, const ListContainersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContainers(request), context);
}

PutContainerPolicyOutcome MediaStoreClient::PutContainerPolicy(const PutContainerPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutContainerPolicyOutcome(PutContainerPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutContainerPolicyOutcome(outcome.GetError());
  }
}

PutContainerPolicyOutcomeCallable MediaStoreClient::PutContainerPolicyCallable(const PutContainerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutContainerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutContainerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::PutContainerPolicyAsync(const PutContainerPolicyRequest& request, const PutContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutContainerPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::PutContainerPolicyAsyncHelper(const PutContainerPolicyRequest& request, const PutContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutContainerPolicy(request), context);
}

PutCorsPolicyOutcome MediaStoreClient::PutCorsPolicy(const PutCorsPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutCorsPolicyOutcome(PutCorsPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutCorsPolicyOutcome(outcome.GetError());
  }
}

PutCorsPolicyOutcomeCallable MediaStoreClient::PutCorsPolicyCallable(const PutCorsPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCorsPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCorsPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::PutCorsPolicyAsync(const PutCorsPolicyRequest& request, const PutCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutCorsPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::PutCorsPolicyAsyncHelper(const PutCorsPolicyRequest& request, const PutCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutCorsPolicy(request), context);
}

