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

#include <aws/athena/AthenaClient.h>
#include <aws/athena/AthenaEndpoint.h>
#include <aws/athena/AthenaErrorMarshaller.h>
#include <aws/athena/model/BatchGetNamedQueryRequest.h>
#include <aws/athena/model/BatchGetPreparedStatementRequest.h>
#include <aws/athena/model/BatchGetQueryExecutionRequest.h>
#include <aws/athena/model/CreateDataCatalogRequest.h>
#include <aws/athena/model/CreateNamedQueryRequest.h>
#include <aws/athena/model/CreatePreparedStatementRequest.h>
#include <aws/athena/model/CreateWorkGroupRequest.h>
#include <aws/athena/model/DeleteDataCatalogRequest.h>
#include <aws/athena/model/DeleteNamedQueryRequest.h>
#include <aws/athena/model/DeletePreparedStatementRequest.h>
#include <aws/athena/model/DeleteWorkGroupRequest.h>
#include <aws/athena/model/GetDataCatalogRequest.h>
#include <aws/athena/model/GetDatabaseRequest.h>
#include <aws/athena/model/GetNamedQueryRequest.h>
#include <aws/athena/model/GetPreparedStatementRequest.h>
#include <aws/athena/model/GetQueryExecutionRequest.h>
#include <aws/athena/model/GetQueryResultsRequest.h>
#include <aws/athena/model/GetQueryRuntimeStatisticsRequest.h>
#include <aws/athena/model/GetTableMetadataRequest.h>
#include <aws/athena/model/GetWorkGroupRequest.h>
#include <aws/athena/model/ListDataCatalogsRequest.h>
#include <aws/athena/model/ListDatabasesRequest.h>
#include <aws/athena/model/ListEngineVersionsRequest.h>
#include <aws/athena/model/ListNamedQueriesRequest.h>
#include <aws/athena/model/ListPreparedStatementsRequest.h>
#include <aws/athena/model/ListQueryExecutionsRequest.h>
#include <aws/athena/model/ListTableMetadataRequest.h>
#include <aws/athena/model/ListTagsForResourceRequest.h>
#include <aws/athena/model/ListWorkGroupsRequest.h>
#include <aws/athena/model/StartQueryExecutionRequest.h>
#include <aws/athena/model/StopQueryExecutionRequest.h>
#include <aws/athena/model/TagResourceRequest.h>
#include <aws/athena/model/UntagResourceRequest.h>
#include <aws/athena/model/UpdateDataCatalogRequest.h>
#include <aws/athena/model/UpdateNamedQueryRequest.h>
#include <aws/athena/model/UpdatePreparedStatementRequest.h>
#include <aws/athena/model/UpdateWorkGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Athena;
using namespace Aws::Athena::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "athena";
static const char* ALLOCATION_TAG = "AthenaClient";

AthenaClient::AthenaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::AthenaClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::AthenaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::~AthenaClient()
{
}

void AthenaClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Athena");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AthenaEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AthenaClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchGetNamedQueryOutcome AthenaClient::BatchGetNamedQuery(const BatchGetNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetNamedQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetNamedQueryOutcomeCallable AthenaClient::BatchGetNamedQueryCallable(const BatchGetNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientBatchGetNamedQueryAsyncHelper(AthenaClient const * const clientThis, const BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetNamedQuery(request), context);
}

void AthenaClient::BatchGetNamedQueryAsync(const BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientBatchGetNamedQueryAsyncHelper( this, request, handler, context ); } );
}

BatchGetPreparedStatementOutcome AthenaClient::BatchGetPreparedStatement(const BatchGetPreparedStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetPreparedStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetPreparedStatementOutcomeCallable AthenaClient::BatchGetPreparedStatementCallable(const BatchGetPreparedStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetPreparedStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetPreparedStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientBatchGetPreparedStatementAsyncHelper(AthenaClient const * const clientThis, const BatchGetPreparedStatementRequest& request, const BatchGetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetPreparedStatement(request), context);
}

void AthenaClient::BatchGetPreparedStatementAsync(const BatchGetPreparedStatementRequest& request, const BatchGetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientBatchGetPreparedStatementAsyncHelper( this, request, handler, context ); } );
}

