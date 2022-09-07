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
#include <aws/devops-guru/model/DeleteInsightRequest.h>
#include <aws/devops-guru/model/DescribeAccountHealthRequest.h>
#include <aws/devops-guru/model/DescribeAccountOverviewRequest.h>
#include <aws/devops-guru/model/DescribeAnomalyRequest.h>
#include <aws/devops-guru/model/DescribeEventSourcesConfigRequest.h>
#include <aws/devops-guru/model/DescribeFeedbackRequest.h>
#include <aws/devops-guru/model/DescribeInsightRequest.h>
#include <aws/devops-guru/model/DescribeOrganizationHealthRequest.h>
#include <aws/devops-guru/model/DescribeOrganizationOverviewRequest.h>
#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthRequest.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthRequest.h>
#include <aws/devops-guru/model/DescribeServiceIntegrationRequest.h>
#include <aws/devops-guru/model/GetCostEstimationRequest.h>
#include <aws/devops-guru/model/GetResourceCollectionRequest.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightRequest.h>
#include <aws/devops-guru/model/ListAnomalousLogGroupsRequest.h>
#include <aws/devops-guru/model/ListEventsRequest.h>
#include <aws/devops-guru/model/ListInsightsRequest.h>
#include <aws/devops-guru/model/ListMonitoredResourcesRequest.h>
#include <aws/devops-guru/model/ListNotificationChannelsRequest.h>
#include <aws/devops-guru/model/ListOrganizationInsightsRequest.h>
#include <aws/devops-guru/model/ListRecommendationsRequest.h>
#include <aws/devops-guru/model/PutFeedbackRequest.h>
#include <aws/devops-guru/model/RemoveNotificationChannelRequest.h>
#include <aws/devops-guru/model/SearchInsightsRequest.h>
#include <aws/devops-guru/model/SearchOrganizationInsightsRequest.h>
#include <aws/devops-guru/model/StartCostEstimationRequest.h>
#include <aws/devops-guru/model/UpdateEventSourcesConfigRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DevOpsGuruClient::~DevOpsGuruClient()
{
}

void DevOpsGuruClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DevOps Guru");
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
  uri.AddPathSegments("/channels");
  return AddNotificationChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AddNotificationChannelOutcomeCallable DevOpsGuruClient::AddNotificationChannelCallable(const AddNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientAddNotificationChannelAsyncHelper(DevOpsGuruClient const * const clientThis, const AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddNotificationChannel(request), context);
}

void DevOpsGuruClient::AddNotificationChannelAsync(const AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientAddNotificationChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteInsightOutcome DevOpsGuruClient::DeleteInsight(const DeleteInsightRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInsight", "Required field: Id, is not set");
    return DeleteInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/");
  uri.AddPathSegment(request.GetId());
  return DeleteInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInsightOutcomeCallable DevOpsGuruClient::DeleteInsightCallable(const DeleteInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDeleteInsightAsyncHelper(DevOpsGuruClient const * const clientThis, const DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInsight(request), context);
}

void DevOpsGuruClient::DeleteInsightAsync(const DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDeleteInsightAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountHealthOutcome DevOpsGuruClient::DescribeAccountHealth(const DescribeAccountHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/health");
  return DescribeAccountHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountHealthOutcomeCallable DevOpsGuruClient::DescribeAccountHealthCallable(const DescribeAccountHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeAccountHealthAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountHealth(request), context);
}

void DevOpsGuruClient::DescribeAccountHealthAsync(const DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeAccountHealthAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountOverviewOutcome DevOpsGuruClient::DescribeAccountOverview(const DescribeAccountOverviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/overview");
  return DescribeAccountOverviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountOverviewOutcomeCallable DevOpsGuruClient::DescribeAccountOverviewCallable(const DescribeAccountOverviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountOverviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountOverview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeAccountOverviewAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountOverview(request), context);
}

void DevOpsGuruClient::DescribeAccountOverviewAsync(const DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeAccountOverviewAsyncHelper( this, request, handler, context ); } );
}

DescribeAnomalyOutcome DevOpsGuruClient::DescribeAnomaly(const DescribeAnomalyRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnomaly", "Required field: Id, is not set");
    return DescribeAnomalyOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/anomalies/");
  uri.AddPathSegment(request.GetId());
  return DescribeAnomalyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyOutcomeCallable DevOpsGuruClient::DescribeAnomalyCallable(const DescribeAnomalyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnomalyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnomaly(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeAnomalyAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAnomaly(request), context);
}

void DevOpsGuruClient::DescribeAnomalyAsync(const DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeAnomalyAsyncHelper( this, request, handler, context ); } );
}

DescribeEventSourcesConfigOutcome DevOpsGuruClient::DescribeEventSourcesConfig(const DescribeEventSourcesConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-sources");
  return DescribeEventSourcesConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventSourcesConfigOutcomeCallable DevOpsGuruClient::DescribeEventSourcesConfigCallable(const DescribeEventSourcesConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSourcesConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSourcesConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeEventSourcesConfigAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeEventSourcesConfigRequest& request, const DescribeEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventSourcesConfig(request), context);
}

void DevOpsGuruClient::DescribeEventSourcesConfigAsync(const DescribeEventSourcesConfigRequest& request, const DescribeEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeEventSourcesConfigAsyncHelper( this, request, handler, context ); } );
}

