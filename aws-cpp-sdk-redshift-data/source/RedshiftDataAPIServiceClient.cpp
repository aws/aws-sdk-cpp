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

#include <aws/redshift-data/RedshiftDataAPIServiceClient.h>
#include <aws/redshift-data/RedshiftDataAPIServiceEndpoint.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrorMarshaller.h>
#include <aws/redshift-data/model/BatchExecuteStatementRequest.h>
#include <aws/redshift-data/model/CancelStatementRequest.h>
#include <aws/redshift-data/model/DescribeStatementRequest.h>
#include <aws/redshift-data/model/DescribeTableRequest.h>
#include <aws/redshift-data/model/ExecuteStatementRequest.h>
#include <aws/redshift-data/model/GetStatementResultRequest.h>
#include <aws/redshift-data/model/ListDatabasesRequest.h>
#include <aws/redshift-data/model/ListSchemasRequest.h>
#include <aws/redshift-data/model/ListStatementsRequest.h>
#include <aws/redshift-data/model/ListTablesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RedshiftDataAPIService;
using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "redshift-data";
static const char* ALLOCATION_TAG = "RedshiftDataAPIServiceClient";

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftDataAPIServiceClient::~RedshiftDataAPIServiceClient()
{
}

void RedshiftDataAPIServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Redshift Data");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RedshiftDataAPIServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RedshiftDataAPIServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchExecuteStatementOutcome RedshiftDataAPIServiceClient::BatchExecuteStatement(const BatchExecuteStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchExecuteStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchExecuteStatementOutcomeCallable RedshiftDataAPIServiceClient::BatchExecuteStatementCallable(const BatchExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientBatchExecuteStatementAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchExecuteStatement(request), context);
}

void RedshiftDataAPIServiceClient::BatchExecuteStatementAsync(const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientBatchExecuteStatementAsyncHelper( this, request, handler, context ); } );
}

CancelStatementOutcome RedshiftDataAPIServiceClient::CancelStatement(const CancelStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelStatementOutcomeCallable RedshiftDataAPIServiceClient::CancelStatementCallable(const CancelStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientCancelStatementAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelStatement(request), context);
}

void RedshiftDataAPIServiceClient::CancelStatementAsync(const CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientCancelStatementAsyncHelper( this, request, handler, context ); } );
}

DescribeStatementOutcome RedshiftDataAPIServiceClient::DescribeStatement(const DescribeStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStatementOutcomeCallable RedshiftDataAPIServiceClient::DescribeStatementCallable(const DescribeStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientDescribeStatementAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const DescribeStatementRequest& request, const DescribeStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStatement(request), context);
}

void RedshiftDataAPIServiceClient::DescribeStatementAsync(const DescribeStatementRequest& request, const DescribeStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientDescribeStatementAsyncHelper( this, request, handler, context ); } );
}

DescribeTableOutcome RedshiftDataAPIServiceClient::DescribeTable(const DescribeTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableOutcomeCallable RedshiftDataAPIServiceClient::DescribeTableCallable(const DescribeTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientDescribeTableAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTable(request), context);
}

void RedshiftDataAPIServiceClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientDescribeTableAsyncHelper( this, request, handler, context ); } );
}

ExecuteStatementOutcome RedshiftDataAPIServiceClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecuteStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteStatementOutcomeCallable RedshiftDataAPIServiceClient::ExecuteStatementCallable(const ExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientExecuteStatementAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteStatement(request), context);
}

void RedshiftDataAPIServiceClient::ExecuteStatementAsync(const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientExecuteStatementAsyncHelper( this, request, handler, context ); } );
}

GetStatementResultOutcome RedshiftDataAPIServiceClient::GetStatementResult(const GetStatementResultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetStatementResultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStatementResultOutcomeCallable RedshiftDataAPIServiceClient::GetStatementResultCallable(const GetStatementResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStatementResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStatementResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientGetStatementResultAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const GetStatementResultRequest& request, const GetStatementResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStatementResult(request), context);
}

void RedshiftDataAPIServiceClient::GetStatementResultAsync(const GetStatementResultRequest& request, const GetStatementResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientGetStatementResultAsyncHelper( this, request, handler, context ); } );
}

ListDatabasesOutcome RedshiftDataAPIServiceClient::ListDatabases(const ListDatabasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatabasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatabasesOutcomeCallable RedshiftDataAPIServiceClient::ListDatabasesCallable(const ListDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientListDatabasesAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatabases(request), context);
}

void RedshiftDataAPIServiceClient::ListDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientListDatabasesAsyncHelper( this, request, handler, context ); } );
}

ListSchemasOutcome RedshiftDataAPIServiceClient::ListSchemas(const ListSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSchemasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSchemasOutcomeCallable RedshiftDataAPIServiceClient::ListSchemasCallable(const ListSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientListSchemasAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSchemas(request), context);
}

void RedshiftDataAPIServiceClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientListSchemasAsyncHelper( this, request, handler, context ); } );
}

ListStatementsOutcome RedshiftDataAPIServiceClient::ListStatements(const ListStatementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStatementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStatementsOutcomeCallable RedshiftDataAPIServiceClient::ListStatementsCallable(const ListStatementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStatementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStatements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientListStatementsAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStatements(request), context);
}

void RedshiftDataAPIServiceClient::ListStatementsAsync(const ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientListStatementsAsyncHelper( this, request, handler, context ); } );
}

ListTablesOutcome RedshiftDataAPIServiceClient::ListTables(const ListTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcomeCallable RedshiftDataAPIServiceClient::ListTablesCallable(const ListTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClientListTablesAsyncHelper(RedshiftDataAPIServiceClient const * const clientThis, const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTables(request), context);
}

void RedshiftDataAPIServiceClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftDataAPIServiceClientListTablesAsyncHelper( this, request, handler, context ); } );
}

