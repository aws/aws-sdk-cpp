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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/globalaccelerator/GlobalAcceleratorClient.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrorMarshaller.h>
#include <aws/globalaccelerator/GlobalAcceleratorEndpointProvider.h>
#include <aws/globalaccelerator/model/AddCustomRoutingEndpointsRequest.h>
#include <aws/globalaccelerator/model/AddEndpointsRequest.h>
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
#include <aws/globalaccelerator/model/RemoveEndpointsRequest.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* GlobalAcceleratorClient::SERVICE_NAME = "globalaccelerator";
const char* GlobalAcceleratorClient::ALLOCATION_TAG = "GlobalAcceleratorClient";

GlobalAcceleratorClient::GlobalAcceleratorClient(const GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider,
                                                 const GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<GlobalAcceleratorEndpointProviderBase> endpointProvider,
                                                 const GlobalAccelerator::GlobalAcceleratorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GlobalAcceleratorClient::GlobalAcceleratorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlobalAcceleratorClient::GlobalAcceleratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlobalAcceleratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GlobalAcceleratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GlobalAcceleratorClient::~GlobalAcceleratorClient()
{
}

std::shared_ptr<GlobalAcceleratorEndpointProviderBase>& GlobalAcceleratorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GlobalAcceleratorClient::init(const GlobalAccelerator::GlobalAcceleratorClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Global Accelerator");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void GlobalAcceleratorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddCustomRoutingEndpointsOutcome GlobalAcceleratorClient::AddCustomRoutingEndpoints(const AddCustomRoutingEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddCustomRoutingEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddCustomRoutingEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddCustomRoutingEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddCustomRoutingEndpoints(request), context);
    } );
}

AddEndpointsOutcome GlobalAcceleratorClient::AddEndpoints(const AddEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddEndpointsOutcomeCallable GlobalAcceleratorClient::AddEndpointsCallable(const AddEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::AddEndpointsAsync(const AddEndpointsRequest& request, const AddEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddEndpoints(request), context);
    } );
}

AdvertiseByoipCidrOutcome GlobalAcceleratorClient::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdvertiseByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdvertiseByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdvertiseByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AdvertiseByoipCidr(request), context);
    } );
}

AllowCustomRoutingTrafficOutcome GlobalAcceleratorClient::AllowCustomRoutingTraffic(const AllowCustomRoutingTrafficRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllowCustomRoutingTraffic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllowCustomRoutingTraffic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllowCustomRoutingTrafficOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AllowCustomRoutingTraffic(request), context);
    } );
}

CreateAcceleratorOutcome GlobalAcceleratorClient::CreateAccelerator(const CreateAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccelerator(request), context);
    } );
}

CreateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::CreateCustomRoutingAccelerator(const CreateCustomRoutingAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCustomRoutingAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomRoutingAccelerator(request), context);
    } );
}

CreateCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup(const CreateCustomRoutingEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomRoutingEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomRoutingEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCustomRoutingEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomRoutingEndpointGroup(request), context);
    } );
}

CreateCustomRoutingListenerOutcome GlobalAcceleratorClient::CreateCustomRoutingListener(const CreateCustomRoutingListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCustomRoutingListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomRoutingListener(request), context);
    } );
}

CreateEndpointGroupOutcome GlobalAcceleratorClient::CreateEndpointGroup(const CreateEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEndpointGroup(request), context);
    } );
}

CreateListenerOutcome GlobalAcceleratorClient::CreateListener(const CreateListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateListener(request), context);
    } );
}

DeleteAcceleratorOutcome GlobalAcceleratorClient::DeleteAccelerator(const DeleteAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccelerator(request), context);
    } );
}

DeleteCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DeleteCustomRoutingAccelerator(const DeleteCustomRoutingAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCustomRoutingAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomRoutingAccelerator(request), context);
    } );
}

DeleteCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup(const DeleteCustomRoutingEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomRoutingEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomRoutingEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCustomRoutingEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomRoutingEndpointGroup(request), context);
    } );
}

DeleteCustomRoutingListenerOutcome GlobalAcceleratorClient::DeleteCustomRoutingListener(const DeleteCustomRoutingListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCustomRoutingListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomRoutingListener(request), context);
    } );
}

DeleteEndpointGroupOutcome GlobalAcceleratorClient::DeleteEndpointGroup(const DeleteEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpointGroup(request), context);
    } );
}

DeleteListenerOutcome GlobalAcceleratorClient::DeleteListener(const DeleteListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteListener(request), context);
    } );
}

DenyCustomRoutingTrafficOutcome GlobalAcceleratorClient::DenyCustomRoutingTraffic(const DenyCustomRoutingTrafficRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DenyCustomRoutingTraffic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DenyCustomRoutingTraffic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DenyCustomRoutingTrafficOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DenyCustomRoutingTraffic(request), context);
    } );
}

DeprovisionByoipCidrOutcome GlobalAcceleratorClient::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeprovisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeprovisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeprovisionByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeprovisionByoipCidr(request), context);
    } );
}

DescribeAcceleratorOutcome GlobalAcceleratorClient::DescribeAccelerator(const DescribeAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccelerator(request), context);
    } );
}

DescribeAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeAcceleratorAttributes(const DescribeAcceleratorAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAcceleratorAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAcceleratorAttributes(request), context);
    } );
}

DescribeCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::DescribeCustomRoutingAccelerator(const DescribeCustomRoutingAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomRoutingAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomRoutingAccelerator(request), context);
    } );
}

DescribeCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes(const DescribeCustomRoutingAcceleratorAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomRoutingAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomRoutingAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomRoutingAcceleratorAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomRoutingAcceleratorAttributes(request), context);
    } );
}

DescribeCustomRoutingEndpointGroupOutcome GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup(const DescribeCustomRoutingEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomRoutingEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomRoutingEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomRoutingEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomRoutingEndpointGroup(request), context);
    } );
}

DescribeCustomRoutingListenerOutcome GlobalAcceleratorClient::DescribeCustomRoutingListener(const DescribeCustomRoutingListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomRoutingListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomRoutingListener(request), context);
    } );
}

DescribeEndpointGroupOutcome GlobalAcceleratorClient::DescribeEndpointGroup(const DescribeEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpointGroup(request), context);
    } );
}

DescribeListenerOutcome GlobalAcceleratorClient::DescribeListener(const DescribeListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeListener(request), context);
    } );
}

ListAcceleratorsOutcome GlobalAcceleratorClient::ListAccelerators(const ListAcceleratorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccelerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccelerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAcceleratorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccelerators(request), context);
    } );
}

ListByoipCidrsOutcome GlobalAcceleratorClient::ListByoipCidrs(const ListByoipCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListByoipCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListByoipCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListByoipCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListByoipCidrs(request), context);
    } );
}

ListCustomRoutingAcceleratorsOutcome GlobalAcceleratorClient::ListCustomRoutingAccelerators(const ListCustomRoutingAcceleratorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomRoutingAccelerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomRoutingAccelerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCustomRoutingAcceleratorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomRoutingAccelerators(request), context);
    } );
}

ListCustomRoutingEndpointGroupsOutcome GlobalAcceleratorClient::ListCustomRoutingEndpointGroups(const ListCustomRoutingEndpointGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomRoutingEndpointGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomRoutingEndpointGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCustomRoutingEndpointGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomRoutingEndpointGroups(request), context);
    } );
}

ListCustomRoutingListenersOutcome GlobalAcceleratorClient::ListCustomRoutingListeners(const ListCustomRoutingListenersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomRoutingListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomRoutingListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCustomRoutingListenersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomRoutingListeners(request), context);
    } );
}

ListCustomRoutingPortMappingsOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappings(const ListCustomRoutingPortMappingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomRoutingPortMappings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomRoutingPortMappings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCustomRoutingPortMappingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomRoutingPortMappings(request), context);
    } );
}

ListCustomRoutingPortMappingsByDestinationOutcome GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination(const ListCustomRoutingPortMappingsByDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomRoutingPortMappingsByDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomRoutingPortMappingsByDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCustomRoutingPortMappingsByDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomRoutingPortMappingsByDestination(request), context);
    } );
}

ListEndpointGroupsOutcome GlobalAcceleratorClient::ListEndpointGroups(const ListEndpointGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEndpointGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEndpointGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEndpointGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEndpointGroups(request), context);
    } );
}

ListListenersOutcome GlobalAcceleratorClient::ListListeners(const ListListenersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListListeners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListListenersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListListeners(request), context);
    } );
}

ListTagsForResourceOutcome GlobalAcceleratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ProvisionByoipCidrOutcome GlobalAcceleratorClient::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ProvisionByoipCidr(request), context);
    } );
}

RemoveCustomRoutingEndpointsOutcome GlobalAcceleratorClient::RemoveCustomRoutingEndpoints(const RemoveCustomRoutingEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveCustomRoutingEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveCustomRoutingEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveCustomRoutingEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveCustomRoutingEndpoints(request), context);
    } );
}

RemoveEndpointsOutcome GlobalAcceleratorClient::RemoveEndpoints(const RemoveEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveEndpointsOutcomeCallable GlobalAcceleratorClient::RemoveEndpointsCallable(const RemoveEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlobalAcceleratorClient::RemoveEndpointsAsync(const RemoveEndpointsRequest& request, const RemoveEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveEndpoints(request), context);
    } );
}

TagResourceOutcome GlobalAcceleratorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome GlobalAcceleratorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAcceleratorOutcome GlobalAcceleratorClient::UpdateAccelerator(const UpdateAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAccelerator(request), context);
    } );
}

UpdateAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateAcceleratorAttributes(const UpdateAcceleratorAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAcceleratorAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAcceleratorAttributes(request), context);
    } );
}

UpdateCustomRoutingAcceleratorOutcome GlobalAcceleratorClient::UpdateCustomRoutingAccelerator(const UpdateCustomRoutingAcceleratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCustomRoutingAccelerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCustomRoutingAcceleratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCustomRoutingAccelerator(request), context);
    } );
}

UpdateCustomRoutingAcceleratorAttributesOutcome GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes(const UpdateCustomRoutingAcceleratorAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomRoutingAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCustomRoutingAcceleratorAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCustomRoutingAcceleratorAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCustomRoutingAcceleratorAttributes(request), context);
    } );
}

UpdateCustomRoutingListenerOutcome GlobalAcceleratorClient::UpdateCustomRoutingListener(const UpdateCustomRoutingListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCustomRoutingListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCustomRoutingListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCustomRoutingListener(request), context);
    } );
}

UpdateEndpointGroupOutcome GlobalAcceleratorClient::UpdateEndpointGroup(const UpdateEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEndpointGroup(request), context);
    } );
}

UpdateListenerOutcome GlobalAcceleratorClient::UpdateListener(const UpdateListenerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateListener, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateListenerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateListener(request), context);
    } );
}

WithdrawByoipCidrOutcome GlobalAcceleratorClient::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WithdrawByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WithdrawByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return WithdrawByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, WithdrawByoipCidr(request), context);
    } );
}

