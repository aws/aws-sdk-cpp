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

#include <aws/mediapackage-vod/MediaPackageVodClient.h>
#include <aws/mediapackage-vod/MediaPackageVodEndpoint.h>
#include <aws/mediapackage-vod/MediaPackageVodErrorMarshaller.h>
#include <aws/mediapackage-vod/model/CreateAssetRequest.h>
#include <aws/mediapackage-vod/model/CreatePackagingConfigurationRequest.h>
#include <aws/mediapackage-vod/model/CreatePackagingGroupRequest.h>
#include <aws/mediapackage-vod/model/DeleteAssetRequest.h>
#include <aws/mediapackage-vod/model/DeletePackagingConfigurationRequest.h>
#include <aws/mediapackage-vod/model/DeletePackagingGroupRequest.h>
#include <aws/mediapackage-vod/model/DescribeAssetRequest.h>
#include <aws/mediapackage-vod/model/DescribePackagingConfigurationRequest.h>
#include <aws/mediapackage-vod/model/DescribePackagingGroupRequest.h>
#include <aws/mediapackage-vod/model/ListAssetsRequest.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsRequest.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsRequest.h>
#include <aws/mediapackage-vod/model/ListTagsForResourceRequest.h>
#include <aws/mediapackage-vod/model/TagResourceRequest.h>
#include <aws/mediapackage-vod/model/UntagResourceRequest.h>
#include <aws/mediapackage-vod/model/UpdatePackagingGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaPackageVod;
using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediapackage-vod";
static const char* ALLOCATION_TAG = "MediaPackageVodClient";


MediaPackageVodClient::MediaPackageVodClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaPackageVodErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageVodClient::MediaPackageVodClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaPackageVodErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageVodClient::MediaPackageVodClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaPackageVodErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageVodClient::~MediaPackageVodClient()
{
}

void MediaPackageVodClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("MediaPackage Vod");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaPackageVodEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaPackageVodClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAssetOutcome MediaPackageVodClient::CreateAsset(const CreateAssetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assets";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAssetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssetOutcomeCallable MediaPackageVodClient::CreateAssetCallable(const CreateAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::CreateAssetAsync(const CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAssetAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::CreateAssetAsyncHelper(const CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAsset(request), context);
}

