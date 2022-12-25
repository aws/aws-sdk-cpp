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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/alexaforbusiness/AlexaForBusinessClient.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrorMarshaller.h>
#include <aws/alexaforbusiness/AlexaForBusinessEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AlexaForBusinessClient::SERVICE_NAME = "a4b";
const char* AlexaForBusinessClient::ALLOCATION_TAG = "AlexaForBusinessClient";

AlexaForBusinessClient::AlexaForBusinessClient(const AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration,
                                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const AWSCredentials& credentials,
                                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider,
                                               const AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider,
                                               const AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AlexaForBusinessClient::AlexaForBusinessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AlexaForBusinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AlexaForBusinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AlexaForBusinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AlexaForBusinessClient::~AlexaForBusinessClient()
{
}

std::shared_ptr<AlexaForBusinessEndpointProviderBase>& AlexaForBusinessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AlexaForBusinessClient::init(const AlexaForBusiness::AlexaForBusinessClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Alexa For Business");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AlexaForBusinessClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ApproveSkillOutcome AlexaForBusinessClient::ApproveSkill(const ApproveSkillRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApproveSkill, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApproveSkill, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ApproveSkillOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ApproveSkill(request), context);
    } );
}

AssociateContactWithAddressBookOutcome AlexaForBusinessClient::AssociateContactWithAddressBook(const AssociateContactWithAddressBookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateContactWithAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateContactWithAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateContactWithAddressBookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateContactWithAddressBook(request), context);
    } );
}

AssociateDeviceWithNetworkProfileOutcome AlexaForBusinessClient::AssociateDeviceWithNetworkProfile(const AssociateDeviceWithNetworkProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDeviceWithNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDeviceWithNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDeviceWithNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateDeviceWithNetworkProfile(request), context);
    } );
}

AssociateDeviceWithRoomOutcome AlexaForBusinessClient::AssociateDeviceWithRoom(const AssociateDeviceWithRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDeviceWithRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDeviceWithRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDeviceWithRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateDeviceWithRoom(request), context);
    } );
}

AssociateSkillGroupWithRoomOutcome AlexaForBusinessClient::AssociateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSkillGroupWithRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSkillGroupWithRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateSkillGroupWithRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateSkillGroupWithRoom(request), context);
    } );
}

AssociateSkillWithSkillGroupOutcome AlexaForBusinessClient::AssociateSkillWithSkillGroup(const AssociateSkillWithSkillGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSkillWithSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSkillWithSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateSkillWithSkillGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateSkillWithSkillGroup(request), context);
    } );
}

AssociateSkillWithUsersOutcome AlexaForBusinessClient::AssociateSkillWithUsers(const AssociateSkillWithUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSkillWithUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSkillWithUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateSkillWithUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateSkillWithUsers(request), context);
    } );
}

CreateAddressBookOutcome AlexaForBusinessClient::CreateAddressBook(const CreateAddressBookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAddressBookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAddressBook(request), context);
    } );
}

CreateBusinessReportScheduleOutcome AlexaForBusinessClient::CreateBusinessReportSchedule(const CreateBusinessReportScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBusinessReportSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBusinessReportSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBusinessReportScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBusinessReportSchedule(request), context);
    } );
}

CreateConferenceProviderOutcome AlexaForBusinessClient::CreateConferenceProvider(const CreateConferenceProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateConferenceProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConferenceProvider(request), context);
    } );
}

CreateContactOutcome AlexaForBusinessClient::CreateContact(const CreateContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContact(request), context);
    } );
}

CreateGatewayGroupOutcome AlexaForBusinessClient::CreateGatewayGroup(const CreateGatewayGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGatewayGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGatewayGroup(request), context);
    } );
}

CreateNetworkProfileOutcome AlexaForBusinessClient::CreateNetworkProfile(const CreateNetworkProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNetworkProfile(request), context);
    } );
}

CreateProfileOutcome AlexaForBusinessClient::CreateProfile(const CreateProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProfile(request), context);
    } );
}

CreateRoomOutcome AlexaForBusinessClient::CreateRoom(const CreateRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRoom(request), context);
    } );
}

CreateSkillGroupOutcome AlexaForBusinessClient::CreateSkillGroup(const CreateSkillGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSkillGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSkillGroup(request), context);
    } );
}

CreateUserOutcome AlexaForBusinessClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUser(request), context);
    } );
}

DeleteAddressBookOutcome AlexaForBusinessClient::DeleteAddressBook(const DeleteAddressBookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAddressBookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAddressBook(request), context);
    } );
}

