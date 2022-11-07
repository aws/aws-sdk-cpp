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

#include <aws/cloudtrail/CloudTrailClient.h>
#include <aws/cloudtrail/CloudTrailErrorMarshaller.h>
#include <aws/cloudtrail/CloudTrailEndpointProvider.h>
#include <aws/cloudtrail/model/AddTagsRequest.h>
#include <aws/cloudtrail/model/CancelQueryRequest.h>
#include <aws/cloudtrail/model/CreateEventDataStoreRequest.h>
#include <aws/cloudtrail/model/CreateTrailRequest.h>
#include <aws/cloudtrail/model/DeleteEventDataStoreRequest.h>
#include <aws/cloudtrail/model/DeleteTrailRequest.h>
#include <aws/cloudtrail/model/DeregisterOrganizationDelegatedAdminRequest.h>
#include <aws/cloudtrail/model/DescribeQueryRequest.h>
#include <aws/cloudtrail/model/DescribeTrailsRequest.h>
#include <aws/cloudtrail/model/GetChannelRequest.h>
#include <aws/cloudtrail/model/GetEventDataStoreRequest.h>
#include <aws/cloudtrail/model/GetEventSelectorsRequest.h>
#include <aws/cloudtrail/model/GetImportRequest.h>
#include <aws/cloudtrail/model/GetInsightSelectorsRequest.h>
#include <aws/cloudtrail/model/GetQueryResultsRequest.h>
#include <aws/cloudtrail/model/GetTrailRequest.h>
#include <aws/cloudtrail/model/GetTrailStatusRequest.h>
#include <aws/cloudtrail/model/ListChannelsRequest.h>
#include <aws/cloudtrail/model/ListEventDataStoresRequest.h>
#include <aws/cloudtrail/model/ListImportFailuresRequest.h>
#include <aws/cloudtrail/model/ListImportsRequest.h>
#include <aws/cloudtrail/model/ListPublicKeysRequest.h>
#include <aws/cloudtrail/model/ListQueriesRequest.h>
#include <aws/cloudtrail/model/ListTagsRequest.h>
#include <aws/cloudtrail/model/ListTrailsRequest.h>
#include <aws/cloudtrail/model/LookupEventsRequest.h>
#include <aws/cloudtrail/model/PutEventSelectorsRequest.h>
#include <aws/cloudtrail/model/PutInsightSelectorsRequest.h>
#include <aws/cloudtrail/model/RegisterOrganizationDelegatedAdminRequest.h>
#include <aws/cloudtrail/model/RemoveTagsRequest.h>
#include <aws/cloudtrail/model/RestoreEventDataStoreRequest.h>
#include <aws/cloudtrail/model/StartImportRequest.h>
#include <aws/cloudtrail/model/StartLoggingRequest.h>
#include <aws/cloudtrail/model/StartQueryRequest.h>
#include <aws/cloudtrail/model/StopImportRequest.h>
#include <aws/cloudtrail/model/StopLoggingRequest.h>
#include <aws/cloudtrail/model/UpdateEventDataStoreRequest.h>
#include <aws/cloudtrail/model/UpdateTrailRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudTrail;
using namespace Aws::CloudTrail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CloudTrailClient::SERVICE_NAME = "cloudtrail";
const char* CloudTrailClient::ALLOCATION_TAG = "CloudTrailClient";

CloudTrailClient::CloudTrailClient(const CloudTrail::CloudTrailClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const AWSCredentials& credentials,
                                   std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider,
                                   const CloudTrail::CloudTrailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider,
                                   const CloudTrail::CloudTrailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudTrailClient::CloudTrailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudTrailClient::~CloudTrailClient()
{
}

std::shared_ptr<CloudTrailEndpointProviderBase>& CloudTrailClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudTrailClient::init(const CloudTrail::CloudTrailClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudTrail");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CloudTrailClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddTagsOutcome CloudTrailClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable CloudTrailClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}

CancelQueryOutcome CloudTrailClient::CancelQuery(const CancelQueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelQueryOutcomeCallable CloudTrailClient::CancelQueryCallable(const CancelQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::CancelQueryAsync(const CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelQuery(request), context);
    } );
}

CreateEventDataStoreOutcome CloudTrailClient::CreateEventDataStore(const CreateEventDataStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEventDataStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventDataStoreOutcomeCallable CloudTrailClient::CreateEventDataStoreCallable(const CreateEventDataStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventDataStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventDataStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::CreateEventDataStoreAsync(const CreateEventDataStoreRequest& request, const CreateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEventDataStore(request), context);
    } );
}

