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
#include <aws/ce/model/GetCostCategoriesRequest.h>
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
#include <aws/ce/model/ListCostAllocationTagsRequest.h>
#include <aws/ce/model/ListCostCategoryDefinitionsRequest.h>
#include <aws/ce/model/ListTagsForResourceRequest.h>
#include <aws/ce/model/ProvideAnomalyFeedbackRequest.h>
#include <aws/ce/model/TagResourceRequest.h>
#include <aws/ce/model/UntagResourceRequest.h>
#include <aws/ce/model/UpdateAnomalyMonitorRequest.h>
#include <aws/ce/model/UpdateAnomalySubscriptionRequest.h>
#include <aws/ce/model/UpdateCostAllocationTagsStatusRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostExplorerClient::~CostExplorerClient()
{
}

void CostExplorerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Cost Explorer");
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
  return CreateAnomalyMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnomalyMonitorOutcomeCallable CostExplorerClient::CreateAnomalyMonitorCallable(const CreateAnomalyMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnomalyMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnomalyMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientCreateAnomalyMonitorAsyncHelper(CostExplorerClient const * const clientThis, const CreateAnomalyMonitorRequest& request, const CreateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAnomalyMonitor(request), context);
}

void CostExplorerClient::CreateAnomalyMonitorAsync(const CreateAnomalyMonitorRequest& request, const CreateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientCreateAnomalyMonitorAsyncHelper( this, request, handler, context ); } );
}

CreateAnomalySubscriptionOutcome CostExplorerClient::CreateAnomalySubscription(const CreateAnomalySubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAnomalySubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnomalySubscriptionOutcomeCallable CostExplorerClient::CreateAnomalySubscriptionCallable(const CreateAnomalySubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnomalySubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnomalySubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientCreateAnomalySubscriptionAsyncHelper(CostExplorerClient const * const clientThis, const CreateAnomalySubscriptionRequest& request, const CreateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAnomalySubscription(request), context);
}

void CostExplorerClient::CreateAnomalySubscriptionAsync(const CreateAnomalySubscriptionRequest& request, const CreateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientCreateAnomalySubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateCostCategoryDefinitionOutcome CostExplorerClient::CreateCostCategoryDefinition(const CreateCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCostCategoryDefinitionOutcomeCallable CostExplorerClient::CreateCostCategoryDefinitionCallable(const CreateCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientCreateCostCategoryDefinitionAsyncHelper(CostExplorerClient const * const clientThis, const CreateCostCategoryDefinitionRequest& request, const CreateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCostCategoryDefinition(request), context);
}

void CostExplorerClient::CreateCostCategoryDefinitionAsync(const CreateCostCategoryDefinitionRequest& request, const CreateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientCreateCostCategoryDefinitionAsyncHelper( this, request, handler, context ); } );
}

DeleteAnomalyMonitorOutcome CostExplorerClient::DeleteAnomalyMonitor(const DeleteAnomalyMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAnomalyMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnomalyMonitorOutcomeCallable CostExplorerClient::DeleteAnomalyMonitorCallable(const DeleteAnomalyMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnomalyMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnomalyMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientDeleteAnomalyMonitorAsyncHelper(CostExplorerClient const * const clientThis, const DeleteAnomalyMonitorRequest& request, const DeleteAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAnomalyMonitor(request), context);
}

void CostExplorerClient::DeleteAnomalyMonitorAsync(const DeleteAnomalyMonitorRequest& request, const DeleteAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientDeleteAnomalyMonitorAsyncHelper( this, request, handler, context ); } );
}