DeleteBusinessReportScheduleOutcome AlexaForBusinessClient::DeleteBusinessReportSchedule(const DeleteBusinessReportScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBusinessReportSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBusinessReportSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBusinessReportScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBusinessReportSchedule(request), context);
    } );
}

DeleteConferenceProviderOutcome AlexaForBusinessClient::DeleteConferenceProvider(const DeleteConferenceProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConferenceProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConferenceProvider(request), context);
    } );
}

DeleteContactOutcome AlexaForBusinessClient::DeleteContact(const DeleteContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContact(request), context);
    } );
}

DeleteDeviceOutcome AlexaForBusinessClient::DeleteDevice(const DeleteDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDevice(request), context);
    } );
}

DeleteDeviceUsageDataOutcome AlexaForBusinessClient::DeleteDeviceUsageData(const DeleteDeviceUsageDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeviceUsageData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeviceUsageData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDeviceUsageDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDeviceUsageData(request), context);
    } );
}

DeleteGatewayGroupOutcome AlexaForBusinessClient::DeleteGatewayGroup(const DeleteGatewayGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGatewayGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGatewayGroup(request), context);
    } );
}

DeleteNetworkProfileOutcome AlexaForBusinessClient::DeleteNetworkProfile(const DeleteNetworkProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNetworkProfile(request), context);
    } );
}

DeleteProfileOutcome AlexaForBusinessClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProfile(request), context);
    } );
}

DeleteRoomOutcome AlexaForBusinessClient::DeleteRoom(const DeleteRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRoom(request), context);
    } );
}

DeleteRoomSkillParameterOutcome AlexaForBusinessClient::DeleteRoomSkillParameter(const DeleteRoomSkillParameterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoomSkillParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoomSkillParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRoomSkillParameterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRoomSkillParameter(request), context);
    } );
}

DeleteSkillAuthorizationOutcome AlexaForBusinessClient::DeleteSkillAuthorization(const DeleteSkillAuthorizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSkillAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSkillAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSkillAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSkillAuthorization(request), context);
    } );
}

DeleteSkillGroupOutcome AlexaForBusinessClient::DeleteSkillGroup(const DeleteSkillGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSkillGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSkillGroup(request), context);
    } );
}

DeleteUserOutcome AlexaForBusinessClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUser(request), context);
    } );
}

DisassociateContactFromAddressBookOutcome AlexaForBusinessClient::DisassociateContactFromAddressBook(const DisassociateContactFromAddressBookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateContactFromAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateContactFromAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateContactFromAddressBookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateContactFromAddressBook(request), context);
    } );
}

DisassociateDeviceFromRoomOutcome AlexaForBusinessClient::DisassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateDeviceFromRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateDeviceFromRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateDeviceFromRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateDeviceFromRoom(request), context);
    } );
}

DisassociateSkillFromSkillGroupOutcome AlexaForBusinessClient::DisassociateSkillFromSkillGroup(const DisassociateSkillFromSkillGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSkillFromSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateSkillFromSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateSkillFromSkillGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateSkillFromSkillGroup(request), context);
    } );
}

DisassociateSkillFromUsersOutcome AlexaForBusinessClient::DisassociateSkillFromUsers(const DisassociateSkillFromUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSkillFromUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateSkillFromUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateSkillFromUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateSkillFromUsers(request), context);
    } );
}

DisassociateSkillGroupFromRoomOutcome AlexaForBusinessClient::DisassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSkillGroupFromRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateSkillGroupFromRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateSkillGroupFromRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateSkillGroupFromRoom(request), context);
    } );
}

ForgetSmartHomeAppliancesOutcome AlexaForBusinessClient::ForgetSmartHomeAppliances(const ForgetSmartHomeAppliancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ForgetSmartHomeAppliances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ForgetSmartHomeAppliances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ForgetSmartHomeAppliancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ForgetSmartHomeAppliances(request), context);
    } );
}

GetAddressBookOutcome AlexaForBusinessClient::GetAddressBook(const GetAddressBookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAddressBookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAddressBook(request), context);
    } );
}

GetConferencePreferenceOutcome AlexaForBusinessClient::GetConferencePreference(const GetConferencePreferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConferencePreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConferencePreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConferencePreferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConferencePreference(request), context);
    } );
}

GetConferenceProviderOutcome AlexaForBusinessClient::GetConferenceProvider(const GetConferenceProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConferenceProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConferenceProvider(request), context);
    } );
}

GetContactOutcome AlexaForBusinessClient::GetContact(const GetContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContact(request), context);
    } );
}

GetDeviceOutcome AlexaForBusinessClient::GetDevice(const GetDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDevice(request), context);
    } );
}

