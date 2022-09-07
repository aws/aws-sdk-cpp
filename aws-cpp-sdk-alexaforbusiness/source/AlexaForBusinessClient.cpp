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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::~AlexaForBusinessClient()
{
}

void AlexaForBusinessClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Alexa For Business");
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
  return ApproveSkillOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ApproveSkillOutcomeCallable AlexaForBusinessClient::ApproveSkillCallable(const ApproveSkillRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApproveSkillOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApproveSkill(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientApproveSkillAsyncHelper(AlexaForBusinessClient const * const clientThis, const ApproveSkillRequest& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApproveSkill(request), context);
}

void AlexaForBusinessClient::ApproveSkillAsync(const ApproveSkillRequest& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientApproveSkillAsyncHelper( this, request, handler, context ); } );
}

AssociateContactWithAddressBookOutcome AlexaForBusinessClient::AssociateContactWithAddressBook(const AssociateContactWithAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateContactWithAddressBookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateContactWithAddressBookOutcomeCallable AlexaForBusinessClient::AssociateContactWithAddressBookCallable(const AssociateContactWithAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateContactWithAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateContactWithAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientAssociateContactWithAddressBookAsyncHelper(AlexaForBusinessClient const * const clientThis, const AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateContactWithAddressBook(request), context);
}

void AlexaForBusinessClient::AssociateContactWithAddressBookAsync(const AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientAssociateContactWithAddressBookAsyncHelper( this, request, handler, context ); } );
}

AssociateDeviceWithNetworkProfileOutcome AlexaForBusinessClient::AssociateDeviceWithNetworkProfile(const AssociateDeviceWithNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateDeviceWithNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDeviceWithNetworkProfileOutcomeCallable AlexaForBusinessClient::AssociateDeviceWithNetworkProfileCallable(const AssociateDeviceWithNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDeviceWithNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDeviceWithNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientAssociateDeviceWithNetworkProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const AssociateDeviceWithNetworkProfileRequest& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateDeviceWithNetworkProfile(request), context);
}

void AlexaForBusinessClient::AssociateDeviceWithNetworkProfileAsync(const AssociateDeviceWithNetworkProfileRequest& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientAssociateDeviceWithNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

AssociateDeviceWithRoomOutcome AlexaForBusinessClient::AssociateDeviceWithRoom(const AssociateDeviceWithRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateDeviceWithRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDeviceWithRoomOutcomeCallable AlexaForBusinessClient::AssociateDeviceWithRoomCallable(const AssociateDeviceWithRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDeviceWithRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDeviceWithRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientAssociateDeviceWithRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateDeviceWithRoom(request), context);
}

void AlexaForBusinessClient::AssociateDeviceWithRoomAsync(const AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientAssociateDeviceWithRoomAsyncHelper( this, request, handler, context ); } );
}

AssociateSkillGroupWithRoomOutcome AlexaForBusinessClient::AssociateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateSkillGroupWithRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSkillGroupWithRoomOutcomeCallable AlexaForBusinessClient::AssociateSkillGroupWithRoomCallable(const AssociateSkillGroupWithRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSkillGroupWithRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSkillGroupWithRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientAssociateSkillGroupWithRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateSkillGroupWithRoom(request), context);
}

void AlexaForBusinessClient::AssociateSkillGroupWithRoomAsync(const AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientAssociateSkillGroupWithRoomAsyncHelper( this, request, handler, context ); } );
}

AssociateSkillWithSkillGroupOutcome AlexaForBusinessClient::AssociateSkillWithSkillGroup(const AssociateSkillWithSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateSkillWithSkillGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSkillWithSkillGroupOutcomeCallable AlexaForBusinessClient::AssociateSkillWithSkillGroupCallable(const AssociateSkillWithSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSkillWithSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSkillWithSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientAssociateSkillWithSkillGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const AssociateSkillWithSkillGroupRequest& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateSkillWithSkillGroup(request), context);
}

void AlexaForBusinessClient::AssociateSkillWithSkillGroupAsync(const AssociateSkillWithSkillGroupRequest& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientAssociateSkillWithSkillGroupAsyncHelper( this, request, handler, context ); } );
}

AssociateSkillWithUsersOutcome AlexaForBusinessClient::AssociateSkillWithUsers(const AssociateSkillWithUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateSkillWithUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSkillWithUsersOutcomeCallable AlexaForBusinessClient::AssociateSkillWithUsersCallable(const AssociateSkillWithUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSkillWithUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSkillWithUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientAssociateSkillWithUsersAsyncHelper(AlexaForBusinessClient const * const clientThis, const AssociateSkillWithUsersRequest& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateSkillWithUsers(request), context);
}

void AlexaForBusinessClient::AssociateSkillWithUsersAsync(const AssociateSkillWithUsersRequest& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientAssociateSkillWithUsersAsyncHelper( this, request, handler, context ); } );
}

CreateAddressBookOutcome AlexaForBusinessClient::CreateAddressBook(const CreateAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAddressBookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAddressBookOutcomeCallable AlexaForBusinessClient::CreateAddressBookCallable(const CreateAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateAddressBookAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAddressBook(request), context);
}

void AlexaForBusinessClient::CreateAddressBookAsync(const CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateAddressBookAsyncHelper( this, request, handler, context ); } );
}

CreateBusinessReportScheduleOutcome AlexaForBusinessClient::CreateBusinessReportSchedule(const CreateBusinessReportScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBusinessReportScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBusinessReportScheduleOutcomeCallable AlexaForBusinessClient::CreateBusinessReportScheduleCallable(const CreateBusinessReportScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBusinessReportScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBusinessReportSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateBusinessReportScheduleAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateBusinessReportScheduleRequest& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBusinessReportSchedule(request), context);
}

