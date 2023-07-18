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

#include <aws/cloudtrail/CloudTrailClient.h>
#include <aws/cloudtrail/CloudTrailEndpoint.h>
#include <aws/cloudtrail/CloudTrailErrorMarshaller.h>
#include <aws/cloudtrail/model/AddTagsRequest.h>
#include <aws/cloudtrail/model/CancelQueryRequest.h>
#include <aws/cloudtrail/model/CreateEventDataStoreRequest.h>
#include <aws/cloudtrail/model/CreateTrailRequest.h>
#include <aws/cloudtrail/model/DeleteEventDataStoreRequest.h>
#include <aws/cloudtrail/model/DeleteTrailRequest.h>
#include <aws/cloudtrail/model/DescribeQueryRequest.h>
#include <aws/cloudtrail/model/DescribeTrailsRequest.h>
#include <aws/cloudtrail/model/GetEventDataStoreRequest.h>
#include <aws/cloudtrail/model/GetEventSelectorsRequest.h>
#include <aws/cloudtrail/model/GetInsightSelectorsRequest.h>
#include <aws/cloudtrail/model/GetQueryResultsRequest.h>
#include <aws/cloudtrail/model/GetTrailRequest.h>
#include <aws/cloudtrail/model/GetTrailStatusRequest.h>
#include <aws/cloudtrail/model/ListEventDataStoresRequest.h>
#include <aws/cloudtrail/model/ListPublicKeysRequest.h>
#include <aws/cloudtrail/model/ListQueriesRequest.h>
#include <aws/cloudtrail/model/ListTagsRequest.h>
#include <aws/cloudtrail/model/ListTrailsRequest.h>
#include <aws/cloudtrail/model/LookupEventsRequest.h>
#include <aws/cloudtrail/model/PutEventSelectorsRequest.h>
#include <aws/cloudtrail/model/PutInsightSelectorsRequest.h>
#include <aws/cloudtrail/model/RemoveTagsRequest.h>
#include <aws/cloudtrail/model/RestoreEventDataStoreRequest.h>
#include <aws/cloudtrail/model/StartLoggingRequest.h>
#include <aws/cloudtrail/model/StartQueryRequest.h>
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

static const char* SERVICE_NAME = "cloudtrail";
static const char* ALLOCATION_TAG = "CloudTrailClient";


CloudTrailClient::CloudTrailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::~CloudTrailClient()
{
}

void CloudTrailClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("CloudTrail");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudTrailEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudTrailClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsOutcome CloudTrailClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CancelQueryOutcome CloudTrailClient::CancelQuery(const CancelQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelQueryAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::CancelQueryAsyncHelper(const CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelQuery(request), context);
}

CreateEventDataStoreOutcome CloudTrailClient::CreateEventDataStore(const CreateEventDataStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventDataStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventDataStoreAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::CreateEventDataStoreAsyncHelper(const CreateEventDataStoreRequest& request, const CreateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventDataStore(request), context);
}

CreateTrailOutcome CloudTrailClient::CreateTrail(const CreateTrailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTrailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrailAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::CreateTrailAsyncHelper(const CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrail(request), context);
}

DeleteEventDataStoreOutcome CloudTrailClient::DeleteEventDataStore(const DeleteEventDataStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventDataStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventDataStoreAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::DeleteEventDataStoreAsyncHelper(const DeleteEventDataStoreRequest& request, const DeleteEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventDataStore(request), context);
}

DeleteTrailOutcome CloudTrailClient::DeleteTrail(const DeleteTrailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTrailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrailAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::DeleteTrailAsyncHelper(const DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrail(request), context);
}

DescribeQueryOutcome CloudTrailClient::DescribeQuery(const DescribeQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeQueryAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::DescribeQueryAsyncHelper(const DescribeQueryRequest& request, const DescribeQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeQuery(request), context);
}

DescribeTrailsOutcome CloudTrailClient::DescribeTrails(const DescribeTrailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrailsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::DescribeTrailsAsyncHelper(const DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrails(request), context);
}

GetEventDataStoreOutcome CloudTrailClient::GetEventDataStore(const GetEventDataStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEventDataStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEventDataStoreAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetEventDataStoreAsyncHelper(const GetEventDataStoreRequest& request, const GetEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventDataStore(request), context);
}

