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

#include <aws/ce/CostExplorerClient.h>
#include <aws/ce/CostExplorerEndpoint.h>
#include <aws/ce/CostExplorerErrorMarshaller.h>
#include <aws/ce/model/CreateAnomalyMonitorRequest.h>
#include <aws/ce/model/CreateAnomalySubscriptionRequest.h>
#include <aws/ce/model/CreateCostCategoryDefinitionRequest.h>
#include <aws/ce/model/DeleteAnomalyMonitorRequest.h>
#include <aws/ce/model/DeleteAnomalySubscriptionRequest.h>
#include <aws/ce/model/DeleteCostCategoryDefinitionRequest.h>
#include <aws/ce/model/DescribeCostCategoryDefinitionRequest.h>
#include <aws/ce/model/GetAnomaliesRequest.h>
#include <aws/ce/model/GetAnomalyMonitorsRequest.h>
#include <aws/ce/model/GetAnomalySubscriptionsRequest.h>
#include <aws/ce/model/GetCostAndUsageRequest.h>
#include <aws/ce/model/GetCostAndUsageWithResourcesRequest.h>
#include <aws/ce/model/GetCostForecastRequest.h>
#include <aws/ce/model/GetDimensionValuesRequest.h>
#include <aws/ce/model/GetReservationCoverageRequest.h>
#include <aws/ce/model/GetReservationPurchaseRecommendationRequest.h>
#include <aws/ce/model/GetReservationUtilizationRequest.h>
#include <aws/ce/model/GetRightsizingRecommendationRequest.h>
#include <aws/ce/model/GetSavingsPlansCoverageRequest.h>
#include <aws/ce/model/GetSavingsPlansPurchaseRecommendationRequest.h>
#include <aws/ce/model/GetSavingsPlansUtilizationRequest.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsRequest.h>
#include <aws/ce/model/GetTagsRequest.h>
#include <aws/ce/model/GetUsageForecastRequest.h>
#include <aws/ce/model/ListCostCategoryDefinitionsRequest.h>
#include <aws/ce/model/ProvideAnomalyFeedbackRequest.h>
#include <aws/ce/model/UpdateAnomalyMonitorRequest.h>
#include <aws/ce/model/UpdateAnomalySubscriptionRequest.h>
#include <aws/ce/model/UpdateCostCategoryDefinitionRequest.h>

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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("Cost Explorer");
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

