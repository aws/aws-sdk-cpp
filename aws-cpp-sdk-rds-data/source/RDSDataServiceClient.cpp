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

#include <aws/rds-data/RDSDataServiceClient.h>
#include <aws/rds-data/RDSDataServiceErrorMarshaller.h>
#include <aws/rds-data/RDSDataServiceEndpointProvider.h>
#include <aws/rds-data/model/BatchExecuteStatementRequest.h>
#include <aws/rds-data/model/BeginTransactionRequest.h>
#include <aws/rds-data/model/CommitTransactionRequest.h>
#include <aws/rds-data/model/ExecuteStatementRequest.h>
#include <aws/rds-data/model/RollbackTransactionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RDSDataService;
using namespace Aws::RDSDataService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* RDSDataServiceClient::SERVICE_NAME = "rds-data";
const char* RDSDataServiceClient::ALLOCATION_TAG = "RDSDataServiceClient";

RDSDataServiceClient::RDSDataServiceClient(const RDSDataService::RDSDataServiceClientConfiguration& clientConfiguration,
                                           std::shared_ptr<RDSDataServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RDSDataServiceClient::RDSDataServiceClient(const AWSCredentials& credentials,
                                           std::shared_ptr<RDSDataServiceEndpointProviderBase> endpointProvider,
                                           const RDSDataService::RDSDataServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RDSDataServiceClient::RDSDataServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<RDSDataServiceEndpointProviderBase> endpointProvider,
                                           const RDSDataService::RDSDataServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  RDSDataServiceClient::RDSDataServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<RDSDataServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RDSDataServiceClient::RDSDataServiceClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RDSDataServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RDSDataServiceClient::RDSDataServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RDSDataServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
RDSDataServiceClient::~RDSDataServiceClient()
{
}

std::shared_ptr<RDSDataServiceEndpointProviderBase>& RDSDataServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void RDSDataServiceClient::init(const RDSDataService::RDSDataServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("RDS Data");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void RDSDataServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchExecuteStatementOutcome RDSDataServiceClient::BatchExecuteStatement(const BatchExecuteStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BatchExecute");
  return BatchExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchExecuteStatementOutcomeCallable RDSDataServiceClient::BatchExecuteStatementCallable(const BatchExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::BatchExecuteStatementAsync(const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchExecuteStatement(request), context);
    } );
}

BeginTransactionOutcome RDSDataServiceClient::BeginTransaction(const BeginTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BeginTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BeginTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BeginTransaction");
  return BeginTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BeginTransactionOutcomeCallable RDSDataServiceClient::BeginTransactionCallable(const BeginTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BeginTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BeginTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::BeginTransactionAsync(const BeginTransactionRequest& request, const BeginTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BeginTransaction(request), context);
    } );
}

CommitTransactionOutcome RDSDataServiceClient::CommitTransaction(const CommitTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CommitTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CommitTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CommitTransaction");
  return CommitTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CommitTransactionOutcomeCallable RDSDataServiceClient::CommitTransactionCallable(const CommitTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CommitTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CommitTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::CommitTransactionAsync(const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CommitTransaction(request), context);
    } );
}

ExecuteStatementOutcome RDSDataServiceClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/Execute");
  return ExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteStatementOutcomeCallable RDSDataServiceClient::ExecuteStatementCallable(const ExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::ExecuteStatementAsync(const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExecuteStatement(request), context);
    } );
}

RollbackTransactionOutcome RDSDataServiceClient::RollbackTransaction(const RollbackTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RollbackTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RollbackTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RollbackTransaction");
  return RollbackTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RollbackTransactionOutcomeCallable RDSDataServiceClient::RollbackTransactionCallable(const RollbackTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RollbackTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RollbackTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::RollbackTransactionAsync(const RollbackTransactionRequest& request, const RollbackTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RollbackTransaction(request), context);
    } );
}

