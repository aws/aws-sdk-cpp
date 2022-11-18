/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/alexaforbusiness/AlexaForBusinessServiceClientModel.h>
#include <aws/alexaforbusiness/AlexaForBusinessLegacyAsyncMacros.h>

namespace Aws
{
namespace AlexaForBusiness
{
  /**
   * <p>Alexa for Business helps you use Alexa in your organization. Alexa for
   * Business provides you with the tools to manage Alexa devices, enroll your users,
   * and assign skills, at scale. You can build your own context-aware voice skills
   * using the Alexa Skills Kit and the Alexa for Business API operations. You can
   * also make these available as private skills for your organization. Alexa for
   * Business makes it efficient to voice-enable your products and services, thus
   * providing context-aware voice experiences for your customers. Device makers
   * building with the Alexa Voice Service (AVS) can create fully integrated
   * solutions, register their products with Alexa for Business, and manage them as
   * shared devices in their organization. </p>
   */
  class AWS_ALEXAFORBUSINESS_API AlexaForBusinessClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration = Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration(),
                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider = Aws::MakeShared<AlexaForBusinessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider = Aws::MakeShared<AlexaForBusinessEndpointProvider>(ALLOCATION_TAG),
                               const Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration = Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AlexaForBusinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider = Aws::MakeShared<AlexaForBusinessEndpointProvider>(ALLOCATION_TAG),
                               const Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration = Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AlexaForBusinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AlexaForBusinessClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Associates a skill with the organization under the customer's AWS account. If
         * a skill is private, the user implicitly accepts access to this skill during
         * enablement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ApproveSkill">AWS
         * API Reference</a></p>
         */
        virtual Model::ApproveSkillOutcome ApproveSkill(const Model::ApproveSkillRequest& request) const;


