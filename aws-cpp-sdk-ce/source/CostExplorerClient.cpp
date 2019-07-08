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

#include <aws/ce/CostExplorerClient.h>
#include <aws/ce/CostExplorerEndpoint.h>
#include <aws/ce/CostExplorerErrorMarshaller.h>
#include <aws/ce/model/GetCostAndUsageRequest.h>
#include <aws/ce/model/GetCostForecastRequest.h>
#include <aws/ce/model/GetDimensionValuesRequest.h>
#include <aws/ce/model/GetReservationCoverageRequest.h>
#include <aws/ce/model/GetReservationPurchaseRecommendationRequest.h>
#include <aws/ce/model/GetReservationUtilizationRequest.h>
#include <aws/ce/model/GetTagsRequest.h>
#include <aws/ce/model/GetUsageForecastRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CostExplorer;
using namespace Aws::CostExplorer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ce";
static const char* ALLOCATION_TAG = "CostExplorerClient";


CostExplorerClient::CostExplorerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::~CostExplorerClient()
{
}

void CostExplorerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CostExplorerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CostExplorerClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetCostAndUsageOutcome CostExplorerClient::GetCostAndUsage(const GetCostAndUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCostAndUsageOutcome(GetCostAndUsageResult(outcome.GetResult()));
  }
  else
  {
    return GetCostAndUsageOutcome(outcome.GetError());
  }
}

GetCostAndUsageOutcomeCallable CostExplorerClient::GetCostAndUsageCallable(const GetCostAndUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostAndUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostAndUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetCostAndUsageAsync(const GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCostAndUsageAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetCostAndUsageAsyncHelper(const GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCostAndUsage(request), context);
}

GetCostForecastOutcome CostExplorerClient::GetCostForecast(const GetCostForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCostForecastOutcome(GetCostForecastResult(outcome.GetResult()));
  }
  else
  {
    return GetCostForecastOutcome(outcome.GetError());
  }
}

GetCostForecastOutcomeCallable CostExplorerClient::GetCostForecastCallable(const GetCostForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetCostForecastAsync(const GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCostForecastAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetCostForecastAsyncHelper(const GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCostForecast(request), context);
}

GetDimensionValuesOutcome CostExplorerClient::GetDimensionValues(const GetDimensionValuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDimensionValuesOutcome(GetDimensionValuesResult(outcome.GetResult()));
  }
  else
  {
    return GetDimensionValuesOutcome(outcome.GetError());
  }
}

GetDimensionValuesOutcomeCallable CostExplorerClient::GetDimensionValuesCallable(const GetDimensionValuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDimensionValuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDimensionValues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetDimensionValuesAsync(const GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDimensionValuesAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetDimensionValuesAsyncHelper(const GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDimensionValues(request), context);
}

GetReservationCoverageOutcome CostExplorerClient::GetReservationCoverage(const GetReservationCoverageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetReservationCoverageOutcome(GetReservationCoverageResult(outcome.GetResult()));
  }
  else
  {
    return GetReservationCoverageOutcome(outcome.GetError());
  }
}

GetReservationCoverageOutcomeCallable CostExplorerClient::GetReservationCoverageCallable(const GetReservationCoverageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservationCoverageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservationCoverage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetReservationCoverageAsync(const GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReservationCoverageAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetReservationCoverageAsyncHelper(const GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReservationCoverage(request), context);
}

GetReservationPurchaseRecommendationOutcome CostExplorerClient::GetReservationPurchaseRecommendation(const GetReservationPurchaseRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetReservationPurchaseRecommendationOutcome(GetReservationPurchaseRecommendationResult(outcome.GetResult()));
  }
  else
  {
    return GetReservationPurchaseRecommendationOutcome(outcome.GetError());
  }
}

GetReservationPurchaseRecommendationOutcomeCallable CostExplorerClient::GetReservationPurchaseRecommendationCallable(const GetReservationPurchaseRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservationPurchaseRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservationPurchaseRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetReservationPurchaseRecommendationAsync(const GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReservationPurchaseRecommendationAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetReservationPurchaseRecommendationAsyncHelper(const GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReservationPurchaseRecommendation(request), context);
}

GetReservationUtilizationOutcome CostExplorerClient::GetReservationUtilization(const GetReservationUtilizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetReservationUtilizationOutcome(GetReservationUtilizationResult(outcome.GetResult()));
  }
  else
  {
    return GetReservationUtilizationOutcome(outcome.GetError());
  }
}

GetReservationUtilizationOutcomeCallable CostExplorerClient::GetReservationUtilizationCallable(const GetReservationUtilizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservationUtilizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservationUtilization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetReservationUtilizationAsync(const GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReservationUtilizationAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetReservationUtilizationAsyncHelper(const GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReservationUtilization(request), context);
}

GetTagsOutcome CostExplorerClient::GetTags(const GetTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTagsOutcome(GetTagsResult(outcome.GetResult()));
  }
  else
  {
    return GetTagsOutcome(outcome.GetError());
  }
}

GetTagsOutcomeCallable CostExplorerClient::GetTagsCallable(const GetTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTagsAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetTagsAsyncHelper(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTags(request), context);
}

GetUsageForecastOutcome CostExplorerClient::GetUsageForecast(const GetUsageForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUsageForecastOutcome(GetUsageForecastResult(outcome.GetResult()));
  }
  else
  {
    return GetUsageForecastOutcome(outcome.GetError());
  }
}

GetUsageForecastOutcomeCallable CostExplorerClient::GetUsageForecastCallable(const GetUsageForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetUsageForecastAsync(const GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsageForecastAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetUsageForecastAsyncHelper(const GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsageForecast(request), context);
}

