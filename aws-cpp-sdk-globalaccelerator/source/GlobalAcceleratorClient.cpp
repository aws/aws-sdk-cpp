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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/globalaccelerator/GlobalAcceleratorClient.h>
#include <aws/globalaccelerator/GlobalAcceleratorEndpoint.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrorMarshaller.h>
#include <aws/globalaccelerator/model/CreateAcceleratorRequest.h>
#include <aws/globalaccelerator/model/CreateEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/CreateListenerRequest.h>
#include <aws/globalaccelerator/model/DeleteAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DeleteEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DeleteListenerRequest.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/DescribeEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DescribeListenerRequest.h>
#include <aws/globalaccelerator/model/ListAcceleratorsRequest.h>
#include <aws/globalaccelerator/model/ListEndpointGroupsRequest.h>
#include <aws/globalaccelerator/model/ListListenersRequest.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorRequest.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/UpdateEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/UpdateListenerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GlobalAccelerator;
using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "globalaccelerator";
static const char* ALLOCATION_TAG = "GlobalAcceleratorClient";


GlobalAcceleratorClient::GlobalAcceleratorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::~GlobalAcceleratorClient()
{
}

void GlobalAcceleratorClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GlobalAcceleratorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GlobalAcceleratorClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAcceleratorOutcome GlobalAcceleratorClient::CreateAccelerator(const CreateAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAcceleratorOutcome(CreateAcceleratorResult(outcome.GetResult()));
  }
  else
  {
    return CreateAcceleratorOutcome(outcome.GetError());
  }
}

CreateAcceleratorOutcomeCallable GlobalAcceleratorClient::CreateAcceleratorCallable(const CreateAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::CreateAcceleratorAsync(const CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::CreateAcceleratorAsyncHelper(const CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccelerator(request), context);
}

CreateEndpointGroupOutcome GlobalAcceleratorClient::CreateEndpointGroup(const CreateEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEndpointGroupOutcome(CreateEndpointGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateEndpointGroupOutcome(outcome.GetError());
  }
}

CreateEndpointGroupOutcomeCallable GlobalAcceleratorClient::CreateEndpointGroupCallable(const CreateEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::CreateEndpointGroupAsync(const CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::CreateEndpointGroupAsyncHelper(const CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEndpointGroup(request), context);
}

CreateListenerOutcome GlobalAcceleratorClient::CreateListener(const CreateListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateListenerOutcome(CreateListenerResult(outcome.GetResult()));
  }
  else
  {
    return CreateListenerOutcome(outcome.GetError());
  }
}

CreateListenerOutcomeCallable GlobalAcceleratorClient::CreateListenerCallable(const CreateListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::CreateListenerAsyncHelper(const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateListener(request), context);
}

DeleteAcceleratorOutcome GlobalAcceleratorClient::DeleteAccelerator(const DeleteAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAcceleratorOutcome(NoResult());
  }
  else
  {
    return DeleteAcceleratorOutcome(outcome.GetError());
  }
}

DeleteAcceleratorOutcomeCallable GlobalAcceleratorClient::DeleteAcceleratorCallable(const DeleteAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DeleteAcceleratorAsync(const DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DeleteAcceleratorAsyncHelper(const DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccelerator(request), context);
}

DeleteEndpointGroupOutcome GlobalAcceleratorClient::DeleteEndpointGroup(const DeleteEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEndpointGroupOutcome(NoResult());
  }
  else
  {
    return DeleteEndpointGroupOutcome(outcome.GetError());
  }
}

DeleteEndpointGroupOutcomeCallable GlobalAcceleratorClient::DeleteEndpointGroupCallable(const DeleteEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DeleteEndpointGroupAsync(const DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DeleteEndpointGroupAsyncHelper(const DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEndpointGroup(request), context);
}

DeleteListenerOutcome GlobalAcceleratorClient::DeleteListener(const DeleteListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteListenerOutcome(NoResult());
  }
  else
  {
    return DeleteListenerOutcome(outcome.GetError());
  }
}

DeleteListenerOutcomeCallable GlobalAcceleratorClient::DeleteListenerCallable(const DeleteListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DeleteListenerAsyncHelper(const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteListener(request), context);
}

DescribeAcceleratorOutcome GlobalAcceleratorClient::DescribeAccelerator(const DescribeAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAcceleratorOutcome(DescribeAcceleratorResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAcceleratorOutcome(outcome.GetError());
  }
}