void AlexaForBusinessClient::CreateBusinessReportScheduleAsync(const CreateBusinessReportScheduleRequest& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateBusinessReportScheduleAsyncHelper( this, request, handler, context ); } );
}

CreateConferenceProviderOutcome AlexaForBusinessClient::CreateConferenceProvider(const CreateConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConferenceProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConferenceProviderOutcomeCallable AlexaForBusinessClient::CreateConferenceProviderCallable(const CreateConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateConferenceProviderAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateConferenceProviderRequest& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConferenceProvider(request), context);
}

void AlexaForBusinessClient::CreateConferenceProviderAsync(const CreateConferenceProviderRequest& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateConferenceProviderAsyncHelper( this, request, handler, context ); } );
}

CreateContactOutcome AlexaForBusinessClient::CreateContact(const CreateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContactOutcomeCallable AlexaForBusinessClient::CreateContactCallable(const CreateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateContactAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContact(request), context);
}

void AlexaForBusinessClient::CreateContactAsync(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateContactAsyncHelper( this, request, handler, context ); } );
}

CreateGatewayGroupOutcome AlexaForBusinessClient::CreateGatewayGroup(const CreateGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGatewayGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGatewayGroupOutcomeCallable AlexaForBusinessClient::CreateGatewayGroupCallable(const CreateGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateGatewayGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateGatewayGroupRequest& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGatewayGroup(request), context);
}

void AlexaForBusinessClient::CreateGatewayGroupAsync(const CreateGatewayGroupRequest& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateGatewayGroupAsyncHelper( this, request, handler, context ); } );
}

CreateNetworkProfileOutcome AlexaForBusinessClient::CreateNetworkProfile(const CreateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkProfileOutcomeCallable AlexaForBusinessClient::CreateNetworkProfileCallable(const CreateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateNetworkProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNetworkProfile(request), context);
}

void AlexaForBusinessClient::CreateNetworkProfileAsync(const CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

CreateProfileOutcome AlexaForBusinessClient::CreateProfile(const CreateProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileOutcomeCallable AlexaForBusinessClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProfile(request), context);
}

void AlexaForBusinessClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateProfileAsyncHelper( this, request, handler, context ); } );
}

CreateRoomOutcome AlexaForBusinessClient::CreateRoom(const CreateRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRoomOutcomeCallable AlexaForBusinessClient::CreateRoomCallable(const CreateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRoom(request), context);
}

void AlexaForBusinessClient::CreateRoomAsync(const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateRoomAsyncHelper( this, request, handler, context ); } );
}

CreateSkillGroupOutcome AlexaForBusinessClient::CreateSkillGroup(const CreateSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSkillGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSkillGroupOutcomeCallable AlexaForBusinessClient::CreateSkillGroupCallable(const CreateSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateSkillGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSkillGroup(request), context);
}

void AlexaForBusinessClient::CreateSkillGroupAsync(const CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateSkillGroupAsyncHelper( this, request, handler, context ); } );
}

CreateUserOutcome AlexaForBusinessClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable AlexaForBusinessClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientCreateUserAsyncHelper(AlexaForBusinessClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void AlexaForBusinessClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientCreateUserAsyncHelper( this, request, handler, context ); } );
}

DeleteAddressBookOutcome AlexaForBusinessClient::DeleteAddressBook(const DeleteAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAddressBookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAddressBookOutcomeCallable AlexaForBusinessClient::DeleteAddressBookCallable(const DeleteAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteAddressBookAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAddressBook(request), context);
}

void AlexaForBusinessClient::DeleteAddressBookAsync(const DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteAddressBookAsyncHelper( this, request, handler, context ); } );
}

DeleteBusinessReportScheduleOutcome AlexaForBusinessClient::DeleteBusinessReportSchedule(const DeleteBusinessReportScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBusinessReportScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBusinessReportScheduleOutcomeCallable AlexaForBusinessClient::DeleteBusinessReportScheduleCallable(const DeleteBusinessReportScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBusinessReportScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBusinessReportSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteBusinessReportScheduleAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteBusinessReportScheduleRequest& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBusinessReportSchedule(request), context);
}

void AlexaForBusinessClient::DeleteBusinessReportScheduleAsync(const DeleteBusinessReportScheduleRequest& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteBusinessReportScheduleAsyncHelper( this, request, handler, context ); } );
}

DeleteConferenceProviderOutcome AlexaForBusinessClient::DeleteConferenceProvider(const DeleteConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConferenceProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConferenceProviderOutcomeCallable AlexaForBusinessClient::DeleteConferenceProviderCallable(const DeleteConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteConferenceProviderAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteConferenceProviderRequest& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConferenceProvider(request), context);
}

void AlexaForBusinessClient::DeleteConferenceProviderAsync(const DeleteConferenceProviderRequest& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteConferenceProviderAsyncHelper( this, request, handler, context ); } );
}

DeleteContactOutcome AlexaForBusinessClient::DeleteContact(const DeleteContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactOutcomeCallable AlexaForBusinessClient::DeleteContactCallable(const DeleteContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteContactAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContact(request), context);
}

void AlexaForBusinessClient::DeleteContactAsync(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteContactAsyncHelper( this, request, handler, context ); } );
}

DeleteDeviceOutcome AlexaForBusinessClient::DeleteDevice(const DeleteDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceOutcomeCallable AlexaForBusinessClient::DeleteDeviceCallable(const DeleteDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteDeviceAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDevice(request), context);
}

void AlexaForBusinessClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteDeviceAsyncHelper( this, request, handler, context ); } );
}