DescribeFeedbackOutcome DevOpsGuruClient::DescribeFeedback(const DescribeFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/feedback");
  return DescribeFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFeedbackOutcomeCallable DevOpsGuruClient::DescribeFeedbackCallable(const DescribeFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeFeedbackAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeFeedbackRequest& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFeedback(request), context);
}

void DevOpsGuruClient::DescribeFeedbackAsync(const DescribeFeedbackRequest& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeFeedbackAsyncHelper( this, request, handler, context ); } );
}

DescribeInsightOutcome DevOpsGuruClient::DescribeInsight(const DescribeInsightRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInsight", "Required field: Id, is not set");
    return DescribeInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/");
  uri.AddPathSegment(request.GetId());
  return DescribeInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInsightOutcomeCallable DevOpsGuruClient::DescribeInsightCallable(const DescribeInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeInsightAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInsight(request), context);
}

void DevOpsGuruClient::DescribeInsightAsync(const DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeInsightAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationHealthOutcome DevOpsGuruClient::DescribeOrganizationHealth(const DescribeOrganizationHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organization/health");
  return DescribeOrganizationHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationHealthOutcomeCallable DevOpsGuruClient::DescribeOrganizationHealthCallable(const DescribeOrganizationHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeOrganizationHealthAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeOrganizationHealthRequest& request, const DescribeOrganizationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationHealth(request), context);
}

void DevOpsGuruClient::DescribeOrganizationHealthAsync(const DescribeOrganizationHealthRequest& request, const DescribeOrganizationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeOrganizationHealthAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationOverviewOutcome DevOpsGuruClient::DescribeOrganizationOverview(const DescribeOrganizationOverviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organization/overview");
  return DescribeOrganizationOverviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationOverviewOutcomeCallable DevOpsGuruClient::DescribeOrganizationOverviewCallable(const DescribeOrganizationOverviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationOverviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationOverview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeOrganizationOverviewAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeOrganizationOverviewRequest& request, const DescribeOrganizationOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationOverview(request), context);
}

void DevOpsGuruClient::DescribeOrganizationOverviewAsync(const DescribeOrganizationOverviewRequest& request, const DescribeOrganizationOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeOrganizationOverviewAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationResourceCollectionHealthOutcome DevOpsGuruClient::DescribeOrganizationResourceCollectionHealth(const DescribeOrganizationResourceCollectionHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organization/health/resource-collection");
  return DescribeOrganizationResourceCollectionHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationResourceCollectionHealthOutcomeCallable DevOpsGuruClient::DescribeOrganizationResourceCollectionHealthCallable(const DescribeOrganizationResourceCollectionHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationResourceCollectionHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationResourceCollectionHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeOrganizationResourceCollectionHealthAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeOrganizationResourceCollectionHealthRequest& request, const DescribeOrganizationResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationResourceCollectionHealth(request), context);
}

void DevOpsGuruClient::DescribeOrganizationResourceCollectionHealthAsync(const DescribeOrganizationResourceCollectionHealthRequest& request, const DescribeOrganizationResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeOrganizationResourceCollectionHealthAsyncHelper( this, request, handler, context ); } );
}

DescribeResourceCollectionHealthOutcome DevOpsGuruClient::DescribeResourceCollectionHealth(const DescribeResourceCollectionHealthRequest& request) const
{
  if (!request.ResourceCollectionTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeResourceCollectionHealth", "Required field: ResourceCollectionType, is not set");
    return DescribeResourceCollectionHealthOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceCollectionType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/accounts/health/resource-collection/");
  uri.AddPathSegment(ResourceCollectionTypeMapper::GetNameForResourceCollectionType(request.GetResourceCollectionType()));
  return DescribeResourceCollectionHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceCollectionHealthOutcomeCallable DevOpsGuruClient::DescribeResourceCollectionHealthCallable(const DescribeResourceCollectionHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceCollectionHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourceCollectionHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeResourceCollectionHealthAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeResourceCollectionHealth(request), context);
}

void DevOpsGuruClient::DescribeResourceCollectionHealthAsync(const DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeResourceCollectionHealthAsyncHelper( this, request, handler, context ); } );
}

