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
#include <aws/rum/model/CreateAppMonitorRequest.h>
#include <aws/rum/model/DeleteAppMonitorRequest.h>
#include <aws/rum/model/GetAppMonitorRequest.h>
#include <aws/rum/model/GetAppMonitorDataRequest.h>
#include <aws/rum/model/ListAppMonitorsRequest.h>
#include <aws/rum/model/ListTagsForResourceRequest.h>
#include <aws/rum/model/PutRumEventsRequest.h>
#include <aws/rum/model/TagResourceRequest.h>
#include <aws/rum/model/UntagResourceRequest.h>
#include <aws/rum/model/UpdateAppMonitorRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchRUM;
using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "rum";
static const char* ALLOCATION_TAG = "CloudWatchRUMClient";

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

void CloudWatchRUMClientCreateAppMonitorAsyncHelper(CloudWatchRUMClient const * const clientThis, const CreateAppMonitorRequest& request, const CreateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAppMonitor(request), context);
}

void CloudWatchRUMClient::CreateAppMonitorAsync(const CreateAppMonitorRequest& request, const CreateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientCreateAppMonitorAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientDeleteAppMonitorAsyncHelper(CloudWatchRUMClient const * const clientThis, const DeleteAppMonitorRequest& request, const DeleteAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAppMonitor(request), context);
}

void CloudWatchRUMClient::DeleteAppMonitorAsync(const DeleteAppMonitorRequest& request, const DeleteAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientDeleteAppMonitorAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientGetAppMonitorAsyncHelper(CloudWatchRUMClient const * const clientThis, const GetAppMonitorRequest& request, const GetAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAppMonitor(request), context);
}

void CloudWatchRUMClient::GetAppMonitorAsync(const GetAppMonitorRequest& request, const GetAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientGetAppMonitorAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientGetAppMonitorDataAsyncHelper(CloudWatchRUMClient const * const clientThis, const GetAppMonitorDataRequest& request, const GetAppMonitorDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAppMonitorData(request), context);
}

void CloudWatchRUMClient::GetAppMonitorDataAsync(const GetAppMonitorDataRequest& request, const GetAppMonitorDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientGetAppMonitorDataAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientListAppMonitorsAsyncHelper(CloudWatchRUMClient const * const clientThis, const ListAppMonitorsRequest& request, const ListAppMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppMonitors(request), context);
}

void CloudWatchRUMClient::ListAppMonitorsAsync(const ListAppMonitorsRequest& request, const ListAppMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientListAppMonitorsAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientListTagsForResourceAsyncHelper(CloudWatchRUMClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CloudWatchRUMClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientPutRumEventsAsyncHelper(CloudWatchRUMClient const * const clientThis, const PutRumEventsRequest& request, const PutRumEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRumEvents(request), context);
}

void CloudWatchRUMClient::PutRumEventsAsync(const PutRumEventsRequest& request, const PutRumEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientPutRumEventsAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientTagResourceAsyncHelper(CloudWatchRUMClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CloudWatchRUMClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientUntagResourceAsyncHelper(CloudWatchRUMClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CloudWatchRUMClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void CloudWatchRUMClientUpdateAppMonitorAsyncHelper(CloudWatchRUMClient const * const clientThis, const UpdateAppMonitorRequest& request, const UpdateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAppMonitor(request), context);
}

void CloudWatchRUMClient::UpdateAppMonitorAsync(const UpdateAppMonitorRequest& request, const UpdateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchRUMClientUpdateAppMonitorAsyncHelper( this, request, handler, context ); } );
}

