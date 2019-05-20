/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaPackageVodErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageVodClient::MediaPackageVodClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaPackageVodErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageVodClient::MediaPackageVodClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAssetOutcome(CreateAssetResult(outcome.GetResult()));
  }
  else
  {
    return CreateAssetOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePackagingConfigurationOutcome(CreatePackagingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return CreatePackagingConfigurationOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePackagingGroupOutcome(CreatePackagingGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreatePackagingGroupOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAssetOutcome(DeleteAssetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAssetOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePackagingConfigurationOutcome(DeletePackagingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeletePackagingConfigurationOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePackagingGroupOutcome(DeletePackagingGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeletePackagingGroupOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAssetOutcome(DescribeAssetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAssetOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePackagingConfigurationOutcome(DescribePackagingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribePackagingConfigurationOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePackagingGroupOutcome(DescribePackagingGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribePackagingGroupOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAssetsOutcome(ListAssetsResult(outcome.GetResult()));
  }
  else
  {
    return ListAssetsOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPackagingConfigurationsOutcome(ListPackagingConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return ListPackagingConfigurationsOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPackagingGroupsOutcome(ListPackagingGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListPackagingGroupsOutcome(outcome.GetError());
  }
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