DescribeServiceIntegrationOutcome DevOpsGuruClient::DescribeServiceIntegration(const DescribeServiceIntegrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/service-integrations");
  return DescribeServiceIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceIntegrationOutcomeCallable DevOpsGuruClient::DescribeServiceIntegrationCallable(const DescribeServiceIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientDescribeServiceIntegrationAsyncHelper(DevOpsGuruClient const * const clientThis, const DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServiceIntegration(request), context);
}

void DevOpsGuruClient::DescribeServiceIntegrationAsync(const DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientDescribeServiceIntegrationAsyncHelper( this, request, handler, context ); } );
}

GetCostEstimationOutcome DevOpsGuruClient::GetCostEstimation(const GetCostEstimationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cost-estimation");
  return GetCostEstimationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCostEstimationOutcomeCallable DevOpsGuruClient::GetCostEstimationCallable(const GetCostEstimationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCostEstimationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCostEstimation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientGetCostEstimationAsyncHelper(DevOpsGuruClient const * const clientThis, const GetCostEstimationRequest& request, const GetCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCostEstimation(request), context);
}

void DevOpsGuruClient::GetCostEstimationAsync(const GetCostEstimationRequest& request, const GetCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientGetCostEstimationAsyncHelper( this, request, handler, context ); } );
}

GetResourceCollectionOutcome DevOpsGuruClient::GetResourceCollection(const GetResourceCollectionRequest& request) const
{
  if (!request.ResourceCollectionTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceCollection", "Required field: ResourceCollectionType, is not set");
    return GetResourceCollectionOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceCollectionType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resource-collections/");
  uri.AddPathSegment(ResourceCollectionTypeMapper::GetNameForResourceCollectionType(request.GetResourceCollectionType()));
  return GetResourceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceCollectionOutcomeCallable DevOpsGuruClient::GetResourceCollectionCallable(const GetResourceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientGetResourceCollectionAsyncHelper(DevOpsGuruClient const * const clientThis, const GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourceCollection(request), context);
}

void DevOpsGuruClient::GetResourceCollectionAsync(const GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientGetResourceCollectionAsyncHelper( this, request, handler, context ); } );
}

ListAnomaliesForInsightOutcome DevOpsGuruClient::ListAnomaliesForInsight(const ListAnomaliesForInsightRequest& request) const
{
  if (!request.InsightIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnomaliesForInsight", "Required field: InsightId, is not set");
    return ListAnomaliesForInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/anomalies/insight/");
  uri.AddPathSegment(request.GetInsightId());
  return ListAnomaliesForInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomaliesForInsightOutcomeCallable DevOpsGuruClient::ListAnomaliesForInsightCallable(const ListAnomaliesForInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnomaliesForInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnomaliesForInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListAnomaliesForInsightAsyncHelper(DevOpsGuruClient const * const clientThis, const ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAnomaliesForInsight(request), context);
}

void DevOpsGuruClient::ListAnomaliesForInsightAsync(const ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListAnomaliesForInsightAsyncHelper( this, request, handler, context ); } );
}

ListAnomalousLogGroupsOutcome DevOpsGuruClient::ListAnomalousLogGroups(const ListAnomalousLogGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-log-anomalies");
  return ListAnomalousLogGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalousLogGroupsOutcomeCallable DevOpsGuruClient::ListAnomalousLogGroupsCallable(const ListAnomalousLogGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnomalousLogGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnomalousLogGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListAnomalousLogGroupsAsyncHelper(DevOpsGuruClient const * const clientThis, const ListAnomalousLogGroupsRequest& request, const ListAnomalousLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAnomalousLogGroups(request), context);
}

void DevOpsGuruClient::ListAnomalousLogGroupsAsync(const ListAnomalousLogGroupsRequest& request, const ListAnomalousLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListAnomalousLogGroupsAsyncHelper( this, request, handler, context ); } );
}

