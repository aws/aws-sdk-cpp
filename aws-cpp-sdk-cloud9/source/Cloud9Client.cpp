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

#include <aws/cloud9/Cloud9Client.h>
#include <aws/cloud9/Cloud9Endpoint.h>
#include <aws/cloud9/Cloud9ErrorMarshaller.h>
#include <aws/cloud9/model/CreateEnvironmentEC2Request.h>
#include <aws/cloud9/model/CreateEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/DeleteEnvironmentRequest.h>
#include <aws/cloud9/model/DeleteEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentStatusRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentsRequest.h>
#include <aws/cloud9/model/ListEnvironmentsRequest.h>
#include <aws/cloud9/model/ListTagsForResourceRequest.h>
#include <aws/cloud9/model/TagResourceRequest.h>
#include <aws/cloud9/model/UntagResourceRequest.h>
#include <aws/cloud9/model/UpdateEnvironmentRequest.h>
#include <aws/cloud9/model/UpdateEnvironmentMembershipRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Cloud9;
using namespace Aws::Cloud9::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cloud9";
static const char* ALLOCATION_TAG = "Cloud9Client";


Cloud9Client::Cloud9Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Cloud9Client::Cloud9Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Cloud9Client::Cloud9Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Cloud9Client::~Cloud9Client()
{
}

void Cloud9Client::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Cloud9");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Cloud9Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Cloud9Client::OverrideEndpoint(const Aws::String& endpoint)
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

CreateEnvironmentEC2Outcome Cloud9Client::CreateEnvironmentEC2(const CreateEnvironmentEC2Request& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEnvironmentEC2Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentEC2OutcomeCallable Cloud9Client::CreateEnvironmentEC2Callable(const CreateEnvironmentEC2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentEC2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironmentEC2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::CreateEnvironmentEC2Async(const CreateEnvironmentEC2Request& request, const CreateEnvironmentEC2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEnvironmentEC2AsyncHelper( request, handler, context ); } );
}

void Cloud9Client::CreateEnvironmentEC2AsyncHelper(const CreateEnvironmentEC2Request& request, const CreateEnvironmentEC2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEnvironmentEC2(request), context);
}

CreateEnvironmentMembershipOutcome Cloud9Client::CreateEnvironmentMembership(const CreateEnvironmentMembershipRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEnvironmentMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentMembershipOutcomeCallable Cloud9Client::CreateEnvironmentMembershipCallable(const CreateEnvironmentMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironmentMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::CreateEnvironmentMembershipAsync(const CreateEnvironmentMembershipRequest& request, const CreateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEnvironmentMembershipAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::CreateEnvironmentMembershipAsyncHelper(const CreateEnvironmentMembershipRequest& request, const CreateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEnvironmentMembership(request), context);
}

DeleteEnvironmentOutcome Cloud9Client::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentOutcomeCallable Cloud9Client::DeleteEnvironmentCallable(const DeleteEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEnvironmentAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::DeleteEnvironmentAsyncHelper(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEnvironment(request), context);
}

DeleteEnvironmentMembershipOutcome Cloud9Client::DeleteEnvironmentMembership(const DeleteEnvironmentMembershipRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEnvironmentMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentMembershipOutcomeCallable Cloud9Client::DeleteEnvironmentMembershipCallable(const DeleteEnvironmentMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironmentMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::DeleteEnvironmentMembershipAsync(const DeleteEnvironmentMembershipRequest& request, const DeleteEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEnvironmentMembershipAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::DeleteEnvironmentMembershipAsyncHelper(const DeleteEnvironmentMembershipRequest& request, const DeleteEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEnvironmentMembership(request), context);
}

DescribeEnvironmentMembershipsOutcome Cloud9Client::DescribeEnvironmentMemberships(const DescribeEnvironmentMembershipsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentMembershipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEnvironmentMembershipsOutcomeCallable Cloud9Client::DescribeEnvironmentMembershipsCallable(const DescribeEnvironmentMembershipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentMembershipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentMemberships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::DescribeEnvironmentMembershipsAsync(const DescribeEnvironmentMembershipsRequest& request, const DescribeEnvironmentMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentMembershipsAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::DescribeEnvironmentMembershipsAsyncHelper(const DescribeEnvironmentMembershipsRequest& request, const DescribeEnvironmentMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironmentMemberships(request), context);
}

DescribeEnvironmentStatusOutcome Cloud9Client::DescribeEnvironmentStatus(const DescribeEnvironmentStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEnvironmentStatusOutcomeCallable Cloud9Client::DescribeEnvironmentStatusCallable(const DescribeEnvironmentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironmentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::DescribeEnvironmentStatusAsync(const DescribeEnvironmentStatusRequest& request, const DescribeEnvironmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentStatusAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::DescribeEnvironmentStatusAsyncHelper(const DescribeEnvironmentStatusRequest& request, const DescribeEnvironmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironmentStatus(request), context);
}

DescribeEnvironmentsOutcome Cloud9Client::DescribeEnvironments(const DescribeEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEnvironmentsOutcomeCallable Cloud9Client::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentsAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::DescribeEnvironmentsAsyncHelper(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironments(request), context);
}

ListEnvironmentsOutcome Cloud9Client::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentsOutcomeCallable Cloud9Client::ListEnvironmentsCallable(const ListEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::ListEnvironmentsAsync(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEnvironmentsAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::ListEnvironmentsAsyncHelper(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEnvironments(request), context);
}

ListTagsForResourceOutcome Cloud9Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable Cloud9Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome Cloud9Client::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable Cloud9Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome Cloud9Client::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable Cloud9Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateEnvironmentOutcome Cloud9Client::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentOutcomeCallable Cloud9Client::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEnvironmentAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::UpdateEnvironmentAsyncHelper(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEnvironment(request), context);
}

UpdateEnvironmentMembershipOutcome Cloud9Client::UpdateEnvironmentMembership(const UpdateEnvironmentMembershipRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnvironmentMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentMembershipOutcomeCallable Cloud9Client::UpdateEnvironmentMembershipCallable(const UpdateEnvironmentMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironmentMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Cloud9Client::UpdateEnvironmentMembershipAsync(const UpdateEnvironmentMembershipRequest& request, const UpdateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEnvironmentMembershipAsyncHelper( request, handler, context ); } );
}

void Cloud9Client::UpdateEnvironmentMembershipAsyncHelper(const UpdateEnvironmentMembershipRequest& request, const UpdateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEnvironmentMembership(request), context);
}