DeleteDeviceUsageDataOutcome AlexaForBusinessClient::DeleteDeviceUsageData(const DeleteDeviceUsageDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDeviceUsageDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceUsageDataOutcomeCallable AlexaForBusinessClient::DeleteDeviceUsageDataCallable(const DeleteDeviceUsageDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceUsageDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeviceUsageData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteDeviceUsageDataAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteDeviceUsageDataRequest& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeviceUsageData(request), context);
}

void AlexaForBusinessClient::DeleteDeviceUsageDataAsync(const DeleteDeviceUsageDataRequest& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteDeviceUsageDataAsyncHelper( this, request, handler, context ); } );
}

DeleteGatewayGroupOutcome AlexaForBusinessClient::DeleteGatewayGroup(const DeleteGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGatewayGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayGroupOutcomeCallable AlexaForBusinessClient::DeleteGatewayGroupCallable(const DeleteGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteGatewayGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteGatewayGroupRequest& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGatewayGroup(request), context);
}

void AlexaForBusinessClient::DeleteGatewayGroupAsync(const DeleteGatewayGroupRequest& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteGatewayGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteNetworkProfileOutcome AlexaForBusinessClient::DeleteNetworkProfile(const DeleteNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkProfileOutcomeCallable AlexaForBusinessClient::DeleteNetworkProfileCallable(const DeleteNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteNetworkProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNetworkProfile(request), context);
}

void AlexaForBusinessClient::DeleteNetworkProfileAsync(const DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteProfileOutcome AlexaForBusinessClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileOutcomeCallable AlexaForBusinessClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProfile(request), context);
}

void AlexaForBusinessClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteRoomOutcome AlexaForBusinessClient::DeleteRoom(const DeleteRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRoomOutcomeCallable AlexaForBusinessClient::DeleteRoomCallable(const DeleteRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRoom(request), context);
}

void AlexaForBusinessClient::DeleteRoomAsync(const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteRoomAsyncHelper( this, request, handler, context ); } );
}

DeleteRoomSkillParameterOutcome AlexaForBusinessClient::DeleteRoomSkillParameter(const DeleteRoomSkillParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRoomSkillParameterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRoomSkillParameterOutcomeCallable AlexaForBusinessClient::DeleteRoomSkillParameterCallable(const DeleteRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteRoomSkillParameterAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRoomSkillParameter(request), context);
}

void AlexaForBusinessClient::DeleteRoomSkillParameterAsync(const DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteRoomSkillParameterAsyncHelper( this, request, handler, context ); } );
}

DeleteSkillAuthorizationOutcome AlexaForBusinessClient::DeleteSkillAuthorization(const DeleteSkillAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSkillAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSkillAuthorizationOutcomeCallable AlexaForBusinessClient::DeleteSkillAuthorizationCallable(const DeleteSkillAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSkillAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSkillAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteSkillAuthorizationAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteSkillAuthorizationRequest& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSkillAuthorization(request), context);
}

void AlexaForBusinessClient::DeleteSkillAuthorizationAsync(const DeleteSkillAuthorizationRequest& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteSkillAuthorizationAsyncHelper( this, request, handler, context ); } );
}

DeleteSkillGroupOutcome AlexaForBusinessClient::DeleteSkillGroup(const DeleteSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSkillGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSkillGroupOutcomeCallable AlexaForBusinessClient::DeleteSkillGroupCallable(const DeleteSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteSkillGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSkillGroup(request), context);
}

void AlexaForBusinessClient::DeleteSkillGroupAsync(const DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteSkillGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteUserOutcome AlexaForBusinessClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable AlexaForBusinessClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDeleteUserAsyncHelper(AlexaForBusinessClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void AlexaForBusinessClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDeleteUserAsyncHelper( this, request, handler, context ); } );
}

DisassociateContactFromAddressBookOutcome AlexaForBusinessClient::DisassociateContactFromAddressBook(const DisassociateContactFromAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateContactFromAddressBookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateContactFromAddressBookOutcomeCallable AlexaForBusinessClient::DisassociateContactFromAddressBookCallable(const DisassociateContactFromAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateContactFromAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateContactFromAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDisassociateContactFromAddressBookAsyncHelper(AlexaForBusinessClient const * const clientThis, const DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateContactFromAddressBook(request), context);
}

void AlexaForBusinessClient::DisassociateContactFromAddressBookAsync(const DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDisassociateContactFromAddressBookAsyncHelper( this, request, handler, context ); } );
}

DisassociateDeviceFromRoomOutcome AlexaForBusinessClient::DisassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateDeviceFromRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDeviceFromRoomOutcomeCallable AlexaForBusinessClient::DisassociateDeviceFromRoomCallable(const DisassociateDeviceFromRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDeviceFromRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDeviceFromRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDisassociateDeviceFromRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateDeviceFromRoom(request), context);
}

void AlexaForBusinessClient::DisassociateDeviceFromRoomAsync(const DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDisassociateDeviceFromRoomAsyncHelper( this, request, handler, context ); } );
}

DisassociateSkillFromSkillGroupOutcome AlexaForBusinessClient::DisassociateSkillFromSkillGroup(const DisassociateSkillFromSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateSkillFromSkillGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateSkillFromSkillGroupOutcomeCallable AlexaForBusinessClient::DisassociateSkillFromSkillGroupCallable(const DisassociateSkillFromSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSkillFromSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSkillFromSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDisassociateSkillFromSkillGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const DisassociateSkillFromSkillGroupRequest& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateSkillFromSkillGroup(request), context);
}

void AlexaForBusinessClient::DisassociateSkillFromSkillGroupAsync(const DisassociateSkillFromSkillGroupRequest& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDisassociateSkillFromSkillGroupAsyncHelper( this, request, handler, context ); } );
}