DeleteAnomalySubscriptionOutcome CostExplorerClient::DeleteAnomalySubscription(const DeleteAnomalySubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAnomalySubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnomalySubscriptionOutcomeCallable CostExplorerClient::DeleteAnomalySubscriptionCallable(const DeleteAnomalySubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnomalySubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnomalySubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientDeleteAnomalySubscriptionAsyncHelper(CostExplorerClient const * const clientThis, const DeleteAnomalySubscriptionRequest& request, const DeleteAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAnomalySubscription(request), context);
}

void CostExplorerClient::DeleteAnomalySubscriptionAsync(const DeleteAnomalySubscriptionRequest& request, const DeleteAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientDeleteAnomalySubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteCostCategoryDefinitionOutcome CostExplorerClient::DeleteCostCategoryDefinition(const DeleteCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCostCategoryDefinitionOutcomeCallable CostExplorerClient::DeleteCostCategoryDefinitionCallable(const DeleteCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientDeleteCostCategoryDefinitionAsyncHelper(CostExplorerClient const * const clientThis, const DeleteCostCategoryDefinitionRequest& request, const DeleteCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCostCategoryDefinition(request), context);
}

void CostExplorerClient::DeleteCostCategoryDefinitionAsync(const DeleteCostCategoryDefinitionRequest& request, const DeleteCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientDeleteCostCategoryDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeCostCategoryDefinitionOutcome CostExplorerClient::DescribeCostCategoryDefinition(const DescribeCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCostCategoryDefinitionOutcomeCallable CostExplorerClient::DescribeCostCategoryDefinitionCallable(const DescribeCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientDescribeCostCategoryDefinitionAsyncHelper(CostExplorerClient const * const clientThis, const DescribeCostCategoryDefinitionRequest& request, const DescribeCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCostCategoryDefinition(request), context);
}

void CostExplorerClient::DescribeCostCategoryDefinitionAsync(const DescribeCostCategoryDefinitionRequest& request, const DescribeCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientDescribeCostCategoryDefinitionAsyncHelper( this, request, handler, context ); } );
}

GetAnomaliesOutcome CostExplorerClient::GetAnomalies(const GetAnomaliesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAnomaliesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomaliesOutcomeCallable CostExplorerClient::GetAnomaliesCallable(const GetAnomaliesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnomaliesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnomalies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetAnomaliesAsyncHelper(CostExplorerClient const * const clientThis, const GetAnomaliesRequest& request, const GetAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAnomalies(request), context);
}

void CostExplorerClient::GetAnomaliesAsync(const GetAnomaliesRequest& request, const GetAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetAnomaliesAsyncHelper( this, request, handler, context ); } );
}

GetAnomalyMonitorsOutcome CostExplorerClient::GetAnomalyMonitors(const GetAnomalyMonitorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAnomalyMonitorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomalyMonitorsOutcomeCallable CostExplorerClient::GetAnomalyMonitorsCallable(const GetAnomalyMonitorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnomalyMonitorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnomalyMonitors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetAnomalyMonitorsAsyncHelper(CostExplorerClient const * const clientThis, const GetAnomalyMonitorsRequest& request, const GetAnomalyMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAnomalyMonitors(request), context);
}

void CostExplorerClient::GetAnomalyMonitorsAsync(const GetAnomalyMonitorsRequest& request, const GetAnomalyMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetAnomalyMonitorsAsyncHelper( this, request, handler, context ); } );
}

GetAnomalySubscriptionsOutcome CostExplorerClient::GetAnomalySubscriptions(const GetAnomalySubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAnomalySubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomalySubscriptionsOutcomeCallable CostExplorerClient::GetAnomalySubscriptionsCallable(const GetAnomalySubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnomalySubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnomalySubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetAnomalySubscriptionsAsyncHelper(CostExplorerClient const * const clientThis, const GetAnomalySubscriptionsRequest& request, const GetAnomalySubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAnomalySubscriptions(request), context);
}

void CostExplorerClient::GetAnomalySubscriptionsAsync(const GetAnomalySubscriptionsRequest& request, const GetAnomalySubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetAnomalySubscriptionsAsyncHelper( this, request, handler, context ); } );
}

GetCostAndUsageOutcome CostExplorerClient::GetCostAndUsage(const GetCostAndUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCostAndUsageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCostAndUsageOutcomeCallable CostExplorerClient::GetCostAndUsageCallable(const GetCostAndUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostAndUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostAndUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetCostAndUsageAsyncHelper(CostExplorerClient const * const clientThis, const GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCostAndUsage(request), context);
}

void CostExplorerClient::GetCostAndUsageAsync(const GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetCostAndUsageAsyncHelper( this, request, handler, context ); } );
}

GetCostAndUsageWithResourcesOutcome CostExplorerClient::GetCostAndUsageWithResources(const GetCostAndUsageWithResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCostAndUsageWithResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCostAndUsageWithResourcesOutcomeCallable CostExplorerClient::GetCostAndUsageWithResourcesCallable(const GetCostAndUsageWithResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostAndUsageWithResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostAndUsageWithResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetCostAndUsageWithResourcesAsyncHelper(CostExplorerClient const * const clientThis, const GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCostAndUsageWithResources(request), context);
}

void CostExplorerClient::GetCostAndUsageWithResourcesAsync(const GetCostAndUsageWithResourcesRequest& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetCostAndUsageWithResourcesAsyncHelper( this, request, handler, context ); } );
}

