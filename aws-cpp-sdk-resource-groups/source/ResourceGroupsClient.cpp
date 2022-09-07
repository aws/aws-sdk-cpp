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

#include <aws/resource-groups/ResourceGroupsClient.h>
#include <aws/resource-groups/ResourceGroupsEndpoint.h>
#include <aws/resource-groups/ResourceGroupsErrorMarshaller.h>
#include <aws/resource-groups/model/CreateGroupRequest.h>
#include <aws/resource-groups/model/DeleteGroupRequest.h>
#include <aws/resource-groups/model/GetGroupRequest.h>
#include <aws/resource-groups/model/GetGroupConfigurationRequest.h>
#include <aws/resource-groups/model/GetGroupQueryRequest.h>
#include <aws/resource-groups/model/GetTagsRequest.h>
#include <aws/resource-groups/model/GroupResourcesRequest.h>
#include <aws/resource-groups/model/ListGroupResourcesRequest.h>
#include <aws/resource-groups/model/ListGroupsRequest.h>
#include <aws/resource-groups/model/PutGroupConfigurationRequest.h>
#include <aws/resource-groups/model/SearchResourcesRequest.h>
#include <aws/resource-groups/model/TagRequest.h>
#include <aws/resource-groups/model/UngroupResourcesRequest.h>
#include <aws/resource-groups/model/UntagRequest.h>
#include <aws/resource-groups/model/UpdateGroupRequest.h>
#include <aws/resource-groups/model/UpdateGroupQueryRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ResourceGroups;
using namespace Aws::ResourceGroups::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "resource-groups";
static const char* ALLOCATION_TAG = "ResourceGroupsClient";

ResourceGroupsClient::ResourceGroupsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsClient::ResourceGroupsClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsClient::ResourceGroupsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceGroupsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsClient::~ResourceGroupsClient()
{
}

void ResourceGroupsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Resource Groups");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ResourceGroupsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ResourceGroupsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateGroupOutcome ResourceGroupsClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/groups");
  return CreateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable ResourceGroupsClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientCreateGroupAsyncHelper(ResourceGroupsClient const * const clientThis, const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroup(request), context);
}

void ResourceGroupsClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientCreateGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupOutcome ResourceGroupsClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-group");
  return DeleteGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable ResourceGroupsClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientDeleteGroupAsyncHelper(ResourceGroupsClient const * const clientThis, const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroup(request), context);
}

void ResourceGroupsClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientDeleteGroupAsyncHelper( this, request, handler, context ); } );
}

GetGroupOutcome ResourceGroupsClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-group");
  return GetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupOutcomeCallable ResourceGroupsClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientGetGroupAsyncHelper(ResourceGroupsClient const * const clientThis, const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroup(request), context);
}

void ResourceGroupsClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientGetGroupAsyncHelper( this, request, handler, context ); } );
}

GetGroupConfigurationOutcome ResourceGroupsClient::GetGroupConfiguration(const GetGroupConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-group-configuration");
  return GetGroupConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupConfigurationOutcomeCallable ResourceGroupsClient::GetGroupConfigurationCallable(const GetGroupConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientGetGroupConfigurationAsyncHelper(ResourceGroupsClient const * const clientThis, const GetGroupConfigurationRequest& request, const GetGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroupConfiguration(request), context);
}

void ResourceGroupsClient::GetGroupConfigurationAsync(const GetGroupConfigurationRequest& request, const GetGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientGetGroupConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetGroupQueryOutcome ResourceGroupsClient::GetGroupQuery(const GetGroupQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-group-query");
  return GetGroupQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupQueryOutcomeCallable ResourceGroupsClient::GetGroupQueryCallable(const GetGroupQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientGetGroupQueryAsyncHelper(ResourceGroupsClient const * const clientThis, const GetGroupQueryRequest& request, const GetGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroupQuery(request), context);
}

void ResourceGroupsClient::GetGroupQueryAsync(const GetGroupQueryRequest& request, const GetGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientGetGroupQueryAsyncHelper( this, request, handler, context ); } );
}

GetTagsOutcome ResourceGroupsClient::GetTags(const GetTagsRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: Arn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<ResourceGroupsErrors>(ResourceGroupsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/tags");
  return GetTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTagsOutcomeCallable ResourceGroupsClient::GetTagsCallable(const GetTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientGetTagsAsyncHelper(ResourceGroupsClient const * const clientThis, const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTags(request), context);
}

void ResourceGroupsClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientGetTagsAsyncHelper( this, request, handler, context ); } );
}

GroupResourcesOutcome ResourceGroupsClient::GroupResources(const GroupResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/group-resources");
  return GroupResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GroupResourcesOutcomeCallable ResourceGroupsClient::GroupResourcesCallable(const GroupResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GroupResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GroupResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientGroupResourcesAsyncHelper(ResourceGroupsClient const * const clientThis, const GroupResourcesRequest& request, const GroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GroupResources(request), context);
}

void ResourceGroupsClient::GroupResourcesAsync(const GroupResourcesRequest& request, const GroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientGroupResourcesAsyncHelper( this, request, handler, context ); } );
}

