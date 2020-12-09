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

#include <aws/globalaccelerator/GlobalAcceleratorClient.h>
#include <aws/globalaccelerator/GlobalAcceleratorEndpoint.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrorMarshaller.h>
#include <aws/globalaccelerator/model/AddCustomRoutingEndpointsRequest.h>
#include <aws/globalaccelerator/model/AdvertiseByoipCidrRequest.h>
#include <aws/globalaccelerator/model/AllowCustomRoutingTrafficRequest.h>
#include <aws/globalaccelerator/model/CreateAcceleratorRequest.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/CreateEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/CreateListenerRequest.h>
#include <aws/globalaccelerator/model/DeleteAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DeleteCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DeleteCustomRoutingEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DeleteCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/DeleteEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DeleteListenerRequest.h>
#include <aws/globalaccelerator/model/DenyCustomRoutingTrafficRequest.h>
#include <aws/globalaccelerator/model/DeprovisionByoipCidrRequest.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/DescribeEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/DescribeListenerRequest.h>
#include <aws/globalaccelerator/model/ListAcceleratorsRequest.h>
#include <aws/globalaccelerator/model/ListByoipCidrsRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingAcceleratorsRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingEndpointGroupsRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingListenersRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationRequest.h>
#include <aws/globalaccelerator/model/ListEndpointGroupsRequest.h>
#include <aws/globalaccelerator/model/ListListenersRequest.h>
#include <aws/globalaccelerator/model/ListTagsForResourceRequest.h>
#include <aws/globalaccelerator/model/ProvisionByoipCidrRequest.h>
#include <aws/globalaccelerator/model/RemoveCustomRoutingEndpointsRequest.h>
#include <aws/globalaccelerator/model/TagResourceRequest.h>
#include <aws/globalaccelerator/model/UntagResourceRequest.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorRequest.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingAcceleratorRequest.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingAcceleratorAttributesRequest.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingListenerRequest.h>
#include <aws/globalaccelerator/model/UpdateEndpointGroupRequest.h>
#include <aws/globalaccelerator/model/UpdateListenerRequest.h>
#include <aws/globalaccelerator/model/WithdrawByoipCidrRequest.h>

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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("Global Accelerator");
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

