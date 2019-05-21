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

#include <aws/alexaforbusiness/AlexaForBusinessClient.h>
#include <aws/alexaforbusiness/AlexaForBusinessEndpoint.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrorMarshaller.h>
#include <aws/alexaforbusiness/model/ApproveSkillRequest.h>
#include <aws/alexaforbusiness/model/AssociateContactWithAddressBookRequest.h>
#include <aws/alexaforbusiness/model/AssociateDeviceWithNetworkProfileRequest.h>
#include <aws/alexaforbusiness/model/AssociateDeviceWithRoomRequest.h>
#include <aws/alexaforbusiness/model/AssociateSkillGroupWithRoomRequest.h>
#include <aws/alexaforbusiness/model/AssociateSkillWithSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/AssociateSkillWithUsersRequest.h>
#include <aws/alexaforbusiness/model/CreateAddressBookRequest.h>
#include <aws/alexaforbusiness/model/CreateBusinessReportScheduleRequest.h>
#include <aws/alexaforbusiness/model/CreateConferenceProviderRequest.h>
#include <aws/alexaforbusiness/model/CreateContactRequest.h>
#include <aws/alexaforbusiness/model/CreateGatewayGroupRequest.h>
#include <aws/alexaforbusiness/model/CreateNetworkProfileRequest.h>
#include <aws/alexaforbusiness/model/CreateProfileRequest.h>
#include <aws/alexaforbusiness/model/CreateRoomRequest.h>
#include <aws/alexaforbusiness/model/CreateSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/CreateUserRequest.h>
#include <aws/alexaforbusiness/model/DeleteAddressBookRequest.h>
#include <aws/alexaforbusiness/model/DeleteBusinessReportScheduleRequest.h>
#include <aws/alexaforbusiness/model/DeleteConferenceProviderRequest.h>
#include <aws/alexaforbusiness/model/DeleteContactRequest.h>
#include <aws/alexaforbusiness/model/DeleteDeviceRequest.h>
#include <aws/alexaforbusiness/model/DeleteDeviceUsageDataRequest.h>
#include <aws/alexaforbusiness/model/DeleteGatewayGroupRequest.h>
#include <aws/alexaforbusiness/model/DeleteNetworkProfileRequest.h>
#include <aws/alexaforbusiness/model/DeleteProfileRequest.h>
#include <aws/alexaforbusiness/model/DeleteRoomRequest.h>
#include <aws/alexaforbusiness/model/DeleteRoomSkillParameterRequest.h>
#include <aws/alexaforbusiness/model/DeleteSkillAuthorizationRequest.h>
#include <aws/alexaforbusiness/model/DeleteSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/DeleteUserRequest.h>
#include <aws/alexaforbusiness/model/DisassociateContactFromAddressBookRequest.h>
#include <aws/alexaforbusiness/model/DisassociateDeviceFromRoomRequest.h>
#include <aws/alexaforbusiness/model/DisassociateSkillFromSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/DisassociateSkillFromUsersRequest.h>
#include <aws/alexaforbusiness/model/DisassociateSkillGroupFromRoomRequest.h>
#include <aws/alexaforbusiness/model/ForgetSmartHomeAppliancesRequest.h>
#include <aws/alexaforbusiness/model/GetAddressBookRequest.h>
#include <aws/alexaforbusiness/model/GetConferencePreferenceRequest.h>
#include <aws/alexaforbusiness/model/GetConferenceProviderRequest.h>
#include <aws/alexaforbusiness/model/GetContactRequest.h>
#include <aws/alexaforbusiness/model/GetDeviceRequest.h>
#include <aws/alexaforbusiness/model/GetGatewayRequest.h>
#include <aws/alexaforbusiness/model/GetGatewayGroupRequest.h>
#include <aws/alexaforbusiness/model/GetInvitationConfigurationRequest.h>
#include <aws/alexaforbusiness/model/GetNetworkProfileRequest.h>
#include <aws/alexaforbusiness/model/GetProfileRequest.h>
#include <aws/alexaforbusiness/model/GetRoomRequest.h>
#include <aws/alexaforbusiness/model/GetRoomSkillParameterRequest.h>
#include <aws/alexaforbusiness/model/GetSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/ListBusinessReportSchedulesRequest.h>
#include <aws/alexaforbusiness/model/ListConferenceProvidersRequest.h>
#include <aws/alexaforbusiness/model/ListDeviceEventsRequest.h>
#include <aws/alexaforbusiness/model/ListGatewayGroupsRequest.h>
#include <aws/alexaforbusiness/model/ListGatewaysRequest.h>
#include <aws/alexaforbusiness/model/ListSkillsRequest.h>
#include <aws/alexaforbusiness/model/ListSkillsStoreCategoriesRequest.h>
#include <aws/alexaforbusiness/model/ListSkillsStoreSkillsByCategoryRequest.h>
#include <aws/alexaforbusiness/model/ListSmartHomeAppliancesRequest.h>
#include <aws/alexaforbusiness/model/ListTagsRequest.h>
#include <aws/alexaforbusiness/model/PutConferencePreferenceRequest.h>
#include <aws/alexaforbusiness/model/PutInvitationConfigurationRequest.h>
#include <aws/alexaforbusiness/model/PutRoomSkillParameterRequest.h>
#include <aws/alexaforbusiness/model/PutSkillAuthorizationRequest.h>
#include <aws/alexaforbusiness/model/RegisterAVSDeviceRequest.h>
#include <aws/alexaforbusiness/model/RejectSkillRequest.h>
#include <aws/alexaforbusiness/model/ResolveRoomRequest.h>
#include <aws/alexaforbusiness/model/RevokeInvitationRequest.h>
#include <aws/alexaforbusiness/model/SearchAddressBooksRequest.h>
#include <aws/alexaforbusiness/model/SearchContactsRequest.h>
#include <aws/alexaforbusiness/model/SearchDevicesRequest.h>
#include <aws/alexaforbusiness/model/SearchNetworkProfilesRequest.h>
#include <aws/alexaforbusiness/model/SearchProfilesRequest.h>
#include <aws/alexaforbusiness/model/SearchRoomsRequest.h>
#include <aws/alexaforbusiness/model/SearchSkillGroupsRequest.h>
#include <aws/alexaforbusiness/model/SearchUsersRequest.h>
#include <aws/alexaforbusiness/model/SendAnnouncementRequest.h>
#include <aws/alexaforbusiness/model/SendInvitationRequest.h>
#include <aws/alexaforbusiness/model/StartDeviceSyncRequest.h>
#include <aws/alexaforbusiness/model/StartSmartHomeApplianceDiscoveryRequest.h>
#include <aws/alexaforbusiness/model/TagResourceRequest.h>
#include <aws/alexaforbusiness/model/UntagResourceRequest.h>
#include <aws/alexaforbusiness/model/UpdateAddressBookRequest.h>
#include <aws/alexaforbusiness/model/UpdateBusinessReportScheduleRequest.h>
#include <aws/alexaforbusiness/model/UpdateConferenceProviderRequest.h>
#include <aws/alexaforbusiness/model/UpdateContactRequest.h>
#include <aws/alexaforbusiness/model/UpdateDeviceRequest.h>
#include <aws/alexaforbusiness/model/UpdateGatewayRequest.h>
#include <aws/alexaforbusiness/model/UpdateGatewayGroupRequest.h>
#include <aws/alexaforbusiness/model/UpdateNetworkProfileRequest.h>
#include <aws/alexaforbusiness/model/UpdateProfileRequest.h>
#include <aws/alexaforbusiness/model/UpdateRoomRequest.h>
#include <aws/alexaforbusiness/model/UpdateSkillGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AlexaForBusiness;
using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "a4b";
static const char* ALLOCATION_TAG = "AlexaForBusinessClient";


