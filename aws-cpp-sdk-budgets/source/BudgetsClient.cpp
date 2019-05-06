/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/budgets/BudgetsClient.h>
#include <aws/budgets/BudgetsEndpoint.h>
#include <aws/budgets/BudgetsErrorMarshaller.h>
#include <aws/budgets/model/CreateBudgetRequest.h>
#include <aws/budgets/model/CreateNotificationRequest.h>
#include <aws/budgets/model/CreateSubscriberRequest.h>
#include <aws/budgets/model/DeleteBudgetRequest.h>
#include <aws/budgets/model/DeleteNotificationRequest.h>
#include <aws/budgets/model/DeleteSubscriberRequest.h>
#include <aws/budgets/model/DescribeBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryRequest.h>
#include <aws/budgets/model/DescribeBudgetsRequest.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetRequest.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationRequest.h>
#include <aws/budgets/model/UpdateBudgetRequest.h>
#include <aws/budgets/model/UpdateNotificationRequest.h>
#include <aws/budgets/model/UpdateSubscriberRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Budgets;
using namespace Aws::Budgets::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "budgets";
static const char* ALLOCATION_TAG = "BudgetsClient";


BudgetsClient::BudgetsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BudgetsClient::BudgetsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BudgetsClient::BudgetsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BudgetsClient::~BudgetsClient()
{
}

void BudgetsClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + BudgetsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void BudgetsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateBudgetOutcome BudgetsClient::CreateBudget(const CreateBudgetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBudgetOutcome(CreateBudgetResult(outcome.GetResult()));
  }
  else
  {
    return CreateBudgetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateBudgetAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::CreateBudgetAsyncHelper(const CreateBudgetRequest& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBudget(request), context);
}

CreateNotificationOutcome BudgetsClient::CreateNotification(const CreateNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNotificationOutcome(CreateNotificationResult(outcome.GetResult()));
  }
  else
  {
    return CreateNotificationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateNotificationAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::CreateNotificationAsyncHelper(const CreateNotificationRequest& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNotification(request), context);
}

CreateSubscriberOutcome BudgetsClient::CreateSubscriber(const CreateSubscriberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSubscriberOutcome(CreateSubscriberResult(outcome.GetResult()));
  }
  else
  {
    return CreateSubscriberOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateSubscriberAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::CreateSubscriberAsyncHelper(const CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSubscriber(request), context);
}

DeleteBudgetOutcome BudgetsClient::DeleteBudget(const DeleteBudgetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBudgetOutcome(DeleteBudgetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBudgetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBudgetAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DeleteBudgetAsyncHelper(const DeleteBudgetRequest& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBudget(request), context);
}

DeleteNotificationOutcome BudgetsClient::DeleteNotification(const DeleteNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNotificationOutcome(DeleteNotificationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNotificationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNotificationAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DeleteNotificationAsyncHelper(const DeleteNotificationRequest& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotification(request), context);
}

DeleteSubscriberOutcome BudgetsClient::DeleteSubscriber(const DeleteSubscriberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSubscriberOutcome(DeleteSubscriberResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSubscriberOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSubscriberAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DeleteSubscriberAsyncHelper(const DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSubscriber(request), context);
}

DescribeBudgetOutcome BudgetsClient::DescribeBudget(const DescribeBudgetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBudgetOutcome(DescribeBudgetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBudgetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBudgetAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DescribeBudgetAsyncHelper(const DescribeBudgetRequest& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBudget(request), context);
}

DescribeBudgetPerformanceHistoryOutcome BudgetsClient::DescribeBudgetPerformanceHistory(const DescribeBudgetPerformanceHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBudgetPerformanceHistoryOutcome(DescribeBudgetPerformanceHistoryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBudgetPerformanceHistoryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBudgetPerformanceHistoryAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DescribeBudgetPerformanceHistoryAsyncHelper(const DescribeBudgetPerformanceHistoryRequest& request, const DescribeBudgetPerformanceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBudgetPerformanceHistory(request), context);
}

DescribeBudgetsOutcome BudgetsClient::DescribeBudgets(const DescribeBudgetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBudgetsOutcome(DescribeBudgetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBudgetsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBudgetsAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DescribeBudgetsAsyncHelper(const DescribeBudgetsRequest& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBudgets(request), context);
}

DescribeNotificationsForBudgetOutcome BudgetsClient::DescribeNotificationsForBudget(const DescribeNotificationsForBudgetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeNotificationsForBudgetOutcome(DescribeNotificationsForBudgetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeNotificationsForBudgetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNotificationsForBudgetAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DescribeNotificationsForBudgetAsyncHelper(const DescribeNotificationsForBudgetRequest& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotificationsForBudget(request), context);
}

DescribeSubscribersForNotificationOutcome BudgetsClient::DescribeSubscribersForNotification(const DescribeSubscribersForNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSubscribersForNotificationOutcome(DescribeSubscribersForNotificationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSubscribersForNotificationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSubscribersForNotificationAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::DescribeSubscribersForNotificationAsyncHelper(const DescribeSubscribersForNotificationRequest& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSubscribersForNotification(request), context);
}

UpdateBudgetOutcome BudgetsClient::UpdateBudget(const UpdateBudgetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBudgetOutcome(UpdateBudgetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBudgetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBudgetAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::UpdateBudgetAsyncHelper(const UpdateBudgetRequest& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBudget(request), context);
}

UpdateNotificationOutcome BudgetsClient::UpdateNotification(const UpdateNotificationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNotificationOutcome(UpdateNotificationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNotificationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNotificationAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::UpdateNotificationAsyncHelper(const UpdateNotificationRequest& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNotification(request), context);
}

UpdateSubscriberOutcome BudgetsClient::UpdateSubscriber(const UpdateSubscriberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSubscriberOutcome(UpdateSubscriberResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSubscriberOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSubscriberAsyncHelper( request, handler, context ); } );
}

void BudgetsClient::UpdateSubscriberAsyncHelper(const UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSubscriber(request), context);
}

