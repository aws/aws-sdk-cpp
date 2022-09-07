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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlobalAcceleratorClient::~GlobalAcceleratorClient()
{
}

void GlobalAcceleratorClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Global Accelerator");
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
  return AddCustomRoutingEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddCustomRoutingEndpointsOutcomeCallable GlobalAcceleratorClient::AddCustomRoutingEndpointsCallable(const AddCustomRoutingEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddCustomRoutingEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddCustomRoutingEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientAddCustomRoutingEndpointsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const AddCustomRoutingEndpointsRequest& request, const AddCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddCustomRoutingEndpoints(request), context);
}

void GlobalAcceleratorClient::AddCustomRoutingEndpointsAsync(const AddCustomRoutingEndpointsRequest& request, const AddCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientAddCustomRoutingEndpointsAsyncHelper( this, request, handler, context ); } );
}

AdvertiseByoipCidrOutcome GlobalAcceleratorClient::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AdvertiseByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdvertiseByoipCidrOutcomeCallable GlobalAcceleratorClient::AdvertiseByoipCidrCallable(const AdvertiseByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdvertiseByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdvertiseByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientAdvertiseByoipCidrAsyncHelper(GlobalAcceleratorClient const * const clientThis, const AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AdvertiseByoipCidr(request), context);
}

void GlobalAcceleratorClient::AdvertiseByoipCidrAsync(const AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientAdvertiseByoipCidrAsyncHelper( this, request, handler, context ); } );
}

AllowCustomRoutingTrafficOutcome GlobalAcceleratorClient::AllowCustomRoutingTraffic(const AllowCustomRoutingTrafficRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AllowCustomRoutingTrafficOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AllowCustomRoutingTrafficOutcomeCallable GlobalAcceleratorClient::AllowCustomRoutingTrafficCallable(const AllowCustomRoutingTrafficRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AllowCustomRoutingTrafficOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllowCustomRoutingTraffic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientAllowCustomRoutingTrafficAsyncHelper(GlobalAcceleratorClient const * const clientThis, const AllowCustomRoutingTrafficRequest& request, const AllowCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AllowCustomRoutingTraffic(request), context);
}

void GlobalAcceleratorClient::AllowCustomRoutingTrafficAsync(const AllowCustomRoutingTrafficRequest& request, const AllowCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientAllowCustomRoutingTrafficAsyncHelper( this, request, handler, context ); } );
}

CreateAcceleratorOutcome GlobalAcceleratorClient::CreateAccelerator(const CreateAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAcceleratorOutcomeCallable GlobalAcceleratorClient::CreateAcceleratorCallable(const CreateAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientCreateAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccelerator(request), context);
}

void GlobalAcceleratorClient::CreateAcceleratorAsync(const CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientCreateAcceleratorAsyncHelper( this, request, handler, context ); } );
}

CreateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::CreateCustomRoutingAccelerator(const CreateCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::CreateCustomRoutingAcceleratorCallable(const CreateCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientCreateCustomRoutingAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const CreateCustomRoutingAcceleratorRequest& request, const CreateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomRoutingAccelerator(request), context);
}

void GlobalAcceleratorClient::CreateCustomRoutingAcceleratorAsync(const CreateCustomRoutingAcceleratorRequest& request, const CreateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientCreateCustomRoutingAcceleratorAsyncHelper( this, request, handler, context ); } );
}

CreateCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup(const CreateCustomRoutingEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomRoutingEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomRoutingEndpointGroupOutcomeCallable GlobalAcceleratorClient::CreateCustomRoutingEndpointGroupCallable(const CreateCustomRoutingEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomRoutingEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomRoutingEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientCreateCustomRoutingEndpointGroupAsyncHelper(GlobalAcceleratorClient const * const clientThis, const CreateCustomRoutingEndpointGroupRequest& request, const CreateCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomRoutingEndpointGroup(request), context);
}

void GlobalAcceleratorClient::CreateCustomRoutingEndpointGroupAsync(const CreateCustomRoutingEndpointGroupRequest& request, const CreateCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientCreateCustomRoutingEndpointGroupAsyncHelper( this, request, handler, context ); } );
}