GetGatewayOutcome AlexaForBusinessClient::GetGateway(const GetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGateway(request), context);
    } );
}

GetGatewayGroupOutcome AlexaForBusinessClient::GetGatewayGroup(const GetGatewayGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGatewayGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGatewayGroup(request), context);
    } );
}

GetInvitationConfigurationOutcome AlexaForBusinessClient::GetInvitationConfiguration(const GetInvitationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInvitationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInvitationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInvitationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInvitationConfiguration(request), context);
    } );
}

GetNetworkProfileOutcome AlexaForBusinessClient::GetNetworkProfile(const GetNetworkProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetNetworkProfile(request), context);
    } );
}

GetProfileOutcome AlexaForBusinessClient::GetProfile(const GetProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetProfile(request), context);
    } );
}

GetRoomOutcome AlexaForBusinessClient::GetRoom(const GetRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRoom(request), context);
    } );
}

GetRoomSkillParameterOutcome AlexaForBusinessClient::GetRoomSkillParameter(const GetRoomSkillParameterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRoomSkillParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRoomSkillParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRoomSkillParameterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRoomSkillParameter(request), context);
    } );
}

GetSkillGroupOutcome AlexaForBusinessClient::GetSkillGroup(const GetSkillGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSkillGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSkillGroup(request), context);
    } );
}

ListBusinessReportSchedulesOutcome AlexaForBusinessClient::ListBusinessReportSchedules(const ListBusinessReportSchedulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBusinessReportSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBusinessReportSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBusinessReportSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBusinessReportSchedules(request), context);
    } );
}

ListConferenceProvidersOutcome AlexaForBusinessClient::ListConferenceProviders(const ListConferenceProvidersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConferenceProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConferenceProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListConferenceProvidersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConferenceProviders(request), context);
    } );
}

ListDeviceEventsOutcome AlexaForBusinessClient::ListDeviceEvents(const ListDeviceEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeviceEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeviceEvents(request), context);
    } );
}

ListGatewayGroupsOutcome AlexaForBusinessClient::ListGatewayGroups(const ListGatewayGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGatewayGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGatewayGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGatewayGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGatewayGroups(request), context);
    } );
}

ListGatewaysOutcome AlexaForBusinessClient::ListGateways(const ListGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGateways(request), context);
    } );
}

ListSkillsOutcome AlexaForBusinessClient::ListSkills(const ListSkillsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSkills, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSkills, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSkillsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSkills(request), context);
    } );
}

ListSkillsStoreCategoriesOutcome AlexaForBusinessClient::ListSkillsStoreCategories(const ListSkillsStoreCategoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSkillsStoreCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSkillsStoreCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSkillsStoreCategoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSkillsStoreCategories(request), context);
    } );
}

ListSkillsStoreSkillsByCategoryOutcome AlexaForBusinessClient::ListSkillsStoreSkillsByCategory(const ListSkillsStoreSkillsByCategoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSkillsStoreSkillsByCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSkillsStoreSkillsByCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSkillsStoreSkillsByCategoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSkillsStoreSkillsByCategory(request), context);
    } );
}

ListSmartHomeAppliancesOutcome AlexaForBusinessClient::ListSmartHomeAppliances(const ListSmartHomeAppliancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSmartHomeAppliances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSmartHomeAppliances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSmartHomeAppliancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSmartHomeAppliances(request), context);
    } );
}

ListTagsOutcome AlexaForBusinessClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTags(request), context);
    } );
}

PutConferencePreferenceOutcome AlexaForBusinessClient::PutConferencePreference(const PutConferencePreferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutConferencePreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutConferencePreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutConferencePreferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutConferencePreference(request), context);
    } );
}

PutInvitationConfigurationOutcome AlexaForBusinessClient::PutInvitationConfiguration(const PutInvitationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInvitationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInvitationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInvitationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutInvitationConfiguration(request), context);
    } );
}

PutRoomSkillParameterOutcome AlexaForBusinessClient::PutRoomSkillParameter(const PutRoomSkillParameterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRoomSkillParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRoomSkillParameter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRoomSkillParameterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRoomSkillParameter(request), context);
    } );
}

PutSkillAuthorizationOutcome AlexaForBusinessClient::PutSkillAuthorization(const PutSkillAuthorizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSkillAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSkillAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutSkillAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSkillAuthorization(request), context);
    } );
}

RegisterAVSDeviceOutcome AlexaForBusinessClient::RegisterAVSDevice(const RegisterAVSDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterAVSDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterAVSDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterAVSDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterAVSDevice(request), context);
    } );
}

