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

#include <aws/budgets/BudgetsClient.h>
#include <aws/budgets/BudgetsErrorMarshaller.h>
#include <aws/budgets/BudgetsEndpointProvider.h>
#include <aws/budgets/model/CreateBudgetRequest.h>
#include <aws/budgets/model/CreateBudgetActionRequest.h>
#include <aws/budgets/model/CreateNotificationRequest.h>
#include <aws/budgets/model/CreateSubscriberRequest.h>
#include <aws/budgets/model/DeleteBudgetRequest.h>
#include <aws/budgets/model/DeleteBudgetActionRequest.h>
#include <aws/budgets/model/DeleteNotificationRequest.h>
#include <aws/budgets/model/DeleteSubscriberRequest.h>
#include <aws/budgets/model/DescribeBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetActionRequest.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesRequest.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountRequest.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountRequest.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryRequest.h>
#include <aws/budgets/model/DescribeBudgetsRequest.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetRequest.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationRequest.h>
#include <aws/budgets/model/ExecuteBudgetActionRequest.h>
#include <aws/budgets/model/UpdateBudgetRequest.h>
#include <aws/budgets/model/UpdateBudgetActionRequest.h>
#include <aws/budgets/model/UpdateNotificationRequest.h>
#include <aws/budgets/model/UpdateSubscriberRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Budgets;
using namespace Aws::Budgets::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* BudgetsClient::SERVICE_NAME = "budgets";
const char* BudgetsClient::ALLOCATION_TAG = "BudgetsClient";

BudgetsClient::BudgetsClient(const Budgets::BudgetsClientConfiguration& clientConfiguration,
                             std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const AWSCredentials& credentials,
                             std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider,
                             const Budgets::BudgetsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider,
                             const Budgets::BudgetsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  BudgetsClient::BudgetsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
BudgetsClient::~BudgetsClient()
{
}

std::shared_ptr<BudgetsEndpointProviderBase>& BudgetsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BudgetsClient::init(const Budgets::BudgetsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Budgets");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void BudgetsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateBudgetOutcome BudgetsClient::CreateBudget(const CreateBudgetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBudgetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBudgetOutcomeCallable BudgetsClient::CreateBudgetCallable(const CreateBudgetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBudgetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBudget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::CreateBudgetAsync(const CreateBudgetRequest& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBudget(request), context);
    } );
}

CreateBudgetActionOutcome BudgetsClient::CreateBudgetAction(const CreateBudgetActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBudgetActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBudgetActionOutcomeCallable BudgetsClient::CreateBudgetActionCallable(const CreateBudgetActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBudgetActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBudgetAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::CreateBudgetActionAsync(const CreateBudgetActionRequest& request, const CreateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBudgetAction(request), context);
    } );
}

CreateNotificationOutcome BudgetsClient::CreateNotification(const CreateNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNotificationOutcomeCallable BudgetsClient::CreateNotificationCallable(const CreateNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::CreateNotificationAsync(const CreateNotificationRequest& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNotification(request), context);
    } );
}

CreateSubscriberOutcome BudgetsClient::CreateSubscriber(const CreateSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriberOutcomeCallable BudgetsClient::CreateSubscriberCallable(const CreateSubscriberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscriber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::CreateSubscriberAsync(const CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSubscriber(request), context);
    } );
}

DeleteBudgetOutcome BudgetsClient::DeleteBudget(const DeleteBudgetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBudgetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBudgetOutcomeCallable BudgetsClient::DeleteBudgetCallable(const DeleteBudgetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBudgetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBudget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DeleteBudgetAsync(const DeleteBudgetRequest& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBudget(request), context);
    } );
}

DeleteBudgetActionOutcome BudgetsClient::DeleteBudgetAction(const DeleteBudgetActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBudgetActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBudgetActionOutcomeCallable BudgetsClient::DeleteBudgetActionCallable(const DeleteBudgetActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBudgetActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBudgetAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DeleteBudgetActionAsync(const DeleteBudgetActionRequest& request, const DeleteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBudgetAction(request), context);
    } );
}

DeleteNotificationOutcome BudgetsClient::DeleteNotification(const DeleteNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotificationOutcomeCallable BudgetsClient::DeleteNotificationCallable(const DeleteNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DeleteNotificationAsync(const DeleteNotificationRequest& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNotification(request), context);
    } );
}

DeleteSubscriberOutcome BudgetsClient::DeleteSubscriber(const DeleteSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriberOutcomeCallable BudgetsClient::DeleteSubscriberCallable(const DeleteSubscriberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubscriberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubscriber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DeleteSubscriberAsync(const DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSubscriber(request), context);
    } );
}

DescribeBudgetOutcome BudgetsClient::DescribeBudget(const DescribeBudgetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetOutcomeCallable BudgetsClient::DescribeBudgetCallable(const DescribeBudgetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetAsync(const DescribeBudgetRequest& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudget(request), context);
    } );
}

DescribeBudgetActionOutcome BudgetsClient::DescribeBudgetAction(const DescribeBudgetActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetActionOutcomeCallable BudgetsClient::DescribeBudgetActionCallable(const DescribeBudgetActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudgetAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetActionAsync(const DescribeBudgetActionRequest& request, const DescribeBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudgetAction(request), context);
    } );
}

DescribeBudgetActionHistoriesOutcome BudgetsClient::DescribeBudgetActionHistories(const DescribeBudgetActionHistoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudgetActionHistories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudgetActionHistories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetActionHistoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetActionHistoriesOutcomeCallable BudgetsClient::DescribeBudgetActionHistoriesCallable(const DescribeBudgetActionHistoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetActionHistoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudgetActionHistories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetActionHistoriesAsync(const DescribeBudgetActionHistoriesRequest& request, const DescribeBudgetActionHistoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudgetActionHistories(request), context);
    } );
}