AlexaForBusinessClient::AlexaForBusinessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::~AlexaForBusinessClient()
{
}

void AlexaForBusinessClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AlexaForBusinessEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AlexaForBusinessClient::OverrideEndpoint(const Aws::String& endpoint)
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

ApproveSkillOutcome AlexaForBusinessClient::ApproveSkill(const ApproveSkillRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ApproveSkillOutcome(ApproveSkillResult(outcome.GetResult()));
  }
  else
  {
    return ApproveSkillOutcome(outcome.GetError());
  }
}

ApproveSkillOutcomeCallable AlexaForBusinessClient::ApproveSkillCallable(const ApproveSkillRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApproveSkillOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApproveSkill(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ApproveSkillAsync(const ApproveSkillRequest& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApproveSkillAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ApproveSkillAsyncHelper(const ApproveSkillRequest& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApproveSkill(request), context);
}

AssociateContactWithAddressBookOutcome AlexaForBusinessClient::AssociateContactWithAddressBook(const AssociateContactWithAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateContactWithAddressBookOutcome(AssociateContactWithAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return AssociateContactWithAddressBookOutcome(outcome.GetError());
  }
}

AssociateContactWithAddressBookOutcomeCallable AlexaForBusinessClient::AssociateContactWithAddressBookCallable(const AssociateContactWithAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateContactWithAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateContactWithAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateContactWithAddressBookAsync(const AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateContactWithAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateContactWithAddressBookAsyncHelper(const AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateContactWithAddressBook(request), context);
}

AssociateDeviceWithNetworkProfileOutcome AlexaForBusinessClient::AssociateDeviceWithNetworkProfile(const AssociateDeviceWithNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDeviceWithNetworkProfileOutcome(AssociateDeviceWithNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDeviceWithNetworkProfileOutcome(outcome.GetError());
  }
}

AssociateDeviceWithNetworkProfileOutcomeCallable AlexaForBusinessClient::AssociateDeviceWithNetworkProfileCallable(const AssociateDeviceWithNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDeviceWithNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDeviceWithNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateDeviceWithNetworkProfileAsync(const AssociateDeviceWithNetworkProfileRequest& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDeviceWithNetworkProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateDeviceWithNetworkProfileAsyncHelper(const AssociateDeviceWithNetworkProfileRequest& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDeviceWithNetworkProfile(request), context);
}

AssociateDeviceWithRoomOutcome AlexaForBusinessClient::AssociateDeviceWithRoom(const AssociateDeviceWithRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDeviceWithRoomOutcome(AssociateDeviceWithRoomResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDeviceWithRoomOutcome(outcome.GetError());
  }
}

AssociateDeviceWithRoomOutcomeCallable AlexaForBusinessClient::AssociateDeviceWithRoomCallable(const AssociateDeviceWithRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDeviceWithRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDeviceWithRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateDeviceWithRoomAsync(const AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDeviceWithRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateDeviceWithRoomAsyncHelper(const AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDeviceWithRoom(request), context);
}

AssociateSkillGroupWithRoomOutcome AlexaForBusinessClient::AssociateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateSkillGroupWithRoomOutcome(AssociateSkillGroupWithRoomResult(outcome.GetResult()));
  }
  else
  {
    return AssociateSkillGroupWithRoomOutcome(outcome.GetError());
  }
}

AssociateSkillGroupWithRoomOutcomeCallable AlexaForBusinessClient::AssociateSkillGroupWithRoomCallable(const AssociateSkillGroupWithRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSkillGroupWithRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSkillGroupWithRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateSkillGroupWithRoomAsync(const AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSkillGroupWithRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateSkillGroupWithRoomAsyncHelper(const AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSkillGroupWithRoom(request), context);
}

AssociateSkillWithSkillGroupOutcome AlexaForBusinessClient::AssociateSkillWithSkillGroup(const AssociateSkillWithSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateSkillWithSkillGroupOutcome(AssociateSkillWithSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return AssociateSkillWithSkillGroupOutcome(outcome.GetError());
  }
}

AssociateSkillWithSkillGroupOutcomeCallable AlexaForBusinessClient::AssociateSkillWithSkillGroupCallable(const AssociateSkillWithSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSkillWithSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSkillWithSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateSkillWithSkillGroupAsync(const AssociateSkillWithSkillGroupRequest& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSkillWithSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateSkillWithSkillGroupAsyncHelper(const AssociateSkillWithSkillGroupRequest& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSkillWithSkillGroup(request), context);
}

AssociateSkillWithUsersOutcome AlexaForBusinessClient::AssociateSkillWithUsers(const AssociateSkillWithUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateSkillWithUsersOutcome(AssociateSkillWithUsersResult(outcome.GetResult()));
  }
  else
  {
    return AssociateSkillWithUsersOutcome(outcome.GetError());
  }
}

AssociateSkillWithUsersOutcomeCallable AlexaForBusinessClient::AssociateSkillWithUsersCallable(const AssociateSkillWithUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSkillWithUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSkillWithUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateSkillWithUsersAsync(const AssociateSkillWithUsersRequest& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSkillWithUsersAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateSkillWithUsersAsyncHelper(const AssociateSkillWithUsersRequest& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSkillWithUsers(request), context);
}

CreateAddressBookOutcome AlexaForBusinessClient::CreateAddressBook(const CreateAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAddressBookOutcome(CreateAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return CreateAddressBookOutcome(outcome.GetError());
  }
}

CreateAddressBookOutcomeCallable AlexaForBusinessClient::CreateAddressBookCallable(const CreateAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateAddressBookAsync(const CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateAddressBookAsyncHelper(const CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAddressBook(request), context);
}

CreateBusinessReportScheduleOutcome AlexaForBusinessClient::CreateBusinessReportSchedule(const CreateBusinessReportScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBusinessReportScheduleOutcome(CreateBusinessReportScheduleResult(outcome.GetResult()));
  }
  else
  {
    return CreateBusinessReportScheduleOutcome(outcome.GetError());
  }
}

CreateBusinessReportScheduleOutcomeCallable AlexaForBusinessClient::CreateBusinessReportScheduleCallable(const CreateBusinessReportScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBusinessReportScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBusinessReportSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateBusinessReportScheduleAsync(const CreateBusinessReportScheduleRequest& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBusinessReportScheduleAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateBusinessReportScheduleAsyncHelper(const CreateBusinessReportScheduleRequest& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBusinessReportSchedule(request), context);
}

CreateConferenceProviderOutcome AlexaForBusinessClient::CreateConferenceProvider(const CreateConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConferenceProviderOutcome(CreateConferenceProviderResult(outcome.GetResult()));
  }
  else
  {
    return CreateConferenceProviderOutcome(outcome.GetError());
  }
}

CreateConferenceProviderOutcomeCallable AlexaForBusinessClient::CreateConferenceProviderCallable(const CreateConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateConferenceProviderAsync(const CreateConferenceProviderRequest& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConferenceProviderAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateConferenceProviderAsyncHelper(const CreateConferenceProviderRequest& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConferenceProvider(request), context);
}

CreateContactOutcome AlexaForBusinessClient::CreateContact(const CreateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateContactOutcome(CreateContactResult(outcome.GetResult()));
  }
  else
  {
    return CreateContactOutcome(outcome.GetError());
  }
}

CreateContactOutcomeCallable AlexaForBusinessClient::CreateContactCallable(const CreateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateContactAsync(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateContactAsyncHelper(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateContact(request), context);
}

CreateGatewayGroupOutcome AlexaForBusinessClient::CreateGatewayGroup(const CreateGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGatewayGroupOutcome(CreateGatewayGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateGatewayGroupOutcome(outcome.GetError());
  }
}

CreateGatewayGroupOutcomeCallable AlexaForBusinessClient::CreateGatewayGroupCallable(const CreateGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateGatewayGroupAsync(const CreateGatewayGroupRequest& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGatewayGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateGatewayGroupAsyncHelper(const CreateGatewayGroupRequest& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGatewayGroup(request), context);
}

CreateNetworkProfileOutcome AlexaForBusinessClient::CreateNetworkProfile(const CreateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNetworkProfileOutcome(CreateNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateNetworkProfileOutcome(outcome.GetError());
  }
}

CreateNetworkProfileOutcomeCallable AlexaForBusinessClient::CreateNetworkProfileCallable(const CreateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateNetworkProfileAsync(const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateNetworkProfileAsyncHelper(const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetworkProfile(request), context);
}

CreateProfileOutcome AlexaForBusinessClient::CreateProfile(const CreateProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProfileOutcome(CreateProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateProfileOutcome(outcome.GetError());
  }
}

CreateProfileOutcomeCallable AlexaForBusinessClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateProfileAsyncHelper(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProfile(request), context);
}

CreateRoomOutcome AlexaForBusinessClient::CreateRoom(const CreateRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRoomOutcome(CreateRoomResult(outcome.GetResult()));
  }
  else
  {
    return CreateRoomOutcome(outcome.GetError());
  }
}

CreateRoomOutcomeCallable AlexaForBusinessClient::CreateRoomCallable(const CreateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateRoomAsync(const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateRoomAsyncHelper(const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoom(request), context);
}

CreateSkillGroupOutcome AlexaForBusinessClient::CreateSkillGroup(const CreateSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSkillGroupOutcome(CreateSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateSkillGroupOutcome(outcome.GetError());
  }
}

CreateSkillGroupOutcomeCallable AlexaForBusinessClient::CreateSkillGroupCallable(const CreateSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateSkillGroupAsync(const CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateSkillGroupAsyncHelper(const CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSkillGroup(request), context);
}

CreateUserOutcome AlexaForBusinessClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserOutcome(CreateUserResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserOutcome(outcome.GetError());
  }
}

CreateUserOutcomeCallable AlexaForBusinessClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeleteAddressBookOutcome AlexaForBusinessClient::DeleteAddressBook(const DeleteAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAddressBookOutcome(DeleteAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAddressBookOutcome(outcome.GetError());
  }
}

DeleteAddressBookOutcomeCallable AlexaForBusinessClient::DeleteAddressBookCallable(const DeleteAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteAddressBookAsync(const DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteAddressBookAsyncHelper(const DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAddressBook(request), context);
}

DeleteBusinessReportScheduleOutcome AlexaForBusinessClient::DeleteBusinessReportSchedule(const DeleteBusinessReportScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBusinessReportScheduleOutcome(DeleteBusinessReportScheduleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBusinessReportScheduleOutcome(outcome.GetError());
  }
}

DeleteBusinessReportScheduleOutcomeCallable AlexaForBusinessClient::DeleteBusinessReportScheduleCallable(const DeleteBusinessReportScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBusinessReportScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBusinessReportSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteBusinessReportScheduleAsync(const DeleteBusinessReportScheduleRequest& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBusinessReportScheduleAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteBusinessReportScheduleAsyncHelper(const DeleteBusinessReportScheduleRequest& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBusinessReportSchedule(request), context);
}

DeleteConferenceProviderOutcome AlexaForBusinessClient::DeleteConferenceProvider(const DeleteConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConferenceProviderOutcome(DeleteConferenceProviderResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConferenceProviderOutcome(outcome.GetError());
  }
}

DeleteConferenceProviderOutcomeCallable AlexaForBusinessClient::DeleteConferenceProviderCallable(const DeleteConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteConferenceProviderAsync(const DeleteConferenceProviderRequest& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConferenceProviderAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteConferenceProviderAsyncHelper(const DeleteConferenceProviderRequest& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConferenceProvider(request), context);
}

DeleteContactOutcome AlexaForBusinessClient::DeleteContact(const DeleteContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteContactOutcome(DeleteContactResult(outcome.GetResult()));
  }
  else
  {
    return DeleteContactOutcome(outcome.GetError());
  }
}

DeleteContactOutcomeCallable AlexaForBusinessClient::DeleteContactCallable(const DeleteContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteContactAsync(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteContactAsyncHelper(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContact(request), context);
}

DeleteDeviceOutcome AlexaForBusinessClient::DeleteDevice(const DeleteDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDeviceOutcome(DeleteDeviceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDeviceOutcome(outcome.GetError());
  }
}

DeleteDeviceOutcomeCallable AlexaForBusinessClient::DeleteDeviceCallable(const DeleteDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeviceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteDeviceAsyncHelper(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDevice(request), context);
}

DeleteDeviceUsageDataOutcome AlexaForBusinessClient::DeleteDeviceUsageData(const DeleteDeviceUsageDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDeviceUsageDataOutcome(DeleteDeviceUsageDataResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDeviceUsageDataOutcome(outcome.GetError());
  }
}

DeleteDeviceUsageDataOutcomeCallable AlexaForBusinessClient::DeleteDeviceUsageDataCallable(const DeleteDeviceUsageDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceUsageDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeviceUsageData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteDeviceUsageDataAsync(const DeleteDeviceUsageDataRequest& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeviceUsageDataAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteDeviceUsageDataAsyncHelper(const DeleteDeviceUsageDataRequest& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeviceUsageData(request), context);
}

DeleteGatewayGroupOutcome AlexaForBusinessClient::DeleteGatewayGroup(const DeleteGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGatewayGroupOutcome(DeleteGatewayGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGatewayGroupOutcome(outcome.GetError());
  }
}

DeleteGatewayGroupOutcomeCallable AlexaForBusinessClient::DeleteGatewayGroupCallable(const DeleteGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteGatewayGroupAsync(const DeleteGatewayGroupRequest& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGatewayGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteGatewayGroupAsyncHelper(const DeleteGatewayGroupRequest& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGatewayGroup(request), context);
}

DeleteNetworkProfileOutcome AlexaForBusinessClient::DeleteNetworkProfile(const DeleteNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNetworkProfileOutcome(DeleteNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNetworkProfileOutcome(outcome.GetError());
  }
}

DeleteNetworkProfileOutcomeCallable AlexaForBusinessClient::DeleteNetworkProfileCallable(const DeleteNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteNetworkProfileAsync(const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNetworkProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteNetworkProfileAsyncHelper(const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNetworkProfile(request), context);
}

DeleteProfileOutcome AlexaForBusinessClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProfileOutcome(DeleteProfileResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProfileOutcome(outcome.GetError());
  }
}

DeleteProfileOutcomeCallable AlexaForBusinessClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteProfileAsyncHelper(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfile(request), context);
}

DeleteRoomOutcome AlexaForBusinessClient::DeleteRoom(const DeleteRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRoomOutcome(DeleteRoomResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRoomOutcome(outcome.GetError());
  }
}

DeleteRoomOutcomeCallable AlexaForBusinessClient::DeleteRoomCallable(const DeleteRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteRoomAsync(const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteRoomAsyncHelper(const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoom(request), context);
}

DeleteRoomSkillParameterOutcome AlexaForBusinessClient::DeleteRoomSkillParameter(const DeleteRoomSkillParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRoomSkillParameterOutcome(DeleteRoomSkillParameterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRoomSkillParameterOutcome(outcome.GetError());
  }
}

DeleteRoomSkillParameterOutcomeCallable AlexaForBusinessClient::DeleteRoomSkillParameterCallable(const DeleteRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteRoomSkillParameterAsync(const DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoomSkillParameterAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteRoomSkillParameterAsyncHelper(const DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoomSkillParameter(request), context);
}

DeleteSkillAuthorizationOutcome AlexaForBusinessClient::DeleteSkillAuthorization(const DeleteSkillAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSkillAuthorizationOutcome(DeleteSkillAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSkillAuthorizationOutcome(outcome.GetError());
  }
}

DeleteSkillAuthorizationOutcomeCallable AlexaForBusinessClient::DeleteSkillAuthorizationCallable(const DeleteSkillAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSkillAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSkillAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteSkillAuthorizationAsync(const DeleteSkillAuthorizationRequest& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSkillAuthorizationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteSkillAuthorizationAsyncHelper(const DeleteSkillAuthorizationRequest& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSkillAuthorization(request), context);
}

DeleteSkillGroupOutcome AlexaForBusinessClient::DeleteSkillGroup(const DeleteSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSkillGroupOutcome(DeleteSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSkillGroupOutcome(outcome.GetError());
  }
}

DeleteSkillGroupOutcomeCallable AlexaForBusinessClient::DeleteSkillGroupCallable(const DeleteSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteSkillGroupAsync(const DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteSkillGroupAsyncHelper(const DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSkillGroup(request), context);
}

DeleteUserOutcome AlexaForBusinessClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserOutcome(DeleteUserResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserOutcome(outcome.GetError());
  }
}

DeleteUserOutcomeCallable AlexaForBusinessClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DisassociateContactFromAddressBookOutcome AlexaForBusinessClient::DisassociateContactFromAddressBook(const DisassociateContactFromAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateContactFromAddressBookOutcome(DisassociateContactFromAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateContactFromAddressBookOutcome(outcome.GetError());
  }
}

DisassociateContactFromAddressBookOutcomeCallable AlexaForBusinessClient::DisassociateContactFromAddressBookCallable(const DisassociateContactFromAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateContactFromAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateContactFromAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateContactFromAddressBookAsync(const DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateContactFromAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateContactFromAddressBookAsyncHelper(const DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateContactFromAddressBook(request), context);
}

DisassociateDeviceFromRoomOutcome AlexaForBusinessClient::DisassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDeviceFromRoomOutcome(DisassociateDeviceFromRoomResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDeviceFromRoomOutcome(outcome.GetError());
  }
}

DisassociateDeviceFromRoomOutcomeCallable AlexaForBusinessClient::DisassociateDeviceFromRoomCallable(const DisassociateDeviceFromRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDeviceFromRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDeviceFromRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateDeviceFromRoomAsync(const DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDeviceFromRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateDeviceFromRoomAsyncHelper(const DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDeviceFromRoom(request), context);
}

DisassociateSkillFromSkillGroupOutcome AlexaForBusinessClient::DisassociateSkillFromSkillGroup(const DisassociateSkillFromSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateSkillFromSkillGroupOutcome(DisassociateSkillFromSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateSkillFromSkillGroupOutcome(outcome.GetError());
  }
}

DisassociateSkillFromSkillGroupOutcomeCallable AlexaForBusinessClient::DisassociateSkillFromSkillGroupCallable(const DisassociateSkillFromSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSkillFromSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSkillFromSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateSkillFromSkillGroupAsync(const DisassociateSkillFromSkillGroupRequest& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSkillFromSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateSkillFromSkillGroupAsyncHelper(const DisassociateSkillFromSkillGroupRequest& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSkillFromSkillGroup(request), context);
}

DisassociateSkillFromUsersOutcome AlexaForBusinessClient::DisassociateSkillFromUsers(const DisassociateSkillFromUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateSkillFromUsersOutcome(DisassociateSkillFromUsersResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateSkillFromUsersOutcome(outcome.GetError());
  }
}

DisassociateSkillFromUsersOutcomeCallable AlexaForBusinessClient::DisassociateSkillFromUsersCallable(const DisassociateSkillFromUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSkillFromUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSkillFromUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateSkillFromUsersAsync(const DisassociateSkillFromUsersRequest& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSkillFromUsersAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateSkillFromUsersAsyncHelper(const DisassociateSkillFromUsersRequest& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSkillFromUsers(request), context);
}

DisassociateSkillGroupFromRoomOutcome AlexaForBusinessClient::DisassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateSkillGroupFromRoomOutcome(DisassociateSkillGroupFromRoomResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateSkillGroupFromRoomOutcome(outcome.GetError());
  }
}

DisassociateSkillGroupFromRoomOutcomeCallable AlexaForBusinessClient::DisassociateSkillGroupFromRoomCallable(const DisassociateSkillGroupFromRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSkillGroupFromRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSkillGroupFromRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateSkillGroupFromRoomAsync(const DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSkillGroupFromRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateSkillGroupFromRoomAsyncHelper(const DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSkillGroupFromRoom(request), context);
}

ForgetSmartHomeAppliancesOutcome AlexaForBusinessClient::ForgetSmartHomeAppliances(const ForgetSmartHomeAppliancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ForgetSmartHomeAppliancesOutcome(ForgetSmartHomeAppliancesResult(outcome.GetResult()));
  }
  else
  {
    return ForgetSmartHomeAppliancesOutcome(outcome.GetError());
  }
}

ForgetSmartHomeAppliancesOutcomeCallable AlexaForBusinessClient::ForgetSmartHomeAppliancesCallable(const ForgetSmartHomeAppliancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ForgetSmartHomeAppliancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ForgetSmartHomeAppliances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ForgetSmartHomeAppliancesAsync(const ForgetSmartHomeAppliancesRequest& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ForgetSmartHomeAppliancesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ForgetSmartHomeAppliancesAsyncHelper(const ForgetSmartHomeAppliancesRequest& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ForgetSmartHomeAppliances(request), context);
}

GetAddressBookOutcome AlexaForBusinessClient::GetAddressBook(const GetAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAddressBookOutcome(GetAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return GetAddressBookOutcome(outcome.GetError());
  }
}

GetAddressBookOutcomeCallable AlexaForBusinessClient::GetAddressBookCallable(const GetAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetAddressBookAsync(const GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetAddressBookAsyncHelper(const GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAddressBook(request), context);
}

GetConferencePreferenceOutcome AlexaForBusinessClient::GetConferencePreference(const GetConferencePreferenceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConferencePreferenceOutcome(GetConferencePreferenceResult(outcome.GetResult()));
  }
  else
  {
    return GetConferencePreferenceOutcome(outcome.GetError());
  }
}

GetConferencePreferenceOutcomeCallable AlexaForBusinessClient::GetConferencePreferenceCallable(const GetConferencePreferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConferencePreferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConferencePreference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetConferencePreferenceAsync(const GetConferencePreferenceRequest& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConferencePreferenceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetConferencePreferenceAsyncHelper(const GetConferencePreferenceRequest& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConferencePreference(request), context);
}

GetConferenceProviderOutcome AlexaForBusinessClient::GetConferenceProvider(const GetConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConferenceProviderOutcome(GetConferenceProviderResult(outcome.GetResult()));
  }
  else
  {
    return GetConferenceProviderOutcome(outcome.GetError());
  }
}

GetConferenceProviderOutcomeCallable AlexaForBusinessClient::GetConferenceProviderCallable(const GetConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetConferenceProviderAsync(const GetConferenceProviderRequest& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConferenceProviderAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetConferenceProviderAsyncHelper(const GetConferenceProviderRequest& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConferenceProvider(request), context);
}

GetContactOutcome AlexaForBusinessClient::GetContact(const GetContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetContactOutcome(GetContactResult(outcome.GetResult()));
  }
  else
  {
    return GetContactOutcome(outcome.GetError());
  }
}

GetContactOutcomeCallable AlexaForBusinessClient::GetContactCallable(const GetContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetContactAsync(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetContactAsyncHelper(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContact(request), context);
}

GetDeviceOutcome AlexaForBusinessClient::GetDevice(const GetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceOutcome(GetDeviceResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceOutcome(outcome.GetError());
  }
}

GetDeviceOutcomeCallable AlexaForBusinessClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetDeviceAsyncHelper(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevice(request), context);
}

GetGatewayOutcome AlexaForBusinessClient::GetGateway(const GetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGatewayOutcome(GetGatewayResult(outcome.GetResult()));
  }
  else
  {
    return GetGatewayOutcome(outcome.GetError());
  }
}

GetGatewayOutcomeCallable AlexaForBusinessClient::GetGatewayCallable(const GetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetGatewayAsync(const GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGatewayAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetGatewayAsyncHelper(const GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGateway(request), context);
}

GetGatewayGroupOutcome AlexaForBusinessClient::GetGatewayGroup(const GetGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGatewayGroupOutcome(GetGatewayGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetGatewayGroupOutcome(outcome.GetError());
  }
}

GetGatewayGroupOutcomeCallable AlexaForBusinessClient::GetGatewayGroupCallable(const GetGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetGatewayGroupAsync(const GetGatewayGroupRequest& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGatewayGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetGatewayGroupAsyncHelper(const GetGatewayGroupRequest& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGatewayGroup(request), context);
}

GetInvitationConfigurationOutcome AlexaForBusinessClient::GetInvitationConfiguration(const GetInvitationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInvitationConfigurationOutcome(GetInvitationConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetInvitationConfigurationOutcome(outcome.GetError());
  }
}

GetInvitationConfigurationOutcomeCallable AlexaForBusinessClient::GetInvitationConfigurationCallable(const GetInvitationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetInvitationConfigurationAsync(const GetInvitationConfigurationRequest& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvitationConfigurationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetInvitationConfigurationAsyncHelper(const GetInvitationConfigurationRequest& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvitationConfiguration(request), context);
}

GetNetworkProfileOutcome AlexaForBusinessClient::GetNetworkProfile(const GetNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNetworkProfileOutcome(GetNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetNetworkProfileOutcome(outcome.GetError());
  }
}

GetNetworkProfileOutcomeCallable AlexaForBusinessClient::GetNetworkProfileCallable(const GetNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetNetworkProfileAsync(const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetNetworkProfileAsyncHelper(const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetworkProfile(request), context);
}

GetProfileOutcome AlexaForBusinessClient::GetProfile(const GetProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetProfileOutcome(GetProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetProfileOutcome(outcome.GetError());
  }
}

GetProfileOutcomeCallable AlexaForBusinessClient::GetProfileCallable(const GetProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetProfileAsync(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetProfileAsyncHelper(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProfile(request), context);
}

GetRoomOutcome AlexaForBusinessClient::GetRoom(const GetRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRoomOutcome(GetRoomResult(outcome.GetResult()));
  }
  else
  {
    return GetRoomOutcome(outcome.GetError());
  }
}

GetRoomOutcomeCallable AlexaForBusinessClient::GetRoomCallable(const GetRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetRoomAsync(const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetRoomAsyncHelper(const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoom(request), context);
}

GetRoomSkillParameterOutcome AlexaForBusinessClient::GetRoomSkillParameter(const GetRoomSkillParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRoomSkillParameterOutcome(GetRoomSkillParameterResult(outcome.GetResult()));
  }
  else
  {
    return GetRoomSkillParameterOutcome(outcome.GetError());
  }
}

GetRoomSkillParameterOutcomeCallable AlexaForBusinessClient::GetRoomSkillParameterCallable(const GetRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetRoomSkillParameterAsync(const GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoomSkillParameterAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetRoomSkillParameterAsyncHelper(const GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoomSkillParameter(request), context);
}

GetSkillGroupOutcome AlexaForBusinessClient::GetSkillGroup(const GetSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSkillGroupOutcome(GetSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetSkillGroupOutcome(outcome.GetError());
  }
}

GetSkillGroupOutcomeCallable AlexaForBusinessClient::GetSkillGroupCallable(const GetSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetSkillGroupAsync(const GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetSkillGroupAsyncHelper(const GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSkillGroup(request), context);
}

ListBusinessReportSchedulesOutcome AlexaForBusinessClient::ListBusinessReportSchedules(const ListBusinessReportSchedulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBusinessReportSchedulesOutcome(ListBusinessReportSchedulesResult(outcome.GetResult()));
  }
  else
  {
    return ListBusinessReportSchedulesOutcome(outcome.GetError());
  }
}

ListBusinessReportSchedulesOutcomeCallable AlexaForBusinessClient::ListBusinessReportSchedulesCallable(const ListBusinessReportSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBusinessReportSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBusinessReportSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListBusinessReportSchedulesAsync(const ListBusinessReportSchedulesRequest& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBusinessReportSchedulesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListBusinessReportSchedulesAsyncHelper(const ListBusinessReportSchedulesRequest& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBusinessReportSchedules(request), context);
}

ListConferenceProvidersOutcome AlexaForBusinessClient::ListConferenceProviders(const ListConferenceProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListConferenceProvidersOutcome(ListConferenceProvidersResult(outcome.GetResult()));
  }
  else
  {
    return ListConferenceProvidersOutcome(outcome.GetError());
  }
}

ListConferenceProvidersOutcomeCallable AlexaForBusinessClient::ListConferenceProvidersCallable(const ListConferenceProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConferenceProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConferenceProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListConferenceProvidersAsync(const ListConferenceProvidersRequest& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConferenceProvidersAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListConferenceProvidersAsyncHelper(const ListConferenceProvidersRequest& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConferenceProviders(request), context);
}

ListDeviceEventsOutcome AlexaForBusinessClient::ListDeviceEvents(const ListDeviceEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeviceEventsOutcome(ListDeviceEventsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeviceEventsOutcome(outcome.GetError());
  }
}

ListDeviceEventsOutcomeCallable AlexaForBusinessClient::ListDeviceEventsCallable(const ListDeviceEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListDeviceEventsAsync(const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceEventsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListDeviceEventsAsyncHelper(const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceEvents(request), context);
}

ListGatewayGroupsOutcome AlexaForBusinessClient::ListGatewayGroups(const ListGatewayGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGatewayGroupsOutcome(ListGatewayGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListGatewayGroupsOutcome(outcome.GetError());
  }
}

ListGatewayGroupsOutcomeCallable AlexaForBusinessClient::ListGatewayGroupsCallable(const ListGatewayGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewayGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGatewayGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListGatewayGroupsAsync(const ListGatewayGroupsRequest& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGatewayGroupsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListGatewayGroupsAsyncHelper(const ListGatewayGroupsRequest& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGatewayGroups(request), context);
}

ListGatewaysOutcome AlexaForBusinessClient::ListGateways(const ListGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGatewaysOutcome(ListGatewaysResult(outcome.GetResult()));
  }
  else
  {
    return ListGatewaysOutcome(outcome.GetError());
  }
}

ListGatewaysOutcomeCallable AlexaForBusinessClient::ListGatewaysCallable(const ListGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGatewaysAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListGatewaysAsyncHelper(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGateways(request), context);
}

ListSkillsOutcome AlexaForBusinessClient::ListSkills(const ListSkillsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSkillsOutcome(ListSkillsResult(outcome.GetResult()));
  }
  else
  {
    return ListSkillsOutcome(outcome.GetError());
  }
}

ListSkillsOutcomeCallable AlexaForBusinessClient::ListSkillsCallable(const ListSkillsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSkillsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSkills(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListSkillsAsync(const ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSkillsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListSkillsAsyncHelper(const ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSkills(request), context);
}

ListSkillsStoreCategoriesOutcome AlexaForBusinessClient::ListSkillsStoreCategories(const ListSkillsStoreCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSkillsStoreCategoriesOutcome(ListSkillsStoreCategoriesResult(outcome.GetResult()));
  }
  else
  {
    return ListSkillsStoreCategoriesOutcome(outcome.GetError());
  }
}

ListSkillsStoreCategoriesOutcomeCallable AlexaForBusinessClient::ListSkillsStoreCategoriesCallable(const ListSkillsStoreCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSkillsStoreCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSkillsStoreCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListSkillsStoreCategoriesAsync(const ListSkillsStoreCategoriesRequest& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSkillsStoreCategoriesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListSkillsStoreCategoriesAsyncHelper(const ListSkillsStoreCategoriesRequest& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSkillsStoreCategories(request), context);
}

ListSkillsStoreSkillsByCategoryOutcome AlexaForBusinessClient::ListSkillsStoreSkillsByCategory(const ListSkillsStoreSkillsByCategoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSkillsStoreSkillsByCategoryOutcome(ListSkillsStoreSkillsByCategoryResult(outcome.GetResult()));
  }
  else
  {
    return ListSkillsStoreSkillsByCategoryOutcome(outcome.GetError());
  }
}

ListSkillsStoreSkillsByCategoryOutcomeCallable AlexaForBusinessClient::ListSkillsStoreSkillsByCategoryCallable(const ListSkillsStoreSkillsByCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSkillsStoreSkillsByCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSkillsStoreSkillsByCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListSkillsStoreSkillsByCategoryAsync(const ListSkillsStoreSkillsByCategoryRequest& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSkillsStoreSkillsByCategoryAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListSkillsStoreSkillsByCategoryAsyncHelper(const ListSkillsStoreSkillsByCategoryRequest& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSkillsStoreSkillsByCategory(request), context);
}

ListSmartHomeAppliancesOutcome AlexaForBusinessClient::ListSmartHomeAppliances(const ListSmartHomeAppliancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSmartHomeAppliancesOutcome(ListSmartHomeAppliancesResult(outcome.GetResult()));
  }
  else
  {
    return ListSmartHomeAppliancesOutcome(outcome.GetError());
  }
}

ListSmartHomeAppliancesOutcomeCallable AlexaForBusinessClient::ListSmartHomeAppliancesCallable(const ListSmartHomeAppliancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSmartHomeAppliancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSmartHomeAppliances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListSmartHomeAppliancesAsync(const ListSmartHomeAppliancesRequest& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSmartHomeAppliancesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListSmartHomeAppliancesAsyncHelper(const ListSmartHomeAppliancesRequest& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSmartHomeAppliances(request), context);
}

ListTagsOutcome AlexaForBusinessClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable AlexaForBusinessClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

PutConferencePreferenceOutcome AlexaForBusinessClient::PutConferencePreference(const PutConferencePreferenceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConferencePreferenceOutcome(PutConferencePreferenceResult(outcome.GetResult()));
  }
  else
  {
    return PutConferencePreferenceOutcome(outcome.GetError());
  }
}

PutConferencePreferenceOutcomeCallable AlexaForBusinessClient::PutConferencePreferenceCallable(const PutConferencePreferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConferencePreferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConferencePreference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::PutConferencePreferenceAsync(const PutConferencePreferenceRequest& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConferencePreferenceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::PutConferencePreferenceAsyncHelper(const PutConferencePreferenceRequest& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConferencePreference(request), context);
}

PutInvitationConfigurationOutcome AlexaForBusinessClient::PutInvitationConfiguration(const PutInvitationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutInvitationConfigurationOutcome(PutInvitationConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutInvitationConfigurationOutcome(outcome.GetError());
  }
}

PutInvitationConfigurationOutcomeCallable AlexaForBusinessClient::PutInvitationConfigurationCallable(const PutInvitationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInvitationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInvitationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::PutInvitationConfigurationAsync(const PutInvitationConfigurationRequest& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutInvitationConfigurationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::PutInvitationConfigurationAsyncHelper(const PutInvitationConfigurationRequest& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutInvitationConfiguration(request), context);
}

PutRoomSkillParameterOutcome AlexaForBusinessClient::PutRoomSkillParameter(const PutRoomSkillParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRoomSkillParameterOutcome(PutRoomSkillParameterResult(outcome.GetResult()));
  }
  else
  {
    return PutRoomSkillParameterOutcome(outcome.GetError());
  }
}

PutRoomSkillParameterOutcomeCallable AlexaForBusinessClient::PutRoomSkillParameterCallable(const PutRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::PutRoomSkillParameterAsync(const PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRoomSkillParameterAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::PutRoomSkillParameterAsyncHelper(const PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRoomSkillParameter(request), context);
}

PutSkillAuthorizationOutcome AlexaForBusinessClient::PutSkillAuthorization(const PutSkillAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutSkillAuthorizationOutcome(PutSkillAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return PutSkillAuthorizationOutcome(outcome.GetError());
  }
}

PutSkillAuthorizationOutcomeCallable AlexaForBusinessClient::PutSkillAuthorizationCallable(const PutSkillAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSkillAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSkillAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::PutSkillAuthorizationAsync(const PutSkillAuthorizationRequest& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSkillAuthorizationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::PutSkillAuthorizationAsyncHelper(const PutSkillAuthorizationRequest& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSkillAuthorization(request), context);
}

RegisterAVSDeviceOutcome AlexaForBusinessClient::RegisterAVSDevice(const RegisterAVSDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterAVSDeviceOutcome(RegisterAVSDeviceResult(outcome.GetResult()));
  }
  else
  {
    return RegisterAVSDeviceOutcome(outcome.GetError());
  }
}

RegisterAVSDeviceOutcomeCallable AlexaForBusinessClient::RegisterAVSDeviceCallable(const RegisterAVSDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterAVSDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterAVSDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::RegisterAVSDeviceAsync(const RegisterAVSDeviceRequest& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterAVSDeviceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::RegisterAVSDeviceAsyncHelper(const RegisterAVSDeviceRequest& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterAVSDevice(request), context);
}

RejectSkillOutcome AlexaForBusinessClient::RejectSkill(const RejectSkillRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RejectSkillOutcome(RejectSkillResult(outcome.GetResult()));
  }
  else
  {
    return RejectSkillOutcome(outcome.GetError());
  }
}

RejectSkillOutcomeCallable AlexaForBusinessClient::RejectSkillCallable(const RejectSkillRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectSkillOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectSkill(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::RejectSkillAsync(const RejectSkillRequest& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectSkillAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::RejectSkillAsyncHelper(const RejectSkillRequest& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectSkill(request), context);
}

ResolveRoomOutcome AlexaForBusinessClient::ResolveRoom(const ResolveRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResolveRoomOutcome(ResolveRoomResult(outcome.GetResult()));
  }
  else
  {
    return ResolveRoomOutcome(outcome.GetError());
  }
}

ResolveRoomOutcomeCallable AlexaForBusinessClient::ResolveRoomCallable(const ResolveRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ResolveRoomAsync(const ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResolveRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ResolveRoomAsyncHelper(const ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResolveRoom(request), context);
}

RevokeInvitationOutcome AlexaForBusinessClient::RevokeInvitation(const RevokeInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RevokeInvitationOutcome(RevokeInvitationResult(outcome.GetResult()));
  }
  else
  {
    return RevokeInvitationOutcome(outcome.GetError());
  }
}

RevokeInvitationOutcomeCallable AlexaForBusinessClient::RevokeInvitationCallable(const RevokeInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::RevokeInvitationAsync(const RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeInvitationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::RevokeInvitationAsyncHelper(const RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeInvitation(request), context);
}

SearchAddressBooksOutcome AlexaForBusinessClient::SearchAddressBooks(const SearchAddressBooksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchAddressBooksOutcome(SearchAddressBooksResult(outcome.GetResult()));
  }
  else
  {
    return SearchAddressBooksOutcome(outcome.GetError());
  }
}

SearchAddressBooksOutcomeCallable AlexaForBusinessClient::SearchAddressBooksCallable(const SearchAddressBooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAddressBooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAddressBooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchAddressBooksAsync(const SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchAddressBooksAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchAddressBooksAsyncHelper(const SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchAddressBooks(request), context);
}

SearchContactsOutcome AlexaForBusinessClient::SearchContacts(const SearchContactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchContactsOutcome(SearchContactsResult(outcome.GetResult()));
  }
  else
  {
    return SearchContactsOutcome(outcome.GetError());
  }
}

SearchContactsOutcomeCallable AlexaForBusinessClient::SearchContactsCallable(const SearchContactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchContactsAsync(const SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchContactsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchContactsAsyncHelper(const SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchContacts(request), context);
}

SearchDevicesOutcome AlexaForBusinessClient::SearchDevices(const SearchDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchDevicesOutcome(SearchDevicesResult(outcome.GetResult()));
  }
  else
  {
    return SearchDevicesOutcome(outcome.GetError());
  }
}

SearchDevicesOutcomeCallable AlexaForBusinessClient::SearchDevicesCallable(const SearchDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchDevicesAsync(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchDevicesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchDevicesAsyncHelper(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchDevices(request), context);
}

SearchNetworkProfilesOutcome AlexaForBusinessClient::SearchNetworkProfiles(const SearchNetworkProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchNetworkProfilesOutcome(SearchNetworkProfilesResult(outcome.GetResult()));
  }
  else
  {
    return SearchNetworkProfilesOutcome(outcome.GetError());
  }
}

SearchNetworkProfilesOutcomeCallable AlexaForBusinessClient::SearchNetworkProfilesCallable(const SearchNetworkProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchNetworkProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchNetworkProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchNetworkProfilesAsync(const SearchNetworkProfilesRequest& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchNetworkProfilesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchNetworkProfilesAsyncHelper(const SearchNetworkProfilesRequest& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchNetworkProfiles(request), context);
}

SearchProfilesOutcome AlexaForBusinessClient::SearchProfiles(const SearchProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchProfilesOutcome(SearchProfilesResult(outcome.GetResult()));
  }
  else
  {
    return SearchProfilesOutcome(outcome.GetError());
  }
}

SearchProfilesOutcomeCallable AlexaForBusinessClient::SearchProfilesCallable(const SearchProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchProfilesAsync(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProfilesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchProfilesAsyncHelper(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProfiles(request), context);
}

SearchRoomsOutcome AlexaForBusinessClient::SearchRooms(const SearchRoomsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchRoomsOutcome(SearchRoomsResult(outcome.GetResult()));
  }
  else
  {
    return SearchRoomsOutcome(outcome.GetError());
  }
}

SearchRoomsOutcomeCallable AlexaForBusinessClient::SearchRoomsCallable(const SearchRoomsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchRoomsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchRooms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchRoomsAsync(const SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchRoomsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchRoomsAsyncHelper(const SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchRooms(request), context);
}

SearchSkillGroupsOutcome AlexaForBusinessClient::SearchSkillGroups(const SearchSkillGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchSkillGroupsOutcome(SearchSkillGroupsResult(outcome.GetResult()));
  }
  else
  {
    return SearchSkillGroupsOutcome(outcome.GetError());
  }
}

SearchSkillGroupsOutcomeCallable AlexaForBusinessClient::SearchSkillGroupsCallable(const SearchSkillGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSkillGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSkillGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchSkillGroupsAsync(const SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchSkillGroupsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchSkillGroupsAsyncHelper(const SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchSkillGroups(request), context);
}

SearchUsersOutcome AlexaForBusinessClient::SearchUsers(const SearchUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchUsersOutcome(SearchUsersResult(outcome.GetResult()));
  }
  else
  {
    return SearchUsersOutcome(outcome.GetError());
  }
}

SearchUsersOutcomeCallable AlexaForBusinessClient::SearchUsersCallable(const SearchUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchUsersAsync(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchUsersAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchUsersAsyncHelper(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchUsers(request), context);
}

SendAnnouncementOutcome AlexaForBusinessClient::SendAnnouncement(const SendAnnouncementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendAnnouncementOutcome(SendAnnouncementResult(outcome.GetResult()));
  }
  else
  {
    return SendAnnouncementOutcome(outcome.GetError());
  }
}

SendAnnouncementOutcomeCallable AlexaForBusinessClient::SendAnnouncementCallable(const SendAnnouncementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendAnnouncementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendAnnouncement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SendAnnouncementAsync(const SendAnnouncementRequest& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendAnnouncementAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SendAnnouncementAsyncHelper(const SendAnnouncementRequest& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendAnnouncement(request), context);
}

SendInvitationOutcome AlexaForBusinessClient::SendInvitation(const SendInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendInvitationOutcome(SendInvitationResult(outcome.GetResult()));
  }
  else
  {
    return SendInvitationOutcome(outcome.GetError());
  }
}

SendInvitationOutcomeCallable AlexaForBusinessClient::SendInvitationCallable(const SendInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SendInvitationAsync(const SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendInvitationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SendInvitationAsyncHelper(const SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendInvitation(request), context);
}

StartDeviceSyncOutcome AlexaForBusinessClient::StartDeviceSync(const StartDeviceSyncRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDeviceSyncOutcome(StartDeviceSyncResult(outcome.GetResult()));
  }
  else
  {
    return StartDeviceSyncOutcome(outcome.GetError());
  }
}

StartDeviceSyncOutcomeCallable AlexaForBusinessClient::StartDeviceSyncCallable(const StartDeviceSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeviceSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeviceSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::StartDeviceSyncAsync(const StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDeviceSyncAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::StartDeviceSyncAsyncHelper(const StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDeviceSync(request), context);
}

StartSmartHomeApplianceDiscoveryOutcome AlexaForBusinessClient::StartSmartHomeApplianceDiscovery(const StartSmartHomeApplianceDiscoveryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartSmartHomeApplianceDiscoveryOutcome(StartSmartHomeApplianceDiscoveryResult(outcome.GetResult()));
  }
  else
  {
    return StartSmartHomeApplianceDiscoveryOutcome(outcome.GetError());
  }
}

StartSmartHomeApplianceDiscoveryOutcomeCallable AlexaForBusinessClient::StartSmartHomeApplianceDiscoveryCallable(const StartSmartHomeApplianceDiscoveryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSmartHomeApplianceDiscoveryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSmartHomeApplianceDiscovery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::StartSmartHomeApplianceDiscoveryAsync(const StartSmartHomeApplianceDiscoveryRequest& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSmartHomeApplianceDiscoveryAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::StartSmartHomeApplianceDiscoveryAsyncHelper(const StartSmartHomeApplianceDiscoveryRequest& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSmartHomeApplianceDiscovery(request), context);
}

TagResourceOutcome AlexaForBusinessClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
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

TagResourceOutcomeCallable AlexaForBusinessClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AlexaForBusinessClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable AlexaForBusinessClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAddressBookOutcome AlexaForBusinessClient::UpdateAddressBook(const UpdateAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAddressBookOutcome(UpdateAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAddressBookOutcome(outcome.GetError());
  }
}

UpdateAddressBookOutcomeCallable AlexaForBusinessClient::UpdateAddressBookCallable(const UpdateAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateAddressBookAsync(const UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateAddressBookAsyncHelper(const UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAddressBook(request), context);
}

UpdateBusinessReportScheduleOutcome AlexaForBusinessClient::UpdateBusinessReportSchedule(const UpdateBusinessReportScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBusinessReportScheduleOutcome(UpdateBusinessReportScheduleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBusinessReportScheduleOutcome(outcome.GetError());
  }
}

UpdateBusinessReportScheduleOutcomeCallable AlexaForBusinessClient::UpdateBusinessReportScheduleCallable(const UpdateBusinessReportScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBusinessReportScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBusinessReportSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateBusinessReportScheduleAsync(const UpdateBusinessReportScheduleRequest& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBusinessReportScheduleAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateBusinessReportScheduleAsyncHelper(const UpdateBusinessReportScheduleRequest& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBusinessReportSchedule(request), context);
}

UpdateConferenceProviderOutcome AlexaForBusinessClient::UpdateConferenceProvider(const UpdateConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConferenceProviderOutcome(UpdateConferenceProviderResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConferenceProviderOutcome(outcome.GetError());
  }
}

UpdateConferenceProviderOutcomeCallable AlexaForBusinessClient::UpdateConferenceProviderCallable(const UpdateConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateConferenceProviderAsync(const UpdateConferenceProviderRequest& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConferenceProviderAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateConferenceProviderAsyncHelper(const UpdateConferenceProviderRequest& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConferenceProvider(request), context);
}

UpdateContactOutcome AlexaForBusinessClient::UpdateContact(const UpdateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateContactOutcome(UpdateContactResult(outcome.GetResult()));
  }
  else
  {
    return UpdateContactOutcome(outcome.GetError());
  }
}

UpdateContactOutcomeCallable AlexaForBusinessClient::UpdateContactCallable(const UpdateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateContactAsyncHelper(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContact(request), context);
}

UpdateDeviceOutcome AlexaForBusinessClient::UpdateDevice(const UpdateDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeviceOutcome(UpdateDeviceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeviceOutcome(outcome.GetError());
  }
}

UpdateDeviceOutcomeCallable AlexaForBusinessClient::UpdateDeviceCallable(const UpdateDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateDeviceAsync(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateDeviceAsyncHelper(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDevice(request), context);
}

UpdateGatewayOutcome AlexaForBusinessClient::UpdateGateway(const UpdateGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGatewayOutcome(UpdateGatewayResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGatewayOutcome(outcome.GetError());
  }
}

UpdateGatewayOutcomeCallable AlexaForBusinessClient::UpdateGatewayCallable(const UpdateGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateGatewayAsync(const UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGatewayAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateGatewayAsyncHelper(const UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGateway(request), context);
}

UpdateGatewayGroupOutcome AlexaForBusinessClient::UpdateGatewayGroup(const UpdateGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGatewayGroupOutcome(UpdateGatewayGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGatewayGroupOutcome(outcome.GetError());
  }
}

UpdateGatewayGroupOutcomeCallable AlexaForBusinessClient::UpdateGatewayGroupCallable(const UpdateGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateGatewayGroupAsync(const UpdateGatewayGroupRequest& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGatewayGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateGatewayGroupAsyncHelper(const UpdateGatewayGroupRequest& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGatewayGroup(request), context);
}

UpdateNetworkProfileOutcome AlexaForBusinessClient::UpdateNetworkProfile(const UpdateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNetworkProfileOutcome(UpdateNetworkProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNetworkProfileOutcome(outcome.GetError());
  }
}

UpdateNetworkProfileOutcomeCallable AlexaForBusinessClient::UpdateNetworkProfileCallable(const UpdateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateNetworkProfileAsync(const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNetworkProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateNetworkProfileAsyncHelper(const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNetworkProfile(request), context);
}

UpdateProfileOutcome AlexaForBusinessClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProfileOutcome(UpdateProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProfileOutcome(outcome.GetError());
  }
}

UpdateProfileOutcomeCallable AlexaForBusinessClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateProfileAsyncHelper(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProfile(request), context);
}

UpdateRoomOutcome AlexaForBusinessClient::UpdateRoom(const UpdateRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRoomOutcome(UpdateRoomResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRoomOutcome(outcome.GetError());
  }
}

UpdateRoomOutcomeCallable AlexaForBusinessClient::UpdateRoomCallable(const UpdateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateRoomAsync(const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateRoomAsyncHelper(const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoom(request), context);
}

UpdateSkillGroupOutcome AlexaForBusinessClient::UpdateSkillGroup(const UpdateSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSkillGroupOutcome(UpdateSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSkillGroupOutcome(outcome.GetError());
  }
}

UpdateSkillGroupOutcomeCallable AlexaForBusinessClient::UpdateSkillGroupCallable(const UpdateSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateSkillGroupAsync(const UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateSkillGroupAsyncHelper(const UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSkillGroup(request), context);
}

