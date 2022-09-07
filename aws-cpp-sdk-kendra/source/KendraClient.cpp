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

#include <aws/kendra/KendraClient.h>
#include <aws/kendra/KendraEndpoint.h>
#include <aws/kendra/KendraErrorMarshaller.h>
#include <aws/kendra/model/AssociateEntitiesToExperienceRequest.h>
#include <aws/kendra/model/AssociatePersonasToEntitiesRequest.h>
#include <aws/kendra/model/BatchDeleteDocumentRequest.h>
#include <aws/kendra/model/BatchGetDocumentStatusRequest.h>
#include <aws/kendra/model/BatchPutDocumentRequest.h>
#include <aws/kendra/model/ClearQuerySuggestionsRequest.h>
#include <aws/kendra/model/CreateAccessControlConfigurationRequest.h>
#include <aws/kendra/model/CreateDataSourceRequest.h>
#include <aws/kendra/model/CreateExperienceRequest.h>
#include <aws/kendra/model/CreateFaqRequest.h>
#include <aws/kendra/model/CreateIndexRequest.h>
#include <aws/kendra/model/CreateQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/CreateThesaurusRequest.h>
#include <aws/kendra/model/DeleteAccessControlConfigurationRequest.h>
#include <aws/kendra/model/DeleteDataSourceRequest.h>
#include <aws/kendra/model/DeleteExperienceRequest.h>
#include <aws/kendra/model/DeleteFaqRequest.h>
#include <aws/kendra/model/DeleteIndexRequest.h>
#include <aws/kendra/model/DeletePrincipalMappingRequest.h>
#include <aws/kendra/model/DeleteQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/DeleteThesaurusRequest.h>
#include <aws/kendra/model/DescribeAccessControlConfigurationRequest.h>
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
#include <aws/kendra/model/ListAccessControlConfigurationsRequest.h>
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
#include <aws/kendra/model/UpdateAccessControlConfigurationRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KendraClient::KendraClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KendraClient::KendraClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  AWSClient::SetServiceClientName("kendra");
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

void KendraClientAssociateEntitiesToExperienceAsyncHelper(KendraClient const * const clientThis, const AssociateEntitiesToExperienceRequest& request, const AssociateEntitiesToExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateEntitiesToExperience(request), context);
}

void KendraClient::AssociateEntitiesToExperienceAsync(const AssociateEntitiesToExperienceRequest& request, const AssociateEntitiesToExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientAssociateEntitiesToExperienceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientAssociatePersonasToEntitiesAsyncHelper(KendraClient const * const clientThis, const AssociatePersonasToEntitiesRequest& request, const AssociatePersonasToEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociatePersonasToEntities(request), context);
}

void KendraClient::AssociatePersonasToEntitiesAsync(const AssociatePersonasToEntitiesRequest& request, const AssociatePersonasToEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientAssociatePersonasToEntitiesAsyncHelper( this, request, handler, context ); } );
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

void KendraClientBatchDeleteDocumentAsyncHelper(KendraClient const * const clientThis, const BatchDeleteDocumentRequest& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteDocument(request), context);
}

void KendraClient::BatchDeleteDocumentAsync(const BatchDeleteDocumentRequest& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientBatchDeleteDocumentAsyncHelper( this, request, handler, context ); } );
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

void KendraClientBatchGetDocumentStatusAsyncHelper(KendraClient const * const clientThis, const BatchGetDocumentStatusRequest& request, const BatchGetDocumentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetDocumentStatus(request), context);
}

void KendraClient::BatchGetDocumentStatusAsync(const BatchGetDocumentStatusRequest& request, const BatchGetDocumentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientBatchGetDocumentStatusAsyncHelper( this, request, handler, context ); } );
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

void KendraClientBatchPutDocumentAsyncHelper(KendraClient const * const clientThis, const BatchPutDocumentRequest& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchPutDocument(request), context);
}

void KendraClient::BatchPutDocumentAsync(const BatchPutDocumentRequest& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientBatchPutDocumentAsyncHelper( this, request, handler, context ); } );
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

void KendraClientClearQuerySuggestionsAsyncHelper(KendraClient const * const clientThis, const ClearQuerySuggestionsRequest& request, const ClearQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ClearQuerySuggestions(request), context);
}

void KendraClient::ClearQuerySuggestionsAsync(const ClearQuerySuggestionsRequest& request, const ClearQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientClearQuerySuggestionsAsyncHelper( this, request, handler, context ); } );
}