DescribeBudgetActionsForAccountOutcome BudgetsClient::DescribeBudgetActionsForAccount(const DescribeBudgetActionsForAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudgetActionsForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudgetActionsForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetActionsForAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetActionsForAccountOutcomeCallable BudgetsClient::DescribeBudgetActionsForAccountCallable(const DescribeBudgetActionsForAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetActionsForAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudgetActionsForAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetActionsForAccountAsync(const DescribeBudgetActionsForAccountRequest& request, const DescribeBudgetActionsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudgetActionsForAccount(request), context);
    } );
}

DescribeBudgetActionsForBudgetOutcome BudgetsClient::DescribeBudgetActionsForBudget(const DescribeBudgetActionsForBudgetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudgetActionsForBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudgetActionsForBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetActionsForBudgetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetActionsForBudgetOutcomeCallable BudgetsClient::DescribeBudgetActionsForBudgetCallable(const DescribeBudgetActionsForBudgetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetActionsForBudgetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudgetActionsForBudget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetActionsForBudgetAsync(const DescribeBudgetActionsForBudgetRequest& request, const DescribeBudgetActionsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudgetActionsForBudget(request), context);
    } );
}

DescribeBudgetNotificationsForAccountOutcome BudgetsClient::DescribeBudgetNotificationsForAccount(const DescribeBudgetNotificationsForAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudgetNotificationsForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudgetNotificationsForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetNotificationsForAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetNotificationsForAccountOutcomeCallable BudgetsClient::DescribeBudgetNotificationsForAccountCallable(const DescribeBudgetNotificationsForAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetNotificationsForAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudgetNotificationsForAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetNotificationsForAccountAsync(const DescribeBudgetNotificationsForAccountRequest& request, const DescribeBudgetNotificationsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudgetNotificationsForAccount(request), context);
    } );
}

DescribeBudgetPerformanceHistoryOutcome BudgetsClient::DescribeBudgetPerformanceHistory(const DescribeBudgetPerformanceHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudgetPerformanceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudgetPerformanceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetPerformanceHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetPerformanceHistoryOutcomeCallable BudgetsClient::DescribeBudgetPerformanceHistoryCallable(const DescribeBudgetPerformanceHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetPerformanceHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudgetPerformanceHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetPerformanceHistoryAsync(const DescribeBudgetPerformanceHistoryRequest& request, const DescribeBudgetPerformanceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudgetPerformanceHistory(request), context);
    } );
}

DescribeBudgetsOutcome BudgetsClient::DescribeBudgets(const DescribeBudgetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBudgetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBudgetsOutcomeCallable BudgetsClient::DescribeBudgetsCallable(const DescribeBudgetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBudgetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBudgets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeBudgetsAsync(const DescribeBudgetsRequest& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBudgets(request), context);
    } );
}

DescribeNotificationsForBudgetOutcome BudgetsClient::DescribeNotificationsForBudget(const DescribeNotificationsForBudgetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNotificationsForBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNotificationsForBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNotificationsForBudgetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotificationsForBudgetOutcomeCallable BudgetsClient::DescribeNotificationsForBudgetCallable(const DescribeNotificationsForBudgetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotificationsForBudgetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotificationsForBudget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeNotificationsForBudgetAsync(const DescribeNotificationsForBudgetRequest& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNotificationsForBudget(request), context);
    } );
}

DescribeSubscribersForNotificationOutcome BudgetsClient::DescribeSubscribersForNotification(const DescribeSubscribersForNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSubscribersForNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSubscribersForNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSubscribersForNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubscribersForNotificationOutcomeCallable BudgetsClient::DescribeSubscribersForNotificationCallable(const DescribeSubscribersForNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscribersForNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscribersForNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::DescribeSubscribersForNotificationAsync(const DescribeSubscribersForNotificationRequest& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSubscribersForNotification(request), context);
    } );
}

ExecuteBudgetActionOutcome BudgetsClient::ExecuteBudgetAction(const ExecuteBudgetActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExecuteBudgetActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteBudgetActionOutcomeCallable BudgetsClient::ExecuteBudgetActionCallable(const ExecuteBudgetActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteBudgetActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteBudgetAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::ExecuteBudgetActionAsync(const ExecuteBudgetActionRequest& request, const ExecuteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExecuteBudgetAction(request), context);
    } );
}

UpdateBudgetOutcome BudgetsClient::UpdateBudget(const UpdateBudgetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBudgetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBudgetOutcomeCallable BudgetsClient::UpdateBudgetCallable(const UpdateBudgetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBudgetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBudget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::UpdateBudgetAsync(const UpdateBudgetRequest& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBudget(request), context);
    } );
}

UpdateBudgetActionOutcome BudgetsClient::UpdateBudgetAction(const UpdateBudgetActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBudgetAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBudgetActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBudgetActionOutcomeCallable BudgetsClient::UpdateBudgetActionCallable(const UpdateBudgetActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBudgetActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBudgetAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::UpdateBudgetActionAsync(const UpdateBudgetActionRequest& request, const UpdateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBudgetAction(request), context);
    } );
}

UpdateNotificationOutcome BudgetsClient::UpdateNotification(const UpdateNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotificationOutcomeCallable BudgetsClient::UpdateNotificationCallable(const UpdateNotificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::UpdateNotificationAsync(const UpdateNotificationRequest& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNotification(request), context);
    } );
}

UpdateSubscriberOutcome BudgetsClient::UpdateSubscriber(const UpdateSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriberOutcomeCallable BudgetsClient::UpdateSubscriberCallable(const UpdateSubscriberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscriber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BudgetsClient::UpdateSubscriberAsync(const UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSubscriber(request), context);
    } );
}

