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

#include <aws/mediastore/MediaStoreClient.h>
#include <aws/mediastore/MediaStoreEndpoint.h>
#include <aws/mediastore/MediaStoreErrorMarshaller.h>
#include <aws/mediastore/model/CreateContainerRequest.h>
#include <aws/mediastore/model/DeleteContainerRequest.h>
#include <aws/mediastore/model/DeleteContainerPolicyRequest.h>
#include <aws/mediastore/model/DeleteCorsPolicyRequest.h>
#include <aws/mediastore/model/DeleteLifecyclePolicyRequest.h>
#include <aws/mediastore/model/DeleteMetricPolicyRequest.h>
#include <aws/mediastore/model/DescribeContainerRequest.h>
#include <aws/mediastore/model/GetContainerPolicyRequest.h>
#include <aws/mediastore/model/GetCorsPolicyRequest.h>
#include <aws/mediastore/model/GetLifecyclePolicyRequest.h>
#include <aws/mediastore/model/GetMetricPolicyRequest.h>
#include <aws/mediastore/model/ListContainersRequest.h>
#include <aws/mediastore/model/ListTagsForResourceRequest.h>
#include <aws/mediastore/model/PutContainerPolicyRequest.h>
#include <aws/mediastore/model/PutCorsPolicyRequest.h>
#include <aws/mediastore/model/PutLifecyclePolicyRequest.h>
#include <aws/mediastore/model/PutMetricPolicyRequest.h>
#include <aws/mediastore/model/StartAccessLoggingRequest.h>
#include <aws/mediastore/model/StopAccessLoggingRequest.h>
#include <aws/mediastore/model/TagResourceRequest.h>
#include <aws/mediastore/model/UntagResourceRequest.h>

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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreClient::~MediaStoreClient()
{
}

void MediaStoreClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("MediaStore");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaStoreEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaStoreClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateContainerOutcome MediaStoreClient::CreateContainer(const CreateContainerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateContainerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteContainerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteContainerPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteCorsPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

DeleteLifecyclePolicyOutcome MediaStoreClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLifecyclePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLifecyclePolicyOutcomeCallable MediaStoreClient::DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::DeleteLifecyclePolicyAsyncHelper(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLifecyclePolicy(request), context);
}

DeleteMetricPolicyOutcome MediaStoreClient::DeleteMetricPolicy(const DeleteMetricPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMetricPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMetricPolicyOutcomeCallable MediaStoreClient::DeleteMetricPolicyCallable(const DeleteMetricPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMetricPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMetricPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::DeleteMetricPolicyAsync(const DeleteMetricPolicyRequest& request, const DeleteMetricPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMetricPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::DeleteMetricPolicyAsyncHelper(const DeleteMetricPolicyRequest& request, const DeleteMetricPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMetricPolicy(request), context);
}

DescribeContainerOutcome MediaStoreClient::DescribeContainer(const DescribeContainerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeContainerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetCorsPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

GetLifecyclePolicyOutcome MediaStoreClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLifecyclePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLifecyclePolicyOutcomeCallable MediaStoreClient::GetLifecyclePolicyCallable(const GetLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::GetLifecyclePolicyAsync(const GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::GetLifecyclePolicyAsyncHelper(const GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLifecyclePolicy(request), context);
}

GetMetricPolicyOutcome MediaStoreClient::GetMetricPolicy(const GetMetricPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMetricPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMetricPolicyOutcomeCallable MediaStoreClient::GetMetricPolicyCallable(const GetMetricPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::GetMetricPolicyAsync(const GetMetricPolicyRequest& request, const GetMetricPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMetricPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::GetMetricPolicyAsyncHelper(const GetMetricPolicyRequest& request, const GetMetricPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMetricPolicy(request), context);
}

ListContainersOutcome MediaStoreClient::ListContainers(const ListContainersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListContainersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

ListTagsForResourceOutcome MediaStoreClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaStoreClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutContainerPolicyOutcome MediaStoreClient::PutContainerPolicy(const PutContainerPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutContainerPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return PutCorsPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

PutLifecyclePolicyOutcome MediaStoreClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLifecyclePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLifecyclePolicyOutcomeCallable MediaStoreClient::PutLifecyclePolicyCallable(const PutLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::PutLifecyclePolicyAsync(const PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::PutLifecyclePolicyAsyncHelper(const PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLifecyclePolicy(request), context);
}

PutMetricPolicyOutcome MediaStoreClient::PutMetricPolicy(const PutMetricPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMetricPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMetricPolicyOutcomeCallable MediaStoreClient::PutMetricPolicyCallable(const PutMetricPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::PutMetricPolicyAsync(const PutMetricPolicyRequest& request, const PutMetricPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutMetricPolicyAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::PutMetricPolicyAsyncHelper(const PutMetricPolicyRequest& request, const PutMetricPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMetricPolicy(request), context);
}

StartAccessLoggingOutcome MediaStoreClient::StartAccessLogging(const StartAccessLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartAccessLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAccessLoggingOutcomeCallable MediaStoreClient::StartAccessLoggingCallable(const StartAccessLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAccessLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAccessLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::StartAccessLoggingAsync(const StartAccessLoggingRequest& request, const StartAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartAccessLoggingAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::StartAccessLoggingAsyncHelper(const StartAccessLoggingRequest& request, const StartAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartAccessLogging(request), context);
}

StopAccessLoggingOutcome MediaStoreClient::StopAccessLogging(const StopAccessLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopAccessLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAccessLoggingOutcomeCallable MediaStoreClient::StopAccessLoggingCallable(const StopAccessLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAccessLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAccessLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::StopAccessLoggingAsync(const StopAccessLoggingRequest& request, const StopAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopAccessLoggingAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::StopAccessLoggingAsyncHelper(const StopAccessLoggingRequest& request, const StopAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopAccessLogging(request), context);
}

TagResourceOutcome MediaStoreClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MediaStoreClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome MediaStoreClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MediaStoreClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MediaStoreClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

