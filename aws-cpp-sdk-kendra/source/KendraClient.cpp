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

#include <aws/kendra/KendraClient.h>
#include <aws/kendra/KendraEndpoint.h>
#include <aws/kendra/KendraErrorMarshaller.h>
#include <aws/kendra/model/AssociateEntitiesToExperienceRequest.h>
#include <aws/kendra/model/AssociatePersonasToEntitiesRequest.h>
#include <aws/kendra/model/BatchDeleteDocumentRequest.h>
#include <aws/kendra/model/BatchGetDocumentStatusRequest.h>
#include <aws/kendra/model/BatchPutDocumentRequest.h>
#include <aws/kendra/model/ClearQuerySuggestionsRequest.h>
#include <aws/kendra/model/CreateDataSourceRequest.h>
#include <aws/kendra/model/CreateExperienceRequest.h>
#include <aws/kendra/model/CreateFaqRequest.h>
#include <aws/kendra/model/CreateIndexRequest.h>
#include <aws/kendra/model/CreateQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/CreateThesaurusRequest.h>
#include <aws/kendra/model/DeleteDataSourceRequest.h>
#include <aws/kendra/model/DeleteExperienceRequest.h>
#include <aws/kendra/model/DeleteFaqRequest.h>
#include <aws/kendra/model/DeleteIndexRequest.h>
#include <aws/kendra/model/DeletePrincipalMappingRequest.h>
#include <aws/kendra/model/DeleteQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/DeleteThesaurusRequest.h>
#include <aws/kendra/model/DescribeDataSourceRequest.h>
#include <aws/kendra/model/DescribeExperienceRequest.h>
#include <aws/kendra/model/DescribeFaqRequest.h>
#include <aws/kendra/model/DescribeIndexRequest.h>
#include <aws/kendra/model/DescribePrincipalMappingRequest.h>
#include <aws/kendra/model/DescribeQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/DescribeQuerySuggestionsConfigRequest.h>
#include <aws/kendra/model/DescribeThesaurusRequest.h>
#include <aws/kendra/model/DisassociateEntitiesFromExperienceRequest.h>
#include <aws/kendra/model/DisassociatePersonasFromEntitiesRequest.h>
#include <aws/kendra/model/GetQuerySuggestionsRequest.h>
#include <aws/kendra/model/GetSnapshotsRequest.h>
#include <aws/kendra/model/ListDataSourceSyncJobsRequest.h>
#include <aws/kendra/model/ListDataSourcesRequest.h>
#include <aws/kendra/model/ListEntityPersonasRequest.h>
#include <aws/kendra/model/ListExperienceEntitiesRequest.h>
#include <aws/kendra/model/ListExperiencesRequest.h>
#include <aws/kendra/model/ListFaqsRequest.h>
#include <aws/kendra/model/ListGroupsOlderThanOrderingIdRequest.h>
#include <aws/kendra/model/ListIndicesRequest.h>
#include <aws/kendra/model/ListQuerySuggestionsBlockListsRequest.h>
#include <aws/kendra/model/ListTagsForResourceRequest.h>
#include <aws/kendra/model/ListThesauriRequest.h>
#include <aws/kendra/model/PutPrincipalMappingRequest.h>
#include <aws/kendra/model/QueryRequest.h>
#include <aws/kendra/model/StartDataSourceSyncJobRequest.h>
#include <aws/kendra/model/StopDataSourceSyncJobRequest.h>
#include <aws/kendra/model/SubmitFeedbackRequest.h>
#include <aws/kendra/model/TagResourceRequest.h>
#include <aws/kendra/model/UntagResourceRequest.h>
#include <aws/kendra/model/UpdateDataSourceRequest.h>
#include <aws/kendra/model/UpdateExperienceRequest.h>
#include <aws/kendra/model/UpdateIndexRequest.h>
#include <aws/kendra/model/UpdateQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/UpdateQuerySuggestionsConfigRequest.h>
#include <aws/kendra/model/UpdateThesaurusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::kendra;
using namespace Aws::kendra::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kendra";
static const char* ALLOCATION_TAG = "KendraClient";