RejectSkillOutcome AlexaForBusinessClient::RejectSkill(const RejectSkillRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectSkill, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectSkill, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectSkillOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RejectSkill(request), context);
    } );
}

ResolveRoomOutcome AlexaForBusinessClient::ResolveRoom(const ResolveRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResolveRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResolveRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResolveRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResolveRoom(request), context);
    } );
}

RevokeInvitationOutcome AlexaForBusinessClient::RevokeInvitation(const RevokeInvitationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeInvitationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeInvitation(request), context);
    } );
}

SearchAddressBooksOutcome AlexaForBusinessClient::SearchAddressBooks(const SearchAddressBooksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAddressBooks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAddressBooks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchAddressBooksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchAddressBooks(request), context);
    } );
}

SearchContactsOutcome AlexaForBusinessClient::SearchContacts(const SearchContactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchContactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchContacts(request), context);
    } );
}

SearchDevicesOutcome AlexaForBusinessClient::SearchDevices(const SearchDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchDevices(request), context);
    } );
}

SearchNetworkProfilesOutcome AlexaForBusinessClient::SearchNetworkProfiles(const SearchNetworkProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchNetworkProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchNetworkProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchNetworkProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchNetworkProfiles(request), context);
    } );
}

SearchProfilesOutcome AlexaForBusinessClient::SearchProfiles(const SearchProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchProfiles(request), context);
    } );
}

SearchRoomsOutcome AlexaForBusinessClient::SearchRooms(const SearchRoomsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchRooms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchRooms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchRoomsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchRooms(request), context);
    } );
}

SearchSkillGroupsOutcome AlexaForBusinessClient::SearchSkillGroups(const SearchSkillGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchSkillGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchSkillGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchSkillGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchSkillGroups(request), context);
    } );
}

SearchUsersOutcome AlexaForBusinessClient::SearchUsers(const SearchUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchUsers(request), context);
    } );
}

SendAnnouncementOutcome AlexaForBusinessClient::SendAnnouncement(const SendAnnouncementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendAnnouncementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendAnnouncement(request), context);
    } );
}

SendInvitationOutcome AlexaForBusinessClient::SendInvitation(const SendInvitationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendInvitationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendInvitation(request), context);
    } );
}

StartDeviceSyncOutcome AlexaForBusinessClient::StartDeviceSync(const StartDeviceSyncRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDeviceSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDeviceSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartDeviceSyncOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDeviceSync(request), context);
    } );
}

StartSmartHomeApplianceDiscoveryOutcome AlexaForBusinessClient::StartSmartHomeApplianceDiscovery(const StartSmartHomeApplianceDiscoveryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSmartHomeApplianceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSmartHomeApplianceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartSmartHomeApplianceDiscoveryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSmartHomeApplianceDiscovery(request), context);
    } );
}

TagResourceOutcome AlexaForBusinessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome AlexaForBusinessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAddressBookOutcome AlexaForBusinessClient::UpdateAddressBook(const UpdateAddressBookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAddressBook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAddressBookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAddressBook(request), context);
    } );
}

UpdateBusinessReportScheduleOutcome AlexaForBusinessClient::UpdateBusinessReportSchedule(const UpdateBusinessReportScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBusinessReportSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBusinessReportSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBusinessReportScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBusinessReportSchedule(request), context);
    } );
}

UpdateConferenceProviderOutcome AlexaForBusinessClient::UpdateConferenceProvider(const UpdateConferenceProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConferenceProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateConferenceProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConferenceProvider(request), context);
    } );
}

UpdateContactOutcome AlexaForBusinessClient::UpdateContact(const UpdateContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateContact(request), context);
    } );
}

UpdateDeviceOutcome AlexaForBusinessClient::UpdateDevice(const UpdateDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDevice(request), context);
    } );
}

UpdateGatewayOutcome AlexaForBusinessClient::UpdateGateway(const UpdateGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGateway(request), context);
    } );
}

UpdateGatewayGroupOutcome AlexaForBusinessClient::UpdateGatewayGroup(const UpdateGatewayGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGatewayGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGatewayGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGatewayGroup(request), context);
    } );
}

UpdateNetworkProfileOutcome AlexaForBusinessClient::UpdateNetworkProfile(const UpdateNetworkProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNetworkProfile(request), context);
    } );
}

UpdateProfileOutcome AlexaForBusinessClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProfile(request), context);
    } );
}

UpdateRoomOutcome AlexaForBusinessClient::UpdateRoom(const UpdateRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRoom(request), context);
    } );
}

UpdateSkillGroupOutcome AlexaForBusinessClient::UpdateSkillGroup(const UpdateSkillGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSkillGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSkillGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSkillGroup(request), context);
    } );
}