DescribeAcceleratorOutcomeCallable GlobalAcceleratorClient::DescribeAcceleratorCallable(const DescribeAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeAcceleratorAsync(const DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeAcceleratorAsyncHelper(const DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccelerator(request), context);
}

DescribeAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeAcceleratorAttributes(const DescribeAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAcceleratorAttributesOutcome(DescribeAcceleratorAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAcceleratorAttributesOutcome(outcome.GetError());
  }
}

DescribeAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::DescribeAcceleratorAttributesCallable(const DescribeAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeAcceleratorAttributesAsync(const DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAcceleratorAttributesAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeAcceleratorAttributesAsyncHelper(const DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAcceleratorAttributes(request), context);
}

DescribeEndpointGroupOutcome GlobalAcceleratorClient::DescribeEndpointGroup(const DescribeEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEndpointGroupOutcome(DescribeEndpointGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEndpointGroupOutcome(outcome.GetError());
  }
}

DescribeEndpointGroupOutcomeCallable GlobalAcceleratorClient::DescribeEndpointGroupCallable(const DescribeEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeEndpointGroupAsync(const DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeEndpointGroupAsyncHelper(const DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpointGroup(request), context);
}

DescribeListenerOutcome GlobalAcceleratorClient::DescribeListener(const DescribeListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeListenerOutcome(DescribeListenerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeListenerOutcome(outcome.GetError());
  }
}

DescribeListenerOutcomeCallable GlobalAcceleratorClient::DescribeListenerCallable(const DescribeListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeListenerAsync(const DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeListenerAsyncHelper(const DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeListener(request), context);
}

ListAcceleratorsOutcome GlobalAcceleratorClient::ListAccelerators(const ListAcceleratorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAcceleratorsOutcome(ListAcceleratorsResult(outcome.GetResult()));
  }
  else
  {
    return ListAcceleratorsOutcome(outcome.GetError());
  }
}

ListAcceleratorsOutcomeCallable GlobalAcceleratorClient::ListAcceleratorsCallable(const ListAcceleratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAcceleratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccelerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListAcceleratorsAsync(const ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAcceleratorsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListAcceleratorsAsyncHelper(const ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccelerators(request), context);
}

ListEndpointGroupsOutcome GlobalAcceleratorClient::ListEndpointGroups(const ListEndpointGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEndpointGroupsOutcome(ListEndpointGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListEndpointGroupsOutcome(outcome.GetError());
  }
}

ListEndpointGroupsOutcomeCallable GlobalAcceleratorClient::ListEndpointGroupsCallable(const ListEndpointGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListEndpointGroupsAsync(const ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEndpointGroupsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListEndpointGroupsAsyncHelper(const ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEndpointGroups(request), context);
}

ListListenersOutcome GlobalAcceleratorClient::ListListeners(const ListListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListListenersOutcome(ListListenersResult(outcome.GetResult()));
  }
  else
  {
    return ListListenersOutcome(outcome.GetError());
  }
}

ListListenersOutcomeCallable GlobalAcceleratorClient::ListListenersCallable(const ListListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListListenersAsync(const ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListListenersAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListListenersAsyncHelper(const ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListListeners(request), context);
}

UpdateAcceleratorOutcome GlobalAcceleratorClient::UpdateAccelerator(const UpdateAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAcceleratorOutcome(UpdateAcceleratorResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAcceleratorOutcome(outcome.GetError());
  }
}

UpdateAcceleratorOutcomeCallable GlobalAcceleratorClient::UpdateAcceleratorCallable(const UpdateAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UpdateAcceleratorAsync(const UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UpdateAcceleratorAsyncHelper(const UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccelerator(request), context);
}

UpdateAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateAcceleratorAttributes(const UpdateAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAcceleratorAttributesOutcome(UpdateAcceleratorAttributesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAcceleratorAttributesOutcome(outcome.GetError());
  }
}

UpdateAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::UpdateAcceleratorAttributesCallable(const UpdateAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UpdateAcceleratorAttributesAsync(const UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAcceleratorAttributesAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UpdateAcceleratorAttributesAsyncHelper(const UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAcceleratorAttributes(request), context);
}

UpdateEndpointGroupOutcome GlobalAcceleratorClient::UpdateEndpointGroup(const UpdateEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEndpointGroupOutcome(UpdateEndpointGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEndpointGroupOutcome(outcome.GetError());
  }
}

UpdateEndpointGroupOutcomeCallable GlobalAcceleratorClient::UpdateEndpointGroupCallable(const UpdateEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UpdateEndpointGroupAsync(const UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UpdateEndpointGroupAsyncHelper(const UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEndpointGroup(request), context);
}

UpdateListenerOutcome GlobalAcceleratorClient::UpdateListener(const UpdateListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateListenerOutcome(UpdateListenerResult(outcome.GetResult()));
  }
  else
  {
    return UpdateListenerOutcome(outcome.GetError());
  }
}

UpdateListenerOutcomeCallable GlobalAcceleratorClient::UpdateListenerCallable(const UpdateListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UpdateListenerAsync(const UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UpdateListenerAsyncHelper(const UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateListener(request), context);
}