KendraClient::KendraClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KendraClient::KendraClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KendraClient::KendraClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KendraClient::~KendraClient()
{
}

void KendraClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("kendra");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KendraEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KendraClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateEntitiesToExperienceOutcome KendraClient::AssociateEntitiesToExperience(const AssociateEntitiesToExperienceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateEntitiesToExperienceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateEntitiesToExperienceOutcomeCallable KendraClient::AssociateEntitiesToExperienceCallable(const AssociateEntitiesToExperienceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateEntitiesToExperienceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateEntitiesToExperience(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::AssociateEntitiesToExperienceAsync(const AssociateEntitiesToExperienceRequest& request, const AssociateEntitiesToExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateEntitiesToExperienceAsyncHelper( request, handler, context ); } );
}

void KendraClient::AssociateEntitiesToExperienceAsyncHelper(const AssociateEntitiesToExperienceRequest& request, const AssociateEntitiesToExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateEntitiesToExperience(request), context);
}

AssociatePersonasToEntitiesOutcome KendraClient::AssociatePersonasToEntities(const AssociatePersonasToEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociatePersonasToEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociatePersonasToEntitiesOutcomeCallable KendraClient::AssociatePersonasToEntitiesCallable(const AssociatePersonasToEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePersonasToEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePersonasToEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::AssociatePersonasToEntitiesAsync(const AssociatePersonasToEntitiesRequest& request, const AssociatePersonasToEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePersonasToEntitiesAsyncHelper( request, handler, context ); } );
}

void KendraClient::AssociatePersonasToEntitiesAsyncHelper(const AssociatePersonasToEntitiesRequest& request, const AssociatePersonasToEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePersonasToEntities(request), context);
}

BatchDeleteDocumentOutcome KendraClient::BatchDeleteDocument(const BatchDeleteDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteDocumentOutcomeCallable KendraClient::BatchDeleteDocumentCallable(const BatchDeleteDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::BatchDeleteDocumentAsync(const BatchDeleteDocumentRequest& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteDocumentAsyncHelper( request, handler, context ); } );
}

void KendraClient::BatchDeleteDocumentAsyncHelper(const BatchDeleteDocumentRequest& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteDocument(request), context);
}

BatchGetDocumentStatusOutcome KendraClient::BatchGetDocumentStatus(const BatchGetDocumentStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetDocumentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDocumentStatusOutcomeCallable KendraClient::BatchGetDocumentStatusCallable(const BatchGetDocumentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDocumentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDocumentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::BatchGetDocumentStatusAsync(const BatchGetDocumentStatusRequest& request, const BatchGetDocumentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetDocumentStatusAsyncHelper( request, handler, context ); } );
}

void KendraClient::BatchGetDocumentStatusAsyncHelper(const BatchGetDocumentStatusRequest& request, const BatchGetDocumentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetDocumentStatus(request), context);
}

BatchPutDocumentOutcome KendraClient::BatchPutDocument(const BatchPutDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchPutDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchPutDocumentOutcomeCallable KendraClient::BatchPutDocumentCallable(const BatchPutDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::BatchPutDocumentAsync(const BatchPutDocumentRequest& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchPutDocumentAsyncHelper( request, handler, context ); } );
}

void KendraClient::BatchPutDocumentAsyncHelper(const BatchPutDocumentRequest& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchPutDocument(request), context);
}

ClearQuerySuggestionsOutcome KendraClient::ClearQuerySuggestions(const ClearQuerySuggestionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ClearQuerySuggestionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ClearQuerySuggestionsOutcomeCallable KendraClient::ClearQuerySuggestionsCallable(const ClearQuerySuggestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClearQuerySuggestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClearQuerySuggestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ClearQuerySuggestionsAsync(const ClearQuerySuggestionsRequest& request, const ClearQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ClearQuerySuggestionsAsyncHelper( request, handler, context ); } );
}

void KendraClient::ClearQuerySuggestionsAsyncHelper(const ClearQuerySuggestionsRequest& request, const ClearQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ClearQuerySuggestions(request), context);
}

CreateDataSourceOutcome KendraClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSourceOutcomeCallable KendraClient::CreateDataSourceCallable(const CreateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataSourceAsyncHelper( request, handler, context ); } );
}

