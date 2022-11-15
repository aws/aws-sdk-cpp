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

#include <aws/resource-explorer-2/ResourceExplorer2Client.h>
#include <aws/resource-explorer-2/ResourceExplorer2ErrorMarshaller.h>
#include <aws/resource-explorer-2/ResourceExplorer2EndpointProvider.h>
#include <aws/resource-explorer-2/model/AssociateDefaultViewRequest.h>
#include <aws/resource-explorer-2/model/BatchGetViewRequest.h>
#include <aws/resource-explorer-2/model/CreateIndexRequest.h>
#include <aws/resource-explorer-2/model/CreateViewRequest.h>
#include <aws/resource-explorer-2/model/DeleteIndexRequest.h>
#include <aws/resource-explorer-2/model/DeleteViewRequest.h>
#include <aws/resource-explorer-2/model/GetViewRequest.h>
#include <aws/resource-explorer-2/model/ListIndexesRequest.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesRequest.h>
#include <aws/resource-explorer-2/model/ListTagsForResourceRequest.h>
#include <aws/resource-explorer-2/model/ListViewsRequest.h>
#include <aws/resource-explorer-2/model/SearchRequest.h>
#include <aws/resource-explorer-2/model/TagResourceRequest.h>
#include <aws/resource-explorer-2/model/UntagResourceRequest.h>
#include <aws/resource-explorer-2/model/UpdateIndexTypeRequest.h>
#include <aws/resource-explorer-2/model/UpdateViewRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ResourceExplorer2;
using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ResourceExplorer2Client::SERVICE_NAME = "resource-explorer-2";
const char* ResourceExplorer2Client::ALLOCATION_TAG = "ResourceExplorer2Client";

ResourceExplorer2Client::ResourceExplorer2Client(const ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const AWSCredentials& credentials,
                                                 std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider,
                                                 const ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<ResourceExplorer2EndpointProviderBase> endpointProvider,
                                                 const ResourceExplorer2::ResourceExplorer2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ResourceExplorer2Client::ResourceExplorer2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ResourceExplorer2Client::ResourceExplorer2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceExplorer2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ResourceExplorer2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ResourceExplorer2Client::~ResourceExplorer2Client()
{
}

std::shared_ptr<ResourceExplorer2EndpointProviderBase>& ResourceExplorer2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ResourceExplorer2Client::init(const ResourceExplorer2::ResourceExplorer2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Resource Explorer 2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ResourceExplorer2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateDefaultViewOutcome ResourceExplorer2Client::AssociateDefaultView(const AssociateDefaultViewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDefaultView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDefaultView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/AssociateDefaultView");
  return AssociateDefaultViewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDefaultViewOutcomeCallable ResourceExplorer2Client::AssociateDefaultViewCallable(const AssociateDefaultViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDefaultViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDefaultView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::AssociateDefaultViewAsync(const AssociateDefaultViewRequest& request, const AssociateDefaultViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateDefaultView(request), context);
    } );
}

BatchGetViewOutcome ResourceExplorer2Client::BatchGetView(const BatchGetViewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetView");
  return BatchGetViewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetViewOutcomeCallable ResourceExplorer2Client::BatchGetViewCallable(const BatchGetViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::BatchGetViewAsync(const BatchGetViewRequest& request, const BatchGetViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetView(request), context);
    } );
}

CreateIndexOutcome ResourceExplorer2Client::CreateIndex(const CreateIndexRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateIndex");
  return CreateIndexOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIndexOutcomeCallable ResourceExplorer2Client::CreateIndexCallable(const CreateIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIndex(request), context);
    } );
}

CreateViewOutcome ResourceExplorer2Client::CreateView(const CreateViewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateView");
  return CreateViewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateViewOutcomeCallable ResourceExplorer2Client::CreateViewCallable(const CreateViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::CreateViewAsync(const CreateViewRequest& request, const CreateViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateView(request), context);
    } );
}

DeleteIndexOutcome ResourceExplorer2Client::DeleteIndex(const DeleteIndexRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteIndex");
  return DeleteIndexOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIndexOutcomeCallable ResourceExplorer2Client::DeleteIndexCallable(const DeleteIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIndex(request), context);
    } );
}

DeleteViewOutcome ResourceExplorer2Client::DeleteView(const DeleteViewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteView");
  return DeleteViewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteViewOutcomeCallable ResourceExplorer2Client::DeleteViewCallable(const DeleteViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::DeleteViewAsync(const DeleteViewRequest& request, const DeleteViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteView(request), context);
    } );
}

