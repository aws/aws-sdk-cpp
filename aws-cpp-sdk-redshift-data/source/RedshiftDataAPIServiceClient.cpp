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

#include <aws/redshift-data/RedshiftDataAPIServiceClient.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrorMarshaller.h>
#include <aws/redshift-data/RedshiftDataAPIServiceEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* RedshiftDataAPIServiceClient::SERVICE_NAME = "redshift-data";
const char* RedshiftDataAPIServiceClient::ALLOCATION_TAG = "RedshiftDataAPIServiceClient";

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration,
                                                           std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const AWSCredentials& credentials,
                                                           std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider,
                                                           const RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider,
                                                           const RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<RedshiftDataAPIServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RedshiftDataAPIServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftDataAPIServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RedshiftDataAPIServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
RedshiftDataAPIServiceClient::~RedshiftDataAPIServiceClient()
{
}

std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase>& RedshiftDataAPIServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void RedshiftDataAPIServiceClient::init(const RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Redshift Data");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void RedshiftDataAPIServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchExecuteStatementOutcome RedshiftDataAPIServiceClient::BatchExecuteStatement(const BatchExecuteStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchExecuteStatementOutcomeCallable RedshiftDataAPIServiceClient::BatchExecuteStatementCallable(const BatchExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::BatchExecuteStatementAsync(const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchExecuteStatement(request), context);
    } );
}

CancelStatementOutcome RedshiftDataAPIServiceClient::CancelStatement(const CancelStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelStatementOutcomeCallable RedshiftDataAPIServiceClient::CancelStatementCallable(const CancelStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::CancelStatementAsync(const CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelStatement(request), context);
    } );
}

DescribeStatementOutcome RedshiftDataAPIServiceClient::DescribeStatement(const DescribeStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStatementOutcomeCallable RedshiftDataAPIServiceClient::DescribeStatementCallable(const DescribeStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::DescribeStatementAsync(const DescribeStatementRequest& request, const DescribeStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStatement(request), context);
    } );
}

DescribeTableOutcome RedshiftDataAPIServiceClient::DescribeTable(const DescribeTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableOutcomeCallable RedshiftDataAPIServiceClient::DescribeTableCallable(const DescribeTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTable(request), context);
    } );
}

ExecuteStatementOutcome RedshiftDataAPIServiceClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteStatementOutcomeCallable RedshiftDataAPIServiceClient::ExecuteStatementCallable(const ExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::ExecuteStatementAsync(const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExecuteStatement(request), context);
    } );
}

GetStatementResultOutcome RedshiftDataAPIServiceClient::GetStatementResult(const GetStatementResultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStatementResult, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStatementResult, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetStatementResultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStatementResultOutcomeCallable RedshiftDataAPIServiceClient::GetStatementResultCallable(const GetStatementResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStatementResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStatementResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::GetStatementResultAsync(const GetStatementResultRequest& request, const GetStatementResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStatementResult(request), context);
    } );
}

ListDatabasesOutcome RedshiftDataAPIServiceClient::ListDatabases(const ListDatabasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatabasesOutcomeCallable RedshiftDataAPIServiceClient::ListDatabasesCallable(const ListDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::ListDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatabases(request), context);
    } );
}

ListSchemasOutcome RedshiftDataAPIServiceClient::ListSchemas(const ListSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSchemasOutcomeCallable RedshiftDataAPIServiceClient::ListSchemasCallable(const ListSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSchemas(request), context);
    } );
}

ListStatementsOutcome RedshiftDataAPIServiceClient::ListStatements(const ListStatementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStatements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStatements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStatementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStatementsOutcomeCallable RedshiftDataAPIServiceClient::ListStatementsCallable(const ListStatementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStatementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStatements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::ListStatementsAsync(const ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStatements(request), context);
    } );
}

ListTablesOutcome RedshiftDataAPIServiceClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcomeCallable RedshiftDataAPIServiceClient::ListTablesCallable(const ListTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftDataAPIServiceClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTables(request), context);
    } );
}