BatchGetQueryExecutionOutcome AthenaClient::BatchGetQueryExecution(const BatchGetQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetQueryExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetQueryExecutionOutcomeCallable AthenaClient::BatchGetQueryExecutionCallable(const BatchGetQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientBatchGetQueryExecutionAsyncHelper(AthenaClient const * const clientThis, const BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetQueryExecution(request), context);
}

void AthenaClient::BatchGetQueryExecutionAsync(const BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientBatchGetQueryExecutionAsyncHelper( this, request, handler, context ); } );
}

CreateDataCatalogOutcome AthenaClient::CreateDataCatalog(const CreateDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataCatalogOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataCatalogOutcomeCallable AthenaClient::CreateDataCatalogCallable(const CreateDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientCreateDataCatalogAsyncHelper(AthenaClient const * const clientThis, const CreateDataCatalogRequest& request, const CreateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataCatalog(request), context);
}

void AthenaClient::CreateDataCatalogAsync(const CreateDataCatalogRequest& request, const CreateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientCreateDataCatalogAsyncHelper( this, request, handler, context ); } );
}

CreateNamedQueryOutcome AthenaClient::CreateNamedQuery(const CreateNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateNamedQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNamedQueryOutcomeCallable AthenaClient::CreateNamedQueryCallable(const CreateNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientCreateNamedQueryAsyncHelper(AthenaClient const * const clientThis, const CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNamedQuery(request), context);
}

void AthenaClient::CreateNamedQueryAsync(const CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientCreateNamedQueryAsyncHelper( this, request, handler, context ); } );
}

CreatePreparedStatementOutcome AthenaClient::CreatePreparedStatement(const CreatePreparedStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePreparedStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePreparedStatementOutcomeCallable AthenaClient::CreatePreparedStatementCallable(const CreatePreparedStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePreparedStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePreparedStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientCreatePreparedStatementAsyncHelper(AthenaClient const * const clientThis, const CreatePreparedStatementRequest& request, const CreatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePreparedStatement(request), context);
}

void AthenaClient::CreatePreparedStatementAsync(const CreatePreparedStatementRequest& request, const CreatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientCreatePreparedStatementAsyncHelper( this, request, handler, context ); } );
}

CreateWorkGroupOutcome AthenaClient::CreateWorkGroup(const CreateWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkGroupOutcomeCallable AthenaClient::CreateWorkGroupCallable(const CreateWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientCreateWorkGroupAsyncHelper(AthenaClient const * const clientThis, const CreateWorkGroupRequest& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkGroup(request), context);
}

void AthenaClient::CreateWorkGroupAsync(const CreateWorkGroupRequest& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientCreateWorkGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDataCatalogOutcome AthenaClient::DeleteDataCatalog(const DeleteDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDataCatalogOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataCatalogOutcomeCallable AthenaClient::DeleteDataCatalogCallable(const DeleteDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientDeleteDataCatalogAsyncHelper(AthenaClient const * const clientThis, const DeleteDataCatalogRequest& request, const DeleteDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataCatalog(request), context);
}

void AthenaClient::DeleteDataCatalogAsync(const DeleteDataCatalogRequest& request, const DeleteDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientDeleteDataCatalogAsyncHelper( this, request, handler, context ); } );
}

DeleteNamedQueryOutcome AthenaClient::DeleteNamedQuery(const DeleteNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNamedQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNamedQueryOutcomeCallable AthenaClient::DeleteNamedQueryCallable(const DeleteNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientDeleteNamedQueryAsyncHelper(AthenaClient const * const clientThis, const DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNamedQuery(request), context);
}

void AthenaClient::DeleteNamedQueryAsync(const DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientDeleteNamedQueryAsyncHelper( this, request, handler, context ); } );
}