CreateCustomRoutingListenerOutcome GlobalAcceleratorClient::CreateCustomRoutingListener(const CreateCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::CreateCustomRoutingListenerCallable(const CreateCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientCreateCustomRoutingListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const CreateCustomRoutingListenerRequest& request, const CreateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomRoutingListener(request), context);
}

void GlobalAcceleratorClient::CreateCustomRoutingListenerAsync(const CreateCustomRoutingListenerRequest& request, const CreateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientCreateCustomRoutingListenerAsyncHelper( this, request, handler, context ); } );
}

CreateEndpointGroupOutcome GlobalAcceleratorClient::CreateEndpointGroup(const CreateEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointGroupOutcomeCallable GlobalAcceleratorClient::CreateEndpointGroupCallable(const CreateEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientCreateEndpointGroupAsyncHelper(GlobalAcceleratorClient const * const clientThis, const CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEndpointGroup(request), context);
}

void GlobalAcceleratorClient::CreateEndpointGroupAsync(const CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientCreateEndpointGroupAsyncHelper( this, request, handler, context ); } );
}

CreateListenerOutcome GlobalAcceleratorClient::CreateListener(const CreateListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateListenerOutcomeCallable GlobalAcceleratorClient::CreateListenerCallable(const CreateListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientCreateListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateListener(request), context);
}

void GlobalAcceleratorClient::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientCreateListenerAsyncHelper( this, request, handler, context ); } );
}

DeleteAcceleratorOutcome GlobalAcceleratorClient::DeleteAccelerator(const DeleteAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAcceleratorOutcomeCallable GlobalAcceleratorClient::DeleteAcceleratorCallable(const DeleteAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDeleteAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccelerator(request), context);
}

void GlobalAcceleratorClient::DeleteAcceleratorAsync(const DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDeleteAcceleratorAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DeleteCustomRoutingAccelerator(const DeleteCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::DeleteCustomRoutingAcceleratorCallable(const DeleteCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDeleteCustomRoutingAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DeleteCustomRoutingAcceleratorRequest& request, const DeleteCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomRoutingAccelerator(request), context);
}

void GlobalAcceleratorClient::DeleteCustomRoutingAcceleratorAsync(const DeleteCustomRoutingAcceleratorRequest& request, const DeleteCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDeleteCustomRoutingAcceleratorAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup(const DeleteCustomRoutingEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomRoutingEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomRoutingEndpointGroupOutcomeCallable GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroupCallable(const DeleteCustomRoutingEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomRoutingEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomRoutingEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDeleteCustomRoutingEndpointGroupAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DeleteCustomRoutingEndpointGroupRequest& request, const DeleteCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomRoutingEndpointGroup(request), context);
}

void GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroupAsync(const DeleteCustomRoutingEndpointGroupRequest& request, const DeleteCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDeleteCustomRoutingEndpointGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomRoutingListenerOutcome GlobalAcceleratorClient::DeleteCustomRoutingListener(const DeleteCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::DeleteCustomRoutingListenerCallable(const DeleteCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDeleteCustomRoutingListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DeleteCustomRoutingListenerRequest& request, const DeleteCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomRoutingListener(request), context);
}

void GlobalAcceleratorClient::DeleteCustomRoutingListenerAsync(const DeleteCustomRoutingListenerRequest& request, const DeleteCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDeleteCustomRoutingListenerAsyncHelper( this, request, handler, context ); } );
}

DeleteEndpointGroupOutcome GlobalAcceleratorClient::DeleteEndpointGroup(const DeleteEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointGroupOutcomeCallable GlobalAcceleratorClient::DeleteEndpointGroupCallable(const DeleteEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDeleteEndpointGroupAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpointGroup(request), context);
}

void GlobalAcceleratorClient::DeleteEndpointGroupAsync(const DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDeleteEndpointGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteListenerOutcome GlobalAcceleratorClient::DeleteListener(const DeleteListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteListenerOutcomeCallable GlobalAcceleratorClient::DeleteListenerCallable(const DeleteListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDeleteListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteListener(request), context);
}

void GlobalAcceleratorClient::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDeleteListenerAsyncHelper( this, request, handler, context ); } );
}