CreateAccessControlConfigurationOutcome KendraClient::CreateAccessControlConfiguration(const CreateAccessControlConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAccessControlConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessControlConfigurationOutcomeCallable KendraClient::CreateAccessControlConfigurationCallable(const CreateAccessControlConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessControlConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessControlConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClientCreateAccessControlConfigurationAsyncHelper(KendraClient const * const clientThis, const CreateAccessControlConfigurationRequest& request, const CreateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccessControlConfiguration(request), context);
}

void KendraClient::CreateAccessControlConfigurationAsync(const CreateAccessControlConfigurationRequest& request, const CreateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientCreateAccessControlConfigurationAsyncHelper( this, request, handler, context ); } );
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

void KendraClientCreateDataSourceAsyncHelper(KendraClient const * const clientThis, const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSource(request), context);
}

void KendraClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientCreateDataSourceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientCreateExperienceAsyncHelper(KendraClient const * const clientThis, const CreateExperienceRequest& request, const CreateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExperience(request), context);
}

void KendraClient::CreateExperienceAsync(const CreateExperienceRequest& request, const CreateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientCreateExperienceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientCreateFaqAsyncHelper(KendraClient const * const clientThis, const CreateFaqRequest& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFaq(request), context);
}

void KendraClient::CreateFaqAsync(const CreateFaqRequest& request, const CreateFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientCreateFaqAsyncHelper( this, request, handler, context ); } );
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

void KendraClientCreateIndexAsyncHelper(KendraClient const * const clientThis, const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIndex(request), context);
}

void KendraClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientCreateIndexAsyncHelper( this, request, handler, context ); } );
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

void KendraClientCreateQuerySuggestionsBlockListAsyncHelper(KendraClient const * const clientThis, const CreateQuerySuggestionsBlockListRequest& request, const CreateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQuerySuggestionsBlockList(request), context);
}

void KendraClient::CreateQuerySuggestionsBlockListAsync(const CreateQuerySuggestionsBlockListRequest& request, const CreateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientCreateQuerySuggestionsBlockListAsyncHelper( this, request, handler, context ); } );
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

void KendraClientCreateThesaurusAsyncHelper(KendraClient const * const clientThis, const CreateThesaurusRequest& request, const CreateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateThesaurus(request), context);
}

void KendraClient::CreateThesaurusAsync(const CreateThesaurusRequest& request, const CreateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientCreateThesaurusAsyncHelper( this, request, handler, context ); } );
}

DeleteAccessControlConfigurationOutcome KendraClient::DeleteAccessControlConfiguration(const DeleteAccessControlConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccessControlConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessControlConfigurationOutcomeCallable KendraClient::DeleteAccessControlConfigurationCallable(const DeleteAccessControlConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessControlConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessControlConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClientDeleteAccessControlConfigurationAsyncHelper(KendraClient const * const clientThis, const DeleteAccessControlConfigurationRequest& request, const DeleteAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccessControlConfiguration(request), context);
}

void KendraClient::DeleteAccessControlConfigurationAsync(const DeleteAccessControlConfigurationRequest& request, const DeleteAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeleteAccessControlConfigurationAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDeleteDataSourceAsyncHelper(KendraClient const * const clientThis, const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataSource(request), context);
}

void KendraClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeleteDataSourceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDeleteExperienceAsyncHelper(KendraClient const * const clientThis, const DeleteExperienceRequest& request, const DeleteExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExperience(request), context);
}

void KendraClient::DeleteExperienceAsync(const DeleteExperienceRequest& request, const DeleteExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeleteExperienceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDeleteFaqAsyncHelper(KendraClient const * const clientThis, const DeleteFaqRequest& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFaq(request), context);
}

void KendraClient::DeleteFaqAsync(const DeleteFaqRequest& request, const DeleteFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeleteFaqAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDeleteIndexAsyncHelper(KendraClient const * const clientThis, const DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIndex(request), context);
}

void KendraClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeleteIndexAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDeletePrincipalMappingAsyncHelper(KendraClient const * const clientThis, const DeletePrincipalMappingRequest& request, const DeletePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePrincipalMapping(request), context);
}

void KendraClient::DeletePrincipalMappingAsync(const DeletePrincipalMappingRequest& request, const DeletePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeletePrincipalMappingAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDeleteQuerySuggestionsBlockListAsyncHelper(KendraClient const * const clientThis, const DeleteQuerySuggestionsBlockListRequest& request, const DeleteQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteQuerySuggestionsBlockList(request), context);
}

void KendraClient::DeleteQuerySuggestionsBlockListAsync(const DeleteQuerySuggestionsBlockListRequest& request, const DeleteQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeleteQuerySuggestionsBlockListAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDeleteThesaurusAsyncHelper(KendraClient const * const clientThis, const DeleteThesaurusRequest& request, const DeleteThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteThesaurus(request), context);
}