GetCostCategoriesOutcome CostExplorerClient::GetCostCategories(const GetCostCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCostCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCostCategoriesOutcomeCallable CostExplorerClient::GetCostCategoriesCallable(const GetCostCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetCostCategoriesAsyncHelper(CostExplorerClient const * const clientThis, const GetCostCategoriesRequest& request, const GetCostCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCostCategories(request), context);
}

void CostExplorerClient::GetCostCategoriesAsync(const GetCostCategoriesRequest& request, const GetCostCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetCostCategoriesAsyncHelper( this, request, handler, context ); } );
}

GetCostForecastOutcome CostExplorerClient::GetCostForecast(const GetCostForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCostForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCostForecastOutcomeCallable CostExplorerClient::GetCostForecastCallable(const GetCostForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetCostForecastAsyncHelper(CostExplorerClient const * const clientThis, const GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCostForecast(request), context);
}

void CostExplorerClient::GetCostForecastAsync(const GetCostForecastRequest& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetCostForecastAsyncHelper( this, request, handler, context ); } );
}

GetDimensionValuesOutcome CostExplorerClient::GetDimensionValues(const GetDimensionValuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDimensionValuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDimensionValuesOutcomeCallable CostExplorerClient::GetDimensionValuesCallable(const GetDimensionValuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDimensionValuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDimensionValues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetDimensionValuesAsyncHelper(CostExplorerClient const * const clientThis, const GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDimensionValues(request), context);
}

void CostExplorerClient::GetDimensionValuesAsync(const GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetDimensionValuesAsyncHelper( this, request, handler, context ); } );
}

GetReservationCoverageOutcome CostExplorerClient::GetReservationCoverage(const GetReservationCoverageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetReservationCoverageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReservationCoverageOutcomeCallable CostExplorerClient::GetReservationCoverageCallable(const GetReservationCoverageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservationCoverageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservationCoverage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetReservationCoverageAsyncHelper(CostExplorerClient const * const clientThis, const GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetReservationCoverage(request), context);
}

void CostExplorerClient::GetReservationCoverageAsync(const GetReservationCoverageRequest& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetReservationCoverageAsyncHelper( this, request, handler, context ); } );
}

GetReservationPurchaseRecommendationOutcome CostExplorerClient::GetReservationPurchaseRecommendation(const GetReservationPurchaseRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetReservationPurchaseRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReservationPurchaseRecommendationOutcomeCallable CostExplorerClient::GetReservationPurchaseRecommendationCallable(const GetReservationPurchaseRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservationPurchaseRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservationPurchaseRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetReservationPurchaseRecommendationAsyncHelper(CostExplorerClient const * const clientThis, const GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetReservationPurchaseRecommendation(request), context);
}

void CostExplorerClient::GetReservationPurchaseRecommendationAsync(const GetReservationPurchaseRecommendationRequest& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetReservationPurchaseRecommendationAsyncHelper( this, request, handler, context ); } );
}

GetReservationUtilizationOutcome CostExplorerClient::GetReservationUtilization(const GetReservationUtilizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetReservationUtilizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReservationUtilizationOutcomeCallable CostExplorerClient::GetReservationUtilizationCallable(const GetReservationUtilizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReservationUtilizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReservationUtilization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetReservationUtilizationAsyncHelper(CostExplorerClient const * const clientThis, const GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetReservationUtilization(request), context);
}

void CostExplorerClient::GetReservationUtilizationAsync(const GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetReservationUtilizationAsyncHelper( this, request, handler, context ); } );
}

GetRightsizingRecommendationOutcome CostExplorerClient::GetRightsizingRecommendation(const GetRightsizingRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRightsizingRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRightsizingRecommendationOutcomeCallable CostExplorerClient::GetRightsizingRecommendationCallable(const GetRightsizingRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRightsizingRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRightsizingRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetRightsizingRecommendationAsyncHelper(CostExplorerClient const * const clientThis, const GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRightsizingRecommendation(request), context);
}

void CostExplorerClient::GetRightsizingRecommendationAsync(const GetRightsizingRecommendationRequest& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetRightsizingRecommendationAsyncHelper( this, request, handler, context ); } );
}

GetSavingsPlansCoverageOutcome CostExplorerClient::GetSavingsPlansCoverage(const GetSavingsPlansCoverageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSavingsPlansCoverageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansCoverageOutcomeCallable CostExplorerClient::GetSavingsPlansCoverageCallable(const GetSavingsPlansCoverageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansCoverageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansCoverage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetSavingsPlansCoverageAsyncHelper(CostExplorerClient const * const clientThis, const GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSavingsPlansCoverage(request), context);
}

void CostExplorerClient::GetSavingsPlansCoverageAsync(const GetSavingsPlansCoverageRequest& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetSavingsPlansCoverageAsyncHelper( this, request, handler, context ); } );
}