DeletePreparedStatementOutcome AthenaClient::DeletePreparedStatement(const DeletePreparedStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePreparedStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePreparedStatementOutcomeCallable AthenaClient::DeletePreparedStatementCallable(const DeletePreparedStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePreparedStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePreparedStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientDeletePreparedStatementAsyncHelper(AthenaClient const * const clientThis, const DeletePreparedStatementRequest& request, const DeletePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePreparedStatement(request), context);
}

void AthenaClient::DeletePreparedStatementAsync(const DeletePreparedStatementRequest& request, const DeletePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientDeletePreparedStatementAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkGroupOutcome AthenaClient::DeleteWorkGroup(const DeleteWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkGroupOutcomeCallable AthenaClient::DeleteWorkGroupCallable(const DeleteWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientDeleteWorkGroupAsyncHelper(AthenaClient const * const clientThis, const DeleteWorkGroupRequest& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkGroup(request), context);
}

void AthenaClient::DeleteWorkGroupAsync(const DeleteWorkGroupRequest& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientDeleteWorkGroupAsyncHelper( this, request, handler, context ); } );
}

GetDataCatalogOutcome AthenaClient::GetDataCatalog(const GetDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDataCatalogOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataCatalogOutcomeCallable AthenaClient::GetDataCatalogCallable(const GetDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetDataCatalogAsyncHelper(AthenaClient const * const clientThis, const GetDataCatalogRequest& request, const GetDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataCatalog(request), context);
}

void AthenaClient::GetDataCatalogAsync(const GetDataCatalogRequest& request, const GetDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetDataCatalogAsyncHelper( this, request, handler, context ); } );
}

GetDatabaseOutcome AthenaClient::GetDatabase(const GetDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDatabaseOutcomeCallable AthenaClient::GetDatabaseCallable(const GetDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetDatabaseAsyncHelper(AthenaClient const * const clientThis, const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDatabase(request), context);
}

void AthenaClient::GetDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetDatabaseAsyncHelper( this, request, handler, context ); } );
}

GetNamedQueryOutcome AthenaClient::GetNamedQuery(const GetNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetNamedQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNamedQueryOutcomeCallable AthenaClient::GetNamedQueryCallable(const GetNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetNamedQueryAsyncHelper(AthenaClient const * const clientThis, const GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNamedQuery(request), context);
}

void AthenaClient::GetNamedQueryAsync(const GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetNamedQueryAsyncHelper( this, request, handler, context ); } );
}

GetPreparedStatementOutcome AthenaClient::GetPreparedStatement(const GetPreparedStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPreparedStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPreparedStatementOutcomeCallable AthenaClient::GetPreparedStatementCallable(const GetPreparedStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPreparedStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPreparedStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetPreparedStatementAsyncHelper(AthenaClient const * const clientThis, const GetPreparedStatementRequest& request, const GetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPreparedStatement(request), context);
}

void AthenaClient::GetPreparedStatementAsync(const GetPreparedStatementRequest& request, const GetPreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetPreparedStatementAsyncHelper( this, request, handler, context ); } );
}

GetQueryExecutionOutcome AthenaClient::GetQueryExecution(const GetQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQueryExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryExecutionOutcomeCallable AthenaClient::GetQueryExecutionCallable(const GetQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetQueryExecutionAsyncHelper(AthenaClient const * const clientThis, const GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueryExecution(request), context);
}

void AthenaClient::GetQueryExecutionAsync(const GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetQueryExecutionAsyncHelper( this, request, handler, context ); } );
}

GetQueryResultsOutcome AthenaClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQueryResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryResultsOutcomeCallable AthenaClient::GetQueryResultsCallable(const GetQueryResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetQueryResultsAsyncHelper(AthenaClient const * const clientThis, const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueryResults(request), context);
}

void AthenaClient::GetQueryResultsAsync(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetQueryResultsAsyncHelper( this, request, handler, context ); } );
}

GetQueryRuntimeStatisticsOutcome AthenaClient::GetQueryRuntimeStatistics(const GetQueryRuntimeStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQueryRuntimeStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryRuntimeStatisticsOutcomeCallable AthenaClient::GetQueryRuntimeStatisticsCallable(const GetQueryRuntimeStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryRuntimeStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryRuntimeStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetQueryRuntimeStatisticsAsyncHelper(AthenaClient const * const clientThis, const GetQueryRuntimeStatisticsRequest& request, const GetQueryRuntimeStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueryRuntimeStatistics(request), context);
}

void AthenaClient::GetQueryRuntimeStatisticsAsync(const GetQueryRuntimeStatisticsRequest& request, const GetQueryRuntimeStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetQueryRuntimeStatisticsAsyncHelper( this, request, handler, context ); } );
}