void KendraClient::DeleteThesaurusAsync(const DeleteThesaurusRequest& request, const DeleteThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDeleteThesaurusAsyncHelper( this, request, handler, context ); } );
}

DescribeAccessControlConfigurationOutcome KendraClient::DescribeAccessControlConfiguration(const DescribeAccessControlConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccessControlConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccessControlConfigurationOutcomeCallable KendraClient::DescribeAccessControlConfigurationCallable(const DescribeAccessControlConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccessControlConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccessControlConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClientDescribeAccessControlConfigurationAsyncHelper(KendraClient const * const clientThis, const DescribeAccessControlConfigurationRequest& request, const DescribeAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccessControlConfiguration(request), context);
}

void KendraClient::DescribeAccessControlConfigurationAsync(const DescribeAccessControlConfigurationRequest& request, const DescribeAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeAccessControlConfigurationAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribeDataSourceAsyncHelper(KendraClient const * const clientThis, const DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataSource(request), context);
}

void KendraClient::DescribeDataSourceAsync(const DescribeDataSourceRequest& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeDataSourceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribeExperienceAsyncHelper(KendraClient const * const clientThis, const DescribeExperienceRequest& request, const DescribeExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExperience(request), context);
}

void KendraClient::DescribeExperienceAsync(const DescribeExperienceRequest& request, const DescribeExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeExperienceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribeFaqAsyncHelper(KendraClient const * const clientThis, const DescribeFaqRequest& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFaq(request), context);
}

void KendraClient::DescribeFaqAsync(const DescribeFaqRequest& request, const DescribeFaqResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeFaqAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribeIndexAsyncHelper(KendraClient const * const clientThis, const DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIndex(request), context);
}

void KendraClient::DescribeIndexAsync(const DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeIndexAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribePrincipalMappingAsyncHelper(KendraClient const * const clientThis, const DescribePrincipalMappingRequest& request, const DescribePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePrincipalMapping(request), context);
}

void KendraClient::DescribePrincipalMappingAsync(const DescribePrincipalMappingRequest& request, const DescribePrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribePrincipalMappingAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribeQuerySuggestionsBlockListAsyncHelper(KendraClient const * const clientThis, const DescribeQuerySuggestionsBlockListRequest& request, const DescribeQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeQuerySuggestionsBlockList(request), context);
}

void KendraClient::DescribeQuerySuggestionsBlockListAsync(const DescribeQuerySuggestionsBlockListRequest& request, const DescribeQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeQuerySuggestionsBlockListAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribeQuerySuggestionsConfigAsyncHelper(KendraClient const * const clientThis, const DescribeQuerySuggestionsConfigRequest& request, const DescribeQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeQuerySuggestionsConfig(request), context);
}

void KendraClient::DescribeQuerySuggestionsConfigAsync(const DescribeQuerySuggestionsConfigRequest& request, const DescribeQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeQuerySuggestionsConfigAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDescribeThesaurusAsyncHelper(KendraClient const * const clientThis, const DescribeThesaurusRequest& request, const DescribeThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeThesaurus(request), context);
}

void KendraClient::DescribeThesaurusAsync(const DescribeThesaurusRequest& request, const DescribeThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDescribeThesaurusAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDisassociateEntitiesFromExperienceAsyncHelper(KendraClient const * const clientThis, const DisassociateEntitiesFromExperienceRequest& request, const DisassociateEntitiesFromExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateEntitiesFromExperience(request), context);
}

void KendraClient::DisassociateEntitiesFromExperienceAsync(const DisassociateEntitiesFromExperienceRequest& request, const DisassociateEntitiesFromExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDisassociateEntitiesFromExperienceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientDisassociatePersonasFromEntitiesAsyncHelper(KendraClient const * const clientThis, const DisassociatePersonasFromEntitiesRequest& request, const DisassociatePersonasFromEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociatePersonasFromEntities(request), context);
}

void KendraClient::DisassociatePersonasFromEntitiesAsync(const DisassociatePersonasFromEntitiesRequest& request, const DisassociatePersonasFromEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientDisassociatePersonasFromEntitiesAsyncHelper( this, request, handler, context ); } );
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

void KendraClientGetQuerySuggestionsAsyncHelper(KendraClient const * const clientThis, const GetQuerySuggestionsRequest& request, const GetQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQuerySuggestions(request), context);
}