CreateAnomalyMonitorOutcome CostExplorerClient::CreateAnomalyMonitor(const CreateAnomalyMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAnomalyMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnomalyMonitorOutcomeCallable CostExplorerClient::CreateAnomalyMonitorCallable(const CreateAnomalyMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnomalyMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnomalyMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::CreateAnomalyMonitorAsync(const CreateAnomalyMonitorRequest& request, const CreateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAnomalyMonitorAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::CreateAnomalyMonitorAsyncHelper(const CreateAnomalyMonitorRequest& request, const CreateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAnomalyMonitor(request), context);
}

CreateAnomalySubscriptionOutcome CostExplorerClient::CreateAnomalySubscription(const CreateAnomalySubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAnomalySubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnomalySubscriptionOutcomeCallable CostExplorerClient::CreateAnomalySubscriptionCallable(const CreateAnomalySubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnomalySubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnomalySubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::CreateAnomalySubscriptionAsync(const CreateAnomalySubscriptionRequest& request, const CreateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAnomalySubscriptionAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::CreateAnomalySubscriptionAsyncHelper(const CreateAnomalySubscriptionRequest& request, const CreateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAnomalySubscription(request), context);
}

CreateCostCategoryDefinitionOutcome CostExplorerClient::CreateCostCategoryDefinition(const CreateCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCostCategoryDefinitionOutcomeCallable CostExplorerClient::CreateCostCategoryDefinitionCallable(const CreateCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::CreateCostCategoryDefinitionAsync(const CreateCostCategoryDefinitionRequest& request, const CreateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCostCategoryDefinitionAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::CreateCostCategoryDefinitionAsyncHelper(const CreateCostCategoryDefinitionRequest& request, const CreateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCostCategoryDefinition(request), context);
}

DeleteAnomalyMonitorOutcome CostExplorerClient::DeleteAnomalyMonitor(const DeleteAnomalyMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAnomalyMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnomalyMonitorOutcomeCallable CostExplorerClient::DeleteAnomalyMonitorCallable(const DeleteAnomalyMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnomalyMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnomalyMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::DeleteAnomalyMonitorAsync(const DeleteAnomalyMonitorRequest& request, const DeleteAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAnomalyMonitorAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::DeleteAnomalyMonitorAsyncHelper(const DeleteAnomalyMonitorRequest& request, const DeleteAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAnomalyMonitor(request), context);
}

DeleteAnomalySubscriptionOutcome CostExplorerClient::DeleteAnomalySubscription(const DeleteAnomalySubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAnomalySubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnomalySubscriptionOutcomeCallable CostExplorerClient::DeleteAnomalySubscriptionCallable(const DeleteAnomalySubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnomalySubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnomalySubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::DeleteAnomalySubscriptionAsync(const DeleteAnomalySubscriptionRequest& request, const DeleteAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAnomalySubscriptionAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::DeleteAnomalySubscriptionAsyncHelper(const DeleteAnomalySubscriptionRequest& request, const DeleteAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAnomalySubscription(request), context);
}

DeleteCostCategoryDefinitionOutcome CostExplorerClient::DeleteCostCategoryDefinition(const DeleteCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCostCategoryDefinitionOutcomeCallable CostExplorerClient::DeleteCostCategoryDefinitionCallable(const DeleteCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::DeleteCostCategoryDefinitionAsync(const DeleteCostCategoryDefinitionRequest& request, const DeleteCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCostCategoryDefinitionAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::DeleteCostCategoryDefinitionAsyncHelper(const DeleteCostCategoryDefinitionRequest& request, const DeleteCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCostCategoryDefinition(request), context);
}

DescribeCostCategoryDefinitionOutcome CostExplorerClient::DescribeCostCategoryDefinition(const DescribeCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCostCategoryDefinitionOutcomeCallable CostExplorerClient::DescribeCostCategoryDefinitionCallable(const DescribeCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::DescribeCostCategoryDefinitionAsync(const DescribeCostCategoryDefinitionRequest& request, const DescribeCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCostCategoryDefinitionAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::DescribeCostCategoryDefinitionAsyncHelper(const DescribeCostCategoryDefinitionRequest& request, const DescribeCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCostCategoryDefinition(request), context);
}

GetAnomaliesOutcome CostExplorerClient::GetAnomalies(const GetAnomaliesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAnomaliesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomaliesOutcomeCallable CostExplorerClient::GetAnomaliesCallable(const GetAnomaliesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnomaliesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnomalies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetAnomaliesAsync(const GetAnomaliesRequest& request, const GetAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAnomaliesAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetAnomaliesAsyncHelper(const GetAnomaliesRequest& request, const GetAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAnomalies(request), context);
}

GetAnomalyMonitorsOutcome CostExplorerClient::GetAnomalyMonitors(const GetAnomalyMonitorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAnomalyMonitorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomalyMonitorsOutcomeCallable CostExplorerClient::GetAnomalyMonitorsCallable(const GetAnomalyMonitorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnomalyMonitorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnomalyMonitors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetAnomalyMonitorsAsync(const GetAnomalyMonitorsRequest& request, const GetAnomalyMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAnomalyMonitorsAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetAnomalyMonitorsAsyncHelper(const GetAnomalyMonitorsRequest& request, const GetAnomalyMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAnomalyMonitors(request), context);
}

GetAnomalySubscriptionsOutcome CostExplorerClient::GetAnomalySubscriptions(const GetAnomalySubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAnomalySubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomalySubscriptionsOutcomeCallable CostExplorerClient::GetAnomalySubscriptionsCallable(const GetAnomalySubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnomalySubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnomalySubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetAnomalySubscriptionsAsync(const GetAnomalySubscriptionsRequest& request, const GetAnomalySubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAnomalySubscriptionsAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetAnomalySubscriptionsAsyncHelper(const GetAnomalySubscriptionsRequest& request, const GetAnomalySubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAnomalySubscriptions(request), context);
}

GetCostAndUsageOutcome CostExplorerClient::GetCostAndUsage(const GetCostAndUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetCostAndUsageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

GetCostAndUsageWithResourcesOutcome CostExplorerClient::GetCostAndUsageWithResources(const GetCostAndUsageWithResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetCostAndUsageWithResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCostAndUsageWithResourcesOutcomeCallable CostExplorerClient::GetCostAndUsageWithResourcesCallable(const GetCostAndUsageWithResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostAndUsageWithResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostAndUsageWithResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetCostAndUsageWithResourcesAsync(const GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCostAndUsageWithResourcesAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetCostAndUsageWithResourcesAsyncHelper(const GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCostAndUsageWithResources(request), context);
}

GetCostForecastOutcome CostExplorerClient::GetCostForecast(const GetCostForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetCostForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetDimensionValuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetReservationCoverageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetReservationPurchaseRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetReservationUtilizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

GetRightsizingRecommendationOutcome CostExplorerClient::GetRightsizingRecommendation(const GetRightsizingRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRightsizingRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRightsizingRecommendationOutcomeCallable CostExplorerClient::GetRightsizingRecommendationCallable(const GetRightsizingRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRightsizingRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRightsizingRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetRightsizingRecommendationAsync(const GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRightsizingRecommendationAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetRightsizingRecommendationAsyncHelper(const GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRightsizingRecommendation(request), context);
}

GetSavingsPlansCoverageOutcome CostExplorerClient::GetSavingsPlansCoverage(const GetSavingsPlansCoverageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSavingsPlansCoverageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansCoverageOutcomeCallable CostExplorerClient::GetSavingsPlansCoverageCallable(const GetSavingsPlansCoverageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansCoverageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansCoverage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetSavingsPlansCoverageAsync(const GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSavingsPlansCoverageAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetSavingsPlansCoverageAsyncHelper(const GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSavingsPlansCoverage(request), context);
}

GetSavingsPlansPurchaseRecommendationOutcome CostExplorerClient::GetSavingsPlansPurchaseRecommendation(const GetSavingsPlansPurchaseRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSavingsPlansPurchaseRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansPurchaseRecommendationOutcomeCallable CostExplorerClient::GetSavingsPlansPurchaseRecommendationCallable(const GetSavingsPlansPurchaseRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansPurchaseRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansPurchaseRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetSavingsPlansPurchaseRecommendationAsync(const GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSavingsPlansPurchaseRecommendationAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetSavingsPlansPurchaseRecommendationAsyncHelper(const GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSavingsPlansPurchaseRecommendation(request), context);
}

GetSavingsPlansUtilizationOutcome CostExplorerClient::GetSavingsPlansUtilization(const GetSavingsPlansUtilizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSavingsPlansUtilizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansUtilizationOutcomeCallable CostExplorerClient::GetSavingsPlansUtilizationCallable(const GetSavingsPlansUtilizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansUtilizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansUtilization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetSavingsPlansUtilizationAsync(const GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSavingsPlansUtilizationAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetSavingsPlansUtilizationAsyncHelper(const GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSavingsPlansUtilization(request), context);
}

GetSavingsPlansUtilizationDetailsOutcome CostExplorerClient::GetSavingsPlansUtilizationDetails(const GetSavingsPlansUtilizationDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSavingsPlansUtilizationDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansUtilizationDetailsOutcomeCallable CostExplorerClient::GetSavingsPlansUtilizationDetailsCallable(const GetSavingsPlansUtilizationDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansUtilizationDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansUtilizationDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::GetSavingsPlansUtilizationDetailsAsync(const GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSavingsPlansUtilizationDetailsAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::GetSavingsPlansUtilizationDetailsAsyncHelper(const GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSavingsPlansUtilizationDetails(request), context);
}

GetTagsOutcome CostExplorerClient::GetTags(const GetTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetUsageForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

ListCostCategoryDefinitionsOutcome CostExplorerClient::ListCostCategoryDefinitions(const ListCostCategoryDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListCostCategoryDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCostCategoryDefinitionsOutcomeCallable CostExplorerClient::ListCostCategoryDefinitionsCallable(const ListCostCategoryDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCostCategoryDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCostCategoryDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::ListCostCategoryDefinitionsAsync(const ListCostCategoryDefinitionsRequest& request, const ListCostCategoryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCostCategoryDefinitionsAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::ListCostCategoryDefinitionsAsyncHelper(const ListCostCategoryDefinitionsRequest& request, const ListCostCategoryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCostCategoryDefinitions(request), context);
}

ProvideAnomalyFeedbackOutcome CostExplorerClient::ProvideAnomalyFeedback(const ProvideAnomalyFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ProvideAnomalyFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvideAnomalyFeedbackOutcomeCallable CostExplorerClient::ProvideAnomalyFeedbackCallable(const ProvideAnomalyFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvideAnomalyFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvideAnomalyFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::ProvideAnomalyFeedbackAsync(const ProvideAnomalyFeedbackRequest& request, const ProvideAnomalyFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvideAnomalyFeedbackAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::ProvideAnomalyFeedbackAsyncHelper(const ProvideAnomalyFeedbackRequest& request, const ProvideAnomalyFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvideAnomalyFeedback(request), context);
}

UpdateAnomalyMonitorOutcome CostExplorerClient::UpdateAnomalyMonitor(const UpdateAnomalyMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAnomalyMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnomalyMonitorOutcomeCallable CostExplorerClient::UpdateAnomalyMonitorCallable(const UpdateAnomalyMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnomalyMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnomalyMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::UpdateAnomalyMonitorAsync(const UpdateAnomalyMonitorRequest& request, const UpdateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAnomalyMonitorAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::UpdateAnomalyMonitorAsyncHelper(const UpdateAnomalyMonitorRequest& request, const UpdateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAnomalyMonitor(request), context);
}

UpdateAnomalySubscriptionOutcome CostExplorerClient::UpdateAnomalySubscription(const UpdateAnomalySubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAnomalySubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnomalySubscriptionOutcomeCallable CostExplorerClient::UpdateAnomalySubscriptionCallable(const UpdateAnomalySubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnomalySubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnomalySubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::UpdateAnomalySubscriptionAsync(const UpdateAnomalySubscriptionRequest& request, const UpdateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAnomalySubscriptionAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::UpdateAnomalySubscriptionAsyncHelper(const UpdateAnomalySubscriptionRequest& request, const UpdateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAnomalySubscription(request), context);
}

UpdateCostCategoryDefinitionOutcome CostExplorerClient::UpdateCostCategoryDefinition(const UpdateCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCostCategoryDefinitionOutcomeCallable CostExplorerClient::UpdateCostCategoryDefinitionCallable(const UpdateCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClient::UpdateCostCategoryDefinitionAsync(const UpdateCostCategoryDefinitionRequest& request, const UpdateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCostCategoryDefinitionAsyncHelper( request, handler, context ); } );
}

void CostExplorerClient::UpdateCostCategoryDefinitionAsyncHelper(const UpdateCostCategoryDefinitionRequest& request, const UpdateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCostCategoryDefinition(request), context);
}