void KendraClient::CreateDataSourceAsyncHelper(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSource(request), context);
}

CreateExperienceOutcome KendraClient::CreateExperience(const CreateExperienceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateExperienceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExperienceOutcomeCallable KendraClient::CreateExperienceCallable(const CreateExperienceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExperienceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExperience(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::CreateExperienceAsync(const CreateExperienceRequest& request, const CreateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateExperienceAsyncHelper( request, handler, context ); } );
}

void KendraClient::CreateExperienceAsyncHelper(const CreateExperienceRequest& request, const CreateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateExperience(request), context);
}

CreateFaqOutcome KendraClient::CreateFaq(const CreateFaqRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFaqOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFaqOutcomeCallable KendraClient::CreateFaqCallable(const CreateFaqRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFaqOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFaq(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::CreateFaqAsync(const CreateFaqRequest& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFaqAsyncHelper( request, handler, context ); } );
}

void KendraClient::CreateFaqAsyncHelper(const CreateFaqRequest& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFaq(request), context);
}

CreateIndexOutcome KendraClient::CreateIndex(const CreateIndexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIndexOutcomeCallable KendraClient::CreateIndexCallable(const CreateIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIndexAsyncHelper( request, handler, context ); } );
}

void KendraClient::CreateIndexAsyncHelper(const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIndex(request), context);
}

CreateQuerySuggestionsBlockListOutcome KendraClient::CreateQuerySuggestionsBlockList(const CreateQuerySuggestionsBlockListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateQuerySuggestionsBlockListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateQuerySuggestionsBlockListOutcomeCallable KendraClient::CreateQuerySuggestionsBlockListCallable(const CreateQuerySuggestionsBlockListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQuerySuggestionsBlockListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQuerySuggestionsBlockList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::CreateQuerySuggestionsBlockListAsync(const CreateQuerySuggestionsBlockListRequest& request, const CreateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateQuerySuggestionsBlockListAsyncHelper( request, handler, context ); } );
}

void KendraClient::CreateQuerySuggestionsBlockListAsyncHelper(const CreateQuerySuggestionsBlockListRequest& request, const CreateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateQuerySuggestionsBlockList(request), context);
}

CreateThesaurusOutcome KendraClient::CreateThesaurus(const CreateThesaurusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateThesaurusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThesaurusOutcomeCallable KendraClient::CreateThesaurusCallable(const CreateThesaurusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThesaurusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThesaurus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::CreateThesaurusAsync(const CreateThesaurusRequest& request, const CreateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateThesaurusAsyncHelper( request, handler, context ); } );
}

void KendraClient::CreateThesaurusAsyncHelper(const CreateThesaurusRequest& request, const CreateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateThesaurus(request), context);
}

DeleteDataSourceOutcome KendraClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSourceOutcomeCallable KendraClient::DeleteDataSourceCallable(const DeleteDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDataSourceAsyncHelper( request, handler, context ); } );
}

void KendraClient::DeleteDataSourceAsyncHelper(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataSource(request), context);
}

DeleteExperienceOutcome KendraClient::DeleteExperience(const DeleteExperienceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteExperienceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExperienceOutcomeCallable KendraClient::DeleteExperienceCallable(const DeleteExperienceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExperienceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExperience(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DeleteExperienceAsync(const DeleteExperienceRequest& request, const DeleteExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteExperienceAsyncHelper( request, handler, context ); } );
}

void KendraClient::DeleteExperienceAsyncHelper(const DeleteExperienceRequest& request, const DeleteExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteExperience(request), context);
}

DeleteFaqOutcome KendraClient::DeleteFaq(const DeleteFaqRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFaqOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFaqOutcomeCallable KendraClient::DeleteFaqCallable(const DeleteFaqRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFaqOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFaq(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DeleteFaqAsync(const DeleteFaqRequest& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFaqAsyncHelper( request, handler, context ); } );
}

void KendraClient::DeleteFaqAsyncHelper(const DeleteFaqRequest& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFaq(request), context);
}

DeleteIndexOutcome KendraClient::DeleteIndex(const DeleteIndexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIndexOutcomeCallable KendraClient::DeleteIndexCallable(const DeleteIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIndexAsyncHelper( request, handler, context ); } );
}