void KendraClient::GetQuerySuggestionsAsync(const GetQuerySuggestionsRequest& request, const GetQuerySuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientGetQuerySuggestionsAsyncHelper( this, request, handler, context ); } );
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

void KendraClientGetSnapshotsAsyncHelper(KendraClient const * const clientThis, const GetSnapshotsRequest& request, const GetSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSnapshots(request), context);
}

void KendraClient::GetSnapshotsAsync(const GetSnapshotsRequest& request, const GetSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientGetSnapshotsAsyncHelper( this, request, handler, context ); } );
}

ListAccessControlConfigurationsOutcome KendraClient::ListAccessControlConfigurations(const ListAccessControlConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccessControlConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccessControlConfigurationsOutcomeCallable KendraClient::ListAccessControlConfigurationsCallable(const ListAccessControlConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessControlConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessControlConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClientListAccessControlConfigurationsAsyncHelper(KendraClient const * const clientThis, const ListAccessControlConfigurationsRequest& request, const ListAccessControlConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccessControlConfigurations(request), context);
}

void KendraClient::ListAccessControlConfigurationsAsync(const ListAccessControlConfigurationsRequest& request, const ListAccessControlConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListAccessControlConfigurationsAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListDataSourceSyncJobsAsyncHelper(KendraClient const * const clientThis, const ListDataSourceSyncJobsRequest& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataSourceSyncJobs(request), context);
}

void KendraClient::ListDataSourceSyncJobsAsync(const ListDataSourceSyncJobsRequest& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListDataSourceSyncJobsAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListDataSourcesAsyncHelper(KendraClient const * const clientThis, const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataSources(request), context);
}

void KendraClient::ListDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListDataSourcesAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListEntityPersonasAsyncHelper(KendraClient const * const clientThis, const ListEntityPersonasRequest& request, const ListEntityPersonasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEntityPersonas(request), context);
}

void KendraClient::ListEntityPersonasAsync(const ListEntityPersonasRequest& request, const ListEntityPersonasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListEntityPersonasAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListExperienceEntitiesAsyncHelper(KendraClient const * const clientThis, const ListExperienceEntitiesRequest& request, const ListExperienceEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExperienceEntities(request), context);
}

void KendraClient::ListExperienceEntitiesAsync(const ListExperienceEntitiesRequest& request, const ListExperienceEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListExperienceEntitiesAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListExperiencesAsyncHelper(KendraClient const * const clientThis, const ListExperiencesRequest& request, const ListExperiencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExperiences(request), context);
}

void KendraClient::ListExperiencesAsync(const ListExperiencesRequest& request, const ListExperiencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListExperiencesAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListFaqsAsyncHelper(KendraClient const * const clientThis, const ListFaqsRequest& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFaqs(request), context);
}

void KendraClient::ListFaqsAsync(const ListFaqsRequest& request, const ListFaqsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListFaqsAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListGroupsOlderThanOrderingIdAsyncHelper(KendraClient const * const clientThis, const ListGroupsOlderThanOrderingIdRequest& request, const ListGroupsOlderThanOrderingIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupsOlderThanOrderingId(request), context);
}

void KendraClient::ListGroupsOlderThanOrderingIdAsync(const ListGroupsOlderThanOrderingIdRequest& request, const ListGroupsOlderThanOrderingIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListGroupsOlderThanOrderingIdAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListIndicesAsyncHelper(KendraClient const * const clientThis, const ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIndices(request), context);
}

void KendraClient::ListIndicesAsync(const ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListIndicesAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListQuerySuggestionsBlockListsAsyncHelper(KendraClient const * const clientThis, const ListQuerySuggestionsBlockListsRequest& request, const ListQuerySuggestionsBlockListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQuerySuggestionsBlockLists(request), context);
}

void KendraClient::ListQuerySuggestionsBlockListsAsync(const ListQuerySuggestionsBlockListsRequest& request, const ListQuerySuggestionsBlockListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListQuerySuggestionsBlockListsAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListTagsForResourceAsyncHelper(KendraClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void KendraClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientListThesauriAsyncHelper(KendraClient const * const clientThis, const ListThesauriRequest& request, const ListThesauriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListThesauri(request), context);
}

void KendraClient::ListThesauriAsync(const ListThesauriRequest& request, const ListThesauriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientListThesauriAsyncHelper( this, request, handler, context ); } );
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

void KendraClientPutPrincipalMappingAsyncHelper(KendraClient const * const clientThis, const PutPrincipalMappingRequest& request, const PutPrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPrincipalMapping(request), context);
}