GetTableMetadataOutcome AthenaClient::GetTableMetadata(const GetTableMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTableMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableMetadataOutcomeCallable AthenaClient::GetTableMetadataCallable(const GetTableMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetTableMetadataAsyncHelper(AthenaClient const * const clientThis, const GetTableMetadataRequest& request, const GetTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTableMetadata(request), context);
}

void AthenaClient::GetTableMetadataAsync(const GetTableMetadataRequest& request, const GetTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetTableMetadataAsyncHelper( this, request, handler, context ); } );
}

GetWorkGroupOutcome AthenaClient::GetWorkGroup(const GetWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWorkGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkGroupOutcomeCallable AthenaClient::GetWorkGroupCallable(const GetWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientGetWorkGroupAsyncHelper(AthenaClient const * const clientThis, const GetWorkGroupRequest& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkGroup(request), context);
}

void AthenaClient::GetWorkGroupAsync(const GetWorkGroupRequest& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientGetWorkGroupAsyncHelper( this, request, handler, context ); } );
}

ListDataCatalogsOutcome AthenaClient::ListDataCatalogs(const ListDataCatalogsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDataCatalogsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataCatalogsOutcomeCallable AthenaClient::ListDataCatalogsCallable(const ListDataCatalogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataCatalogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataCatalogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListDataCatalogsAsyncHelper(AthenaClient const * const clientThis, const ListDataCatalogsRequest& request, const ListDataCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataCatalogs(request), context);
}

void AthenaClient::ListDataCatalogsAsync(const ListDataCatalogsRequest& request, const ListDataCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListDataCatalogsAsyncHelper( this, request, handler, context ); } );
}

ListDatabasesOutcome AthenaClient::ListDatabases(const ListDatabasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatabasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatabasesOutcomeCallable AthenaClient::ListDatabasesCallable(const ListDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListDatabasesAsyncHelper(AthenaClient const * const clientThis, const ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatabases(request), context);
}

void AthenaClient::ListDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListDatabasesAsyncHelper( this, request, handler, context ); } );
}

ListEngineVersionsOutcome AthenaClient::ListEngineVersions(const ListEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEngineVersionsOutcomeCallable AthenaClient::ListEngineVersionsCallable(const ListEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListEngineVersionsAsyncHelper(AthenaClient const * const clientThis, const ListEngineVersionsRequest& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEngineVersions(request), context);
}

void AthenaClient::ListEngineVersionsAsync(const ListEngineVersionsRequest& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListEngineVersionsAsyncHelper( this, request, handler, context ); } );
}

ListNamedQueriesOutcome AthenaClient::ListNamedQueries(const ListNamedQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListNamedQueriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNamedQueriesOutcomeCallable AthenaClient::ListNamedQueriesCallable(const ListNamedQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamedQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamedQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListNamedQueriesAsyncHelper(AthenaClient const * const clientThis, const ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNamedQueries(request), context);
}

void AthenaClient::ListNamedQueriesAsync(const ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListNamedQueriesAsyncHelper( this, request, handler, context ); } );
}

ListPreparedStatementsOutcome AthenaClient::ListPreparedStatements(const ListPreparedStatementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPreparedStatementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPreparedStatementsOutcomeCallable AthenaClient::ListPreparedStatementsCallable(const ListPreparedStatementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPreparedStatementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPreparedStatements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListPreparedStatementsAsyncHelper(AthenaClient const * const clientThis, const ListPreparedStatementsRequest& request, const ListPreparedStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPreparedStatements(request), context);
}

void AthenaClient::ListPreparedStatementsAsync(const ListPreparedStatementsRequest& request, const ListPreparedStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListPreparedStatementsAsyncHelper( this, request, handler, context ); } );
}