DisassociateSkillFromUsersOutcome AlexaForBusinessClient::DisassociateSkillFromUsers(const DisassociateSkillFromUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateSkillFromUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateSkillFromUsersOutcomeCallable AlexaForBusinessClient::DisassociateSkillFromUsersCallable(const DisassociateSkillFromUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSkillFromUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSkillFromUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDisassociateSkillFromUsersAsyncHelper(AlexaForBusinessClient const * const clientThis, const DisassociateSkillFromUsersRequest& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateSkillFromUsers(request), context);
}

void AlexaForBusinessClient::DisassociateSkillFromUsersAsync(const DisassociateSkillFromUsersRequest& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDisassociateSkillFromUsersAsyncHelper( this, request, handler, context ); } );
}

DisassociateSkillGroupFromRoomOutcome AlexaForBusinessClient::DisassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateSkillGroupFromRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateSkillGroupFromRoomOutcomeCallable AlexaForBusinessClient::DisassociateSkillGroupFromRoomCallable(const DisassociateSkillGroupFromRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSkillGroupFromRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSkillGroupFromRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientDisassociateSkillGroupFromRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateSkillGroupFromRoom(request), context);
}

void AlexaForBusinessClient::DisassociateSkillGroupFromRoomAsync(const DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientDisassociateSkillGroupFromRoomAsyncHelper( this, request, handler, context ); } );
}

ForgetSmartHomeAppliancesOutcome AlexaForBusinessClient::ForgetSmartHomeAppliances(const ForgetSmartHomeAppliancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ForgetSmartHomeAppliancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ForgetSmartHomeAppliancesOutcomeCallable AlexaForBusinessClient::ForgetSmartHomeAppliancesCallable(const ForgetSmartHomeAppliancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ForgetSmartHomeAppliancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ForgetSmartHomeAppliances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientForgetSmartHomeAppliancesAsyncHelper(AlexaForBusinessClient const * const clientThis, const ForgetSmartHomeAppliancesRequest& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ForgetSmartHomeAppliances(request), context);
}

void AlexaForBusinessClient::ForgetSmartHomeAppliancesAsync(const ForgetSmartHomeAppliancesRequest& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientForgetSmartHomeAppliancesAsyncHelper( this, request, handler, context ); } );
}

GetAddressBookOutcome AlexaForBusinessClient::GetAddressBook(const GetAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAddressBookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAddressBookOutcomeCallable AlexaForBusinessClient::GetAddressBookCallable(const GetAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetAddressBookAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAddressBook(request), context);
}

void AlexaForBusinessClient::GetAddressBookAsync(const GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetAddressBookAsyncHelper( this, request, handler, context ); } );
}

GetConferencePreferenceOutcome AlexaForBusinessClient::GetConferencePreference(const GetConferencePreferenceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConferencePreferenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConferencePreferenceOutcomeCallable AlexaForBusinessClient::GetConferencePreferenceCallable(const GetConferencePreferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConferencePreferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConferencePreference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetConferencePreferenceAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetConferencePreferenceRequest& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConferencePreference(request), context);
}

void AlexaForBusinessClient::GetConferencePreferenceAsync(const GetConferencePreferenceRequest& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetConferencePreferenceAsyncHelper( this, request, handler, context ); } );
}

GetConferenceProviderOutcome AlexaForBusinessClient::GetConferenceProvider(const GetConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConferenceProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConferenceProviderOutcomeCallable AlexaForBusinessClient::GetConferenceProviderCallable(const GetConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetConferenceProviderAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetConferenceProviderRequest& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConferenceProvider(request), context);
}

void AlexaForBusinessClient::GetConferenceProviderAsync(const GetConferenceProviderRequest& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetConferenceProviderAsyncHelper( this, request, handler, context ); } );
}

GetContactOutcome AlexaForBusinessClient::GetContact(const GetContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactOutcomeCallable AlexaForBusinessClient::GetContactCallable(const GetContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetContactAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContact(request), context);
}

void AlexaForBusinessClient::GetContactAsync(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetContactAsyncHelper( this, request, handler, context ); } );
}

GetDeviceOutcome AlexaForBusinessClient::GetDevice(const GetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceOutcomeCallable AlexaForBusinessClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetDeviceAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevice(request), context);
}

void AlexaForBusinessClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetDeviceAsyncHelper( this, request, handler, context ); } );
}

GetGatewayOutcome AlexaForBusinessClient::GetGateway(const GetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGatewayOutcomeCallable AlexaForBusinessClient::GetGatewayCallable(const GetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetGatewayAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGateway(request), context);
}

void AlexaForBusinessClient::GetGatewayAsync(const GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetGatewayAsyncHelper( this, request, handler, context ); } );
}

GetGatewayGroupOutcome AlexaForBusinessClient::GetGatewayGroup(const GetGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGatewayGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGatewayGroupOutcomeCallable AlexaForBusinessClient::GetGatewayGroupCallable(const GetGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetGatewayGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetGatewayGroupRequest& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGatewayGroup(request), context);
}

void AlexaForBusinessClient::GetGatewayGroupAsync(const GetGatewayGroupRequest& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetGatewayGroupAsyncHelper( this, request, handler, context ); } );
}

GetInvitationConfigurationOutcome AlexaForBusinessClient::GetInvitationConfiguration(const GetInvitationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInvitationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInvitationConfigurationOutcomeCallable AlexaForBusinessClient::GetInvitationConfigurationCallable(const GetInvitationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetInvitationConfigurationAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetInvitationConfigurationRequest& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInvitationConfiguration(request), context);
}

void AlexaForBusinessClient::GetInvitationConfigurationAsync(const GetInvitationConfigurationRequest& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetInvitationConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetNetworkProfileOutcome AlexaForBusinessClient::GetNetworkProfile(const GetNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkProfileOutcomeCallable AlexaForBusinessClient::GetNetworkProfileCallable(const GetNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetNetworkProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNetworkProfile(request), context);
}

void AlexaForBusinessClient::GetNetworkProfileAsync(const GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

GetProfileOutcome AlexaForBusinessClient::GetProfile(const GetProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProfileOutcomeCallable AlexaForBusinessClient::GetProfileCallable(const GetProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProfile(request), context);
}

void AlexaForBusinessClient::GetProfileAsync(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetProfileAsyncHelper( this, request, handler, context ); } );
}

