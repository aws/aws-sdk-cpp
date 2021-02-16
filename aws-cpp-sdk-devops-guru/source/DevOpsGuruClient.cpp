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

#include <aws/devops-guru/DevOpsGuruClient.h>
#include <aws/devops-guru/DevOpsGuruEndpoint.h>
#include <aws/devops-guru/DevOpsGuruErrorMarshaller.h>
#include <aws/devops-guru/model/AddNotificationChannelRequest.h>
#include <aws/devops-guru/model/DescribeAccountHealthRequest.h>
#include <aws/devops-guru/model/DescribeAccountOverviewRequest.h>
#include <aws/devops-guru/model/DescribeAnomalyRequest.h>
#include <aws/devops-guru/model/DescribeFeedbackRequest.h>
#include <aws/devops-guru/model/DescribeInsightRequest.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthRequest.h>
#include <aws/devops-guru/model/DescribeServiceIntegrationRequest.h>
#include <aws/devops-guru/model/GetResourceCollectionRequest.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightRequest.h>
#include <aws/devops-guru/model/ListEventsRequest.h>
#include <aws/devops-guru/model/ListInsightsRequest.h>
#include <aws/devops-guru/model/ListNotificationChannelsRequest.h>
#include <aws/devops-guru/model/ListRecommendationsRequest.h>
#include <aws/devops-guru/model/PutFeedbackRequest.h>
#include <aws/devops-guru/model/RemoveNotificationChannelRequest.h>
#include <aws/devops-guru/model/SearchInsightsRequest.h>
#include <aws/devops-guru/model/UpdateResourceCollectionRequest.h>
#include <aws/devops-guru/model/UpdateServiceIntegrationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DevOpsGuru;
using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "devops-guru";
static const char* ALLOCATION_TAG = "DevOpsGuruClient";


DevOpsGuruClient::DevOpsGuruClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DevOpsGuruClient::~DevOpsGuruClient()
{
}

void DevOpsGuruClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("DevOps Guru");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DevOpsGuruEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DevOpsGuruClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddNotificationChannelOutcome DevOpsGuruClient::AddNotificationChannel(const AddNotificationChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddNotificationChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AddNotificationChannelOutcomeCallable DevOpsGuruClient::AddNotificationChannelCallable(const AddNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::AddNotificationChannelAsync(const AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddNotificationChannelAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::AddNotificationChannelAsyncHelper(const AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddNotificationChannel(request), context);
}

DescribeAccountHealthOutcome DevOpsGuruClient::DescribeAccountHealth(const DescribeAccountHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/health";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAccountHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountHealthOutcomeCallable DevOpsGuruClient::DescribeAccountHealthCallable(const DescribeAccountHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::DescribeAccountHealthAsync(const DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountHealthAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::DescribeAccountHealthAsyncHelper(const DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountHealth(request), context);
}

DescribeAccountOverviewOutcome DevOpsGuruClient::DescribeAccountOverview(const DescribeAccountOverviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/overview";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAccountOverviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountOverviewOutcomeCallable DevOpsGuruClient::DescribeAccountOverviewCallable(const DescribeAccountOverviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountOverviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountOverview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::DescribeAccountOverviewAsync(const DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountOverviewAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::DescribeAccountOverviewAsyncHelper(const DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountOverview(request), context);
}

DescribeAnomalyOutcome DevOpsGuruClient::DescribeAnomaly(const DescribeAnomalyRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnomaly", "Required field: Id, is not set");
    return DescribeAnomalyOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/anomalies/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAnomalyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyOutcomeCallable DevOpsGuruClient::DescribeAnomalyCallable(const DescribeAnomalyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnomalyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnomaly(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::DescribeAnomalyAsync(const DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAnomalyAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::DescribeAnomalyAsyncHelper(const DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAnomaly(request), context);
}

DescribeFeedbackOutcome DevOpsGuruClient::DescribeFeedback(const DescribeFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/feedback";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFeedbackOutcomeCallable DevOpsGuruClient::DescribeFeedbackCallable(const DescribeFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::DescribeFeedbackAsync(const DescribeFeedbackRequest& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFeedbackAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::DescribeFeedbackAsyncHelper(const DescribeFeedbackRequest& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFeedback(request), context);
}

DescribeInsightOutcome DevOpsGuruClient::DescribeInsight(const DescribeInsightRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInsight", "Required field: Id, is not set");
    return DescribeInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInsightOutcomeCallable DevOpsGuruClient::DescribeInsightCallable(const DescribeInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::DescribeInsightAsync(const DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInsightAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::DescribeInsightAsyncHelper(const DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInsight(request), context);
}

DescribeResourceCollectionHealthOutcome DevOpsGuruClient::DescribeResourceCollectionHealth(const DescribeResourceCollectionHealthRequest& request) const
{
  if (!request.ResourceCollectionTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeResourceCollectionHealth", "Required field: ResourceCollectionType, is not set");
    return DescribeResourceCollectionHealthOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceCollectionType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/health/resource-collection/";
  ss << ResourceCollectionTypeMapper::GetNameForResourceCollectionType(request.GetResourceCollectionType());
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeResourceCollectionHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceCollectionHealthOutcomeCallable DevOpsGuruClient::DescribeResourceCollectionHealthCallable(const DescribeResourceCollectionHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceCollectionHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourceCollectionHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::DescribeResourceCollectionHealthAsync(const DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourceCollectionHealthAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::DescribeResourceCollectionHealthAsyncHelper(const DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResourceCollectionHealth(request), context);
}

DescribeServiceIntegrationOutcome DevOpsGuruClient::DescribeServiceIntegration(const DescribeServiceIntegrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/service-integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeServiceIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceIntegrationOutcomeCallable DevOpsGuruClient::DescribeServiceIntegrationCallable(const DescribeServiceIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::DescribeServiceIntegrationAsync(const DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceIntegrationAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::DescribeServiceIntegrationAsyncHelper(const DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceIntegration(request), context);
}

GetResourceCollectionOutcome DevOpsGuruClient::GetResourceCollection(const GetResourceCollectionRequest& request) const
{
  if (!request.ResourceCollectionTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceCollection", "Required field: ResourceCollectionType, is not set");
    return GetResourceCollectionOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceCollectionType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/resource-collections/";
  ss << ResourceCollectionTypeMapper::GetNameForResourceCollectionType(request.GetResourceCollectionType());
  uri.SetPath(uri.GetPath() + ss.str());
  return GetResourceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceCollectionOutcomeCallable DevOpsGuruClient::GetResourceCollectionCallable(const GetResourceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::GetResourceCollectionAsync(const GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceCollectionAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::GetResourceCollectionAsyncHelper(const GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceCollection(request), context);
}

ListAnomaliesForInsightOutcome DevOpsGuruClient::ListAnomaliesForInsight(const ListAnomaliesForInsightRequest& request) const
{
  if (!request.InsightIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnomaliesForInsight", "Required field: InsightId, is not set");
    return ListAnomaliesForInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/anomalies/insight/";
  ss << request.GetInsightId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAnomaliesForInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomaliesForInsightOutcomeCallable DevOpsGuruClient::ListAnomaliesForInsightCallable(const ListAnomaliesForInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnomaliesForInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnomaliesForInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::ListAnomaliesForInsightAsync(const ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAnomaliesForInsightAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::ListAnomaliesForInsightAsyncHelper(const ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAnomaliesForInsight(request), context);
}

ListEventsOutcome DevOpsGuruClient::ListEvents(const ListEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/events";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventsOutcomeCallable DevOpsGuruClient::ListEventsCallable(const ListEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::ListEventsAsync(const ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEventsAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::ListEventsAsyncHelper(const ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEvents(request), context);
}

ListInsightsOutcome DevOpsGuruClient::ListInsights(const ListInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInsightsOutcomeCallable DevOpsGuruClient::ListInsightsCallable(const ListInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::ListInsightsAsync(const ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInsightsAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::ListInsightsAsyncHelper(const ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInsights(request), context);
}

ListNotificationChannelsOutcome DevOpsGuruClient::ListNotificationChannels(const ListNotificationChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListNotificationChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationChannelsOutcomeCallable DevOpsGuruClient::ListNotificationChannelsCallable(const ListNotificationChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotificationChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::ListNotificationChannelsAsync(const ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNotificationChannelsAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::ListNotificationChannelsAsyncHelper(const ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNotificationChannels(request), context);
}

ListRecommendationsOutcome DevOpsGuruClient::ListRecommendations(const ListRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/recommendations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecommendationsOutcomeCallable DevOpsGuruClient::ListRecommendationsCallable(const ListRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::ListRecommendationsAsync(const ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecommendationsAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::ListRecommendationsAsyncHelper(const ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecommendations(request), context);
}

PutFeedbackOutcome DevOpsGuruClient::PutFeedback(const PutFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/feedback";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFeedbackOutcomeCallable DevOpsGuruClient::PutFeedbackCallable(const PutFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::PutFeedbackAsync(const PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutFeedbackAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::PutFeedbackAsyncHelper(const PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutFeedback(request), context);
}

RemoveNotificationChannelOutcome DevOpsGuruClient::RemoveNotificationChannel(const RemoveNotificationChannelRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveNotificationChannel", "Required field: Id, is not set");
    return RemoveNotificationChannelOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveNotificationChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveNotificationChannelOutcomeCallable DevOpsGuruClient::RemoveNotificationChannelCallable(const RemoveNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::RemoveNotificationChannelAsync(const RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveNotificationChannelAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::RemoveNotificationChannelAsyncHelper(const RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveNotificationChannel(request), context);
}

SearchInsightsOutcome DevOpsGuruClient::SearchInsights(const SearchInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights/search";
  uri.SetPath(uri.GetPath() + ss.str());
  return SearchInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchInsightsOutcomeCallable DevOpsGuruClient::SearchInsightsCallable(const SearchInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::SearchInsightsAsync(const SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchInsightsAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::SearchInsightsAsyncHelper(const SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchInsights(request), context);
}

UpdateResourceCollectionOutcome DevOpsGuruClient::UpdateResourceCollection(const UpdateResourceCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/resource-collections";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateResourceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceCollectionOutcomeCallable DevOpsGuruClient::UpdateResourceCollectionCallable(const UpdateResourceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::UpdateResourceCollectionAsync(const UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourceCollectionAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::UpdateResourceCollectionAsyncHelper(const UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResourceCollection(request), context);
}

UpdateServiceIntegrationOutcome DevOpsGuruClient::UpdateServiceIntegration(const UpdateServiceIntegrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/service-integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateServiceIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceIntegrationOutcomeCallable DevOpsGuruClient::UpdateServiceIntegrationCallable(const UpdateServiceIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClient::UpdateServiceIntegrationAsync(const UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceIntegrationAsyncHelper( request, handler, context ); } );
}

void DevOpsGuruClient::UpdateServiceIntegrationAsyncHelper(const UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServiceIntegration(request), context);
}