GetEventSelectorsOutcome CloudTrailClient::GetEventSelectors(const GetEventSelectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEventSelectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEventSelectorsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetEventSelectorsAsyncHelper(const GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventSelectors(request), context);
}

GetInsightSelectorsOutcome CloudTrailClient::GetInsightSelectors(const GetInsightSelectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInsightSelectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInsightSelectorsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetInsightSelectorsAsyncHelper(const GetInsightSelectorsRequest& request, const GetInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInsightSelectors(request), context);
}

GetQueryResultsOutcome CloudTrailClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQueryResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryResultsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetQueryResultsAsyncHelper(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryResults(request), context);
}

GetTrailOutcome CloudTrailClient::GetTrail(const GetTrailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTrailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetTrailAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetTrailAsyncHelper(const GetTrailRequest& request, const GetTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrail(request), context);
}

GetTrailStatusOutcome CloudTrailClient::GetTrailStatus(const GetTrailStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTrailStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetTrailStatusAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetTrailStatusAsyncHelper(const GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrailStatus(request), context);
}

ListEventDataStoresOutcome CloudTrailClient::ListEventDataStores(const ListEventDataStoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventDataStoresOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListEventDataStoresAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::ListEventDataStoresAsyncHelper(const ListEventDataStoresRequest& request, const ListEventDataStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventDataStores(request), context);
}

ListPublicKeysOutcome CloudTrailClient::ListPublicKeys(const ListPublicKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPublicKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListPublicKeysAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::ListPublicKeysAsyncHelper(const ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys(request), context);
}

ListQueriesOutcome CloudTrailClient::ListQueries(const ListQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListQueriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListQueriesAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::ListQueriesAsyncHelper(const ListQueriesRequest& request, const ListQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueries(request), context);
}

ListTagsOutcome CloudTrailClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

ListTrailsOutcome CloudTrailClient::ListTrails(const ListTrailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTrailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTrailsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::ListTrailsAsyncHelper(const ListTrailsRequest& request, const ListTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrails(request), context);
}

LookupEventsOutcome CloudTrailClient::LookupEvents(const LookupEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return LookupEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->LookupEventsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::LookupEventsAsyncHelper(const LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LookupEvents(request), context);
}

PutEventSelectorsOutcome CloudTrailClient::PutEventSelectors(const PutEventSelectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutEventSelectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutEventSelectorsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::PutEventSelectorsAsyncHelper(const PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEventSelectors(request), context);
}

PutInsightSelectorsOutcome CloudTrailClient::PutInsightSelectors(const PutInsightSelectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutInsightSelectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutInsightSelectorsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::PutInsightSelectorsAsyncHelper(const PutInsightSelectorsRequest& request, const PutInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutInsightSelectors(request), context);
}

RemoveTagsOutcome CloudTrailClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

RestoreEventDataStoreOutcome CloudTrailClient::RestoreEventDataStore(const RestoreEventDataStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreEventDataStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RestoreEventDataStoreAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::RestoreEventDataStoreAsyncHelper(const RestoreEventDataStoreRequest& request, const RestoreEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreEventDataStore(request), context);
}

StartLoggingOutcome CloudTrailClient::StartLogging(const StartLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->StartLoggingAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::StartLoggingAsyncHelper(const StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartLogging(request), context);
}

StartQueryOutcome CloudTrailClient::StartQuery(const StartQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->StartQueryAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::StartQueryAsyncHelper(const StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartQuery(request), context);
}

StopLoggingOutcome CloudTrailClient::StopLogging(const StopLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopLoggingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->StopLoggingAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::StopLoggingAsyncHelper(const StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopLogging(request), context);
}

UpdateEventDataStoreOutcome CloudTrailClient::UpdateEventDataStore(const UpdateEventDataStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEventDataStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEventDataStoreAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::UpdateEventDataStoreAsyncHelper(const UpdateEventDataStoreRequest& request, const UpdateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEventDataStore(request), context);
}

UpdateTrailOutcome CloudTrailClient::UpdateTrail(const UpdateTrailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTrailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrailAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::UpdateTrailAsyncHelper(const UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrail(request), context);
}