GetRoomOutcome AlexaForBusinessClient::GetRoom(const GetRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRoomOutcomeCallable AlexaForBusinessClient::GetRoomCallable(const GetRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRoom(request), context);
}

void AlexaForBusinessClient::GetRoomAsync(const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetRoomAsyncHelper( this, request, handler, context ); } );
}

GetRoomSkillParameterOutcome AlexaForBusinessClient::GetRoomSkillParameter(const GetRoomSkillParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRoomSkillParameterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRoomSkillParameterOutcomeCallable AlexaForBusinessClient::GetRoomSkillParameterCallable(const GetRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetRoomSkillParameterAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRoomSkillParameter(request), context);
}

void AlexaForBusinessClient::GetRoomSkillParameterAsync(const GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetRoomSkillParameterAsyncHelper( this, request, handler, context ); } );
}

GetSkillGroupOutcome AlexaForBusinessClient::GetSkillGroup(const GetSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSkillGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSkillGroupOutcomeCallable AlexaForBusinessClient::GetSkillGroupCallable(const GetSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientGetSkillGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSkillGroup(request), context);
}

void AlexaForBusinessClient::GetSkillGroupAsync(const GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientGetSkillGroupAsyncHelper( this, request, handler, context ); } );
}

ListBusinessReportSchedulesOutcome AlexaForBusinessClient::ListBusinessReportSchedules(const ListBusinessReportSchedulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBusinessReportSchedulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBusinessReportSchedulesOutcomeCallable AlexaForBusinessClient::ListBusinessReportSchedulesCallable(const ListBusinessReportSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBusinessReportSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBusinessReportSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListBusinessReportSchedulesAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListBusinessReportSchedulesRequest& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBusinessReportSchedules(request), context);
}

void AlexaForBusinessClient::ListBusinessReportSchedulesAsync(const ListBusinessReportSchedulesRequest& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListBusinessReportSchedulesAsyncHelper( this, request, handler, context ); } );
}

ListConferenceProvidersOutcome AlexaForBusinessClient::ListConferenceProviders(const ListConferenceProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConferenceProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConferenceProvidersOutcomeCallable AlexaForBusinessClient::ListConferenceProvidersCallable(const ListConferenceProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConferenceProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConferenceProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListConferenceProvidersAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListConferenceProvidersRequest& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConferenceProviders(request), context);
}

void AlexaForBusinessClient::ListConferenceProvidersAsync(const ListConferenceProvidersRequest& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListConferenceProvidersAsyncHelper( this, request, handler, context ); } );
}

ListDeviceEventsOutcome AlexaForBusinessClient::ListDeviceEvents(const ListDeviceEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeviceEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceEventsOutcomeCallable AlexaForBusinessClient::ListDeviceEventsCallable(const ListDeviceEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListDeviceEventsAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeviceEvents(request), context);
}

void AlexaForBusinessClient::ListDeviceEventsAsync(const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListDeviceEventsAsyncHelper( this, request, handler, context ); } );
}

ListGatewayGroupsOutcome AlexaForBusinessClient::ListGatewayGroups(const ListGatewayGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGatewayGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGatewayGroupsOutcomeCallable AlexaForBusinessClient::ListGatewayGroupsCallable(const ListGatewayGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewayGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGatewayGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListGatewayGroupsAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListGatewayGroupsRequest& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGatewayGroups(request), context);
}

void AlexaForBusinessClient::ListGatewayGroupsAsync(const ListGatewayGroupsRequest& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListGatewayGroupsAsyncHelper( this, request, handler, context ); } );
}

ListGatewaysOutcome AlexaForBusinessClient::ListGateways(const ListGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGatewaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGatewaysOutcomeCallable AlexaForBusinessClient::ListGatewaysCallable(const ListGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListGatewaysAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGateways(request), context);
}

void AlexaForBusinessClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListGatewaysAsyncHelper( this, request, handler, context ); } );
}

ListSkillsOutcome AlexaForBusinessClient::ListSkills(const ListSkillsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSkillsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSkillsOutcomeCallable AlexaForBusinessClient::ListSkillsCallable(const ListSkillsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSkillsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSkills(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListSkillsAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSkills(request), context);
}

void AlexaForBusinessClient::ListSkillsAsync(const ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListSkillsAsyncHelper( this, request, handler, context ); } );
}

ListSkillsStoreCategoriesOutcome AlexaForBusinessClient::ListSkillsStoreCategories(const ListSkillsStoreCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSkillsStoreCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSkillsStoreCategoriesOutcomeCallable AlexaForBusinessClient::ListSkillsStoreCategoriesCallable(const ListSkillsStoreCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSkillsStoreCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSkillsStoreCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListSkillsStoreCategoriesAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListSkillsStoreCategoriesRequest& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSkillsStoreCategories(request), context);
}

void AlexaForBusinessClient::ListSkillsStoreCategoriesAsync(const ListSkillsStoreCategoriesRequest& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListSkillsStoreCategoriesAsyncHelper( this, request, handler, context ); } );
}

ListSkillsStoreSkillsByCategoryOutcome AlexaForBusinessClient::ListSkillsStoreSkillsByCategory(const ListSkillsStoreSkillsByCategoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSkillsStoreSkillsByCategoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSkillsStoreSkillsByCategoryOutcomeCallable AlexaForBusinessClient::ListSkillsStoreSkillsByCategoryCallable(const ListSkillsStoreSkillsByCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSkillsStoreSkillsByCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSkillsStoreSkillsByCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListSkillsStoreSkillsByCategoryAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListSkillsStoreSkillsByCategoryRequest& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSkillsStoreSkillsByCategory(request), context);
}