void KendraClient::PutPrincipalMappingAsync(const PutPrincipalMappingRequest& request, const PutPrincipalMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientPutPrincipalMappingAsyncHelper( this, request, handler, context ); } );
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

void KendraClientQueryAsyncHelper(KendraClient const * const clientThis, const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Query(request), context);
}

void KendraClient::QueryAsync(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientQueryAsyncHelper( this, request, handler, context ); } );
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

void KendraClientStartDataSourceSyncJobAsyncHelper(KendraClient const * const clientThis, const StartDataSourceSyncJobRequest& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDataSourceSyncJob(request), context);
}

void KendraClient::StartDataSourceSyncJobAsync(const StartDataSourceSyncJobRequest& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientStartDataSourceSyncJobAsyncHelper( this, request, handler, context ); } );
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

void KendraClientStopDataSourceSyncJobAsyncHelper(KendraClient const * const clientThis, const StopDataSourceSyncJobRequest& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDataSourceSyncJob(request), context);
}

void KendraClient::StopDataSourceSyncJobAsync(const StopDataSourceSyncJobRequest& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientStopDataSourceSyncJobAsyncHelper( this, request, handler, context ); } );
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

void KendraClientSubmitFeedbackAsyncHelper(KendraClient const * const clientThis, const SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SubmitFeedback(request), context);
}

void KendraClient::SubmitFeedbackAsync(const SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientSubmitFeedbackAsyncHelper( this, request, handler, context ); } );
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

void KendraClientTagResourceAsyncHelper(KendraClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void KendraClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientUntagResourceAsyncHelper(KendraClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void KendraClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAccessControlConfigurationOutcome KendraClient::UpdateAccessControlConfiguration(const UpdateAccessControlConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAccessControlConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccessControlConfigurationOutcomeCallable KendraClient::UpdateAccessControlConfigurationCallable(const UpdateAccessControlConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccessControlConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccessControlConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KendraClientUpdateAccessControlConfigurationAsyncHelper(KendraClient const * const clientThis, const UpdateAccessControlConfigurationRequest& request, const UpdateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccessControlConfiguration(request), context);
}

void KendraClient::UpdateAccessControlConfigurationAsync(const UpdateAccessControlConfigurationRequest& request, const UpdateAccessControlConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUpdateAccessControlConfigurationAsyncHelper( this, request, handler, context ); } );
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

void KendraClientUpdateDataSourceAsyncHelper(KendraClient const * const clientThis, const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataSource(request), context);
}

void KendraClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUpdateDataSourceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientUpdateExperienceAsyncHelper(KendraClient const * const clientThis, const UpdateExperienceRequest& request, const UpdateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateExperience(request), context);
}

void KendraClient::UpdateExperienceAsync(const UpdateExperienceRequest& request, const UpdateExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUpdateExperienceAsyncHelper( this, request, handler, context ); } );
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

void KendraClientUpdateIndexAsyncHelper(KendraClient const * const clientThis, const UpdateIndexRequest& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIndex(request), context);
}

void KendraClient::UpdateIndexAsync(const UpdateIndexRequest& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUpdateIndexAsyncHelper( this, request, handler, context ); } );
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

void KendraClientUpdateQuerySuggestionsBlockListAsyncHelper(KendraClient const * const clientThis, const UpdateQuerySuggestionsBlockListRequest& request, const UpdateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQuerySuggestionsBlockList(request), context);
}

void KendraClient::UpdateQuerySuggestionsBlockListAsync(const UpdateQuerySuggestionsBlockListRequest& request, const UpdateQuerySuggestionsBlockListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUpdateQuerySuggestionsBlockListAsyncHelper( this, request, handler, context ); } );
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

void KendraClientUpdateQuerySuggestionsConfigAsyncHelper(KendraClient const * const clientThis, const UpdateQuerySuggestionsConfigRequest& request, const UpdateQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateQuerySuggestionsConfig(request), context);
}

void KendraClient::UpdateQuerySuggestionsConfigAsync(const UpdateQuerySuggestionsConfigRequest& request, const UpdateQuerySuggestionsConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUpdateQuerySuggestionsConfigAsyncHelper( this, request, handler, context ); } );
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

void KendraClientUpdateThesaurusAsyncHelper(KendraClient const * const clientThis, const UpdateThesaurusRequest& request, const UpdateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateThesaurus(request), context);
}

void KendraClient::UpdateThesaurusAsync(const UpdateThesaurusRequest& request, const UpdateThesaurusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KendraClientUpdateThesaurusAsyncHelper( this, request, handler, context ); } );
}