CreatePackagingConfigurationOutcome MediaPackageVodClient::CreatePackagingConfiguration(const CreatePackagingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePackagingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackagingConfigurationOutcomeCallable MediaPackageVodClient::CreatePackagingConfigurationCallable(const CreatePackagingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePackagingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePackagingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::CreatePackagingConfigurationAsync(const CreatePackagingConfigurationRequest& request, const CreatePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePackagingConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::CreatePackagingConfigurationAsyncHelper(const CreatePackagingConfigurationRequest& request, const CreatePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePackagingConfiguration(request), context);
}

CreatePackagingGroupOutcome MediaPackageVodClient::CreatePackagingGroup(const CreatePackagingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_groups";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePackagingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackagingGroupOutcomeCallable MediaPackageVodClient::CreatePackagingGroupCallable(const CreatePackagingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePackagingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePackagingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::CreatePackagingGroupAsync(const CreatePackagingGroupRequest& request, const CreatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePackagingGroupAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::CreatePackagingGroupAsyncHelper(const CreatePackagingGroupRequest& request, const CreatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePackagingGroup(request), context);
}

DeleteAssetOutcome MediaPackageVodClient::DeleteAsset(const DeleteAssetRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: Id, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assets/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAssetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssetOutcomeCallable MediaPackageVodClient::DeleteAssetCallable(const DeleteAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::DeleteAssetAsync(const DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAssetAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::DeleteAssetAsyncHelper(const DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAsset(request), context);
}

DeletePackagingConfigurationOutcome MediaPackageVodClient::DeletePackagingConfiguration(const DeletePackagingConfigurationRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackagingConfiguration", "Required field: Id, is not set");
    return DeletePackagingConfigurationOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_configurations/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePackagingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePackagingConfigurationOutcomeCallable MediaPackageVodClient::DeletePackagingConfigurationCallable(const DeletePackagingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePackagingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePackagingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::DeletePackagingConfigurationAsync(const DeletePackagingConfigurationRequest& request, const DeletePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePackagingConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::DeletePackagingConfigurationAsyncHelper(const DeletePackagingConfigurationRequest& request, const DeletePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePackagingConfiguration(request), context);
}

DeletePackagingGroupOutcome MediaPackageVodClient::DeletePackagingGroup(const DeletePackagingGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackagingGroup", "Required field: Id, is not set");
    return DeletePackagingGroupOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_groups/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePackagingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePackagingGroupOutcomeCallable MediaPackageVodClient::DeletePackagingGroupCallable(const DeletePackagingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePackagingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePackagingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::DeletePackagingGroupAsync(const DeletePackagingGroupRequest& request, const DeletePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePackagingGroupAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::DeletePackagingGroupAsyncHelper(const DeletePackagingGroupRequest& request, const DeletePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePackagingGroup(request), context);
}

DescribeAssetOutcome MediaPackageVodClient::DescribeAsset(const DescribeAssetRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAsset", "Required field: Id, is not set");
    return DescribeAssetOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assets/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAssetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssetOutcomeCallable MediaPackageVodClient::DescribeAssetCallable(const DescribeAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::DescribeAssetAsync(const DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAssetAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::DescribeAssetAsyncHelper(const DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAsset(request), context);
}

DescribePackagingConfigurationOutcome MediaPackageVodClient::DescribePackagingConfiguration(const DescribePackagingConfigurationRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackagingConfiguration", "Required field: Id, is not set");
    return DescribePackagingConfigurationOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_configurations/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePackagingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackagingConfigurationOutcomeCallable MediaPackageVodClient::DescribePackagingConfigurationCallable(const DescribePackagingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackagingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackagingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::DescribePackagingConfigurationAsync(const DescribePackagingConfigurationRequest& request, const DescribePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePackagingConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::DescribePackagingConfigurationAsyncHelper(const DescribePackagingConfigurationRequest& request, const DescribePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePackagingConfiguration(request), context);
}

DescribePackagingGroupOutcome MediaPackageVodClient::DescribePackagingGroup(const DescribePackagingGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackagingGroup", "Required field: Id, is not set");
    return DescribePackagingGroupOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_groups/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePackagingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackagingGroupOutcomeCallable MediaPackageVodClient::DescribePackagingGroupCallable(const DescribePackagingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePackagingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePackagingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::DescribePackagingGroupAsync(const DescribePackagingGroupRequest& request, const DescribePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePackagingGroupAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::DescribePackagingGroupAsyncHelper(const DescribePackagingGroupRequest& request, const DescribePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePackagingGroup(request), context);
}

ListAssetsOutcome MediaPackageVodClient::ListAssets(const ListAssetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assets";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssetsOutcomeCallable MediaPackageVodClient::ListAssetsCallable(const ListAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::ListAssetsAsync(const ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssetsAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::ListAssetsAsyncHelper(const ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssets(request), context);
}

ListPackagingConfigurationsOutcome MediaPackageVodClient::ListPackagingConfigurations(const ListPackagingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPackagingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackagingConfigurationsOutcomeCallable MediaPackageVodClient::ListPackagingConfigurationsCallable(const ListPackagingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackagingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackagingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::ListPackagingConfigurationsAsync(const ListPackagingConfigurationsRequest& request, const ListPackagingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackagingConfigurationsAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::ListPackagingConfigurationsAsyncHelper(const ListPackagingConfigurationsRequest& request, const ListPackagingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackagingConfigurations(request), context);
}

ListPackagingGroupsOutcome MediaPackageVodClient::ListPackagingGroups(const ListPackagingGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_groups";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPackagingGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackagingGroupsOutcomeCallable MediaPackageVodClient::ListPackagingGroupsCallable(const ListPackagingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPackagingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPackagingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::ListPackagingGroupsAsync(const ListPackagingGroupsRequest& request, const ListPackagingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPackagingGroupsAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::ListPackagingGroupsAsyncHelper(const ListPackagingGroupsRequest& request, const ListPackagingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPackagingGroups(request), context);
}

ListTagsForResourceOutcome MediaPackageVodClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaPackageVodClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome MediaPackageVodClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MediaPackageVodClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome MediaPackageVodClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MediaPackageVodClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdatePackagingGroupOutcome MediaPackageVodClient::UpdatePackagingGroup(const UpdatePackagingGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePackagingGroup", "Required field: Id, is not set");
    return UpdatePackagingGroupOutcome(Aws::Client::AWSError<MediaPackageVodErrors>(MediaPackageVodErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/packaging_groups/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdatePackagingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePackagingGroupOutcomeCallable MediaPackageVodClient::UpdatePackagingGroupCallable(const UpdatePackagingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePackagingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePackagingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageVodClient::UpdatePackagingGroupAsync(const UpdatePackagingGroupRequest& request, const UpdatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePackagingGroupAsyncHelper( request, handler, context ); } );
}

void MediaPackageVodClient::UpdatePackagingGroupAsyncHelper(const UpdatePackagingGroupRequest& request, const UpdatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePackagingGroup(request), context);
}