void AlexaForBusinessClient::ListSkillsStoreSkillsByCategoryAsync(const ListSkillsStoreSkillsByCategoryRequest& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListSkillsStoreSkillsByCategoryAsyncHelper( this, request, handler, context ); } );
}

ListSmartHomeAppliancesOutcome AlexaForBusinessClient::ListSmartHomeAppliances(const ListSmartHomeAppliancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSmartHomeAppliancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSmartHomeAppliancesOutcomeCallable AlexaForBusinessClient::ListSmartHomeAppliancesCallable(const ListSmartHomeAppliancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSmartHomeAppliancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSmartHomeAppliances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListSmartHomeAppliancesAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListSmartHomeAppliancesRequest& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSmartHomeAppliances(request), context);
}

void AlexaForBusinessClient::ListSmartHomeAppliancesAsync(const ListSmartHomeAppliancesRequest& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListSmartHomeAppliancesAsyncHelper( this, request, handler, context ); } );
}

ListTagsOutcome AlexaForBusinessClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable AlexaForBusinessClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientListTagsAsyncHelper(AlexaForBusinessClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void AlexaForBusinessClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientListTagsAsyncHelper( this, request, handler, context ); } );
}

PutConferencePreferenceOutcome AlexaForBusinessClient::PutConferencePreference(const PutConferencePreferenceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutConferencePreferenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutConferencePreferenceOutcomeCallable AlexaForBusinessClient::PutConferencePreferenceCallable(const PutConferencePreferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConferencePreferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConferencePreference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientPutConferencePreferenceAsyncHelper(AlexaForBusinessClient const * const clientThis, const PutConferencePreferenceRequest& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConferencePreference(request), context);
}

void AlexaForBusinessClient::PutConferencePreferenceAsync(const PutConferencePreferenceRequest& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientPutConferencePreferenceAsyncHelper( this, request, handler, context ); } );
}

PutInvitationConfigurationOutcome AlexaForBusinessClient::PutInvitationConfiguration(const PutInvitationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutInvitationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInvitationConfigurationOutcomeCallable AlexaForBusinessClient::PutInvitationConfigurationCallable(const PutInvitationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInvitationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInvitationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientPutInvitationConfigurationAsyncHelper(AlexaForBusinessClient const * const clientThis, const PutInvitationConfigurationRequest& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutInvitationConfiguration(request), context);
}

void AlexaForBusinessClient::PutInvitationConfigurationAsync(const PutInvitationConfigurationRequest& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientPutInvitationConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutRoomSkillParameterOutcome AlexaForBusinessClient::PutRoomSkillParameter(const PutRoomSkillParameterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRoomSkillParameterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRoomSkillParameterOutcomeCallable AlexaForBusinessClient::PutRoomSkillParameterCallable(const PutRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientPutRoomSkillParameterAsyncHelper(AlexaForBusinessClient const * const clientThis, const PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRoomSkillParameter(request), context);
}

void AlexaForBusinessClient::PutRoomSkillParameterAsync(const PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientPutRoomSkillParameterAsyncHelper( this, request, handler, context ); } );
}

PutSkillAuthorizationOutcome AlexaForBusinessClient::PutSkillAuthorization(const PutSkillAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutSkillAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutSkillAuthorizationOutcomeCallable AlexaForBusinessClient::PutSkillAuthorizationCallable(const PutSkillAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSkillAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSkillAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientPutSkillAuthorizationAsyncHelper(AlexaForBusinessClient const * const clientThis, const PutSkillAuthorizationRequest& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutSkillAuthorization(request), context);
}

void AlexaForBusinessClient::PutSkillAuthorizationAsync(const PutSkillAuthorizationRequest& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientPutSkillAuthorizationAsyncHelper( this, request, handler, context ); } );
}

RegisterAVSDeviceOutcome AlexaForBusinessClient::RegisterAVSDevice(const RegisterAVSDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterAVSDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterAVSDeviceOutcomeCallable AlexaForBusinessClient::RegisterAVSDeviceCallable(const RegisterAVSDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterAVSDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterAVSDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientRegisterAVSDeviceAsyncHelper(AlexaForBusinessClient const * const clientThis, const RegisterAVSDeviceRequest& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterAVSDevice(request), context);
}

void AlexaForBusinessClient::RegisterAVSDeviceAsync(const RegisterAVSDeviceRequest& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientRegisterAVSDeviceAsyncHelper( this, request, handler, context ); } );
}

RejectSkillOutcome AlexaForBusinessClient::RejectSkill(const RejectSkillRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectSkillOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectSkillOutcomeCallable AlexaForBusinessClient::RejectSkillCallable(const RejectSkillRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectSkillOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectSkill(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientRejectSkillAsyncHelper(AlexaForBusinessClient const * const clientThis, const RejectSkillRequest& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectSkill(request), context);
}

void AlexaForBusinessClient::RejectSkillAsync(const RejectSkillRequest& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientRejectSkillAsyncHelper( this, request, handler, context ); } );
}

ResolveRoomOutcome AlexaForBusinessClient::ResolveRoom(const ResolveRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResolveRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResolveRoomOutcomeCallable AlexaForBusinessClient::ResolveRoomCallable(const ResolveRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientResolveRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResolveRoom(request), context);
}

void AlexaForBusinessClient::ResolveRoomAsync(const ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientResolveRoomAsyncHelper( this, request, handler, context ); } );
}