AddCustomRoutingEndpointsOutcome GlobalAcceleratorClient::AddCustomRoutingEndpoints(const AddCustomRoutingEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddCustomRoutingEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddCustomRoutingEndpointsOutcomeCallable GlobalAcceleratorClient::AddCustomRoutingEndpointsCallable(const AddCustomRoutingEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddCustomRoutingEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddCustomRoutingEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::AddCustomRoutingEndpointsAsync(const AddCustomRoutingEndpointsRequest& request, const AddCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddCustomRoutingEndpointsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::AddCustomRoutingEndpointsAsyncHelper(const AddCustomRoutingEndpointsRequest& request, const AddCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddCustomRoutingEndpoints(request), context);
}

AdvertiseByoipCidrOutcome GlobalAcceleratorClient::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AdvertiseByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdvertiseByoipCidrOutcomeCallable GlobalAcceleratorClient::AdvertiseByoipCidrCallable(const AdvertiseByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdvertiseByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdvertiseByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::AdvertiseByoipCidrAsync(const AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdvertiseByoipCidrAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::AdvertiseByoipCidrAsyncHelper(const AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdvertiseByoipCidr(request), context);
}

AllowCustomRoutingTrafficOutcome GlobalAcceleratorClient::AllowCustomRoutingTraffic(const AllowCustomRoutingTrafficRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AllowCustomRoutingTrafficOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AllowCustomRoutingTrafficOutcomeCallable GlobalAcceleratorClient::AllowCustomRoutingTrafficCallable(const AllowCustomRoutingTrafficRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AllowCustomRoutingTrafficOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllowCustomRoutingTraffic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::AllowCustomRoutingTrafficAsync(const AllowCustomRoutingTrafficRequest& request, const AllowCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AllowCustomRoutingTrafficAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::AllowCustomRoutingTrafficAsyncHelper(const AllowCustomRoutingTrafficRequest& request, const AllowCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllowCustomRoutingTraffic(request), context);
}

CreateAcceleratorOutcome GlobalAcceleratorClient::CreateAccelerator(const CreateAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::CreateCustomRoutingAccelerator(const CreateCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::CreateCustomRoutingAcceleratorCallable(const CreateCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::CreateCustomRoutingAcceleratorAsync(const CreateCustomRoutingAcceleratorRequest& request, const CreateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomRoutingAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::CreateCustomRoutingAcceleratorAsyncHelper(const CreateCustomRoutingAcceleratorRequest& request, const CreateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomRoutingAccelerator(request), context);
}

CreateCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup(const CreateCustomRoutingEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateCustomRoutingEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomRoutingEndpointGroupOutcomeCallable GlobalAcceleratorClient::CreateCustomRoutingEndpointGroupCallable(const CreateCustomRoutingEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomRoutingEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomRoutingEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::CreateCustomRoutingEndpointGroupAsync(const CreateCustomRoutingEndpointGroupRequest& request, const CreateCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomRoutingEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::CreateCustomRoutingEndpointGroupAsyncHelper(const CreateCustomRoutingEndpointGroupRequest& request, const CreateCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomRoutingEndpointGroup(request), context);
}

CreateCustomRoutingListenerOutcome GlobalAcceleratorClient::CreateCustomRoutingListener(const CreateCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::CreateCustomRoutingListenerCallable(const CreateCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::CreateCustomRoutingListenerAsync(const CreateCustomRoutingListenerRequest& request, const CreateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomRoutingListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::CreateCustomRoutingListenerAsyncHelper(const CreateCustomRoutingListenerRequest& request, const CreateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomRoutingListener(request), context);
}

CreateEndpointGroupOutcome GlobalAcceleratorClient::CreateEndpointGroup(const CreateEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

DeleteCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DeleteCustomRoutingAccelerator(const DeleteCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::DeleteCustomRoutingAcceleratorCallable(const DeleteCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DeleteCustomRoutingAcceleratorAsync(const DeleteCustomRoutingAcceleratorRequest& request, const DeleteCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomRoutingAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DeleteCustomRoutingAcceleratorAsyncHelper(const DeleteCustomRoutingAcceleratorRequest& request, const DeleteCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomRoutingAccelerator(request), context);
}

DeleteCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup(const DeleteCustomRoutingEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteCustomRoutingEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomRoutingEndpointGroupOutcomeCallable GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroupCallable(const DeleteCustomRoutingEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomRoutingEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomRoutingEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroupAsync(const DeleteCustomRoutingEndpointGroupRequest& request, const DeleteCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomRoutingEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroupAsyncHelper(const DeleteCustomRoutingEndpointGroupRequest& request, const DeleteCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomRoutingEndpointGroup(request), context);
}

DeleteCustomRoutingListenerOutcome GlobalAcceleratorClient::DeleteCustomRoutingListener(const DeleteCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::DeleteCustomRoutingListenerCallable(const DeleteCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DeleteCustomRoutingListenerAsync(const DeleteCustomRoutingListenerRequest& request, const DeleteCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomRoutingListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DeleteCustomRoutingListenerAsyncHelper(const DeleteCustomRoutingListenerRequest& request, const DeleteCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomRoutingListener(request), context);
}

DeleteEndpointGroupOutcome GlobalAcceleratorClient::DeleteEndpointGroup(const DeleteEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

DenyCustomRoutingTrafficOutcome GlobalAcceleratorClient::DenyCustomRoutingTraffic(const DenyCustomRoutingTrafficRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DenyCustomRoutingTrafficOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DenyCustomRoutingTrafficOutcomeCallable GlobalAcceleratorClient::DenyCustomRoutingTrafficCallable(const DenyCustomRoutingTrafficRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DenyCustomRoutingTrafficOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DenyCustomRoutingTraffic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DenyCustomRoutingTrafficAsync(const DenyCustomRoutingTrafficRequest& request, const DenyCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DenyCustomRoutingTrafficAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DenyCustomRoutingTrafficAsyncHelper(const DenyCustomRoutingTrafficRequest& request, const DenyCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DenyCustomRoutingTraffic(request), context);
}

DeprovisionByoipCidrOutcome GlobalAcceleratorClient::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeprovisionByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeprovisionByoipCidrOutcomeCallable GlobalAcceleratorClient::DeprovisionByoipCidrCallable(const DeprovisionByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprovisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprovisionByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DeprovisionByoipCidrAsync(const DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprovisionByoipCidrAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DeprovisionByoipCidrAsyncHelper(const DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprovisionByoipCidr(request), context);
}

DescribeAcceleratorOutcome GlobalAcceleratorClient::DescribeAccelerator(const DescribeAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

DescribeCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DescribeCustomRoutingAccelerator(const DescribeCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorCallable(const DescribeCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAsync(const DescribeCustomRoutingAcceleratorRequest& request, const DescribeCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomRoutingAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAsyncHelper(const DescribeCustomRoutingAcceleratorRequest& request, const DescribeCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomRoutingAccelerator(request), context);
}

DescribeCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes(const DescribeCustomRoutingAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCustomRoutingAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributesCallable(const DescribeCustomRoutingAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributesAsync(const DescribeCustomRoutingAcceleratorAttributesRequest& request, const DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomRoutingAcceleratorAttributesAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributesAsyncHelper(const DescribeCustomRoutingAcceleratorAttributesRequest& request, const DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomRoutingAcceleratorAttributes(request), context);
}

DescribeCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup(const DescribeCustomRoutingEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCustomRoutingEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingEndpointGroupOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroupCallable(const DescribeCustomRoutingEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroupAsync(const DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomRoutingEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroupAsyncHelper(const DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomRoutingEndpointGroup(request), context);
}

DescribeCustomRoutingListenerOutcome GlobalAcceleratorClient::DescribeCustomRoutingListener(const DescribeCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingListenerCallable(const DescribeCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::DescribeCustomRoutingListenerAsync(const DescribeCustomRoutingListenerRequest& request, const DescribeCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomRoutingListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::DescribeCustomRoutingListenerAsyncHelper(const DescribeCustomRoutingListenerRequest& request, const DescribeCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomRoutingListener(request), context);
}

DescribeEndpointGroupOutcome GlobalAcceleratorClient::DescribeEndpointGroup(const DescribeEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListAcceleratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

ListByoipCidrsOutcome GlobalAcceleratorClient::ListByoipCidrs(const ListByoipCidrsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListByoipCidrsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListByoipCidrsOutcomeCallable GlobalAcceleratorClient::ListByoipCidrsCallable(const ListByoipCidrsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListByoipCidrsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListByoipCidrs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListByoipCidrsAsync(const ListByoipCidrsRequest& request, const ListByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListByoipCidrsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListByoipCidrsAsyncHelper(const ListByoipCidrsRequest& request, const ListByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListByoipCidrs(request), context);
}

ListCustomRoutingAcceleratorsOutcome GlobalAcceleratorClient::ListCustomRoutingAccelerators(const ListCustomRoutingAcceleratorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListCustomRoutingAcceleratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingAcceleratorsOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingAcceleratorsCallable(const ListCustomRoutingAcceleratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingAcceleratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingAccelerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListCustomRoutingAcceleratorsAsync(const ListCustomRoutingAcceleratorsRequest& request, const ListCustomRoutingAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCustomRoutingAcceleratorsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListCustomRoutingAcceleratorsAsyncHelper(const ListCustomRoutingAcceleratorsRequest& request, const ListCustomRoutingAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCustomRoutingAccelerators(request), context);
}

ListCustomRoutingEndpointGroupsOutcome GlobalAcceleratorClient::ListCustomRoutingEndpointGroups(const ListCustomRoutingEndpointGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListCustomRoutingEndpointGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingEndpointGroupsOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingEndpointGroupsCallable(const ListCustomRoutingEndpointGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingEndpointGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingEndpointGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListCustomRoutingEndpointGroupsAsync(const ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCustomRoutingEndpointGroupsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListCustomRoutingEndpointGroupsAsyncHelper(const ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCustomRoutingEndpointGroups(request), context);
}

ListCustomRoutingListenersOutcome GlobalAcceleratorClient::ListCustomRoutingListeners(const ListCustomRoutingListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListCustomRoutingListenersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingListenersOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingListenersCallable(const ListCustomRoutingListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListCustomRoutingListenersAsync(const ListCustomRoutingListenersRequest& request, const ListCustomRoutingListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCustomRoutingListenersAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListCustomRoutingListenersAsyncHelper(const ListCustomRoutingListenersRequest& request, const ListCustomRoutingListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCustomRoutingListeners(request), context);
}

ListCustomRoutingPortMappingsOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappings(const ListCustomRoutingPortMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListCustomRoutingPortMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingPortMappingsOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingPortMappingsCallable(const ListCustomRoutingPortMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingPortMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingPortMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListCustomRoutingPortMappingsAsync(const ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCustomRoutingPortMappingsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListCustomRoutingPortMappingsAsyncHelper(const ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCustomRoutingPortMappings(request), context);
}

ListCustomRoutingPortMappingsByDestinationOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination(const ListCustomRoutingPortMappingsByDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListCustomRoutingPortMappingsByDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingPortMappingsByDestinationOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestinationCallable(const ListCustomRoutingPortMappingsByDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingPortMappingsByDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingPortMappingsByDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestinationAsync(const ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCustomRoutingPortMappingsByDestinationAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestinationAsyncHelper(const ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCustomRoutingPortMappingsByDestination(request), context);
}

ListEndpointGroupsOutcome GlobalAcceleratorClient::ListEndpointGroups(const ListEndpointGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEndpointGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListListenersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

ListTagsForResourceOutcome GlobalAcceleratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GlobalAcceleratorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ProvisionByoipCidrOutcome GlobalAcceleratorClient::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ProvisionByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionByoipCidrOutcomeCallable GlobalAcceleratorClient::ProvisionByoipCidrCallable(const ProvisionByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::ProvisionByoipCidrAsync(const ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvisionByoipCidrAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::ProvisionByoipCidrAsyncHelper(const ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvisionByoipCidr(request), context);
}

RemoveCustomRoutingEndpointsOutcome GlobalAcceleratorClient::RemoveCustomRoutingEndpoints(const RemoveCustomRoutingEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveCustomRoutingEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveCustomRoutingEndpointsOutcomeCallable GlobalAcceleratorClient::RemoveCustomRoutingEndpointsCallable(const RemoveCustomRoutingEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveCustomRoutingEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveCustomRoutingEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::RemoveCustomRoutingEndpointsAsync(const RemoveCustomRoutingEndpointsRequest& request, const RemoveCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveCustomRoutingEndpointsAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::RemoveCustomRoutingEndpointsAsyncHelper(const RemoveCustomRoutingEndpointsRequest& request, const RemoveCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveCustomRoutingEndpoints(request), context);
}

TagResourceOutcome GlobalAcceleratorClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GlobalAcceleratorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome GlobalAcceleratorClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GlobalAcceleratorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAcceleratorOutcome GlobalAcceleratorClient::UpdateAccelerator(const UpdateAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return UpdateAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

UpdateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::UpdateCustomRoutingAccelerator(const UpdateCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorCallable(const UpdateCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAsync(const UpdateCustomRoutingAcceleratorRequest& request, const UpdateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCustomRoutingAcceleratorAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAsyncHelper(const UpdateCustomRoutingAcceleratorRequest& request, const UpdateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCustomRoutingAccelerator(request), context);
}

UpdateCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes(const UpdateCustomRoutingAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateCustomRoutingAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomRoutingAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributesCallable(const UpdateCustomRoutingAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomRoutingAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomRoutingAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributesAsync(const UpdateCustomRoutingAcceleratorAttributesRequest& request, const UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCustomRoutingAcceleratorAttributesAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributesAsyncHelper(const UpdateCustomRoutingAcceleratorAttributesRequest& request, const UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCustomRoutingAcceleratorAttributes(request), context);
}

UpdateCustomRoutingListenerOutcome GlobalAcceleratorClient::UpdateCustomRoutingListener(const UpdateCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::UpdateCustomRoutingListenerCallable(const UpdateCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::UpdateCustomRoutingListenerAsync(const UpdateCustomRoutingListenerRequest& request, const UpdateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCustomRoutingListenerAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::UpdateCustomRoutingListenerAsyncHelper(const UpdateCustomRoutingListenerRequest& request, const UpdateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCustomRoutingListener(request), context);
}

UpdateEndpointGroupOutcome GlobalAcceleratorClient::UpdateEndpointGroup(const UpdateEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return UpdateListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

WithdrawByoipCidrOutcome GlobalAcceleratorClient::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return WithdrawByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

WithdrawByoipCidrOutcomeCallable GlobalAcceleratorClient::WithdrawByoipCidrCallable(const WithdrawByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< WithdrawByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->WithdrawByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::WithdrawByoipCidrAsync(const WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->WithdrawByoipCidrAsyncHelper( request, handler, context ); } );
}

void GlobalAcceleratorClient::WithdrawByoipCidrAsyncHelper(const WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, WithdrawByoipCidr(request), context);
}