CreateTrailOutcome CloudTrailClient::CreateTrail(const CreateTrailRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrailOutcomeCallable CloudTrailClient::CreateTrailCallable(const CreateTrailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::CreateTrailAsync(const CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTrail(request), context);
    } );
}

DeleteEventDataStoreOutcome CloudTrailClient::DeleteEventDataStore(const DeleteEventDataStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventDataStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventDataStoreOutcomeCallable CloudTrailClient::DeleteEventDataStoreCallable(const DeleteEventDataStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventDataStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventDataStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::DeleteEventDataStoreAsync(const DeleteEventDataStoreRequest& request, const DeleteEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventDataStore(request), context);
    } );
}

DeleteTrailOutcome CloudTrailClient::DeleteTrail(const DeleteTrailRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrailOutcomeCallable CloudTrailClient::DeleteTrailCallable(const DeleteTrailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::DeleteTrailAsync(const DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTrail(request), context);
    } );
}

DeregisterOrganizationDelegatedAdminOutcome CloudTrailClient::DeregisterOrganizationDelegatedAdmin(const DeregisterOrganizationDelegatedAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterOrganizationDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterOrganizationDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterOrganizationDelegatedAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterOrganizationDelegatedAdminOutcomeCallable CloudTrailClient::DeregisterOrganizationDelegatedAdminCallable(const DeregisterOrganizationDelegatedAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterOrganizationDelegatedAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterOrganizationDelegatedAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::DeregisterOrganizationDelegatedAdminAsync(const DeregisterOrganizationDelegatedAdminRequest& request, const DeregisterOrganizationDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterOrganizationDelegatedAdmin(request), context);
    } );
}

DescribeQueryOutcome CloudTrailClient::DescribeQuery(const DescribeQueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeQueryOutcomeCallable CloudTrailClient::DescribeQueryCallable(const DescribeQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::DescribeQueryAsync(const DescribeQueryRequest& request, const DescribeQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeQuery(request), context);
    } );
}

DescribeTrailsOutcome CloudTrailClient::DescribeTrails(const DescribeTrailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrailsOutcomeCallable CloudTrailClient::DescribeTrailsCallable(const DescribeTrailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::DescribeTrailsAsync(const DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrails(request), context);
    } );
}

GetChannelOutcome CloudTrailClient::GetChannel(const GetChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChannelOutcomeCallable CloudTrailClient::GetChannelCallable(const GetChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetChannelAsync(const GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetChannel(request), context);
    } );
}

GetEventDataStoreOutcome CloudTrailClient::GetEventDataStore(const GetEventDataStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEventDataStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventDataStoreOutcomeCallable CloudTrailClient::GetEventDataStoreCallable(const GetEventDataStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventDataStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventDataStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetEventDataStoreAsync(const GetEventDataStoreRequest& request, const GetEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventDataStore(request), context);
    } );
}

GetEventSelectorsOutcome CloudTrailClient::GetEventSelectors(const GetEventSelectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEventSelectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventSelectorsOutcomeCallable CloudTrailClient::GetEventSelectorsCallable(const GetEventSelectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventSelectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventSelectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetEventSelectorsAsync(const GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventSelectors(request), context);
    } );
}

GetImportOutcome CloudTrailClient::GetImport(const GetImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetImportOutcomeCallable CloudTrailClient::GetImportCallable(const GetImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetImportAsync(const GetImportRequest& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImport(request), context);
    } );
}