ListEventsOutcome DevOpsGuruClient::ListEvents(const ListEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/events");
  return ListEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventsOutcomeCallable DevOpsGuruClient::ListEventsCallable(const ListEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListEventsAsyncHelper(DevOpsGuruClient const * const clientThis, const ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEvents(request), context);
}

void DevOpsGuruClient::ListEventsAsync(const ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListEventsAsyncHelper( this, request, handler, context ); } );
}

ListInsightsOutcome DevOpsGuruClient::ListInsights(const ListInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights");
  return ListInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInsightsOutcomeCallable DevOpsGuruClient::ListInsightsCallable(const ListInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListInsightsAsyncHelper(DevOpsGuruClient const * const clientThis, const ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInsights(request), context);
}

void DevOpsGuruClient::ListInsightsAsync(const ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListInsightsAsyncHelper( this, request, handler, context ); } );
}

ListMonitoredResourcesOutcome DevOpsGuruClient::ListMonitoredResources(const ListMonitoredResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/monitoredResources");
  return ListMonitoredResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitoredResourcesOutcomeCallable DevOpsGuruClient::ListMonitoredResourcesCallable(const ListMonitoredResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoredResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoredResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListMonitoredResourcesAsyncHelper(DevOpsGuruClient const * const clientThis, const ListMonitoredResourcesRequest& request, const ListMonitoredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMonitoredResources(request), context);
}

void DevOpsGuruClient::ListMonitoredResourcesAsync(const ListMonitoredResourcesRequest& request, const ListMonitoredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListMonitoredResourcesAsyncHelper( this, request, handler, context ); } );
}

ListNotificationChannelsOutcome DevOpsGuruClient::ListNotificationChannels(const ListNotificationChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return ListNotificationChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationChannelsOutcomeCallable DevOpsGuruClient::ListNotificationChannelsCallable(const ListNotificationChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotificationChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListNotificationChannelsAsyncHelper(DevOpsGuruClient const * const clientThis, const ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNotificationChannels(request), context);
}

void DevOpsGuruClient::ListNotificationChannelsAsync(const ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListNotificationChannelsAsyncHelper( this, request, handler, context ); } );
}

ListOrganizationInsightsOutcome DevOpsGuruClient::ListOrganizationInsights(const ListOrganizationInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organization/insights");
  return ListOrganizationInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationInsightsOutcomeCallable DevOpsGuruClient::ListOrganizationInsightsCallable(const ListOrganizationInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListOrganizationInsightsAsyncHelper(DevOpsGuruClient const * const clientThis, const ListOrganizationInsightsRequest& request, const ListOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizationInsights(request), context);
}

void DevOpsGuruClient::ListOrganizationInsightsAsync(const ListOrganizationInsightsRequest& request, const ListOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListOrganizationInsightsAsyncHelper( this, request, handler, context ); } );
}

ListRecommendationsOutcome DevOpsGuruClient::ListRecommendations(const ListRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recommendations");
  return ListRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecommendationsOutcomeCallable DevOpsGuruClient::ListRecommendationsCallable(const ListRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientListRecommendationsAsyncHelper(DevOpsGuruClient const * const clientThis, const ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRecommendations(request), context);
}

void DevOpsGuruClient::ListRecommendationsAsync(const ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientListRecommendationsAsyncHelper( this, request, handler, context ); } );
}

PutFeedbackOutcome DevOpsGuruClient::PutFeedback(const PutFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/feedback");
  return PutFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFeedbackOutcomeCallable DevOpsGuruClient::PutFeedbackCallable(const PutFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientPutFeedbackAsyncHelper(DevOpsGuruClient const * const clientThis, const PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutFeedback(request), context);
}

void DevOpsGuruClient::PutFeedbackAsync(const PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientPutFeedbackAsyncHelper( this, request, handler, context ); } );
}

RemoveNotificationChannelOutcome DevOpsGuruClient::RemoveNotificationChannel(const RemoveNotificationChannelRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveNotificationChannel", "Required field: Id, is not set");
    return RemoveNotificationChannelOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetId());
  return RemoveNotificationChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveNotificationChannelOutcomeCallable DevOpsGuruClient::RemoveNotificationChannelCallable(const RemoveNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientRemoveNotificationChannelAsyncHelper(DevOpsGuruClient const * const clientThis, const RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveNotificationChannel(request), context);
}