void KendraClient::DeleteIndexAsyncHelper(const DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIndex(request), context);
}

DeletePrincipalMappingOutcome KendraClient::DeletePrincipalMapping(const DeletePrincipalMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePrincipalMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePrincipalMappingOutcomeCallable KendraClient::DeletePrincipalMappingCallable(const DeletePrincipalMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePrincipalMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePrincipalMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DeletePrincipalMappingAsync(const DeletePrincipalMappingRequest& request, const DeletePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePrincipalMappingAsyncHelper( request, handler, context ); } );
}

void KendraClient::DeletePrincipalMappingAsyncHelper(const DeletePrincipalMappingRequest& request, const DeletePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePrincipalMapping(request), context);
}

DeleteQuerySuggestionsBlockListOutcome KendraClient::DeleteQuerySuggestionsBlockList(const DeleteQuerySuggestionsBlockListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteQuerySuggestionsBlockListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteQuerySuggestionsBlockListOutcomeCallable KendraClient::DeleteQuerySuggestionsBlockListCallable(const DeleteQuerySuggestionsBlockListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQuerySuggestionsBlockListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQuerySuggestionsBlockList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DeleteQuerySuggestionsBlockListAsync(const DeleteQuerySuggestionsBlockListRequest& request, const DeleteQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteQuerySuggestionsBlockListAsyncHelper( request, handler, context ); } );
}

void KendraClient::DeleteQuerySuggestionsBlockListAsyncHelper(const DeleteQuerySuggestionsBlockListRequest& request, const DeleteQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteQuerySuggestionsBlockList(request), context);
}

DeleteThesaurusOutcome KendraClient::DeleteThesaurus(const DeleteThesaurusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteThesaurusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteThesaurusOutcomeCallable KendraClient::DeleteThesaurusCallable(const DeleteThesaurusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThesaurusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThesaurus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DeleteThesaurusAsync(const DeleteThesaurusRequest& request, const DeleteThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteThesaurusAsyncHelper( request, handler, context ); } );
}

void KendraClient::DeleteThesaurusAsyncHelper(const DeleteThesaurusRequest& request, const DeleteThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteThesaurus(request), context);
}