RevokeInvitationOutcome AlexaForBusinessClient::RevokeInvitation(const RevokeInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeInvitationOutcomeCallable AlexaForBusinessClient::RevokeInvitationCallable(const RevokeInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientRevokeInvitationAsyncHelper(AlexaForBusinessClient const * const clientThis, const RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeInvitation(request), context);
}

void AlexaForBusinessClient::RevokeInvitationAsync(const RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientRevokeInvitationAsyncHelper( this, request, handler, context ); } );
}

SearchAddressBooksOutcome AlexaForBusinessClient::SearchAddressBooks(const SearchAddressBooksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchAddressBooksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchAddressBooksOutcomeCallable AlexaForBusinessClient::SearchAddressBooksCallable(const SearchAddressBooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAddressBooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAddressBooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchAddressBooksAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchAddressBooks(request), context);
}

void AlexaForBusinessClient::SearchAddressBooksAsync(const SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchAddressBooksAsyncHelper( this, request, handler, context ); } );
}

SearchContactsOutcome AlexaForBusinessClient::SearchContacts(const SearchContactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchContactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchContactsOutcomeCallable AlexaForBusinessClient::SearchContactsCallable(const SearchContactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchContactsAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchContacts(request), context);
}

void AlexaForBusinessClient::SearchContactsAsync(const SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchContactsAsyncHelper( this, request, handler, context ); } );
}

SearchDevicesOutcome AlexaForBusinessClient::SearchDevices(const SearchDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDevicesOutcomeCallable AlexaForBusinessClient::SearchDevicesCallable(const SearchDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchDevicesAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchDevices(request), context);
}

void AlexaForBusinessClient::SearchDevicesAsync(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchDevicesAsyncHelper( this, request, handler, context ); } );
}

SearchNetworkProfilesOutcome AlexaForBusinessClient::SearchNetworkProfiles(const SearchNetworkProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchNetworkProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchNetworkProfilesOutcomeCallable AlexaForBusinessClient::SearchNetworkProfilesCallable(const SearchNetworkProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchNetworkProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchNetworkProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchNetworkProfilesAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchNetworkProfilesRequest& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchNetworkProfiles(request), context);
}

void AlexaForBusinessClient::SearchNetworkProfilesAsync(const SearchNetworkProfilesRequest& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchNetworkProfilesAsyncHelper( this, request, handler, context ); } );
}

SearchProfilesOutcome AlexaForBusinessClient::SearchProfiles(const SearchProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProfilesOutcomeCallable AlexaForBusinessClient::SearchProfilesCallable(const SearchProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchProfilesAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchProfiles(request), context);
}

void AlexaForBusinessClient::SearchProfilesAsync(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchProfilesAsyncHelper( this, request, handler, context ); } );
}

SearchRoomsOutcome AlexaForBusinessClient::SearchRooms(const SearchRoomsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchRoomsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchRoomsOutcomeCallable AlexaForBusinessClient::SearchRoomsCallable(const SearchRoomsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchRoomsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchRooms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchRoomsAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchRooms(request), context);
}

void AlexaForBusinessClient::SearchRoomsAsync(const SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchRoomsAsyncHelper( this, request, handler, context ); } );
}

SearchSkillGroupsOutcome AlexaForBusinessClient::SearchSkillGroups(const SearchSkillGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchSkillGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchSkillGroupsOutcomeCallable AlexaForBusinessClient::SearchSkillGroupsCallable(const SearchSkillGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSkillGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSkillGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchSkillGroupsAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchSkillGroups(request), context);
}

void AlexaForBusinessClient::SearchSkillGroupsAsync(const SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchSkillGroupsAsyncHelper( this, request, handler, context ); } );
}

SearchUsersOutcome AlexaForBusinessClient::SearchUsers(const SearchUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchUsersOutcomeCallable AlexaForBusinessClient::SearchUsersCallable(const SearchUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSearchUsersAsyncHelper(AlexaForBusinessClient const * const clientThis, const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchUsers(request), context);
}

void AlexaForBusinessClient::SearchUsersAsync(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSearchUsersAsyncHelper( this, request, handler, context ); } );
}

SendAnnouncementOutcome AlexaForBusinessClient::SendAnnouncement(const SendAnnouncementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendAnnouncementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendAnnouncementOutcomeCallable AlexaForBusinessClient::SendAnnouncementCallable(const SendAnnouncementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendAnnouncementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendAnnouncement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSendAnnouncementAsyncHelper(AlexaForBusinessClient const * const clientThis, const SendAnnouncementRequest& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendAnnouncement(request), context);
}

void AlexaForBusinessClient::SendAnnouncementAsync(const SendAnnouncementRequest& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSendAnnouncementAsyncHelper( this, request, handler, context ); } );
}

SendInvitationOutcome AlexaForBusinessClient::SendInvitation(const SendInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendInvitationOutcomeCallable AlexaForBusinessClient::SendInvitationCallable(const SendInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientSendInvitationAsyncHelper(AlexaForBusinessClient const * const clientThis, const SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendInvitation(request), context);
}

void AlexaForBusinessClient::SendInvitationAsync(const SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientSendInvitationAsyncHelper( this, request, handler, context ); } );
}

StartDeviceSyncOutcome AlexaForBusinessClient::StartDeviceSync(const StartDeviceSyncRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDeviceSyncOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeviceSyncOutcomeCallable AlexaForBusinessClient::StartDeviceSyncCallable(const StartDeviceSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeviceSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeviceSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientStartDeviceSyncAsyncHelper(AlexaForBusinessClient const * const clientThis, const StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDeviceSync(request), context);
}

void AlexaForBusinessClient::StartDeviceSyncAsync(const StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientStartDeviceSyncAsyncHelper( this, request, handler, context ); } );
}