void DevOpsGuruClient::RemoveNotificationChannelAsync(const RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientRemoveNotificationChannelAsyncHelper( this, request, handler, context ); } );
}

SearchInsightsOutcome DevOpsGuruClient::SearchInsights(const SearchInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/search");
  return SearchInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchInsightsOutcomeCallable DevOpsGuruClient::SearchInsightsCallable(const SearchInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientSearchInsightsAsyncHelper(DevOpsGuruClient const * const clientThis, const SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchInsights(request), context);
}

void DevOpsGuruClient::SearchInsightsAsync(const SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientSearchInsightsAsyncHelper( this, request, handler, context ); } );
}

SearchOrganizationInsightsOutcome DevOpsGuruClient::SearchOrganizationInsights(const SearchOrganizationInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/organization/insights/search");
  return SearchOrganizationInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchOrganizationInsightsOutcomeCallable DevOpsGuruClient::SearchOrganizationInsightsCallable(const SearchOrganizationInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchOrganizationInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchOrganizationInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientSearchOrganizationInsightsAsyncHelper(DevOpsGuruClient const * const clientThis, const SearchOrganizationInsightsRequest& request, const SearchOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchOrganizationInsights(request), context);
}

void DevOpsGuruClient::SearchOrganizationInsightsAsync(const SearchOrganizationInsightsRequest& request, const SearchOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientSearchOrganizationInsightsAsyncHelper( this, request, handler, context ); } );
}

StartCostEstimationOutcome DevOpsGuruClient::StartCostEstimation(const StartCostEstimationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cost-estimation");
  return StartCostEstimationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartCostEstimationOutcomeCallable DevOpsGuruClient::StartCostEstimationCallable(const StartCostEstimationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCostEstimationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCostEstimation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientStartCostEstimationAsyncHelper(DevOpsGuruClient const * const clientThis, const StartCostEstimationRequest& request, const StartCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartCostEstimation(request), context);
}

void DevOpsGuruClient::StartCostEstimationAsync(const StartCostEstimationRequest& request, const StartCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientStartCostEstimationAsyncHelper( this, request, handler, context ); } );
}

UpdateEventSourcesConfigOutcome DevOpsGuruClient::UpdateEventSourcesConfig(const UpdateEventSourcesConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-sources");
  return UpdateEventSourcesConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventSourcesConfigOutcomeCallable DevOpsGuruClient::UpdateEventSourcesConfigCallable(const UpdateEventSourcesConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventSourcesConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventSourcesConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientUpdateEventSourcesConfigAsyncHelper(DevOpsGuruClient const * const clientThis, const UpdateEventSourcesConfigRequest& request, const UpdateEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEventSourcesConfig(request), context);
}

void DevOpsGuruClient::UpdateEventSourcesConfigAsync(const UpdateEventSourcesConfigRequest& request, const UpdateEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientUpdateEventSourcesConfigAsyncHelper( this, request, handler, context ); } );
}

UpdateResourceCollectionOutcome DevOpsGuruClient::UpdateResourceCollection(const UpdateResourceCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resource-collections");
  return UpdateResourceCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceCollectionOutcomeCallable DevOpsGuruClient::UpdateResourceCollectionCallable(const UpdateResourceCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientUpdateResourceCollectionAsyncHelper(DevOpsGuruClient const * const clientThis, const UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResourceCollection(request), context);
}

void DevOpsGuruClient::UpdateResourceCollectionAsync(const UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientUpdateResourceCollectionAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceIntegrationOutcome DevOpsGuruClient::UpdateServiceIntegration(const UpdateServiceIntegrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/service-integrations");
  return UpdateServiceIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceIntegrationOutcomeCallable DevOpsGuruClient::UpdateServiceIntegrationCallable(const UpdateServiceIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DevOpsGuruClientUpdateServiceIntegrationAsyncHelper(DevOpsGuruClient const * const clientThis, const UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServiceIntegration(request), context);
}

void DevOpsGuruClient::UpdateServiceIntegrationAsync(const UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DevOpsGuruClientUpdateServiceIntegrationAsyncHelper( this, request, handler, context ); } );
}