GetSavingsPlansPurchaseRecommendationOutcome CostExplorerClient::GetSavingsPlansPurchaseRecommendation(const GetSavingsPlansPurchaseRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSavingsPlansPurchaseRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansPurchaseRecommendationOutcomeCallable CostExplorerClient::GetSavingsPlansPurchaseRecommendationCallable(const GetSavingsPlansPurchaseRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansPurchaseRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansPurchaseRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetSavingsPlansPurchaseRecommendationAsyncHelper(CostExplorerClient const * const clientThis, const GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSavingsPlansPurchaseRecommendation(request), context);
}

void CostExplorerClient::GetSavingsPlansPurchaseRecommendationAsync(const GetSavingsPlansPurchaseRecommendationRequest& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetSavingsPlansPurchaseRecommendationAsyncHelper( this, request, handler, context ); } );
}

GetSavingsPlansUtilizationOutcome CostExplorerClient::GetSavingsPlansUtilization(const GetSavingsPlansUtilizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSavingsPlansUtilizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansUtilizationOutcomeCallable CostExplorerClient::GetSavingsPlansUtilizationCallable(const GetSavingsPlansUtilizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansUtilizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansUtilization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetSavingsPlansUtilizationAsyncHelper(CostExplorerClient const * const clientThis, const GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSavingsPlansUtilization(request), context);
}

void CostExplorerClient::GetSavingsPlansUtilizationAsync(const GetSavingsPlansUtilizationRequest& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetSavingsPlansUtilizationAsyncHelper( this, request, handler, context ); } );
}

GetSavingsPlansUtilizationDetailsOutcome CostExplorerClient::GetSavingsPlansUtilizationDetails(const GetSavingsPlansUtilizationDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSavingsPlansUtilizationDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSavingsPlansUtilizationDetailsOutcomeCallable CostExplorerClient::GetSavingsPlansUtilizationDetailsCallable(const GetSavingsPlansUtilizationDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSavingsPlansUtilizationDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSavingsPlansUtilizationDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetSavingsPlansUtilizationDetailsAsyncHelper(CostExplorerClient const * const clientThis, const GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSavingsPlansUtilizationDetails(request), context);
}

void CostExplorerClient::GetSavingsPlansUtilizationDetailsAsync(const GetSavingsPlansUtilizationDetailsRequest& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetSavingsPlansUtilizationDetailsAsyncHelper( this, request, handler, context ); } );
}

GetTagsOutcome CostExplorerClient::GetTags(const GetTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTagsOutcomeCallable CostExplorerClient::GetTagsCallable(const GetTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetTagsAsyncHelper(CostExplorerClient const * const clientThis, const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTags(request), context);
}

void CostExplorerClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetTagsAsyncHelper( this, request, handler, context ); } );
}

GetUsageForecastOutcome CostExplorerClient::GetUsageForecast(const GetUsageForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUsageForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUsageForecastOutcomeCallable CostExplorerClient::GetUsageForecastCallable(const GetUsageForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientGetUsageForecastAsyncHelper(CostExplorerClient const * const clientThis, const GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsageForecast(request), context);
}

void CostExplorerClient::GetUsageForecastAsync(const GetUsageForecastRequest& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientGetUsageForecastAsyncHelper( this, request, handler, context ); } );
}

ListCostAllocationTagsOutcome CostExplorerClient::ListCostAllocationTags(const ListCostAllocationTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCostAllocationTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCostAllocationTagsOutcomeCallable CostExplorerClient::ListCostAllocationTagsCallable(const ListCostAllocationTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCostAllocationTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCostAllocationTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientListCostAllocationTagsAsyncHelper(CostExplorerClient const * const clientThis, const ListCostAllocationTagsRequest& request, const ListCostAllocationTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCostAllocationTags(request), context);
}

void CostExplorerClient::ListCostAllocationTagsAsync(const ListCostAllocationTagsRequest& request, const ListCostAllocationTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientListCostAllocationTagsAsyncHelper( this, request, handler, context ); } );
}