GetInsightSelectorsOutcome CloudTrailClient::GetInsightSelectors(const GetInsightSelectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsightSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInsightSelectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightSelectorsOutcomeCallable CloudTrailClient::GetInsightSelectorsCallable(const GetInsightSelectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightSelectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightSelectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetInsightSelectorsAsync(const GetInsightSelectorsRequest& request, const GetInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsightSelectors(request), context);
    } );
}

GetQueryResultsOutcome CloudTrailClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetQueryResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryResultsOutcomeCallable CloudTrailClient::GetQueryResultsCallable(const GetQueryResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetQueryResultsAsync(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetQueryResults(request), context);
    } );
}

GetTrailOutcome CloudTrailClient::GetTrail(const GetTrailRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTrailOutcomeCallable CloudTrailClient::GetTrailCallable(const GetTrailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetTrailAsync(const GetTrailRequest& request, const GetTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTrail(request), context);
    } );
}

GetTrailStatusOutcome CloudTrailClient::GetTrailStatus(const GetTrailStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrailStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrailStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTrailStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTrailStatusOutcomeCallable CloudTrailClient::GetTrailStatusCallable(const GetTrailStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrailStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrailStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetTrailStatusAsync(const GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTrailStatus(request), context);
    } );
}

ListChannelsOutcome CloudTrailClient::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable CloudTrailClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannels(request), context);
    } );
}

ListEventDataStoresOutcome CloudTrailClient::ListEventDataStores(const ListEventDataStoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventDataStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventDataStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEventDataStoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventDataStoresOutcomeCallable CloudTrailClient::ListEventDataStoresCallable(const ListEventDataStoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventDataStoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventDataStores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListEventDataStoresAsync(const ListEventDataStoresRequest& request, const ListEventDataStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventDataStores(request), context);
    } );
}

ListImportFailuresOutcome CloudTrailClient::ListImportFailures(const ListImportFailuresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImportFailures, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImportFailures, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImportFailuresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImportFailuresOutcomeCallable CloudTrailClient::ListImportFailuresCallable(const ListImportFailuresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportFailuresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImportFailures(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListImportFailuresAsync(const ListImportFailuresRequest& request, const ListImportFailuresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImportFailures(request), context);
    } );
}

ListImportsOutcome CloudTrailClient::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImportsOutcomeCallable CloudTrailClient::ListImportsCallable(const ListImportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListImportsAsync(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImports(request), context);
    } );
}

ListPublicKeysOutcome CloudTrailClient::ListPublicKeys(const ListPublicKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPublicKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPublicKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPublicKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPublicKeysOutcomeCallable CloudTrailClient::ListPublicKeysCallable(const ListPublicKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublicKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublicKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListPublicKeysAsync(const ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPublicKeys(request), context);
    } );
}

ListQueriesOutcome CloudTrailClient::ListQueries(const ListQueriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListQueriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListQueriesOutcomeCallable CloudTrailClient::ListQueriesCallable(const ListQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListQueriesAsync(const ListQueriesRequest& request, const ListQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListQueries(request), context);
    } );
}

ListTagsOutcome CloudTrailClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable CloudTrailClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTags(request), context);
    } );
}

ListTrailsOutcome CloudTrailClient::ListTrails(const ListTrailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTrailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrailsOutcomeCallable CloudTrailClient::ListTrailsCallable(const ListTrailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListTrailsAsync(const ListTrailsRequest& request, const ListTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrails(request), context);
    } );
}

LookupEventsOutcome CloudTrailClient::LookupEvents(const LookupEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, LookupEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, LookupEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return LookupEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LookupEventsOutcomeCallable CloudTrailClient::LookupEventsCallable(const LookupEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LookupEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LookupEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::LookupEventsAsync(const LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, LookupEvents(request), context);
    } );
}

