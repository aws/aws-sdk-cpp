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

#include <aws/mediastore/MediaStoreClient.h>
#include <aws/mediastore/MediaStoreErrorMarshaller.h>
#include <aws/mediastore/MediaStoreEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MediaStoreClient::SERVICE_NAME = "mediastore";
const char* MediaStoreClient::ALLOCATION_TAG = "MediaStoreClient";

MediaStoreClient::MediaStoreClient(const MediaStore::MediaStoreClientConfiguration& clientConfiguration,
                                   std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const AWSCredentials& credentials,
                                   std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider,
                                   const MediaStore::MediaStoreClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider,
                                   const MediaStore::MediaStoreClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MediaStoreClient::MediaStoreClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MediaStoreClient::~MediaStoreClient()
{
}

std::shared_ptr<MediaStoreEndpointProviderBase>& MediaStoreClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MediaStoreClient::init(const MediaStore::MediaStoreClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaStore");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MediaStoreClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateContainerOutcome MediaStoreClient::CreateContainer(const CreateContainerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContainerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContainer(request), context);
    } );
}

DeleteContainerOutcome MediaStoreClient::DeleteContainer(const DeleteContainerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContainer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContainer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContainerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContainer(request), context);
    } );
}

DeleteContainerPolicyOutcome MediaStoreClient::DeleteContainerPolicy(const DeleteContainerPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContainerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContainerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContainerPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContainerPolicy(request), context);
    } );
}

DeleteCorsPolicyOutcome MediaStoreClient::DeleteCorsPolicy(const DeleteCorsPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCorsPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCorsPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCorsPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCorsPolicy(request), context);
    } );
}

DeleteLifecyclePolicyOutcome MediaStoreClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLifecyclePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLifecyclePolicy(request), context);
    } );
}

DeleteMetricPolicyOutcome MediaStoreClient::DeleteMetricPolicy(const DeleteMetricPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMetricPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMetricPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMetricPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMetricPolicy(request), context);
    } );
}

DescribeContainerOutcome MediaStoreClient::DescribeContainer(const DescribeContainerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContainer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContainer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeContainerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeContainer(request), context);
    } );
}

GetContainerPolicyOutcome MediaStoreClient::GetContainerPolicy(const GetContainerPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerPolicy(request), context);
    } );
}

GetCorsPolicyOutcome MediaStoreClient::GetCorsPolicy(const GetCorsPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCorsPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCorsPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCorsPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCorsPolicy(request), context);
    } );
}

GetLifecyclePolicyOutcome MediaStoreClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLifecyclePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLifecyclePolicy(request), context);
    } );
}

GetMetricPolicyOutcome MediaStoreClient::GetMetricPolicy(const GetMetricPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMetricPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMetricPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMetricPolicy(request), context);
    } );
}

ListContainersOutcome MediaStoreClient::ListContainers(const ListContainersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContainers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContainers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListContainersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListContainers(request), context);
    } );
}

ListTagsForResourceOutcome MediaStoreClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutContainerPolicyOutcome MediaStoreClient::PutContainerPolicy(const PutContainerPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutContainerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutContainerPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutContainerPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutContainerPolicy(request), context);
    } );
}

PutCorsPolicyOutcome MediaStoreClient::PutCorsPolicy(const PutCorsPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutCorsPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutCorsPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutCorsPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutCorsPolicy(request), context);
    } );
}

PutLifecyclePolicyOutcome MediaStoreClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutLifecyclePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLifecyclePolicy(request), context);
    } );
}

PutMetricPolicyOutcome MediaStoreClient::PutMetricPolicy(const PutMetricPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMetricPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMetricPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutMetricPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMetricPolicy(request), context);
    } );
}

StartAccessLoggingOutcome MediaStoreClient::StartAccessLogging(const StartAccessLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAccessLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAccessLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartAccessLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAccessLogging(request), context);
    } );
}

StopAccessLoggingOutcome MediaStoreClient::StopAccessLogging(const StopAccessLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopAccessLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopAccessLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopAccessLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopAccessLogging(request), context);
    } );
}

TagResourceOutcome MediaStoreClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome MediaStoreClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