DisassociateDefaultViewOutcome ResourceExplorer2Client::DisassociateDefaultView() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateDefaultView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateDefaultView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DisassociateDefaultView");
  return DisassociateDefaultViewOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DisassociateDefaultView"));
}

DisassociateDefaultViewOutcomeCallable ResourceExplorer2Client::DisassociateDefaultViewCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDefaultViewOutcome() > >(ALLOCATION_TAG, [this](){ return this->DisassociateDefaultView(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::DisassociateDefaultViewAsync(const DisassociateDefaultViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, DisassociateDefaultView(), context);
    } );
}

GetDefaultViewOutcome ResourceExplorer2Client::GetDefaultView() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDefaultView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDefaultView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDefaultView");
  return GetDefaultViewOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "GetDefaultView"));
}

GetDefaultViewOutcomeCallable ResourceExplorer2Client::GetDefaultViewCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDefaultViewOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetDefaultView(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::GetDefaultViewAsync(const GetDefaultViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetDefaultView(), context);
    } );
}

GetIndexOutcome ResourceExplorer2Client::GetIndex() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetIndex");
  return GetIndexOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "GetIndex"));
}

GetIndexOutcomeCallable ResourceExplorer2Client::GetIndexCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIndexOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetIndex(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::GetIndexAsync(const GetIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetIndex(), context);
    } );
}

GetViewOutcome ResourceExplorer2Client::GetView(const GetViewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetView");
  return GetViewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetViewOutcomeCallable ResourceExplorer2Client::GetViewCallable(const GetViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::GetViewAsync(const GetViewRequest& request, const GetViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetView(request), context);
    } );
}

ListIndexesOutcome ResourceExplorer2Client::ListIndexes(const ListIndexesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIndexes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIndexes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListIndexes");
  return ListIndexesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIndexesOutcomeCallable ResourceExplorer2Client::ListIndexesCallable(const ListIndexesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIndexesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIndexes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::ListIndexesAsync(const ListIndexesRequest& request, const ListIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIndexes(request), context);
    } );
}

ListSupportedResourceTypesOutcome ResourceExplorer2Client::ListSupportedResourceTypes(const ListSupportedResourceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSupportedResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSupportedResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListSupportedResourceTypes");
  return ListSupportedResourceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSupportedResourceTypesOutcomeCallable ResourceExplorer2Client::ListSupportedResourceTypesCallable(const ListSupportedResourceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSupportedResourceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSupportedResourceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::ListSupportedResourceTypesAsync(const ListSupportedResourceTypesRequest& request, const ListSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSupportedResourceTypes(request), context);
    } );
}

ListTagsForResourceOutcome ResourceExplorer2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ResourceExplorer2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListViewsOutcome ResourceExplorer2Client::ListViews(const ListViewsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListViews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListViews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListViews");
  return ListViewsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListViewsOutcomeCallable ResourceExplorer2Client::ListViewsCallable(const ListViewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListViewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListViews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::ListViewsAsync(const ListViewsRequest& request, const ListViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListViews(request), context);
    } );
}

SearchOutcome ResourceExplorer2Client::Search(const SearchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/Search");
  return SearchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchOutcomeCallable ResourceExplorer2Client::SearchCallable(const SearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Search(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::SearchAsync(const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Search(request), context);
    } );
}

TagResourceOutcome ResourceExplorer2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ResourceExplorer2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ResourceExplorer2Client::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResourceExplorer2Errors>(ResourceExplorer2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ResourceExplorer2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateIndexTypeOutcome ResourceExplorer2Client::UpdateIndexType(const UpdateIndexTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIndexType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIndexType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateIndexType");
  return UpdateIndexTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIndexTypeOutcomeCallable ResourceExplorer2Client::UpdateIndexTypeCallable(const UpdateIndexTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIndexTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIndexType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::UpdateIndexTypeAsync(const UpdateIndexTypeRequest& request, const UpdateIndexTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIndexType(request), context);
    } );
}

UpdateViewOutcome ResourceExplorer2Client::UpdateView(const UpdateViewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateView");
  return UpdateViewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateViewOutcomeCallable ResourceExplorer2Client::UpdateViewCallable(const UpdateViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceExplorer2Client::UpdateViewAsync(const UpdateViewRequest& request, const UpdateViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateView(request), context);
    } );
}

