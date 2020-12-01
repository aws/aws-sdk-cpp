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

#include <aws/appintegrations/AppIntegrationsServiceClient.h>
#include <aws/appintegrations/AppIntegrationsServiceEndpoint.h>
#include <aws/appintegrations/AppIntegrationsServiceErrorMarshaller.h>
#include <aws/appintegrations/model/CreateEventIntegrationRequest.h>
#include <aws/appintegrations/model/DeleteEventIntegrationRequest.h>
#include <aws/appintegrations/model/GetEventIntegrationRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationsRequest.h>
#include <aws/appintegrations/model/ListTagsForResourceRequest.h>
#include <aws/appintegrations/model/TagResourceRequest.h>
#include <aws/appintegrations/model/UntagResourceRequest.h>
#include <aws/appintegrations/model/UpdateEventIntegrationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppIntegrationsService;
using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "app-integrations";
static const char* ALLOCATION_TAG = "AppIntegrationsServiceClient";


AppIntegrationsServiceClient::AppIntegrationsServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppIntegrationsServiceClient::~AppIntegrationsServiceClient()
{
}

void AppIntegrationsServiceClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("AppIntegrations");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppIntegrationsServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppIntegrationsServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateEventIntegrationOutcome AppIntegrationsServiceClient::CreateEventIntegration(const CreateEventIntegrationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/eventIntegrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateEventIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventIntegrationOutcomeCallable AppIntegrationsServiceClient::CreateEventIntegrationCallable(const CreateEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::CreateEventIntegrationAsync(const CreateEventIntegrationRequest& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventIntegrationAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::CreateEventIntegrationAsyncHelper(const CreateEventIntegrationRequest& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventIntegration(request), context);
}

DeleteEventIntegrationOutcome AppIntegrationsServiceClient::DeleteEventIntegration(const DeleteEventIntegrationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventIntegration", "Required field: Name, is not set");
    return DeleteEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/eventIntegrations/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEventIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventIntegrationOutcomeCallable AppIntegrationsServiceClient::DeleteEventIntegrationCallable(const DeleteEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::DeleteEventIntegrationAsync(const DeleteEventIntegrationRequest& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventIntegrationAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::DeleteEventIntegrationAsyncHelper(const DeleteEventIntegrationRequest& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventIntegration(request), context);
}

GetEventIntegrationOutcome AppIntegrationsServiceClient::GetEventIntegration(const GetEventIntegrationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventIntegration", "Required field: Name, is not set");
    return GetEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/eventIntegrations/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEventIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventIntegrationOutcomeCallable AppIntegrationsServiceClient::GetEventIntegrationCallable(const GetEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::GetEventIntegrationAsync(const GetEventIntegrationRequest& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEventIntegrationAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::GetEventIntegrationAsyncHelper(const GetEventIntegrationRequest& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventIntegration(request), context);
}

ListEventIntegrationAssociationsOutcome AppIntegrationsServiceClient::ListEventIntegrationAssociations(const ListEventIntegrationAssociationsRequest& request) const
{
  if (!request.EventIntegrationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEventIntegrationAssociations", "Required field: EventIntegrationName, is not set");
    return ListEventIntegrationAssociationsOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventIntegrationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/eventIntegrations/";
  ss << request.GetEventIntegrationName();
  ss << "/associations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEventIntegrationAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventIntegrationAssociationsOutcomeCallable AppIntegrationsServiceClient::ListEventIntegrationAssociationsCallable(const ListEventIntegrationAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventIntegrationAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventIntegrationAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListEventIntegrationAssociationsAsync(const ListEventIntegrationAssociationsRequest& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEventIntegrationAssociationsAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::ListEventIntegrationAssociationsAsyncHelper(const ListEventIntegrationAssociationsRequest& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventIntegrationAssociations(request), context);
}

ListEventIntegrationsOutcome AppIntegrationsServiceClient::ListEventIntegrations(const ListEventIntegrationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/eventIntegrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEventIntegrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventIntegrationsOutcomeCallable AppIntegrationsServiceClient::ListEventIntegrationsCallable(const ListEventIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListEventIntegrationsAsync(const ListEventIntegrationsRequest& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEventIntegrationsAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::ListEventIntegrationsAsyncHelper(const ListEventIntegrationsRequest& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventIntegrations(request), context);
}

ListTagsForResourceOutcome AppIntegrationsServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppIntegrationsServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome AppIntegrationsServiceClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppIntegrationsServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AppIntegrationsServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppIntegrationsServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateEventIntegrationOutcome AppIntegrationsServiceClient::UpdateEventIntegration(const UpdateEventIntegrationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEventIntegration", "Required field: Name, is not set");
    return UpdateEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/eventIntegrations/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateEventIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventIntegrationOutcomeCallable AppIntegrationsServiceClient::UpdateEventIntegrationCallable(const UpdateEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::UpdateEventIntegrationAsync(const UpdateEventIntegrationRequest& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEventIntegrationAsyncHelper( request, handler, context ); } );
}

void AppIntegrationsServiceClient::UpdateEventIntegrationAsyncHelper(const UpdateEventIntegrationRequest& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEventIntegration(request), context);
}