        /**
         * <p>Associates a contact with a given address book.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateContactWithAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateContactWithAddressBookOutcome AssociateContactWithAddressBook(const Model::AssociateContactWithAddressBookRequest& request) const;


        /**
         * <p>Associates a device with the specified network profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithNetworkProfileOutcome AssociateDeviceWithNetworkProfile(const Model::AssociateDeviceWithNetworkProfileRequest& request) const;


        /**
         * <p>Associates a device with a given room. This applies all the settings from the
         * room profile to the device, and all the skills in any skill groups added to that
         * room. This operation requires the device to be online, or else a manual sync is
         * required. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithRoomOutcome AssociateDeviceWithRoom(const Model::AssociateDeviceWithRoomRequest& request) const;


        /**
         * <p>Associates a skill group with a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillGroupWithRoomOutcome AssociateSkillGroupWithRoom(const Model::AssociateSkillGroupWithRoomRequest& request) const;


        /**
         * <p>Associates a skill with a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillWithSkillGroupOutcome AssociateSkillWithSkillGroup(const Model::AssociateSkillWithSkillGroupRequest& request) const;


        /**
         * <p>Makes a private skill available for enrolled users to enable on their
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillWithUsersOutcome AssociateSkillWithUsers(const Model::AssociateSkillWithUsersRequest& request) const;


        /**
         * <p>Creates an address book with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddressBookOutcome CreateAddressBook(const Model::CreateAddressBookRequest& request) const;


        /**
         * <p>Creates a recurring schedule for usage reports to deliver to the specified S3
         * location with a specified daily or weekly interval.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBusinessReportScheduleOutcome CreateBusinessReportSchedule(const Model::CreateBusinessReportScheduleRequest& request) const;


        /**
         * <p>Adds a new conference provider under the user's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConferenceProviderOutcome CreateConferenceProvider(const Model::CreateConferenceProviderRequest& request) const;


        /**
         * <p>Creates a contact with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;


        /**
         * <p>Creates a gateway group with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayGroupOutcome CreateGatewayGroup(const Model::CreateGatewayGroupRequest& request) const;


        /**
         * <p>Creates a network profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkProfileOutcome CreateNetworkProfile(const Model::CreateNetworkProfileRequest& request) const;


        /**
         * <p>Creates a new room profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;


        /**
         * <p>Creates a room with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;


        /**
         * <p>Creates a skill group with a specified name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSkillGroupOutcome CreateSkillGroup(const Model::CreateSkillGroupRequest& request) const;


        /**
         * <p>Creates a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


        /**
         * <p>Deletes an address book by the address book ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAddressBookOutcome DeleteAddressBook(const Model::DeleteAddressBookRequest& request) const;


        /**
         * <p>Deletes the recurring report delivery schedule with the specified schedule
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBusinessReportScheduleOutcome DeleteBusinessReportSchedule(const Model::DeleteBusinessReportScheduleRequest& request) const;


        /**
         * <p>Deletes a conference provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConferenceProviderOutcome DeleteConferenceProvider(const Model::DeleteConferenceProviderRequest& request) const;


        /**
         * <p>Deletes a contact by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;


        /**
         * <p>Removes a device from Alexa For Business.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;


        /**
         * <p>When this action is called for a specified shared device, it allows
         * authorized users to delete the device's entire previous history of voice input
         * data and associated response data. This action can be called once every 24 hours
         * for a specific shared device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDeviceUsageData">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceUsageDataOutcome DeleteDeviceUsageData(const Model::DeleteDeviceUsageDataRequest& request) const;


        /**
         * <p>Deletes a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayGroupOutcome DeleteGatewayGroup(const Model::DeleteGatewayGroupRequest& request) const;


        /**
         * <p>Deletes a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkProfileOutcome DeleteNetworkProfile(const Model::DeleteNetworkProfileRequest& request) const;


        /**
         * <p>Deletes a room profile by the profile ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;


        /**
         * <p>Deletes a room by the room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;


        /**
         * <p>Deletes room skill parameter details by room, skill, and parameter key
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomSkillParameterOutcome DeleteRoomSkillParameter(const Model::DeleteRoomSkillParameterRequest& request) const;


        /**
         * <p>Unlinks a third-party account from a skill.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillAuthorizationOutcome DeleteSkillAuthorization(const Model::DeleteSkillAuthorizationRequest& request) const;


        /**
         * <p>Deletes a skill group by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillGroupOutcome DeleteSkillGroup(const Model::DeleteSkillGroupRequest& request) const;


        /**
         * <p>Deletes a specified user by user ARN and enrollment ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Disassociates a contact from a given address book.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateContactFromAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateContactFromAddressBookOutcome DisassociateContactFromAddressBook(const Model::DisassociateContactFromAddressBookRequest& request) const;


        /**
         * <p>Disassociates a device from its current room. The device continues to be
         * connected to the Wi-Fi network and is still registered to the account. The
         * device settings and skills are removed from the room.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateDeviceFromRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDeviceFromRoomOutcome DisassociateDeviceFromRoom(const Model::DisassociateDeviceFromRoomRequest& request) const;


        /**
         * <p>Disassociates a skill from a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillFromSkillGroupOutcome DisassociateSkillFromSkillGroup(const Model::DisassociateSkillFromSkillGroupRequest& request) const;


        /**
         * <p>Makes a private skill unavailable for enrolled users and prevents them from
         * enabling it on their devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillFromUsersOutcome DisassociateSkillFromUsers(const Model::DisassociateSkillFromUsersRequest& request) const;


        /**
         * <p>Disassociates a skill group from a specified room. This disables all skills
         * in the skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillGroupFromRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillGroupFromRoomOutcome DisassociateSkillGroupFromRoom(const Model::DisassociateSkillGroupFromRoomRequest& request) const;


        /**
         * <p>Forgets smart home appliances associated to a room.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ForgetSmartHomeAppliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgetSmartHomeAppliancesOutcome ForgetSmartHomeAppliances(const Model::ForgetSmartHomeAppliancesRequest& request) const;


        /**
         * <p>Gets address the book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAddressBookOutcome GetAddressBook(const Model::GetAddressBookRequest& request) const;


        /**
         * <p>Retrieves the existing conference preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferencePreference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConferencePreferenceOutcome GetConferencePreference(const Model::GetConferencePreferenceRequest& request) const;


        /**
         * <p>Gets details about a specific conference provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConferenceProviderOutcome GetConferenceProvider(const Model::GetConferenceProviderRequest& request) const;


        /**
         * <p>Gets the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;


        /**
         * <p>Gets the details of a device by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;


        /**
         * <p>Retrieves the details of a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayOutcome GetGateway(const Model::GetGatewayRequest& request) const;


        /**
         * <p>Retrieves the details of a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayGroupOutcome GetGatewayGroup(const Model::GetGatewayGroupRequest& request) const;


        /**
         * <p>Retrieves the configured values for the user enrollment invitation email
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetInvitationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationConfigurationOutcome GetInvitationConfiguration(const Model::GetInvitationConfigurationRequest& request) const;


        /**
         * <p>Gets the network profile details by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkProfileOutcome GetNetworkProfile(const Model::GetNetworkProfileRequest& request) const;


        /**
         * <p>Gets the details of a room profile by profile ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;


        /**
         * <p>Gets room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;


        /**
         * <p>Gets room skill parameter details by room, skill, and parameter key
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoomSkillParameterOutcome GetRoomSkillParameter(const Model::GetRoomSkillParameterRequest& request) const;


        /**
         * <p>Gets skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSkillGroupOutcome GetSkillGroup(const Model::GetSkillGroupRequest& request) const;


        /**
         * <p>Lists the details of the schedules that a user configured. A download URL of
         * the report associated with each schedule is returned every time this action is
         * called. A new download URL is returned each time, and is valid for 24
         * hours.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListBusinessReportSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBusinessReportSchedulesOutcome ListBusinessReportSchedules(const Model::ListBusinessReportSchedulesRequest& request) const;


        /**
         * <p>Lists conference providers under a specific AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListConferenceProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConferenceProvidersOutcome ListConferenceProviders(const Model::ListConferenceProvidersRequest& request) const;


        /**
         * <p>Lists the device event history, including device connection status, for up to
         * 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListDeviceEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceEventsOutcome ListDeviceEvents(const Model::ListDeviceEventsRequest& request) const;


        /**
         * <p>Retrieves a list of gateway group summaries. Use GetGatewayGroup to retrieve
         * details of a specific gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGatewayGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayGroupsOutcome ListGatewayGroups(const Model::ListGatewayGroupsRequest& request) const;


        /**
         * <p>Retrieves a list of gateway summaries. Use GetGateway to retrieve details of
         * a specific gateway. An optional gateway group ARN can be provided to only
         * retrieve gateway summaries of gateways that are associated with that gateway
         * group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;


        /**
         * <p>Lists all enabled skills in a specific skill group.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkills">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsOutcome ListSkills(const Model::ListSkillsRequest& request) const;


        /**
         * <p>Lists all categories in the Alexa skill store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsStoreCategoriesOutcome ListSkillsStoreCategories(const Model::ListSkillsStoreCategoriesRequest& request) const;


        /**
         * <p>Lists all skills in the Alexa skill store by category.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreSkillsByCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsStoreSkillsByCategoryOutcome ListSkillsStoreSkillsByCategory(const Model::ListSkillsStoreSkillsByCategoryRequest& request) const;


        /**
         * <p>Lists all of the smart home appliances associated with a room.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSmartHomeAppliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSmartHomeAppliancesOutcome ListSmartHomeAppliances(const Model::ListSmartHomeAppliancesRequest& request) const;


        /**
         * <p>Lists all tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;


        /**
         * <p>Sets the conference preferences on a specific conference provider at the
         * account level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutConferencePreference">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConferencePreferenceOutcome PutConferencePreference(const Model::PutConferencePreferenceRequest& request) const;


        /**
         * <p>Configures the email template for the user enrollment invitation with the
         * specified attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutInvitationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInvitationConfigurationOutcome PutInvitationConfiguration(const Model::PutInvitationConfigurationRequest& request) const;


        /**
         * <p>Updates room skill parameter details by room, skill, and parameter key ID.
         * Not all skills have a room skill parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRoomSkillParameterOutcome PutRoomSkillParameter(const Model::PutRoomSkillParameterRequest& request) const;


        /**
         * <p>Links a user's account to a third-party skill provider. If this API operation
         * is called by an assumed IAM role, the skill being linked must be a private
         * skill. Also, the skill must be owned by the AWS account that assumed the IAM
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutSkillAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSkillAuthorizationOutcome PutSkillAuthorization(const Model::PutSkillAuthorizationRequest& request) const;


        /**
         * <p>Registers an Alexa-enabled device built by an Original Equipment Manufacturer
         * (OEM) using Alexa Voice Service (AVS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RegisterAVSDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAVSDeviceOutcome RegisterAVSDevice(const Model::RegisterAVSDeviceRequest& request) const;


        /**
         * <p>Disassociates a skill from the organization under a user's AWS account. If
         * the skill is a private skill, it moves to an AcceptStatus of PENDING. Any
         * private or public skill that is rejected can be added later by calling the
         * ApproveSkill API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RejectSkill">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectSkillOutcome RejectSkill(const Model::RejectSkillRequest& request) const;


        /**
         * <p>Determines the details for the room from which a skill request was invoked.
         * This operation is used by skill developers.</p> <p>To query ResolveRoom from an
         * Alexa skill, the skill ID needs to be authorized. When the skill is using an AWS
         * Lambda function, the skill is automatically authorized when you publish your
         * skill as a private skill to your AWS account. Skills that are hosted using a
         * custom web service must be manually authorized. To get your skill authorized,
         * contact AWS Support with your AWS account ID that queries the ResolveRoom API
         * and skill ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ResolveRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveRoomOutcome ResolveRoom(const Model::ResolveRoomRequest& request) const;


        /**
         * <p>Revokes an invitation and invalidates the enrollment URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RevokeInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeInvitationOutcome RevokeInvitation(const Model::RevokeInvitationRequest& request) const;


        /**
         * <p>Searches address books and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchAddressBooks">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAddressBooksOutcome SearchAddressBooks(const Model::SearchAddressBooksRequest& request) const;


        /**
         * <p>Searches contacts and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchContactsOutcome SearchContacts(const Model::SearchContactsRequest& request) const;


        /**
         * <p>Searches devices and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDevicesOutcome SearchDevices(const Model::SearchDevicesRequest& request) const;


        /**
         * <p>Searches network profiles and lists the ones that meet a set of filter and
         * sort criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchNetworkProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchNetworkProfilesOutcome SearchNetworkProfiles(const Model::SearchNetworkProfilesRequest& request) const;


        /**
         * <p>Searches room profiles and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProfilesOutcome SearchProfiles(const Model::SearchProfilesRequest& request) const;


        /**
         * <p>Searches rooms and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchRooms">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRoomsOutcome SearchRooms(const Model::SearchRoomsRequest& request) const;


        /**
         * <p>Searches skill groups and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchSkillGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSkillGroupsOutcome SearchSkillGroups(const Model::SearchSkillGroupsRequest& request) const;


        /**
         * <p>Searches users and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;


        /**
         * <p>Triggers an asynchronous flow to send text, SSML, or audio announcements to
         * rooms that are identified by a search or filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAnnouncementOutcome SendAnnouncement(const Model::SendAnnouncementRequest& request) const;


        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 30 days or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::SendInvitationOutcome SendInvitation(const Model::SendInvitationRequest& request) const;


        /**
         * <p>Resets a device and its account to the known default settings. This clears
         * all information and settings set by previous users in the following ways:</p>
         * <ul> <li> <p>Bluetooth - This unpairs all bluetooth devices paired with your
         * echo device.</p> </li> <li> <p>Volume - This resets the echo device's volume to
         * the default value.</p> </li> <li> <p>Notifications - This clears all
         * notifications from your echo device.</p> </li> <li> <p>Lists - This clears all
         * to-do items from your echo device.</p> </li> <li> <p>Settings - This internally
         * syncs the room's profile (if the device is assigned to a room), contacts,
         * address books, delegation access for account linking, and communications (if
         * enabled on the room profile).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartDeviceSync">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeviceSyncOutcome StartDeviceSync(const Model::StartDeviceSyncRequest& request) const;


        /**
         * <p>Initiates the discovery of any smart home appliances associated with the
         * room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartSmartHomeApplianceDiscovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSmartHomeApplianceDiscoveryOutcome StartSmartHomeApplianceDiscovery(const Model::StartSmartHomeApplianceDiscoveryRequest& request) const;


        /**
         * <p>Adds metadata tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes metadata tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates address book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAddressBookOutcome UpdateAddressBook(const Model::UpdateAddressBookRequest& request) const;


        /**
         * <p>Updates the configuration of the report delivery schedule with the specified
         * schedule ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBusinessReportScheduleOutcome UpdateBusinessReportSchedule(const Model::UpdateBusinessReportScheduleRequest& request) const;


        /**
         * <p>Updates an existing conference provider's settings.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConferenceProviderOutcome UpdateConferenceProvider(const Model::UpdateConferenceProviderRequest& request) const;


        /**
         * <p>Updates the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;


        /**
         * <p>Updates the device name by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;


        /**
         * <p>Updates the details of a gateway. If any optional field is not provided, the
         * existing corresponding value is left unmodified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;


        /**
         * <p>Updates the details of a gateway group. If any optional field is not
         * provided, the existing corresponding value is left unmodified.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayGroupOutcome UpdateGatewayGroup(const Model::UpdateGatewayGroupRequest& request) const;


        /**
         * <p>Updates a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkProfileOutcome UpdateNetworkProfile(const Model::UpdateNetworkProfileRequest& request) const;


        /**
         * <p>Updates an existing room profile by room profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;


        /**
         * <p>Updates room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;


        /**
         * <p>Updates skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSkillGroupOutcome UpdateSkillGroup(const Model::UpdateSkillGroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AlexaForBusinessEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AlexaForBusinessClientConfiguration& clientConfiguration);

      AlexaForBusinessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AlexaForBusinessEndpointProviderBase> m_endpointProvider;
  };

} // namespace AlexaForBusiness
} // namespace Aws