ListGroupResourcesOutcome ResourceGroupsClient::ListGroupResources(const ListGroupResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-group-resources");
  return ListGroupResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupResourcesOutcomeCallable ResourceGroupsClient::ListGroupResourcesCallable(const ListGroupResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientListGroupResourcesAsyncHelper(ResourceGroupsClient const * const clientThis, const ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupResources(request), context);
}

void ResourceGroupsClient::ListGroupResourcesAsync(const ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientListGroupResourcesAsyncHelper( this, request, handler, context ); } );
}

ListGroupsOutcome ResourceGroupsClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/groups-list");
  return ListGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable ResourceGroupsClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientListGroupsAsyncHelper(ResourceGroupsClient const * const clientThis, const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroups(request), context);
}

void ResourceGroupsClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientListGroupsAsyncHelper( this, request, handler, context ); } );
}

PutGroupConfigurationOutcome ResourceGroupsClient::PutGroupConfiguration(const PutGroupConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/put-group-configuration");
  return PutGroupConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutGroupConfigurationOutcomeCallable ResourceGroupsClient::PutGroupConfigurationCallable(const PutGroupConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutGroupConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutGroupConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientPutGroupConfigurationAsyncHelper(ResourceGroupsClient const * const clientThis, const PutGroupConfigurationRequest& request, const PutGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutGroupConfiguration(request), context);
}

void ResourceGroupsClient::PutGroupConfigurationAsync(const PutGroupConfigurationRequest& request, const PutGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientPutGroupConfigurationAsyncHelper( this, request, handler, context ); } );
}

SearchResourcesOutcome ResourceGroupsClient::SearchResources(const SearchResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/search");
  return SearchResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchResourcesOutcomeCallable ResourceGroupsClient::SearchResourcesCallable(const SearchResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientSearchResourcesAsyncHelper(ResourceGroupsClient const * const clientThis, const SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchResources(request), context);
}

void ResourceGroupsClient::SearchResourcesAsync(const SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientSearchResourcesAsyncHelper( this, request, handler, context ); } );
}

TagOutcome ResourceGroupsClient::Tag(const TagRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Tag", "Required field: Arn, is not set");
    return TagOutcome(Aws::Client::AWSError<ResourceGroupsErrors>(ResourceGroupsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/tags");
  return TagOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagOutcomeCallable ResourceGroupsClient::TagCallable(const TagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Tag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientTagAsyncHelper(ResourceGroupsClient const * const clientThis, const TagRequest& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Tag(request), context);
}

void ResourceGroupsClient::TagAsync(const TagRequest& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientTagAsyncHelper( this, request, handler, context ); } );
}

UngroupResourcesOutcome ResourceGroupsClient::UngroupResources(const UngroupResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ungroup-resources");
  return UngroupResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UngroupResourcesOutcomeCallable ResourceGroupsClient::UngroupResourcesCallable(const UngroupResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UngroupResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UngroupResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientUngroupResourcesAsyncHelper(ResourceGroupsClient const * const clientThis, const UngroupResourcesRequest& request, const UngroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UngroupResources(request), context);
}

void ResourceGroupsClient::UngroupResourcesAsync(const UngroupResourcesRequest& request, const UngroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientUngroupResourcesAsyncHelper( this, request, handler, context ); } );
}

UntagOutcome ResourceGroupsClient::Untag(const UntagRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Untag", "Required field: Arn, is not set");
    return UntagOutcome(Aws::Client::AWSError<ResourceGroupsErrors>(ResourceGroupsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/tags");
  return UntagOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UntagOutcomeCallable ResourceGroupsClient::UntagCallable(const UntagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Untag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientUntagAsyncHelper(ResourceGroupsClient const * const clientThis, const UntagRequest& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Untag(request), context);
}

void ResourceGroupsClient::UntagAsync(const UntagRequest& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientUntagAsyncHelper( this, request, handler, context ); } );
}

UpdateGroupOutcome ResourceGroupsClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-group");
  return UpdateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcomeCallable ResourceGroupsClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientUpdateGroupAsyncHelper(ResourceGroupsClient const * const clientThis, const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGroup(request), context);
}

void ResourceGroupsClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientUpdateGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateGroupQueryOutcome ResourceGroupsClient::UpdateGroupQuery(const UpdateGroupQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-group-query");
  return UpdateGroupQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupQueryOutcomeCallable ResourceGroupsClient::UpdateGroupQueryCallable(const UpdateGroupQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroupQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsClientUpdateGroupQueryAsyncHelper(ResourceGroupsClient const * const clientThis, const UpdateGroupQueryRequest& request, const UpdateGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGroupQuery(request), context);
}

void ResourceGroupsClient::UpdateGroupQueryAsync(const UpdateGroupQueryRequest& request, const UpdateGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsClientUpdateGroupQueryAsyncHelper( this, request, handler, context ); } );
}