PutEventSelectorsOutcome CloudTrailClient::PutEventSelectors(const PutEventSelectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEventSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEventSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutEventSelectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventSelectorsOutcomeCallable CloudTrailClient::PutEventSelectorsCallable(const PutEventSelectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventSelectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventSelectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::PutEventSelectorsAsync(const PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEventSelectors(request), context);
    } );
}

PutInsightSelectorsOutcome CloudTrailClient::PutInsightSelectors(const PutInsightSelectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInsightSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInsightSelectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInsightSelectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInsightSelectorsOutcomeCallable CloudTrailClient::PutInsightSelectorsCallable(const PutInsightSelectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInsightSelectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInsightSelectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::PutInsightSelectorsAsync(const PutInsightSelectorsRequest& request, const PutInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutInsightSelectors(request), context);
    } );
}

RegisterOrganizationDelegatedAdminOutcome CloudTrailClient::RegisterOrganizationDelegatedAdmin(const RegisterOrganizationDelegatedAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterOrganizationDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterOrganizationDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterOrganizationDelegatedAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterOrganizationDelegatedAdminOutcomeCallable CloudTrailClient::RegisterOrganizationDelegatedAdminCallable(const RegisterOrganizationDelegatedAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterOrganizationDelegatedAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterOrganizationDelegatedAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::RegisterOrganizationDelegatedAdminAsync(const RegisterOrganizationDelegatedAdminRequest& request, const RegisterOrganizationDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterOrganizationDelegatedAdmin(request), context);
    } );
}

RemoveTagsOutcome CloudTrailClient::RemoveTags(const RemoveTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable CloudTrailClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTags(request), context);
    } );
}

RestoreEventDataStoreOutcome CloudTrailClient::RestoreEventDataStore(const RestoreEventDataStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreEventDataStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreEventDataStoreOutcomeCallable CloudTrailClient::RestoreEventDataStoreCallable(const RestoreEventDataStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreEventDataStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreEventDataStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::RestoreEventDataStoreAsync(const RestoreEventDataStoreRequest& request, const RestoreEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreEventDataStore(request), context);
    } );
}

StartImportOutcome CloudTrailClient::StartImport(const StartImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImportOutcomeCallable CloudTrailClient::StartImportCallable(const StartImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::StartImportAsync(const StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartImport(request), context);
    } );
}

StartLoggingOutcome CloudTrailClient::StartLogging(const StartLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartLoggingOutcomeCallable CloudTrailClient::StartLoggingCallable(const StartLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::StartLoggingAsync(const StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartLogging(request), context);
    } );
}

StartQueryOutcome CloudTrailClient::StartQuery(const StartQueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartQueryOutcomeCallable CloudTrailClient::StartQueryCallable(const StartQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::StartQueryAsync(const StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartQuery(request), context);
    } );
}

StopImportOutcome CloudTrailClient::StopImport(const StopImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopImportOutcomeCallable CloudTrailClient::StopImportCallable(const StopImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::StopImportAsync(const StopImportRequest& request, const StopImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopImport(request), context);
    } );
}

StopLoggingOutcome CloudTrailClient::StopLogging(const StopLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopLoggingOutcomeCallable CloudTrailClient::StopLoggingCallable(const StopLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::StopLoggingAsync(const StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopLogging(request), context);
    } );
}

UpdateEventDataStoreOutcome CloudTrailClient::UpdateEventDataStore(const UpdateEventDataStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEventDataStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEventDataStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventDataStoreOutcomeCallable CloudTrailClient::UpdateEventDataStoreCallable(const UpdateEventDataStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventDataStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventDataStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::UpdateEventDataStoreAsync(const UpdateEventDataStoreRequest& request, const UpdateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEventDataStore(request), context);
    } );
}

UpdateTrailOutcome CloudTrailClient::UpdateTrail(const UpdateTrailRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrailOutcomeCallable CloudTrailClient::UpdateTrailCallable(const UpdateTrailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::UpdateTrailAsync(const UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTrail(request), context);
    } );
}

