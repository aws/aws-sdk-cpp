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

#include <aws/rum/CloudWatchRUMClient.h>
#include <aws/rum/CloudWatchRUMEndpoint.h>
#include <aws/rum/CloudWatchRUMErrorMarshaller.h>
#include <aws/rum/model/BatchCreateRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsRequest.h>
#include <aws/rum/model/CreateAppMonitorRequest.h>
#include <aws/rum/model/DeleteAppMonitorRequest.h>
#include <aws/rum/model/DeleteRumMetricsDestinationRequest.h>
#include <aws/rum/model/GetAppMonitorRequest.h>
#include <aws/rum/model/GetAppMonitorDataRequest.h>
#include <aws/rum/model/ListAppMonitorsRequest.h>
#include <aws/rum/model/ListRumMetricsDestinationsRequest.h>
#include <aws/rum/model/ListTagsForResourceRequest.h>
#include <aws/rum/model/PutRumEventsRequest.h>
#include <aws/rum/model/PutRumMetricsDestinationRequest.h>
#include <aws/rum/model/TagResourceRequest.h>
#include <aws/rum/model/UntagResourceRequest.h>
#include <aws/rum/model/UpdateAppMonitorRequest.h>
#include <aws/rum/model/UpdateRumMetricDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchRUM;
using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* CloudWatchRUMClient::SERVICE_NAME = "rum";
const char* CloudWatchRUMClient::ALLOCATION_TAG = "CloudWatchRUMClient";

CloudWatchRUMClient::CloudWatchRUMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchRUMClient::~CloudWatchRUMClient()
{
}

void CloudWatchRUMClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("RUM");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = CloudWatchRUMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void CloudWatchRUMClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

BatchCreateRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchCreateRumMetricDefinitions(const BatchCreateRumMetricDefinitionsRequest& request) const
{
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchCreateRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/rummetrics/");
  uri.AddPathSegment(request.GetAppMonitorName());
  uri.AddPathSegments("/metrics");
  return BatchCreateRumMetricDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateRumMetricDefinitionsOutcomeCallable CloudWatchRUMClient::BatchCreateRumMetricDefinitionsCallable(const BatchCreateRumMetricDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateRumMetricDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateRumMetricDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::BatchCreateRumMetricDefinitionsAsync(const BatchCreateRumMetricDefinitionsRequest& request, const BatchCreateRumMetricDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateRumMetricDefinitions(request), context);
    } );
}

BatchDeleteRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchDeleteRumMetricDefinitions(const BatchDeleteRumMetricDefinitionsRequest& request) const
{
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: Destination, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }
  if (!request.MetricDefinitionIdsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: MetricDefinitionIds, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricDefinitionIds]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/rummetrics/");
  uri.AddPathSegment(request.GetAppMonitorName());
  uri.AddPathSegments("/metrics");
  return BatchDeleteRumMetricDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteRumMetricDefinitionsOutcomeCallable CloudWatchRUMClient::BatchDeleteRumMetricDefinitionsCallable(const BatchDeleteRumMetricDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteRumMetricDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteRumMetricDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::BatchDeleteRumMetricDefinitionsAsync(const BatchDeleteRumMetricDefinitionsRequest& request, const BatchDeleteRumMetricDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeleteRumMetricDefinitions(request), context);
    } );
}

BatchGetRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchGetRumMetricDefinitions(const BatchGetRumMetricDefinitionsRequest& request) const
{
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchGetRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetRumMetricDefinitions", "Required field: Destination, is not set");
    return BatchGetRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/rummetrics/");
  uri.AddPathSegment(request.GetAppMonitorName());
  uri.AddPathSegments("/metrics");
  return BatchGetRumMetricDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

BatchGetRumMetricDefinitionsOutcomeCallable CloudWatchRUMClient::BatchGetRumMetricDefinitionsCallable(const BatchGetRumMetricDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetRumMetricDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetRumMetricDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::BatchGetRumMetricDefinitionsAsync(const BatchGetRumMetricDefinitionsRequest& request, const BatchGetRumMetricDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetRumMetricDefinitions(request), context);
    } );
}

CreateAppMonitorOutcome CloudWatchRUMClient::CreateAppMonitor(const CreateAppMonitorRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/appmonitor");
  return CreateAppMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppMonitorOutcomeCallable CloudWatchRUMClient::CreateAppMonitorCallable(const CreateAppMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::CreateAppMonitorAsync(const CreateAppMonitorRequest& request, const CreateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAppMonitor(request), context);
    } );
}

DeleteAppMonitorOutcome CloudWatchRUMClient::DeleteAppMonitor(const DeleteAppMonitorRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppMonitor", "Required field: Name, is not set");
    return DeleteAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/appmonitor/");
  uri.AddPathSegment(request.GetName());
  return DeleteAppMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppMonitorOutcomeCallable CloudWatchRUMClient::DeleteAppMonitorCallable(const DeleteAppMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::DeleteAppMonitorAsync(const DeleteAppMonitorRequest& request, const DeleteAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppMonitor(request), context);
    } );
}

DeleteRumMetricsDestinationOutcome CloudWatchRUMClient::DeleteRumMetricsDestination(const DeleteRumMetricsDestinationRequest& request) const
{
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRumMetricsDestination", "Required field: AppMonitorName, is not set");
    return DeleteRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRumMetricsDestination", "Required field: Destination, is not set");
    return DeleteRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/rummetrics/");
  uri.AddPathSegment(request.GetAppMonitorName());
  uri.AddPathSegments("/metricsdestination");
  return DeleteRumMetricsDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRumMetricsDestinationOutcomeCallable CloudWatchRUMClient::DeleteRumMetricsDestinationCallable(const DeleteRumMetricsDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRumMetricsDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRumMetricsDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::DeleteRumMetricsDestinationAsync(const DeleteRumMetricsDestinationRequest& request, const DeleteRumMetricsDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRumMetricsDestination(request), context);
    } );
}