DenyCustomRoutingTrafficOutcome GlobalAcceleratorClient::DenyCustomRoutingTraffic(const DenyCustomRoutingTrafficRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DenyCustomRoutingTrafficOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DenyCustomRoutingTrafficOutcomeCallable GlobalAcceleratorClient::DenyCustomRoutingTrafficCallable(const DenyCustomRoutingTrafficRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DenyCustomRoutingTrafficOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DenyCustomRoutingTraffic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDenyCustomRoutingTrafficAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DenyCustomRoutingTrafficRequest& request, const DenyCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DenyCustomRoutingTraffic(request), context);
}

void GlobalAcceleratorClient::DenyCustomRoutingTrafficAsync(const DenyCustomRoutingTrafficRequest& request, const DenyCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDenyCustomRoutingTrafficAsyncHelper( this, request, handler, context ); } );
}

DeprovisionByoipCidrOutcome GlobalAcceleratorClient::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeprovisionByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeprovisionByoipCidrOutcomeCallable GlobalAcceleratorClient::DeprovisionByoipCidrCallable(const DeprovisionByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprovisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprovisionByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDeprovisionByoipCidrAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeprovisionByoipCidr(request), context);
}

void GlobalAcceleratorClient::DeprovisionByoipCidrAsync(const DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDeprovisionByoipCidrAsyncHelper( this, request, handler, context ); } );
}

DescribeAcceleratorOutcome GlobalAcceleratorClient::DescribeAccelerator(const DescribeAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAcceleratorOutcomeCallable GlobalAcceleratorClient::DescribeAcceleratorCallable(const DescribeAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccelerator(request), context);
}

void GlobalAcceleratorClient::DescribeAcceleratorAsync(const DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeAcceleratorAsyncHelper( this, request, handler, context ); } );
}

DescribeAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeAcceleratorAttributes(const DescribeAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::DescribeAcceleratorAttributesCallable(const DescribeAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeAcceleratorAttributesAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAcceleratorAttributes(request), context);
}

void GlobalAcceleratorClient::DescribeAcceleratorAttributesAsync(const DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeAcceleratorAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DescribeCustomRoutingAccelerator(const DescribeCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorCallable(const DescribeCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeCustomRoutingAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeCustomRoutingAcceleratorRequest& request, const DescribeCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCustomRoutingAccelerator(request), context);
}

void GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAsync(const DescribeCustomRoutingAcceleratorRequest& request, const DescribeCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeCustomRoutingAcceleratorAsyncHelper( this, request, handler, context ); } );
}

DescribeCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes(const DescribeCustomRoutingAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCustomRoutingAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributesCallable(const DescribeCustomRoutingAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeCustomRoutingAcceleratorAttributesAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeCustomRoutingAcceleratorAttributesRequest& request, const DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCustomRoutingAcceleratorAttributes(request), context);
}

void GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributesAsync(const DescribeCustomRoutingAcceleratorAttributesRequest& request, const DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeCustomRoutingAcceleratorAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup(const DescribeCustomRoutingEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCustomRoutingEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingEndpointGroupOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroupCallable(const DescribeCustomRoutingEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeCustomRoutingEndpointGroupAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCustomRoutingEndpointGroup(request), context);
}

void GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroupAsync(const DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeCustomRoutingEndpointGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeCustomRoutingListenerOutcome GlobalAcceleratorClient::DescribeCustomRoutingListener(const DescribeCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::DescribeCustomRoutingListenerCallable(const DescribeCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeCustomRoutingListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeCustomRoutingListenerRequest& request, const DescribeCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCustomRoutingListener(request), context);
}

void GlobalAcceleratorClient::DescribeCustomRoutingListenerAsync(const DescribeCustomRoutingListenerRequest& request, const DescribeCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeCustomRoutingListenerAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointGroupOutcome GlobalAcceleratorClient::DescribeEndpointGroup(const DescribeEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointGroupOutcomeCallable GlobalAcceleratorClient::DescribeEndpointGroupCallable(const DescribeEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeEndpointGroupAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpointGroup(request), context);
}

void GlobalAcceleratorClient::DescribeEndpointGroupAsync(const DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeEndpointGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeListenerOutcome GlobalAcceleratorClient::DescribeListener(const DescribeListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeListenerOutcomeCallable GlobalAcceleratorClient::DescribeListenerCallable(const DescribeListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientDescribeListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeListener(request), context);
}

void GlobalAcceleratorClient::DescribeListenerAsync(const DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientDescribeListenerAsyncHelper( this, request, handler, context ); } );
}

ListAcceleratorsOutcome GlobalAcceleratorClient::ListAccelerators(const ListAcceleratorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAcceleratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAcceleratorsOutcomeCallable GlobalAcceleratorClient::ListAcceleratorsCallable(const ListAcceleratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAcceleratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccelerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListAcceleratorsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccelerators(request), context);
}

void GlobalAcceleratorClient::ListAcceleratorsAsync(const ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListAcceleratorsAsyncHelper( this, request, handler, context ); } );
}

ListByoipCidrsOutcome GlobalAcceleratorClient::ListByoipCidrs(const ListByoipCidrsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListByoipCidrsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListByoipCidrsOutcomeCallable GlobalAcceleratorClient::ListByoipCidrsCallable(const ListByoipCidrsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListByoipCidrsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListByoipCidrs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListByoipCidrsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListByoipCidrsRequest& request, const ListByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListByoipCidrs(request), context);
}

void GlobalAcceleratorClient::ListByoipCidrsAsync(const ListByoipCidrsRequest& request, const ListByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListByoipCidrsAsyncHelper( this, request, handler, context ); } );
}

ListCustomRoutingAcceleratorsOutcome GlobalAcceleratorClient::ListCustomRoutingAccelerators(const ListCustomRoutingAcceleratorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomRoutingAcceleratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingAcceleratorsOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingAcceleratorsCallable(const ListCustomRoutingAcceleratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingAcceleratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingAccelerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListCustomRoutingAcceleratorsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListCustomRoutingAcceleratorsRequest& request, const ListCustomRoutingAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomRoutingAccelerators(request), context);
}

void GlobalAcceleratorClient::ListCustomRoutingAcceleratorsAsync(const ListCustomRoutingAcceleratorsRequest& request, const ListCustomRoutingAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListCustomRoutingAcceleratorsAsyncHelper( this, request, handler, context ); } );
}

ListCustomRoutingEndpointGroupsOutcome GlobalAcceleratorClient::ListCustomRoutingEndpointGroups(const ListCustomRoutingEndpointGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomRoutingEndpointGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingEndpointGroupsOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingEndpointGroupsCallable(const ListCustomRoutingEndpointGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingEndpointGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingEndpointGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListCustomRoutingEndpointGroupsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomRoutingEndpointGroups(request), context);
}

void GlobalAcceleratorClient::ListCustomRoutingEndpointGroupsAsync(const ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListCustomRoutingEndpointGroupsAsyncHelper( this, request, handler, context ); } );
}

ListCustomRoutingListenersOutcome GlobalAcceleratorClient::ListCustomRoutingListeners(const ListCustomRoutingListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomRoutingListenersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingListenersOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingListenersCallable(const ListCustomRoutingListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListCustomRoutingListenersAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListCustomRoutingListenersRequest& request, const ListCustomRoutingListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomRoutingListeners(request), context);
}

void GlobalAcceleratorClient::ListCustomRoutingListenersAsync(const ListCustomRoutingListenersRequest& request, const ListCustomRoutingListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListCustomRoutingListenersAsyncHelper( this, request, handler, context ); } );
}

ListCustomRoutingPortMappingsOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappings(const ListCustomRoutingPortMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomRoutingPortMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingPortMappingsOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingPortMappingsCallable(const ListCustomRoutingPortMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingPortMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingPortMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListCustomRoutingPortMappingsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomRoutingPortMappings(request), context);
}

void GlobalAcceleratorClient::ListCustomRoutingPortMappingsAsync(const ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListCustomRoutingPortMappingsAsyncHelper( this, request, handler, context ); } );
}

ListCustomRoutingPortMappingsByDestinationOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination(const ListCustomRoutingPortMappingsByDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomRoutingPortMappingsByDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomRoutingPortMappingsByDestinationOutcomeCallable GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestinationCallable(const ListCustomRoutingPortMappingsByDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomRoutingPortMappingsByDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomRoutingPortMappingsByDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListCustomRoutingPortMappingsByDestinationAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomRoutingPortMappingsByDestination(request), context);
}

void GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestinationAsync(const ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListCustomRoutingPortMappingsByDestinationAsyncHelper( this, request, handler, context ); } );
}

ListEndpointGroupsOutcome GlobalAcceleratorClient::ListEndpointGroups(const ListEndpointGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointGroupsOutcomeCallable GlobalAcceleratorClient::ListEndpointGroupsCallable(const ListEndpointGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListEndpointGroupsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEndpointGroups(request), context);
}

void GlobalAcceleratorClient::ListEndpointGroupsAsync(const ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListEndpointGroupsAsyncHelper( this, request, handler, context ); } );
}

ListListenersOutcome GlobalAcceleratorClient::ListListeners(const ListListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListListenersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListListenersOutcomeCallable GlobalAcceleratorClient::ListListenersCallable(const ListListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListListenersAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListListeners(request), context);
}

void GlobalAcceleratorClient::ListListenersAsync(const ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListListenersAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome GlobalAcceleratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GlobalAcceleratorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientListTagsForResourceAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void GlobalAcceleratorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ProvisionByoipCidrOutcome GlobalAcceleratorClient::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ProvisionByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionByoipCidrOutcomeCallable GlobalAcceleratorClient::ProvisionByoipCidrCallable(const ProvisionByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientProvisionByoipCidrAsyncHelper(GlobalAcceleratorClient const * const clientThis, const ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ProvisionByoipCidr(request), context);
}

void GlobalAcceleratorClient::ProvisionByoipCidrAsync(const ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientProvisionByoipCidrAsyncHelper( this, request, handler, context ); } );
}

RemoveCustomRoutingEndpointsOutcome GlobalAcceleratorClient::RemoveCustomRoutingEndpoints(const RemoveCustomRoutingEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveCustomRoutingEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveCustomRoutingEndpointsOutcomeCallable GlobalAcceleratorClient::RemoveCustomRoutingEndpointsCallable(const RemoveCustomRoutingEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveCustomRoutingEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveCustomRoutingEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientRemoveCustomRoutingEndpointsAsyncHelper(GlobalAcceleratorClient const * const clientThis, const RemoveCustomRoutingEndpointsRequest& request, const RemoveCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveCustomRoutingEndpoints(request), context);
}

void GlobalAcceleratorClient::RemoveCustomRoutingEndpointsAsync(const RemoveCustomRoutingEndpointsRequest& request, const RemoveCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientRemoveCustomRoutingEndpointsAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome GlobalAcceleratorClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GlobalAcceleratorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientTagResourceAsyncHelper(GlobalAcceleratorClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void GlobalAcceleratorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome GlobalAcceleratorClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GlobalAcceleratorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUntagResourceAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void GlobalAcceleratorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAcceleratorOutcome GlobalAcceleratorClient::UpdateAccelerator(const UpdateAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAcceleratorOutcomeCallable GlobalAcceleratorClient::UpdateAcceleratorCallable(const UpdateAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUpdateAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccelerator(request), context);
}

void GlobalAcceleratorClient::UpdateAcceleratorAsync(const UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUpdateAcceleratorAsyncHelper( this, request, handler, context ); } );
}

UpdateAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateAcceleratorAttributes(const UpdateAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::UpdateAcceleratorAttributesCallable(const UpdateAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUpdateAcceleratorAttributesAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAcceleratorAttributes(request), context);
}

void GlobalAcceleratorClient::UpdateAcceleratorAttributesAsync(const UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUpdateAcceleratorAttributesAsyncHelper( this, request, handler, context ); } );
}

UpdateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::UpdateCustomRoutingAccelerator(const UpdateCustomRoutingAcceleratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCustomRoutingAcceleratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomRoutingAcceleratorOutcomeCallable GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorCallable(const UpdateCustomRoutingAcceleratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomRoutingAcceleratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomRoutingAccelerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUpdateCustomRoutingAcceleratorAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UpdateCustomRoutingAcceleratorRequest& request, const UpdateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCustomRoutingAccelerator(request), context);
}

void GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAsync(const UpdateCustomRoutingAcceleratorRequest& request, const UpdateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUpdateCustomRoutingAcceleratorAsyncHelper( this, request, handler, context ); } );
}

UpdateCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes(const UpdateCustomRoutingAcceleratorAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCustomRoutingAcceleratorAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomRoutingAcceleratorAttributesOutcomeCallable GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributesCallable(const UpdateCustomRoutingAcceleratorAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomRoutingAcceleratorAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomRoutingAcceleratorAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUpdateCustomRoutingAcceleratorAttributesAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UpdateCustomRoutingAcceleratorAttributesRequest& request, const UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCustomRoutingAcceleratorAttributes(request), context);
}

void GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributesAsync(const UpdateCustomRoutingAcceleratorAttributesRequest& request, const UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUpdateCustomRoutingAcceleratorAttributesAsyncHelper( this, request, handler, context ); } );
}

UpdateCustomRoutingListenerOutcome GlobalAcceleratorClient::UpdateCustomRoutingListener(const UpdateCustomRoutingListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCustomRoutingListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomRoutingListenerOutcomeCallable GlobalAcceleratorClient::UpdateCustomRoutingListenerCallable(const UpdateCustomRoutingListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomRoutingListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomRoutingListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUpdateCustomRoutingListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UpdateCustomRoutingListenerRequest& request, const UpdateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCustomRoutingListener(request), context);
}

void GlobalAcceleratorClient::UpdateCustomRoutingListenerAsync(const UpdateCustomRoutingListenerRequest& request, const UpdateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUpdateCustomRoutingListenerAsyncHelper( this, request, handler, context ); } );
}

UpdateEndpointGroupOutcome GlobalAcceleratorClient::UpdateEndpointGroup(const UpdateEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEndpointGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointGroupOutcomeCallable GlobalAcceleratorClient::UpdateEndpointGroupCallable(const UpdateEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUpdateEndpointGroupAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpointGroup(request), context);
}

void GlobalAcceleratorClient::UpdateEndpointGroupAsync(const UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUpdateEndpointGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateListenerOutcome GlobalAcceleratorClient::UpdateListener(const UpdateListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateListenerOutcomeCallable GlobalAcceleratorClient::UpdateListenerCallable(const UpdateListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientUpdateListenerAsyncHelper(GlobalAcceleratorClient const * const clientThis, const UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateListener(request), context);
}

void GlobalAcceleratorClient::UpdateListenerAsync(const UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientUpdateListenerAsyncHelper( this, request, handler, context ); } );
}

WithdrawByoipCidrOutcome GlobalAcceleratorClient::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return WithdrawByoipCidrOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

WithdrawByoipCidrOutcomeCallable GlobalAcceleratorClient::WithdrawByoipCidrCallable(const WithdrawByoipCidrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< WithdrawByoipCidrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->WithdrawByoipCidr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClientWithdrawByoipCidrAsyncHelper(GlobalAcceleratorClient const * const clientThis, const WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->WithdrawByoipCidr(request), context);
}

void GlobalAcceleratorClient::WithdrawByoipCidrAsync(const WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlobalAcceleratorClientWithdrawByoipCidrAsyncHelper( this, request, handler, context ); } );
}