StartSmartHomeApplianceDiscoveryOutcome AlexaForBusinessClient::StartSmartHomeApplianceDiscovery(const StartSmartHomeApplianceDiscoveryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSmartHomeApplianceDiscoveryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSmartHomeApplianceDiscoveryOutcomeCallable AlexaForBusinessClient::StartSmartHomeApplianceDiscoveryCallable(const StartSmartHomeApplianceDiscoveryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSmartHomeApplianceDiscoveryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSmartHomeApplianceDiscovery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientStartSmartHomeApplianceDiscoveryAsyncHelper(AlexaForBusinessClient const * const clientThis, const StartSmartHomeApplianceDiscoveryRequest& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSmartHomeApplianceDiscovery(request), context);
}

void AlexaForBusinessClient::StartSmartHomeApplianceDiscoveryAsync(const StartSmartHomeApplianceDiscoveryRequest& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientStartSmartHomeApplianceDiscoveryAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AlexaForBusinessClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AlexaForBusinessClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientTagResourceAsyncHelper(AlexaForBusinessClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AlexaForBusinessClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AlexaForBusinessClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AlexaForBusinessClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUntagResourceAsyncHelper(AlexaForBusinessClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AlexaForBusinessClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAddressBookOutcome AlexaForBusinessClient::UpdateAddressBook(const UpdateAddressBookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAddressBookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAddressBookOutcomeCallable AlexaForBusinessClient::UpdateAddressBookCallable(const UpdateAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateAddressBookAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAddressBook(request), context);
}

void AlexaForBusinessClient::UpdateAddressBookAsync(const UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateAddressBookAsyncHelper( this, request, handler, context ); } );
}

UpdateBusinessReportScheduleOutcome AlexaForBusinessClient::UpdateBusinessReportSchedule(const UpdateBusinessReportScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateBusinessReportScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBusinessReportScheduleOutcomeCallable AlexaForBusinessClient::UpdateBusinessReportScheduleCallable(const UpdateBusinessReportScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBusinessReportScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBusinessReportSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateBusinessReportScheduleAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateBusinessReportScheduleRequest& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBusinessReportSchedule(request), context);
}

void AlexaForBusinessClient::UpdateBusinessReportScheduleAsync(const UpdateBusinessReportScheduleRequest& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateBusinessReportScheduleAsyncHelper( this, request, handler, context ); } );
}

UpdateConferenceProviderOutcome AlexaForBusinessClient::UpdateConferenceProvider(const UpdateConferenceProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConferenceProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConferenceProviderOutcomeCallable AlexaForBusinessClient::UpdateConferenceProviderCallable(const UpdateConferenceProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConferenceProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConferenceProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateConferenceProviderAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateConferenceProviderRequest& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConferenceProvider(request), context);
}

void AlexaForBusinessClient::UpdateConferenceProviderAsync(const UpdateConferenceProviderRequest& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateConferenceProviderAsyncHelper( this, request, handler, context ); } );
}

UpdateContactOutcome AlexaForBusinessClient::UpdateContact(const UpdateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactOutcomeCallable AlexaForBusinessClient::UpdateContactCallable(const UpdateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateContactAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContact(request), context);
}

void AlexaForBusinessClient::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateContactAsyncHelper( this, request, handler, context ); } );
}

UpdateDeviceOutcome AlexaForBusinessClient::UpdateDevice(const UpdateDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceOutcomeCallable AlexaForBusinessClient::UpdateDeviceCallable(const UpdateDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateDeviceAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDevice(request), context);
}

void AlexaForBusinessClient::UpdateDeviceAsync(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateDeviceAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayOutcome AlexaForBusinessClient::UpdateGateway(const UpdateGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayOutcomeCallable AlexaForBusinessClient::UpdateGatewayCallable(const UpdateGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateGatewayAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGateway(request), context);
}

void AlexaForBusinessClient::UpdateGatewayAsync(const UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateGatewayAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayGroupOutcome AlexaForBusinessClient::UpdateGatewayGroup(const UpdateGatewayGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGatewayGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayGroupOutcomeCallable AlexaForBusinessClient::UpdateGatewayGroupCallable(const UpdateGatewayGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateGatewayGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateGatewayGroupRequest& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewayGroup(request), context);
}

void AlexaForBusinessClient::UpdateGatewayGroupAsync(const UpdateGatewayGroupRequest& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateGatewayGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateNetworkProfileOutcome AlexaForBusinessClient::UpdateNetworkProfile(const UpdateNetworkProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNetworkProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkProfileOutcomeCallable AlexaForBusinessClient::UpdateNetworkProfileCallable(const UpdateNetworkProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateNetworkProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNetworkProfile(request), context);
}

void AlexaForBusinessClient::UpdateNetworkProfileAsync(const UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateNetworkProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateProfileOutcome AlexaForBusinessClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileOutcomeCallable AlexaForBusinessClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateProfileAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProfile(request), context);
}

void AlexaForBusinessClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateRoomOutcome AlexaForBusinessClient::UpdateRoom(const UpdateRoomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoomOutcomeCallable AlexaForBusinessClient::UpdateRoomCallable(const UpdateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateRoomAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRoom(request), context);
}

void AlexaForBusinessClient::UpdateRoomAsync(const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateRoomAsyncHelper( this, request, handler, context ); } );
}

UpdateSkillGroupOutcome AlexaForBusinessClient::UpdateSkillGroup(const UpdateSkillGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSkillGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSkillGroupOutcomeCallable AlexaForBusinessClient::UpdateSkillGroupCallable(const UpdateSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClientUpdateSkillGroupAsyncHelper(AlexaForBusinessClient const * const clientThis, const UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSkillGroup(request), context);
}

void AlexaForBusinessClient::UpdateSkillGroupAsync(const UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AlexaForBusinessClientUpdateSkillGroupAsyncHelper( this, request, handler, context ); } );
}

