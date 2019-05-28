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

#include <aws/groundstation/GroundStationClient.h>
#include <aws/groundstation/GroundStationEndpoint.h>
#include <aws/groundstation/GroundStationErrorMarshaller.h>
#include <aws/groundstation/model/CancelContactRequest.h>
#include <aws/groundstation/model/CreateConfigRequest.h>
#include <aws/groundstation/model/CreateDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/CreateMissionProfileRequest.h>
#include <aws/groundstation/model/DeleteConfigRequest.h>
#include <aws/groundstation/model/DeleteDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/DeleteMissionProfileRequest.h>
#include <aws/groundstation/model/DescribeContactRequest.h>
#include <aws/groundstation/model/GetConfigRequest.h>
#include <aws/groundstation/model/GetDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/GetMissionProfileRequest.h>
#include <aws/groundstation/model/ListConfigsRequest.h>
#include <aws/groundstation/model/ListContactsRequest.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsRequest.h>
#include <aws/groundstation/model/ListMissionProfilesRequest.h>
#include <aws/groundstation/model/ReserveContactRequest.h>
#include <aws/groundstation/model/UpdateConfigRequest.h>
#include <aws/groundstation/model/UpdateMissionProfileRequest.h>
#include <aws/groundstation/model/GetMinuteUsageRequest.h>
#include <aws/groundstation/model/GetSatelliteRequest.h>
#include <aws/groundstation/model/ListGroundStationsRequest.h>
#include <aws/groundstation/model/ListSatellitesRequest.h>
#include <aws/groundstation/model/ListTagsForResourceRequest.h>
#include <aws/groundstation/model/TagResourceRequest.h>
#include <aws/groundstation/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GroundStation;
using namespace Aws::GroundStation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "groundstation";
static const char* ALLOCATION_TAG = "GroundStationClient";


GroundStationClient::GroundStationClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GroundStationClient::GroundStationClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GroundStationClient::GroundStationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GroundStationClient::~GroundStationClient()
{
}

void GroundStationClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GroundStationEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GroundStationClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelContactOutcome GroundStationClient::CancelContact(const CancelContactRequest& request) const
{
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelContact", "Required field: ContactId, is not set");
    return CancelContactOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/";
  ss << request.GetContactId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelContactOutcome(CancelContactResult(outcome.GetResult()));
  }
  else
  {
    return CancelContactOutcome(outcome.GetError());
  }
}