ListQueryExecutionsOutcome AthenaClient::ListQueryExecutions(const ListQueryExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListQueryExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListQueryExecutionsOutcomeCallable AthenaClient::ListQueryExecutionsCallable(const ListQueryExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueryExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueryExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListQueryExecutionsAsyncHelper(AthenaClient const * const clientThis, const ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQueryExecutions(request), context);
}

void AthenaClient::ListQueryExecutionsAsync(const ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListQueryExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListTableMetadataOutcome AthenaClient::ListTableMetadata(const ListTableMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTableMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTableMetadataOutcomeCallable AthenaClient::ListTableMetadataCallable(const ListTableMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTableMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTableMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListTableMetadataAsyncHelper(AthenaClient const * const clientThis, const ListTableMetadataRequest& request, const ListTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTableMetadata(request), context);
}

void AthenaClient::ListTableMetadataAsync(const ListTableMetadataRequest& request, const ListTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListTableMetadataAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AthenaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AthenaClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListTagsForResourceAsyncHelper(AthenaClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AthenaClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWorkGroupsOutcome AthenaClient::ListWorkGroups(const ListWorkGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkGroupsOutcomeCallable AthenaClient::ListWorkGroupsCallable(const ListWorkGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientListWorkGroupsAsyncHelper(AthenaClient const * const clientThis, const ListWorkGroupsRequest& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkGroups(request), context);
}

void AthenaClient::ListWorkGroupsAsync(const ListWorkGroupsRequest& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientListWorkGroupsAsyncHelper( this, request, handler, context ); } );
}

StartQueryExecutionOutcome AthenaClient::StartQueryExecution(const StartQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartQueryExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartQueryExecutionOutcomeCallable AthenaClient::StartQueryExecutionCallable(const StartQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientStartQueryExecutionAsyncHelper(AthenaClient const * const clientThis, const StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartQueryExecution(request), context);
}

void AthenaClient::StartQueryExecutionAsync(const StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientStartQueryExecutionAsyncHelper( this, request, handler, context ); } );
}

StopQueryExecutionOutcome AthenaClient::StopQueryExecution(const StopQueryExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopQueryExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopQueryExecutionOutcomeCallable AthenaClient::StopQueryExecutionCallable(const StopQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientStopQueryExecutionAsyncHelper(AthenaClient const * const clientThis, const StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopQueryExecution(request), context);
}

void AthenaClient::StopQueryExecutionAsync(const StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientStopQueryExecutionAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AthenaClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AthenaClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientTagResourceAsyncHelper(AthenaClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AthenaClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AthenaClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AthenaClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientUntagResourceAsyncHelper(AthenaClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AthenaClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDataCatalogOutcome AthenaClient::UpdateDataCatalog(const UpdateDataCatalogRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDataCatalogOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataCatalogOutcomeCallable AthenaClient::UpdateDataCatalogCallable(const UpdateDataCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientUpdateDataCatalogAsyncHelper(AthenaClient const * const clientThis, const UpdateDataCatalogRequest& request, const UpdateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataCatalog(request), context);
}

void AthenaClient::UpdateDataCatalogAsync(const UpdateDataCatalogRequest& request, const UpdateDataCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientUpdateDataCatalogAsyncHelper( this, request, handler, context ); } );
}

UpdateNamedQueryOutcome AthenaClient::UpdateNamedQuery(const UpdateNamedQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNamedQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNamedQueryOutcomeCallable AthenaClient::UpdateNamedQueryCallable(const UpdateNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientUpdateNamedQueryAsyncHelper(AthenaClient const * const clientThis, const UpdateNamedQueryRequest& request, const UpdateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNamedQuery(request), context);
}

void AthenaClient::UpdateNamedQueryAsync(const UpdateNamedQueryRequest& request, const UpdateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientUpdateNamedQueryAsyncHelper( this, request, handler, context ); } );
}

UpdatePreparedStatementOutcome AthenaClient::UpdatePreparedStatement(const UpdatePreparedStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePreparedStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePreparedStatementOutcomeCallable AthenaClient::UpdatePreparedStatementCallable(const UpdatePreparedStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePreparedStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePreparedStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientUpdatePreparedStatementAsyncHelper(AthenaClient const * const clientThis, const UpdatePreparedStatementRequest& request, const UpdatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePreparedStatement(request), context);
}

void AthenaClient::UpdatePreparedStatementAsync(const UpdatePreparedStatementRequest& request, const UpdatePreparedStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientUpdatePreparedStatementAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkGroupOutcome AthenaClient::UpdateWorkGroup(const UpdateWorkGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWorkGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkGroupOutcomeCallable AthenaClient::UpdateWorkGroupCallable(const UpdateWorkGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClientUpdateWorkGroupAsyncHelper(AthenaClient const * const clientThis, const UpdateWorkGroupRequest& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkGroup(request), context);
}

void AthenaClient::UpdateWorkGroupAsync(const UpdateWorkGroupRequest& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AthenaClientUpdateWorkGroupAsyncHelper( this, request, handler, context ); } );
}

