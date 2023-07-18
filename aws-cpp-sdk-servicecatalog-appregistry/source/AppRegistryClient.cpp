﻿/**
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

#include <aws/servicecatalog-appregistry/AppRegistryClient.h>
#include <aws/servicecatalog-appregistry/AppRegistryEndpoint.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrorMarshaller.h>
#include <aws/servicecatalog-appregistry/model/AssociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/AssociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/GetApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAssociatedResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListTagsForResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/SyncResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/TagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/UntagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateAttributeGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppRegistry;
using namespace Aws::AppRegistry::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "servicecatalog";
static const char* ALLOCATION_TAG = "AppRegistryClient";


AppRegistryClient::AppRegistryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppRegistryClient::~AppRegistryClient()
{
}

void AppRegistryClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Service Catalog AppRegistry");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppRegistryEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppRegistryClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateAttributeGroupOutcome AppRegistryClient::AssociateAttributeGroup(const AssociateAttributeGroupRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAttributeGroup", "Required field: Application, is not set");
    return AssociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAttributeGroup", "Required field: AttributeGroup, is not set");
    return AssociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  uri.AddPathSegments("/attribute-groups/");
  uri.AddPathSegment(request.GetAttributeGroup());
  return AssociateAttributeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateAttributeGroupOutcomeCallable AppRegistryClient::AssociateAttributeGroupCallable(const AssociateAttributeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAttributeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAttributeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::AssociateAttributeGroupAsync(const AssociateAttributeGroupRequest& request, const AssociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateAttributeGroupAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::AssociateAttributeGroupAsyncHelper(const AssociateAttributeGroupRequest& request, const AssociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateAttributeGroup(request), context);
}

AssociateResourceOutcome AppRegistryClient::AssociateResource(const AssociateResourceRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: Application, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: ResourceType, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: Resource, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  uri.AddPathSegment(request.GetResource());
  return AssociateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateResourceOutcomeCallable AppRegistryClient::AssociateResourceCallable(const AssociateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::AssociateResourceAsync(const AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateResourceAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::AssociateResourceAsyncHelper(const AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateResource(request), context);
}

CreateApplicationOutcome AppRegistryClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable AppRegistryClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateAttributeGroupOutcome AppRegistryClient::CreateAttributeGroup(const CreateAttributeGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attribute-groups");
  return CreateAttributeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAttributeGroupOutcomeCallable AppRegistryClient::CreateAttributeGroupCallable(const CreateAttributeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAttributeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAttributeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::CreateAttributeGroupAsync(const CreateAttributeGroupRequest& request, const CreateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAttributeGroupAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::CreateAttributeGroupAsyncHelper(const CreateAttributeGroupRequest& request, const CreateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAttributeGroup(request), context);
}

DeleteApplicationOutcome AppRegistryClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Application, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable AppRegistryClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteAttributeGroupOutcome AppRegistryClient::DeleteAttributeGroup(const DeleteAttributeGroupRequest& request) const
{
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttributeGroup", "Required field: AttributeGroup, is not set");
    return DeleteAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attribute-groups/");
  uri.AddPathSegment(request.GetAttributeGroup());
  return DeleteAttributeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAttributeGroupOutcomeCallable AppRegistryClient::DeleteAttributeGroupCallable(const DeleteAttributeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAttributeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAttributeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::DeleteAttributeGroupAsync(const DeleteAttributeGroupRequest& request, const DeleteAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAttributeGroupAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::DeleteAttributeGroupAsyncHelper(const DeleteAttributeGroupRequest& request, const DeleteAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAttributeGroup(request), context);
}

DisassociateAttributeGroupOutcome AppRegistryClient::DisassociateAttributeGroup(const DisassociateAttributeGroupRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAttributeGroup", "Required field: Application, is not set");
    return DisassociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAttributeGroup", "Required field: AttributeGroup, is not set");
    return DisassociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  uri.AddPathSegments("/attribute-groups/");
  uri.AddPathSegment(request.GetAttributeGroup());
  return DisassociateAttributeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAttributeGroupOutcomeCallable AppRegistryClient::DisassociateAttributeGroupCallable(const DisassociateAttributeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAttributeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAttributeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::DisassociateAttributeGroupAsync(const DisassociateAttributeGroupRequest& request, const DisassociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateAttributeGroupAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::DisassociateAttributeGroupAsyncHelper(const DisassociateAttributeGroupRequest& request, const DisassociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateAttributeGroup(request), context);
}

DisassociateResourceOutcome AppRegistryClient::DisassociateResource(const DisassociateResourceRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: Application, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: ResourceType, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: Resource, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  uri.AddPathSegment(request.GetResource());
  return DisassociateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResourceOutcomeCallable AppRegistryClient::DisassociateResourceCallable(const DisassociateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::DisassociateResourceAsync(const DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateResourceAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::DisassociateResourceAsyncHelper(const DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateResource(request), context);
}

GetApplicationOutcome AppRegistryClient::GetApplication(const GetApplicationRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Application, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  return GetApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable AppRegistryClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::GetApplicationAsyncHelper(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplication(request), context);
}

GetAssociatedResourceOutcome AppRegistryClient::GetAssociatedResource(const GetAssociatedResourceRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: Application, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: ResourceType, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: Resource, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  uri.AddPathSegment(request.GetResource());
  return GetAssociatedResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssociatedResourceOutcomeCallable AppRegistryClient::GetAssociatedResourceCallable(const GetAssociatedResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssociatedResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssociatedResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::GetAssociatedResourceAsync(const GetAssociatedResourceRequest& request, const GetAssociatedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAssociatedResourceAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::GetAssociatedResourceAsyncHelper(const GetAssociatedResourceRequest& request, const GetAssociatedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssociatedResource(request), context);
}

GetAttributeGroupOutcome AppRegistryClient::GetAttributeGroup(const GetAttributeGroupRequest& request) const
{
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttributeGroup", "Required field: AttributeGroup, is not set");
    return GetAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attribute-groups/");
  uri.AddPathSegment(request.GetAttributeGroup());
  return GetAttributeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAttributeGroupOutcomeCallable AppRegistryClient::GetAttributeGroupCallable(const GetAttributeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAttributeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAttributeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::GetAttributeGroupAsync(const GetAttributeGroupRequest& request, const GetAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAttributeGroupAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::GetAttributeGroupAsyncHelper(const GetAttributeGroupRequest& request, const GetAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAttributeGroup(request), context);
}

ListApplicationsOutcome AppRegistryClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable AppRegistryClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListAssociatedAttributeGroupsOutcome AppRegistryClient::ListAssociatedAttributeGroups(const ListAssociatedAttributeGroupsRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedAttributeGroups", "Required field: Application, is not set");
    return ListAssociatedAttributeGroupsOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  uri.AddPathSegments("/attribute-groups");
  return ListAssociatedAttributeGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedAttributeGroupsOutcomeCallable AppRegistryClient::ListAssociatedAttributeGroupsCallable(const ListAssociatedAttributeGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedAttributeGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedAttributeGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::ListAssociatedAttributeGroupsAsync(const ListAssociatedAttributeGroupsRequest& request, const ListAssociatedAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociatedAttributeGroupsAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::ListAssociatedAttributeGroupsAsyncHelper(const ListAssociatedAttributeGroupsRequest& request, const ListAssociatedAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociatedAttributeGroups(request), context);
}

ListAssociatedResourcesOutcome AppRegistryClient::ListAssociatedResources(const ListAssociatedResourcesRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedResources", "Required field: Application, is not set");
    return ListAssociatedResourcesOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  uri.AddPathSegments("/resources");
  return ListAssociatedResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedResourcesOutcomeCallable AppRegistryClient::ListAssociatedResourcesCallable(const ListAssociatedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::ListAssociatedResourcesAsync(const ListAssociatedResourcesRequest& request, const ListAssociatedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociatedResourcesAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::ListAssociatedResourcesAsyncHelper(const ListAssociatedResourcesRequest& request, const ListAssociatedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociatedResources(request), context);
}

ListAttributeGroupsOutcome AppRegistryClient::ListAttributeGroups(const ListAttributeGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attribute-groups");
  return ListAttributeGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAttributeGroupsOutcomeCallable AppRegistryClient::ListAttributeGroupsCallable(const ListAttributeGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttributeGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttributeGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::ListAttributeGroupsAsync(const ListAttributeGroupsRequest& request, const ListAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttributeGroupsAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::ListAttributeGroupsAsyncHelper(const ListAttributeGroupsRequest& request, const ListAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttributeGroups(request), context);
}

ListTagsForResourceOutcome AppRegistryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppRegistryClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

SyncResourceOutcome AppRegistryClient::SyncResource(const SyncResourceRequest& request) const
{
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SyncResource", "Required field: ResourceType, is not set");
    return SyncResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SyncResource", "Required field: Resource, is not set");
    return SyncResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sync/");
  uri.AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  uri.AddPathSegment(request.GetResource());
  return SyncResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SyncResourceOutcomeCallable AppRegistryClient::SyncResourceCallable(const SyncResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SyncResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SyncResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::SyncResourceAsync(const SyncResourceRequest& request, const SyncResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SyncResourceAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::SyncResourceAsyncHelper(const SyncResourceRequest& request, const SyncResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SyncResource(request), context);
}

TagResourceOutcome AppRegistryClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppRegistryClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AppRegistryClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppRegistryClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateApplicationOutcome AppRegistryClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Application, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplication());
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable AppRegistryClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

UpdateAttributeGroupOutcome AppRegistryClient::UpdateAttributeGroup(const UpdateAttributeGroupRequest& request) const
{
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAttributeGroup", "Required field: AttributeGroup, is not set");
    return UpdateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/attribute-groups/");
  uri.AddPathSegment(request.GetAttributeGroup());
  return UpdateAttributeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAttributeGroupOutcomeCallable AppRegistryClient::UpdateAttributeGroupCallable(const UpdateAttributeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAttributeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAttributeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::UpdateAttributeGroupAsync(const UpdateAttributeGroupRequest& request, const UpdateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAttributeGroupAsyncHelper( request, handler, context ); } );
}

void AppRegistryClient::UpdateAttributeGroupAsyncHelper(const UpdateAttributeGroupRequest& request, const UpdateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAttributeGroup(request), context);
}