CancelContactOutcomeCallable GroundStationClient::CancelContactCallable(const CancelContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CancelContactAsync(const CancelContactRequest& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelContactAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::CancelContactAsyncHelper(const CancelContactRequest& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelContact(request), context);
}

CreateConfigOutcome GroundStationClient::CreateConfig(const CreateConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConfigOutcome(CreateConfigResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigOutcome(outcome.GetError());
  }
}

CreateConfigOutcomeCallable GroundStationClient::CreateConfigCallable(const CreateConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::CreateConfigAsyncHelper(const CreateConfigRequest& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfig(request), context);
}

CreateDataflowEndpointGroupOutcome GroundStationClient::CreateDataflowEndpointGroup(const CreateDataflowEndpointGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/dataflowEndpointGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDataflowEndpointGroupOutcome(CreateDataflowEndpointGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDataflowEndpointGroupOutcome(outcome.GetError());
  }
}

CreateDataflowEndpointGroupOutcomeCallable GroundStationClient::CreateDataflowEndpointGroupCallable(const CreateDataflowEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataflowEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataflowEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CreateDataflowEndpointGroupAsync(const CreateDataflowEndpointGroupRequest& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataflowEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::CreateDataflowEndpointGroupAsyncHelper(const CreateDataflowEndpointGroupRequest& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataflowEndpointGroup(request), context);
}

CreateMissionProfileOutcome GroundStationClient::CreateMissionProfile(const CreateMissionProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/missionprofile";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMissionProfileOutcome(CreateMissionProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateMissionProfileOutcome(outcome.GetError());
  }
}

CreateMissionProfileOutcomeCallable GroundStationClient::CreateMissionProfileCallable(const CreateMissionProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CreateMissionProfileAsync(const CreateMissionProfileRequest& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMissionProfileAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::CreateMissionProfileAsyncHelper(const CreateMissionProfileRequest& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMissionProfile(request), context);
}

DeleteConfigOutcome GroundStationClient::DeleteConfig(const DeleteConfigRequest& request) const
{
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfig", "Required field: ConfigId, is not set");
    return DeleteConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfig", "Required field: ConfigType, is not set");
    return DeleteConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/config/";
  ss << ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType());
  ss << "/";
  ss << request.GetConfigId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConfigOutcome(DeleteConfigResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConfigOutcome(outcome.GetError());
  }
}

DeleteConfigOutcomeCallable GroundStationClient::DeleteConfigCallable(const DeleteConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::DeleteConfigAsyncHelper(const DeleteConfigRequest& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfig(request), context);
}

DeleteDataflowEndpointGroupOutcome GroundStationClient::DeleteDataflowEndpointGroup(const DeleteDataflowEndpointGroupRequest& request) const
{
  if (!request.DataflowEndpointGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataflowEndpointGroup", "Required field: DataflowEndpointGroupId, is not set");
    return DeleteDataflowEndpointGroupOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataflowEndpointGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/dataflowEndpointGroup/";
  ss << request.GetDataflowEndpointGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDataflowEndpointGroupOutcome(DeleteDataflowEndpointGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDataflowEndpointGroupOutcome(outcome.GetError());
  }
}

DeleteDataflowEndpointGroupOutcomeCallable GroundStationClient::DeleteDataflowEndpointGroupCallable(const DeleteDataflowEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataflowEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataflowEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DeleteDataflowEndpointGroupAsync(const DeleteDataflowEndpointGroupRequest& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDataflowEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::DeleteDataflowEndpointGroupAsyncHelper(const DeleteDataflowEndpointGroupRequest& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataflowEndpointGroup(request), context);
}

DeleteMissionProfileOutcome GroundStationClient::DeleteMissionProfile(const DeleteMissionProfileRequest& request) const
{
  if (!request.MissionProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMissionProfile", "Required field: MissionProfileId, is not set");
    return DeleteMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/missionprofile/";
  ss << request.GetMissionProfileId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMissionProfileOutcome(DeleteMissionProfileResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMissionProfileOutcome(outcome.GetError());
  }
}

DeleteMissionProfileOutcomeCallable GroundStationClient::DeleteMissionProfileCallable(const DeleteMissionProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DeleteMissionProfileAsync(const DeleteMissionProfileRequest& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMissionProfileAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::DeleteMissionProfileAsyncHelper(const DeleteMissionProfileRequest& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMissionProfile(request), context);
}

DescribeContactOutcome GroundStationClient::DescribeContact(const DescribeContactRequest& request) const
{
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContact", "Required field: ContactId, is not set");
    return DescribeContactOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact/";
  ss << request.GetContactId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeContactOutcome(DescribeContactResult(outcome.GetResult()));
  }
  else
  {
    return DescribeContactOutcome(outcome.GetError());
  }
}

DescribeContactOutcomeCallable GroundStationClient::DescribeContactCallable(const DescribeContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DescribeContactAsync(const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContactAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::DescribeContactAsyncHelper(const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContact(request), context);
}

GetConfigOutcome GroundStationClient::GetConfig(const GetConfigRequest& request) const
{
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfig", "Required field: ConfigId, is not set");
    return GetConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfig", "Required field: ConfigType, is not set");
    return GetConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/config/";
  ss << ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType());
  ss << "/";
  ss << request.GetConfigId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConfigOutcome(GetConfigResult(outcome.GetResult()));
  }
  else
  {
    return GetConfigOutcome(outcome.GetError());
  }
}

GetConfigOutcomeCallable GroundStationClient::GetConfigCallable(const GetConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetConfigAsync(const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConfigAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::GetConfigAsyncHelper(const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConfig(request), context);
}

GetDataflowEndpointGroupOutcome GroundStationClient::GetDataflowEndpointGroup(const GetDataflowEndpointGroupRequest& request) const
{
  if (!request.DataflowEndpointGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataflowEndpointGroup", "Required field: DataflowEndpointGroupId, is not set");
    return GetDataflowEndpointGroupOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataflowEndpointGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/dataflowEndpointGroup/";
  ss << request.GetDataflowEndpointGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDataflowEndpointGroupOutcome(GetDataflowEndpointGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetDataflowEndpointGroupOutcome(outcome.GetError());
  }
}

GetDataflowEndpointGroupOutcomeCallable GroundStationClient::GetDataflowEndpointGroupCallable(const GetDataflowEndpointGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataflowEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataflowEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetDataflowEndpointGroupAsync(const GetDataflowEndpointGroupRequest& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataflowEndpointGroupAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::GetDataflowEndpointGroupAsyncHelper(const GetDataflowEndpointGroupRequest& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataflowEndpointGroup(request), context);
}

GetMissionProfileOutcome GroundStationClient::GetMissionProfile(const GetMissionProfileRequest& request) const
{
  if (!request.MissionProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMissionProfile", "Required field: MissionProfileId, is not set");
    return GetMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/missionprofile/";
  ss << request.GetMissionProfileId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMissionProfileOutcome(GetMissionProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetMissionProfileOutcome(outcome.GetError());
  }
}

GetMissionProfileOutcomeCallable GroundStationClient::GetMissionProfileCallable(const GetMissionProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetMissionProfileAsync(const GetMissionProfileRequest& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMissionProfileAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::GetMissionProfileAsyncHelper(const GetMissionProfileRequest& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMissionProfile(request), context);
}

ListConfigsOutcome GroundStationClient::ListConfigs(const ListConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListConfigsOutcome(ListConfigsResult(outcome.GetResult()));
  }
  else
  {
    return ListConfigsOutcome(outcome.GetError());
  }
}

ListConfigsOutcomeCallable GroundStationClient::ListConfigsCallable(const ListConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListConfigsAsync(const ListConfigsRequest& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConfigsAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ListConfigsAsyncHelper(const ListConfigsRequest& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConfigs(request), context);
}

ListContactsOutcome GroundStationClient::ListContacts(const ListContactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contacts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListContactsOutcome(ListContactsResult(outcome.GetResult()));
  }
  else
  {
    return ListContactsOutcome(outcome.GetError());
  }
}

ListContactsOutcomeCallable GroundStationClient::ListContactsCallable(const ListContactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListContactsAsync(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContactsAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ListContactsAsyncHelper(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContacts(request), context);
}

ListDataflowEndpointGroupsOutcome GroundStationClient::ListDataflowEndpointGroups(const ListDataflowEndpointGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/dataflowEndpointGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDataflowEndpointGroupsOutcome(ListDataflowEndpointGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListDataflowEndpointGroupsOutcome(outcome.GetError());
  }
}

ListDataflowEndpointGroupsOutcomeCallable GroundStationClient::ListDataflowEndpointGroupsCallable(const ListDataflowEndpointGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataflowEndpointGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataflowEndpointGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListDataflowEndpointGroupsAsync(const ListDataflowEndpointGroupsRequest& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataflowEndpointGroupsAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ListDataflowEndpointGroupsAsyncHelper(const ListDataflowEndpointGroupsRequest& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataflowEndpointGroups(request), context);
}

ListMissionProfilesOutcome GroundStationClient::ListMissionProfiles(const ListMissionProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/missionprofile";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMissionProfilesOutcome(ListMissionProfilesResult(outcome.GetResult()));
  }
  else
  {
    return ListMissionProfilesOutcome(outcome.GetError());
  }
}

ListMissionProfilesOutcomeCallable GroundStationClient::ListMissionProfilesCallable(const ListMissionProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMissionProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMissionProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListMissionProfilesAsync(const ListMissionProfilesRequest& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMissionProfilesAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ListMissionProfilesAsyncHelper(const ListMissionProfilesRequest& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMissionProfiles(request), context);
}

ReserveContactOutcome GroundStationClient::ReserveContact(const ReserveContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/contact";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ReserveContactOutcome(ReserveContactResult(outcome.GetResult()));
  }
  else
  {
    return ReserveContactOutcome(outcome.GetError());
  }
}

ReserveContactOutcomeCallable GroundStationClient::ReserveContactCallable(const ReserveContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReserveContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReserveContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ReserveContactAsync(const ReserveContactRequest& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReserveContactAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ReserveContactAsyncHelper(const ReserveContactRequest& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReserveContact(request), context);
}

UpdateConfigOutcome GroundStationClient::UpdateConfig(const UpdateConfigRequest& request) const
{
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfig", "Required field: ConfigId, is not set");
    return UpdateConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfig", "Required field: ConfigType, is not set");
    return UpdateConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/config/";
  ss << ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType());
  ss << "/";
  ss << request.GetConfigId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConfigOutcome(UpdateConfigResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConfigOutcome(outcome.GetError());
  }
}

UpdateConfigOutcomeCallable GroundStationClient::UpdateConfigCallable(const UpdateConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::UpdateConfigAsync(const UpdateConfigRequest& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConfigAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::UpdateConfigAsyncHelper(const UpdateConfigRequest& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConfig(request), context);
}

UpdateMissionProfileOutcome GroundStationClient::UpdateMissionProfile(const UpdateMissionProfileRequest& request) const
{
  if (!request.MissionProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMissionProfile", "Required field: MissionProfileId, is not set");
    return UpdateMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/missionprofile/";
  ss << request.GetMissionProfileId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMissionProfileOutcome(UpdateMissionProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMissionProfileOutcome(outcome.GetError());
  }
}

UpdateMissionProfileOutcomeCallable GroundStationClient::UpdateMissionProfileCallable(const UpdateMissionProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::UpdateMissionProfileAsync(const UpdateMissionProfileRequest& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMissionProfileAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::UpdateMissionProfileAsyncHelper(const UpdateMissionProfileRequest& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMissionProfile(request), context);
}

GetMinuteUsageOutcome GroundStationClient::GetMinuteUsage(const GetMinuteUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/minute-usage";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMinuteUsageOutcome(GetMinuteUsageResult(outcome.GetResult()));
  }
  else
  {
    return GetMinuteUsageOutcome(outcome.GetError());
  }
}

GetMinuteUsageOutcomeCallable GroundStationClient::GetMinuteUsageCallable(const GetMinuteUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMinuteUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMinuteUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetMinuteUsageAsync(const GetMinuteUsageRequest& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMinuteUsageAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::GetMinuteUsageAsyncHelper(const GetMinuteUsageRequest& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMinuteUsage(request), context);
}

GetSatelliteOutcome GroundStationClient::GetSatellite(const GetSatelliteRequest& request) const
{
  if (!request.SatelliteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSatellite", "Required field: SatelliteId, is not set");
    return GetSatelliteOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SatelliteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/satellite/";
  ss << request.GetSatelliteId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSatelliteOutcome(GetSatelliteResult(outcome.GetResult()));
  }
  else
  {
    return GetSatelliteOutcome(outcome.GetError());
  }
}

GetSatelliteOutcomeCallable GroundStationClient::GetSatelliteCallable(const GetSatelliteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSatelliteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSatellite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetSatelliteAsync(const GetSatelliteRequest& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSatelliteAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::GetSatelliteAsyncHelper(const GetSatelliteRequest& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSatellite(request), context);
}

ListGroundStationsOutcome GroundStationClient::ListGroundStations(const ListGroundStationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/groundstation";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGroundStationsOutcome(ListGroundStationsResult(outcome.GetResult()));
  }
  else
  {
    return ListGroundStationsOutcome(outcome.GetError());
  }
}

ListGroundStationsOutcomeCallable GroundStationClient::ListGroundStationsCallable(const ListGroundStationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroundStationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroundStations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListGroundStationsAsync(const ListGroundStationsRequest& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroundStationsAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ListGroundStationsAsyncHelper(const ListGroundStationsRequest& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroundStations(request), context);
}

ListSatellitesOutcome GroundStationClient::ListSatellites(const ListSatellitesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/satellite";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSatellitesOutcome(ListSatellitesResult(outcome.GetResult()));
  }
  else
  {
    return ListSatellitesOutcome(outcome.GetError());
  }
}

ListSatellitesOutcomeCallable GroundStationClient::ListSatellitesCallable(const ListSatellitesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSatellitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSatellites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListSatellitesAsync(const ListSatellitesRequest& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSatellitesAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ListSatellitesAsyncHelper(const ListSatellitesRequest& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSatellites(request), context);
}

ListTagsForResourceOutcome GroundStationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable GroundStationClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome GroundStationClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable GroundStationClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome GroundStationClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable GroundStationClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void GroundStationClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