DescribeDataSourceOutcome KendraClient::DescribeDataSource(const DescribeDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSourceOutcomeCallable KendraClient::DescribeDataSourceCallable(const DescribeDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribeDataSourceAsync(const DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDataSourceAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribeDataSourceAsyncHelper(const DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataSource(request), context);
}

DescribeExperienceOutcome KendraClient::DescribeExperience(const DescribeExperienceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExperienceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExperienceOutcomeCallable KendraClient::DescribeExperienceCallable(const DescribeExperienceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExperienceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExperience(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribeExperienceAsync(const DescribeExperienceRequest& request, const DescribeExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExperienceAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribeExperienceAsyncHelper(const DescribeExperienceRequest& request, const DescribeExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExperience(request), context);
}

DescribeFaqOutcome KendraClient::DescribeFaq(const DescribeFaqRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFaqOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFaqOutcomeCallable KendraClient::DescribeFaqCallable(const DescribeFaqRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFaqOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFaq(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribeFaqAsync(const DescribeFaqRequest& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFaqAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribeFaqAsyncHelper(const DescribeFaqRequest& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFaq(request), context);
}

DescribeIndexOutcome KendraClient::DescribeIndex(const DescribeIndexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIndexOutcomeCallable KendraClient::DescribeIndexCallable(const DescribeIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribeIndexAsync(const DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIndexAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribeIndexAsyncHelper(const DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIndex(request), context);
}

DescribePrincipalMappingOutcome KendraClient::DescribePrincipalMapping(const DescribePrincipalMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePrincipalMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePrincipalMappingOutcomeCallable KendraClient::DescribePrincipalMappingCallable(const DescribePrincipalMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePrincipalMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePrincipalMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribePrincipalMappingAsync(const DescribePrincipalMappingRequest& request, const DescribePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePrincipalMappingAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribePrincipalMappingAsyncHelper(const DescribePrincipalMappingRequest& request, const DescribePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePrincipalMapping(request), context);
}

DescribeQuerySuggestionsBlockListOutcome KendraClient::DescribeQuerySuggestionsBlockList(const DescribeQuerySuggestionsBlockListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeQuerySuggestionsBlockListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeQuerySuggestionsBlockListOutcomeCallable KendraClient::DescribeQuerySuggestionsBlockListCallable(const DescribeQuerySuggestionsBlockListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQuerySuggestionsBlockListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQuerySuggestionsBlockList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribeQuerySuggestionsBlockListAsync(const DescribeQuerySuggestionsBlockListRequest& request, const DescribeQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeQuerySuggestionsBlockListAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribeQuerySuggestionsBlockListAsyncHelper(const DescribeQuerySuggestionsBlockListRequest& request, const DescribeQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeQuerySuggestionsBlockList(request), context);
}

DescribeQuerySuggestionsConfigOutcome KendraClient::DescribeQuerySuggestionsConfig(const DescribeQuerySuggestionsConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeQuerySuggestionsConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeQuerySuggestionsConfigOutcomeCallable KendraClient::DescribeQuerySuggestionsConfigCallable(const DescribeQuerySuggestionsConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQuerySuggestionsConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQuerySuggestionsConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribeQuerySuggestionsConfigAsync(const DescribeQuerySuggestionsConfigRequest& request, const DescribeQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeQuerySuggestionsConfigAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribeQuerySuggestionsConfigAsyncHelper(const DescribeQuerySuggestionsConfigRequest& request, const DescribeQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeQuerySuggestionsConfig(request), context);
}

DescribeThesaurusOutcome KendraClient::DescribeThesaurus(const DescribeThesaurusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeThesaurusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeThesaurusOutcomeCallable KendraClient::DescribeThesaurusCallable(const DescribeThesaurusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThesaurusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThesaurus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DescribeThesaurusAsync(const DescribeThesaurusRequest& request, const DescribeThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeThesaurusAsyncHelper( request, handler, context ); } );
}

void KendraClient::DescribeThesaurusAsyncHelper(const DescribeThesaurusRequest& request, const DescribeThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeThesaurus(request), context);
}

DisassociateEntitiesFromExperienceOutcome KendraClient::DisassociateEntitiesFromExperience(const DisassociateEntitiesFromExperienceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateEntitiesFromExperienceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateEntitiesFromExperienceOutcomeCallable KendraClient::DisassociateEntitiesFromExperienceCallable(const DisassociateEntitiesFromExperienceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateEntitiesFromExperienceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateEntitiesFromExperience(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DisassociateEntitiesFromExperienceAsync(const DisassociateEntitiesFromExperienceRequest& request, const DisassociateEntitiesFromExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateEntitiesFromExperienceAsyncHelper( request, handler, context ); } );
}

void KendraClient::DisassociateEntitiesFromExperienceAsyncHelper(const DisassociateEntitiesFromExperienceRequest& request, const DisassociateEntitiesFromExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateEntitiesFromExperience(request), context);
}

DisassociatePersonasFromEntitiesOutcome KendraClient::DisassociatePersonasFromEntities(const DisassociatePersonasFromEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociatePersonasFromEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePersonasFromEntitiesOutcomeCallable KendraClient::DisassociatePersonasFromEntitiesCallable(const DisassociatePersonasFromEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePersonasFromEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePersonasFromEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::DisassociatePersonasFromEntitiesAsync(const DisassociatePersonasFromEntitiesRequest& request, const DisassociatePersonasFromEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociatePersonasFromEntitiesAsyncHelper( request, handler, context ); } );
}

void KendraClient::DisassociatePersonasFromEntitiesAsyncHelper(const DisassociatePersonasFromEntitiesRequest& request, const DisassociatePersonasFromEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociatePersonasFromEntities(request), context);
}

GetQuerySuggestionsOutcome KendraClient::GetQuerySuggestions(const GetQuerySuggestionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQuerySuggestionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQuerySuggestionsOutcomeCallable KendraClient::GetQuerySuggestionsCallable(const GetQuerySuggestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQuerySuggestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQuerySuggestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::GetQuerySuggestionsAsync(const GetQuerySuggestionsRequest& request, const GetQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQuerySuggestionsAsyncHelper( request, handler, context ); } );
}

void KendraClient::GetQuerySuggestionsAsyncHelper(const GetQuerySuggestionsRequest& request, const GetQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQuerySuggestions(request), context);
}

GetSnapshotsOutcome KendraClient::GetSnapshots(const GetSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSnapshotsOutcomeCallable KendraClient::GetSnapshotsCallable(const GetSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::GetSnapshotsAsync(const GetSnapshotsRequest& request, const GetSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSnapshotsAsyncHelper( request, handler, context ); } );
}

void KendraClient::GetSnapshotsAsyncHelper(const GetSnapshotsRequest& request, const GetSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSnapshots(request), context);
}

ListDataSourceSyncJobsOutcome KendraClient::ListDataSourceSyncJobs(const ListDataSourceSyncJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDataSourceSyncJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataSourceSyncJobsOutcomeCallable KendraClient::ListDataSourceSyncJobsCallable(const ListDataSourceSyncJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSourceSyncJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSourceSyncJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListDataSourceSyncJobsAsync(const ListDataSourceSyncJobsRequest& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataSourceSyncJobsAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListDataSourceSyncJobsAsyncHelper(const ListDataSourceSyncJobsRequest& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataSourceSyncJobs(request), context);
}

ListDataSourcesOutcome KendraClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDataSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataSourcesOutcomeCallable KendraClient::ListDataSourcesCallable(const ListDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataSourcesAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListDataSourcesAsyncHelper(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataSources(request), context);
}

ListEntityPersonasOutcome KendraClient::ListEntityPersonas(const ListEntityPersonasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntityPersonasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntityPersonasOutcomeCallable KendraClient::ListEntityPersonasCallable(const ListEntityPersonasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntityPersonasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntityPersonas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListEntityPersonasAsync(const ListEntityPersonasRequest& request, const ListEntityPersonasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEntityPersonasAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListEntityPersonasAsyncHelper(const ListEntityPersonasRequest& request, const ListEntityPersonasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntityPersonas(request), context);
}

ListExperienceEntitiesOutcome KendraClient::ListExperienceEntities(const ListExperienceEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExperienceEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExperienceEntitiesOutcomeCallable KendraClient::ListExperienceEntitiesCallable(const ListExperienceEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperienceEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperienceEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListExperienceEntitiesAsync(const ListExperienceEntitiesRequest& request, const ListExperienceEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExperienceEntitiesAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListExperienceEntitiesAsyncHelper(const ListExperienceEntitiesRequest& request, const ListExperienceEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExperienceEntities(request), context);
}

ListExperiencesOutcome KendraClient::ListExperiences(const ListExperiencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExperiencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExperiencesOutcomeCallable KendraClient::ListExperiencesCallable(const ListExperiencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperiencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperiences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListExperiencesAsync(const ListExperiencesRequest& request, const ListExperiencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExperiencesAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListExperiencesAsyncHelper(const ListExperiencesRequest& request, const ListExperiencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExperiences(request), context);
}

ListFaqsOutcome KendraClient::ListFaqs(const ListFaqsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFaqsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFaqsOutcomeCallable KendraClient::ListFaqsCallable(const ListFaqsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFaqsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFaqs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListFaqsAsync(const ListFaqsRequest& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFaqsAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListFaqsAsyncHelper(const ListFaqsRequest& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFaqs(request), context);
}

ListGroupsOlderThanOrderingIdOutcome KendraClient::ListGroupsOlderThanOrderingId(const ListGroupsOlderThanOrderingIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupsOlderThanOrderingIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOlderThanOrderingIdOutcomeCallable KendraClient::ListGroupsOlderThanOrderingIdCallable(const ListGroupsOlderThanOrderingIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOlderThanOrderingIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupsOlderThanOrderingId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListGroupsOlderThanOrderingIdAsync(const ListGroupsOlderThanOrderingIdRequest& request, const ListGroupsOlderThanOrderingIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupsOlderThanOrderingIdAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListGroupsOlderThanOrderingIdAsyncHelper(const ListGroupsOlderThanOrderingIdRequest& request, const ListGroupsOlderThanOrderingIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupsOlderThanOrderingId(request), context);
}

ListIndicesOutcome KendraClient::ListIndices(const ListIndicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIndicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIndicesOutcomeCallable KendraClient::ListIndicesCallable(const ListIndicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIndicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIndices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListIndicesAsync(const ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIndicesAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListIndicesAsyncHelper(const ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIndices(request), context);
}

ListQuerySuggestionsBlockListsOutcome KendraClient::ListQuerySuggestionsBlockLists(const ListQuerySuggestionsBlockListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListQuerySuggestionsBlockListsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListQuerySuggestionsBlockListsOutcomeCallable KendraClient::ListQuerySuggestionsBlockListsCallable(const ListQuerySuggestionsBlockListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQuerySuggestionsBlockListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQuerySuggestionsBlockLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListQuerySuggestionsBlockListsAsync(const ListQuerySuggestionsBlockListsRequest& request, const ListQuerySuggestionsBlockListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQuerySuggestionsBlockListsAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListQuerySuggestionsBlockListsAsyncHelper(const ListQuerySuggestionsBlockListsRequest& request, const ListQuerySuggestionsBlockListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQuerySuggestionsBlockLists(request), context);
}

ListTagsForResourceOutcome KendraClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable KendraClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListThesauriOutcome KendraClient::ListThesauri(const ListThesauriRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListThesauriOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListThesauriOutcomeCallable KendraClient::ListThesauriCallable(const ListThesauriRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThesauriOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThesauri(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::ListThesauriAsync(const ListThesauriRequest& request, const ListThesauriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThesauriAsyncHelper( request, handler, context ); } );
}

void KendraClient::ListThesauriAsyncHelper(const ListThesauriRequest& request, const ListThesauriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThesauri(request), context);
}

PutPrincipalMappingOutcome KendraClient::PutPrincipalMapping(const PutPrincipalMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPrincipalMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPrincipalMappingOutcomeCallable KendraClient::PutPrincipalMappingCallable(const PutPrincipalMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPrincipalMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPrincipalMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::PutPrincipalMappingAsync(const PutPrincipalMappingRequest& request, const PutPrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPrincipalMappingAsyncHelper( request, handler, context ); } );
}

void KendraClient::PutPrincipalMappingAsyncHelper(const PutPrincipalMappingRequest& request, const PutPrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPrincipalMapping(request), context);
}

QueryOutcome KendraClient::Query(const QueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return QueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryOutcomeCallable KendraClient::QueryCallable(const QueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Query(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::QueryAsync(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->QueryAsyncHelper( request, handler, context ); } );
}

void KendraClient::QueryAsyncHelper(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Query(request), context);
}

StartDataSourceSyncJobOutcome KendraClient::StartDataSourceSyncJob(const StartDataSourceSyncJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDataSourceSyncJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDataSourceSyncJobOutcomeCallable KendraClient::StartDataSourceSyncJobCallable(const StartDataSourceSyncJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDataSourceSyncJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDataSourceSyncJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::StartDataSourceSyncJobAsync(const StartDataSourceSyncJobRequest& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDataSourceSyncJobAsyncHelper( request, handler, context ); } );
}

void KendraClient::StartDataSourceSyncJobAsyncHelper(const StartDataSourceSyncJobRequest& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDataSourceSyncJob(request), context);
}

StopDataSourceSyncJobOutcome KendraClient::StopDataSourceSyncJob(const StopDataSourceSyncJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDataSourceSyncJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDataSourceSyncJobOutcomeCallable KendraClient::StopDataSourceSyncJobCallable(const StopDataSourceSyncJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDataSourceSyncJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDataSourceSyncJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::StopDataSourceSyncJobAsync(const StopDataSourceSyncJobRequest& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDataSourceSyncJobAsyncHelper( request, handler, context ); } );
}

void KendraClient::StopDataSourceSyncJobAsyncHelper(const StopDataSourceSyncJobRequest& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDataSourceSyncJob(request), context);
}

SubmitFeedbackOutcome KendraClient::SubmitFeedback(const SubmitFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SubmitFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitFeedbackOutcomeCallable KendraClient::SubmitFeedbackCallable(const SubmitFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::SubmitFeedbackAsync(const SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SubmitFeedbackAsyncHelper( request, handler, context ); } );
}

void KendraClient::SubmitFeedbackAsyncHelper(const SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubmitFeedback(request), context);
}

TagResourceOutcome KendraClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KendraClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void KendraClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome KendraClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KendraClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void KendraClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDataSourceOutcome KendraClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourceOutcomeCallable KendraClient::UpdateDataSourceCallable(const UpdateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDataSourceAsyncHelper( request, handler, context ); } );
}

void KendraClient::UpdateDataSourceAsyncHelper(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataSource(request), context);
}

UpdateExperienceOutcome KendraClient::UpdateExperience(const UpdateExperienceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateExperienceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateExperienceOutcomeCallable KendraClient::UpdateExperienceCallable(const UpdateExperienceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExperienceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExperience(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::UpdateExperienceAsync(const UpdateExperienceRequest& request, const UpdateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateExperienceAsyncHelper( request, handler, context ); } );
}

void KendraClient::UpdateExperienceAsyncHelper(const UpdateExperienceRequest& request, const UpdateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateExperience(request), context);
}

UpdateIndexOutcome KendraClient::UpdateIndex(const UpdateIndexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIndexOutcomeCallable KendraClient::UpdateIndexCallable(const UpdateIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::UpdateIndexAsync(const UpdateIndexRequest& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIndexAsyncHelper( request, handler, context ); } );
}

void KendraClient::UpdateIndexAsyncHelper(const UpdateIndexRequest& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIndex(request), context);
}

UpdateQuerySuggestionsBlockListOutcome KendraClient::UpdateQuerySuggestionsBlockList(const UpdateQuerySuggestionsBlockListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateQuerySuggestionsBlockListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQuerySuggestionsBlockListOutcomeCallable KendraClient::UpdateQuerySuggestionsBlockListCallable(const UpdateQuerySuggestionsBlockListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQuerySuggestionsBlockListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQuerySuggestionsBlockList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::UpdateQuerySuggestionsBlockListAsync(const UpdateQuerySuggestionsBlockListRequest& request, const UpdateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQuerySuggestionsBlockListAsyncHelper( request, handler, context ); } );
}

void KendraClient::UpdateQuerySuggestionsBlockListAsyncHelper(const UpdateQuerySuggestionsBlockListRequest& request, const UpdateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQuerySuggestionsBlockList(request), context);
}

UpdateQuerySuggestionsConfigOutcome KendraClient::UpdateQuerySuggestionsConfig(const UpdateQuerySuggestionsConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateQuerySuggestionsConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateQuerySuggestionsConfigOutcomeCallable KendraClient::UpdateQuerySuggestionsConfigCallable(const UpdateQuerySuggestionsConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateQuerySuggestionsConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateQuerySuggestionsConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::UpdateQuerySuggestionsConfigAsync(const UpdateQuerySuggestionsConfigRequest& request, const UpdateQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateQuerySuggestionsConfigAsyncHelper( request, handler, context ); } );
}

void KendraClient::UpdateQuerySuggestionsConfigAsyncHelper(const UpdateQuerySuggestionsConfigRequest& request, const UpdateQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateQuerySuggestionsConfig(request), context);
}

UpdateThesaurusOutcome KendraClient::UpdateThesaurus(const UpdateThesaurusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateThesaurusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateThesaurusOutcomeCallable KendraClient::UpdateThesaurusCallable(const UpdateThesaurusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThesaurusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThesaurus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClient::UpdateThesaurusAsync(const UpdateThesaurusRequest& request, const UpdateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateThesaurusAsyncHelper( request, handler, context ); } );
}

void KendraClient::UpdateThesaurusAsyncHelper(const UpdateThesaurusRequest& request, const UpdateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateThesaurus(request), context);
}