ListCostCategoryDefinitionsOutcome CostExplorerClient::ListCostCategoryDefinitions(const ListCostCategoryDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCostCategoryDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCostCategoryDefinitionsOutcomeCallable CostExplorerClient::ListCostCategoryDefinitionsCallable(const ListCostCategoryDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCostCategoryDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCostCategoryDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientListCostCategoryDefinitionsAsyncHelper(CostExplorerClient const * const clientThis, const ListCostCategoryDefinitionsRequest& request, const ListCostCategoryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCostCategoryDefinitions(request), context);
}

void CostExplorerClient::ListCostCategoryDefinitionsAsync(const ListCostCategoryDefinitionsRequest& request, const ListCostCategoryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientListCostCategoryDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CostExplorerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CostExplorerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientListTagsForResourceAsyncHelper(CostExplorerClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CostExplorerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ProvideAnomalyFeedbackOutcome CostExplorerClient::ProvideAnomalyFeedback(const ProvideAnomalyFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ProvideAnomalyFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvideAnomalyFeedbackOutcomeCallable CostExplorerClient::ProvideAnomalyFeedbackCallable(const ProvideAnomalyFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvideAnomalyFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvideAnomalyFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientProvideAnomalyFeedbackAsyncHelper(CostExplorerClient const * const clientThis, const ProvideAnomalyFeedbackRequest& request, const ProvideAnomalyFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ProvideAnomalyFeedback(request), context);
}

void CostExplorerClient::ProvideAnomalyFeedbackAsync(const ProvideAnomalyFeedbackRequest& request, const ProvideAnomalyFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientProvideAnomalyFeedbackAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CostExplorerClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CostExplorerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientTagResourceAsyncHelper(CostExplorerClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CostExplorerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CostExplorerClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CostExplorerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientUntagResourceAsyncHelper(CostExplorerClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CostExplorerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAnomalyMonitorOutcome CostExplorerClient::UpdateAnomalyMonitor(const UpdateAnomalyMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAnomalyMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnomalyMonitorOutcomeCallable CostExplorerClient::UpdateAnomalyMonitorCallable(const UpdateAnomalyMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnomalyMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnomalyMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientUpdateAnomalyMonitorAsyncHelper(CostExplorerClient const * const clientThis, const UpdateAnomalyMonitorRequest& request, const UpdateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAnomalyMonitor(request), context);
}

void CostExplorerClient::UpdateAnomalyMonitorAsync(const UpdateAnomalyMonitorRequest& request, const UpdateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientUpdateAnomalyMonitorAsyncHelper( this, request, handler, context ); } );
}

UpdateAnomalySubscriptionOutcome CostExplorerClient::UpdateAnomalySubscription(const UpdateAnomalySubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAnomalySubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnomalySubscriptionOutcomeCallable CostExplorerClient::UpdateAnomalySubscriptionCallable(const UpdateAnomalySubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnomalySubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnomalySubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientUpdateAnomalySubscriptionAsyncHelper(CostExplorerClient const * const clientThis, const UpdateAnomalySubscriptionRequest& request, const UpdateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAnomalySubscription(request), context);
}

void CostExplorerClient::UpdateAnomalySubscriptionAsync(const UpdateAnomalySubscriptionRequest& request, const UpdateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientUpdateAnomalySubscriptionAsyncHelper( this, request, handler, context ); } );
}

UpdateCostAllocationTagsStatusOutcome CostExplorerClient::UpdateCostAllocationTagsStatus(const UpdateCostAllocationTagsStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCostAllocationTagsStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCostAllocationTagsStatusOutcomeCallable CostExplorerClient::UpdateCostAllocationTagsStatusCallable(const UpdateCostAllocationTagsStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCostAllocationTagsStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCostAllocationTagsStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientUpdateCostAllocationTagsStatusAsyncHelper(CostExplorerClient const * const clientThis, const UpdateCostAllocationTagsStatusRequest& request, const UpdateCostAllocationTagsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCostAllocationTagsStatus(request), context);
}

void CostExplorerClient::UpdateCostAllocationTagsStatusAsync(const UpdateCostAllocationTagsStatusRequest& request, const UpdateCostAllocationTagsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientUpdateCostAllocationTagsStatusAsyncHelper( this, request, handler, context ); } );
}

UpdateCostCategoryDefinitionOutcome CostExplorerClient::UpdateCostCategoryDefinition(const UpdateCostCategoryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCostCategoryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCostCategoryDefinitionOutcomeCallable CostExplorerClient::UpdateCostCategoryDefinitionCallable(const UpdateCostCategoryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCostCategoryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCostCategoryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostExplorerClientUpdateCostCategoryDefinitionAsyncHelper(CostExplorerClient const * const clientThis, const UpdateCostCategoryDefinitionRequest& request, const UpdateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCostCategoryDefinition(request), context);
}

void CostExplorerClient::UpdateCostCategoryDefinitionAsync(const UpdateCostCategoryDefinitionRequest& request, const UpdateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CostExplorerClientUpdateCostCategoryDefinitionAsyncHelper( this, request, handler, context ); } );
}