GetAppMonitorOutcome CloudWatchRUMClient::GetAppMonitor(const GetAppMonitorRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppMonitor", "Required field: Name, is not set");
    return GetAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/appmonitor/");
  uri.AddPathSegment(request.GetName());
  return GetAppMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppMonitorOutcomeCallable CloudWatchRUMClient::GetAppMonitorCallable(const GetAppMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::GetAppMonitorAsync(const GetAppMonitorRequest& request, const GetAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppMonitor(request), context);
    } );
}

GetAppMonitorDataOutcome CloudWatchRUMClient::GetAppMonitorData(const GetAppMonitorDataRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppMonitorData", "Required field: Name, is not set");
    return GetAppMonitorDataOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/appmonitor/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/data");
  return GetAppMonitorDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppMonitorDataOutcomeCallable CloudWatchRUMClient::GetAppMonitorDataCallable(const GetAppMonitorDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppMonitorDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppMonitorData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::GetAppMonitorDataAsync(const GetAppMonitorDataRequest& request, const GetAppMonitorDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppMonitorData(request), context);
    } );
}

ListAppMonitorsOutcome CloudWatchRUMClient::ListAppMonitors(const ListAppMonitorsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/appmonitors");
  return ListAppMonitorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppMonitorsOutcomeCallable CloudWatchRUMClient::ListAppMonitorsCallable(const ListAppMonitorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppMonitorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppMonitors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::ListAppMonitorsAsync(const ListAppMonitorsRequest& request, const ListAppMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppMonitors(request), context);
    } );
}

ListRumMetricsDestinationsOutcome CloudWatchRUMClient::ListRumMetricsDestinations(const ListRumMetricsDestinationsRequest& request) const
{
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRumMetricsDestinations", "Required field: AppMonitorName, is not set");
    return ListRumMetricsDestinationsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/rummetrics/");
  uri.AddPathSegment(request.GetAppMonitorName());
  uri.AddPathSegments("/metricsdestination");
  return ListRumMetricsDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRumMetricsDestinationsOutcomeCallable CloudWatchRUMClient::ListRumMetricsDestinationsCallable(const ListRumMetricsDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRumMetricsDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRumMetricsDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::ListRumMetricsDestinationsAsync(const ListRumMetricsDestinationsRequest& request, const ListRumMetricsDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRumMetricsDestinations(request), context);
    } );
}

ListTagsForResourceOutcome CloudWatchRUMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CloudWatchRUMClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutRumEventsOutcome CloudWatchRUMClient::PutRumEvents(const PutRumEventsRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRumEvents", "Required field: Id, is not set");
    return PutRumEventsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("dataplane." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutRumEvents", "Invalid DNS host: " << uri.GetAuthority());
      return PutRumEventsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/appmonitors/");
  uri.AddPathSegment(request.GetId());
  return PutRumEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRumEventsOutcomeCallable CloudWatchRUMClient::PutRumEventsCallable(const PutRumEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRumEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRumEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::PutRumEventsAsync(const PutRumEventsRequest& request, const PutRumEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRumEvents(request), context);
    } );
}

PutRumMetricsDestinationOutcome CloudWatchRUMClient::PutRumMetricsDestination(const PutRumMetricsDestinationRequest& request) const
{
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRumMetricsDestination", "Required field: AppMonitorName, is not set");
    return PutRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/rummetrics/");
  uri.AddPathSegment(request.GetAppMonitorName());
  uri.AddPathSegments("/metricsdestination");
  return PutRumMetricsDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRumMetricsDestinationOutcomeCallable CloudWatchRUMClient::PutRumMetricsDestinationCallable(const PutRumMetricsDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRumMetricsDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRumMetricsDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::PutRumMetricsDestinationAsync(const PutRumMetricsDestinationRequest& request, const PutRumMetricsDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRumMetricsDestination(request), context);
    } );
}

TagResourceOutcome CloudWatchRUMClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CloudWatchRUMClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome CloudWatchRUMClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CloudWatchRUMClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAppMonitorOutcome CloudWatchRUMClient::UpdateAppMonitor(const UpdateAppMonitorRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppMonitor", "Required field: Name, is not set");
    return UpdateAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/appmonitor/");
  uri.AddPathSegment(request.GetName());
  return UpdateAppMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppMonitorOutcomeCallable CloudWatchRUMClient::UpdateAppMonitorCallable(const UpdateAppMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::UpdateAppMonitorAsync(const UpdateAppMonitorRequest& request, const UpdateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAppMonitor(request), context);
    } );
}

UpdateRumMetricDefinitionOutcome CloudWatchRUMClient::UpdateRumMetricDefinition(const UpdateRumMetricDefinitionRequest& request) const
{
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRumMetricDefinition", "Required field: AppMonitorName, is not set");
    return UpdateRumMetricDefinitionOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/rummetrics/");
  uri.AddPathSegment(request.GetAppMonitorName());
  uri.AddPathSegments("/metrics");
  return UpdateRumMetricDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRumMetricDefinitionOutcomeCallable CloudWatchRUMClient::UpdateRumMetricDefinitionCallable(const UpdateRumMetricDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRumMetricDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRumMetricDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchRUMClient::UpdateRumMetricDefinitionAsync(const UpdateRumMetricDefinitionRequest& request, const UpdateRumMetricDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRumMetricDefinition(request), context);
    } );
}

