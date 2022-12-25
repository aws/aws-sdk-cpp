/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/alexaforbusiness/AlexaForBusinessServiceClientModel.h>

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
  class AWS_ALEXAFORBUSINESS_API AlexaForBusinessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AlexaForBusinessClient>
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

        /**
         * <p>Associates a skill with the organization under the customer's AWS account. If
         * a skill is private, the user implicitly accepts access to this skill during
         * enablement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ApproveSkill">AWS
         * API Reference</a></p>
         */
        virtual Model::ApproveSkillOutcome ApproveSkill(const Model::ApproveSkillRequest& request) const;

        /**
         * A Callable wrapper for ApproveSkill that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApproveSkillOutcomeCallable ApproveSkillCallable(const Model::ApproveSkillRequest& request) const;

        /**
         * An Async wrapper for ApproveSkill that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApproveSkillAsync(const Model::ApproveSkillRequest& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a contact with a given address book.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateContactWithAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateContactWithAddressBookOutcome AssociateContactWithAddressBook(const Model::AssociateContactWithAddressBookRequest& request) const;

        /**
         * A Callable wrapper for AssociateContactWithAddressBook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateContactWithAddressBookOutcomeCallable AssociateContactWithAddressBookCallable(const Model::AssociateContactWithAddressBookRequest& request) const;

        /**
         * An Async wrapper for AssociateContactWithAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateContactWithAddressBookAsync(const Model::AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a device with the specified network profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateDeviceWithNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithNetworkProfileOutcome AssociateDeviceWithNetworkProfile(const Model::AssociateDeviceWithNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for AssociateDeviceWithNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDeviceWithNetworkProfileOutcomeCallable AssociateDeviceWithNetworkProfileCallable(const Model::AssociateDeviceWithNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for AssociateDeviceWithNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDeviceWithNetworkProfileAsync(const Model::AssociateDeviceWithNetworkProfileRequest& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for AssociateDeviceWithRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDeviceWithRoomOutcomeCallable AssociateDeviceWithRoomCallable(const Model::AssociateDeviceWithRoomRequest& request) const;

        /**
         * An Async wrapper for AssociateDeviceWithRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDeviceWithRoomAsync(const Model::AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a skill group with a given room. This enables all skills in the
         * associated skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillGroupWithRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillGroupWithRoomOutcome AssociateSkillGroupWithRoom(const Model::AssociateSkillGroupWithRoomRequest& request) const;

        /**
         * A Callable wrapper for AssociateSkillGroupWithRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSkillGroupWithRoomOutcomeCallable AssociateSkillGroupWithRoomCallable(const Model::AssociateSkillGroupWithRoomRequest& request) const;

        /**
         * An Async wrapper for AssociateSkillGroupWithRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSkillGroupWithRoomAsync(const Model::AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a skill with a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillWithSkillGroupOutcome AssociateSkillWithSkillGroup(const Model::AssociateSkillWithSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateSkillWithSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSkillWithSkillGroupOutcomeCallable AssociateSkillWithSkillGroupCallable(const Model::AssociateSkillWithSkillGroupRequest& request) const;

        /**
         * An Async wrapper for AssociateSkillWithSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSkillWithSkillGroupAsync(const Model::AssociateSkillWithSkillGroupRequest& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a private skill available for enrolled users to enable on their
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillWithUsersOutcome AssociateSkillWithUsers(const Model::AssociateSkillWithUsersRequest& request) const;

        /**
         * A Callable wrapper for AssociateSkillWithUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSkillWithUsersOutcomeCallable AssociateSkillWithUsersCallable(const Model::AssociateSkillWithUsersRequest& request) const;

        /**
         * An Async wrapper for AssociateSkillWithUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSkillWithUsersAsync(const Model::AssociateSkillWithUsersRequest& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an address book with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddressBookOutcome CreateAddressBook(const Model::CreateAddressBookRequest& request) const;

        /**
         * A Callable wrapper for CreateAddressBook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAddressBookOutcomeCallable CreateAddressBookCallable(const Model::CreateAddressBookRequest& request) const;

        /**
         * An Async wrapper for CreateAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAddressBookAsync(const Model::CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a recurring schedule for usage reports to deliver to the specified S3
         * location with a specified daily or weekly interval.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBusinessReportScheduleOutcome CreateBusinessReportSchedule(const Model::CreateBusinessReportScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateBusinessReportSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBusinessReportScheduleOutcomeCallable CreateBusinessReportScheduleCallable(const Model::CreateBusinessReportScheduleRequest& request) const;

        /**
         * An Async wrapper for CreateBusinessReportSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBusinessReportScheduleAsync(const Model::CreateBusinessReportScheduleRequest& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new conference provider under the user's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConferenceProviderOutcome CreateConferenceProvider(const Model::CreateConferenceProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateConferenceProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConferenceProviderOutcomeCallable CreateConferenceProviderCallable(const Model::CreateConferenceProviderRequest& request) const;

        /**
         * An Async wrapper for CreateConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConferenceProviderAsync(const Model::CreateConferenceProviderRequest& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a contact with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * A Callable wrapper for CreateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactOutcomeCallable CreateContactCallable(const Model::CreateContactRequest& request) const;

        /**
         * An Async wrapper for CreateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactAsync(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a gateway group with the specified details.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayGroupOutcome CreateGatewayGroup(const Model::CreateGatewayGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGatewayGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGatewayGroupOutcomeCallable CreateGatewayGroupCallable(const Model::CreateGatewayGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGatewayGroupAsync(const Model::CreateGatewayGroupRequest& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkProfileOutcome CreateNetworkProfile(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkProfileOutcomeCallable CreateNetworkProfileCallable(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkProfileAsync(const Model::CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new room profile with the specified details.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProfileOutcomeCallable CreateProfileCallable(const Model::CreateProfileRequest& request) const;

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProfileAsync(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a room with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;

        /**
         * A Callable wrapper for CreateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request) const;

        /**
         * An Async wrapper for CreateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a skill group with a specified name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSkillGroupOutcome CreateSkillGroup(const Model::CreateSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSkillGroupOutcomeCallable CreateSkillGroupCallable(const Model::CreateSkillGroupRequest& request) const;

        /**
         * An Async wrapper for CreateSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSkillGroupAsync(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an address book by the address book ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAddressBookOutcome DeleteAddressBook(const Model::DeleteAddressBookRequest& request) const;

        /**
         * A Callable wrapper for DeleteAddressBook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAddressBookOutcomeCallable DeleteAddressBookCallable(const Model::DeleteAddressBookRequest& request) const;

        /**
         * An Async wrapper for DeleteAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAddressBookAsync(const Model::DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the recurring report delivery schedule with the specified schedule
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBusinessReportScheduleOutcome DeleteBusinessReportSchedule(const Model::DeleteBusinessReportScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteBusinessReportSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBusinessReportScheduleOutcomeCallable DeleteBusinessReportScheduleCallable(const Model::DeleteBusinessReportScheduleRequest& request) const;

        /**
         * An Async wrapper for DeleteBusinessReportSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBusinessReportScheduleAsync(const Model::DeleteBusinessReportScheduleRequest& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a conference provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConferenceProviderOutcome DeleteConferenceProvider(const Model::DeleteConferenceProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteConferenceProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConferenceProviderOutcomeCallable DeleteConferenceProviderCallable(const Model::DeleteConferenceProviderRequest& request) const;

        /**
         * An Async wrapper for DeleteConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConferenceProviderAsync(const Model::DeleteConferenceProviderRequest& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a contact by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactOutcomeCallable DeleteContactCallable(const Model::DeleteContactRequest& request) const;

        /**
         * An Async wrapper for DeleteContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactAsync(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a device from Alexa For Business.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;

        /**
         * An Async wrapper for DeleteDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteDeviceUsageData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceUsageDataOutcomeCallable DeleteDeviceUsageDataCallable(const Model::DeleteDeviceUsageDataRequest& request) const;

        /**
         * An Async wrapper for DeleteDeviceUsageData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceUsageDataAsync(const Model::DeleteDeviceUsageDataRequest& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayGroupOutcome DeleteGatewayGroup(const Model::DeleteGatewayGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGatewayGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayGroupOutcomeCallable DeleteGatewayGroupCallable(const Model::DeleteGatewayGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayGroupAsync(const Model::DeleteGatewayGroupRequest& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkProfileOutcome DeleteNetworkProfile(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkProfileOutcomeCallable DeleteNetworkProfileCallable(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkProfileAsync(const Model::DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a room profile by the profile ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const Model::DeleteProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileAsync(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a room by the room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request) const;

        /**
         * An Async wrapper for DeleteRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes room skill parameter details by room, skill, and parameter key
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomSkillParameterOutcome DeleteRoomSkillParameter(const Model::DeleteRoomSkillParameterRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoomSkillParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomSkillParameterOutcomeCallable DeleteRoomSkillParameterCallable(const Model::DeleteRoomSkillParameterRequest& request) const;

        /**
         * An Async wrapper for DeleteRoomSkillParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomSkillParameterAsync(const Model::DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unlinks a third-party account from a skill.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillAuthorizationOutcome DeleteSkillAuthorization(const Model::DeleteSkillAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSkillAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSkillAuthorizationOutcomeCallable DeleteSkillAuthorizationCallable(const Model::DeleteSkillAuthorizationRequest& request) const;

        /**
         * An Async wrapper for DeleteSkillAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSkillAuthorizationAsync(const Model::DeleteSkillAuthorizationRequest& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a skill group by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillGroupOutcome DeleteSkillGroup(const Model::DeleteSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSkillGroupOutcomeCallable DeleteSkillGroupCallable(const Model::DeleteSkillGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSkillGroupAsync(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified user by user ARN and enrollment ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a contact from a given address book.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateContactFromAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateContactFromAddressBookOutcome DisassociateContactFromAddressBook(const Model::DisassociateContactFromAddressBookRequest& request) const;

        /**
         * A Callable wrapper for DisassociateContactFromAddressBook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateContactFromAddressBookOutcomeCallable DisassociateContactFromAddressBookCallable(const Model::DisassociateContactFromAddressBookRequest& request) const;

        /**
         * An Async wrapper for DisassociateContactFromAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateContactFromAddressBookAsync(const Model::DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DisassociateDeviceFromRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDeviceFromRoomOutcomeCallable DisassociateDeviceFromRoomCallable(const Model::DisassociateDeviceFromRoomRequest& request) const;

        /**
         * An Async wrapper for DisassociateDeviceFromRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDeviceFromRoomAsync(const Model::DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a skill from a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillFromSkillGroupOutcome DisassociateSkillFromSkillGroup(const Model::DisassociateSkillFromSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSkillFromSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSkillFromSkillGroupOutcomeCallable DisassociateSkillFromSkillGroupCallable(const Model::DisassociateSkillFromSkillGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociateSkillFromSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSkillFromSkillGroupAsync(const Model::DisassociateSkillFromSkillGroupRequest& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Makes a private skill unavailable for enrolled users and prevents them from
         * enabling it on their devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillFromUsersOutcome DisassociateSkillFromUsers(const Model::DisassociateSkillFromUsersRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSkillFromUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSkillFromUsersOutcomeCallable DisassociateSkillFromUsersCallable(const Model::DisassociateSkillFromUsersRequest& request) const;

        /**
         * An Async wrapper for DisassociateSkillFromUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSkillFromUsersAsync(const Model::DisassociateSkillFromUsersRequest& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a skill group from a specified room. This disables all skills
         * in the skill group on all devices in the room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillGroupFromRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillGroupFromRoomOutcome DisassociateSkillGroupFromRoom(const Model::DisassociateSkillGroupFromRoomRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSkillGroupFromRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSkillGroupFromRoomOutcomeCallable DisassociateSkillGroupFromRoomCallable(const Model::DisassociateSkillGroupFromRoomRequest& request) const;

        /**
         * An Async wrapper for DisassociateSkillGroupFromRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSkillGroupFromRoomAsync(const Model::DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forgets smart home appliances associated to a room.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ForgetSmartHomeAppliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgetSmartHomeAppliancesOutcome ForgetSmartHomeAppliances(const Model::ForgetSmartHomeAppliancesRequest& request) const;

        /**
         * A Callable wrapper for ForgetSmartHomeAppliances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgetSmartHomeAppliancesOutcomeCallable ForgetSmartHomeAppliancesCallable(const Model::ForgetSmartHomeAppliancesRequest& request) const;

        /**
         * An Async wrapper for ForgetSmartHomeAppliances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgetSmartHomeAppliancesAsync(const Model::ForgetSmartHomeAppliancesRequest& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets address the book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAddressBookOutcome GetAddressBook(const Model::GetAddressBookRequest& request) const;

        /**
         * A Callable wrapper for GetAddressBook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAddressBookOutcomeCallable GetAddressBookCallable(const Model::GetAddressBookRequest& request) const;

        /**
         * An Async wrapper for GetAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAddressBookAsync(const Model::GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the existing conference preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferencePreference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConferencePreferenceOutcome GetConferencePreference(const Model::GetConferencePreferenceRequest& request) const;

        /**
         * A Callable wrapper for GetConferencePreference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConferencePreferenceOutcomeCallable GetConferencePreferenceCallable(const Model::GetConferencePreferenceRequest& request) const;

        /**
         * An Async wrapper for GetConferencePreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConferencePreferenceAsync(const Model::GetConferencePreferenceRequest& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a specific conference provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConferenceProviderOutcome GetConferenceProvider(const Model::GetConferenceProviderRequest& request) const;

        /**
         * A Callable wrapper for GetConferenceProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConferenceProviderOutcomeCallable GetConferenceProviderCallable(const Model::GetConferenceProviderRequest& request) const;

        /**
         * An Async wrapper for GetConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConferenceProviderAsync(const Model::GetConferenceProviderRequest& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * A Callable wrapper for GetContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactOutcomeCallable GetContactCallable(const Model::GetContactRequest& request) const;

        /**
         * An Async wrapper for GetContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAsync(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a device by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayOutcome GetGateway(const Model::GetGatewayRequest& request) const;

        /**
         * A Callable wrapper for GetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGatewayOutcomeCallable GetGatewayCallable(const Model::GetGatewayRequest& request) const;

        /**
         * An Async wrapper for GetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGatewayAsync(const Model::GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayGroupOutcome GetGatewayGroup(const Model::GetGatewayGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGatewayGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGatewayGroupOutcomeCallable GetGatewayGroupCallable(const Model::GetGatewayGroupRequest& request) const;

        /**
         * An Async wrapper for GetGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGatewayGroupAsync(const Model::GetGatewayGroupRequest& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configured values for the user enrollment invitation email
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetInvitationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationConfigurationOutcome GetInvitationConfiguration(const Model::GetInvitationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetInvitationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationConfigurationOutcomeCallable GetInvitationConfigurationCallable(const Model::GetInvitationConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetInvitationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationConfigurationAsync(const Model::GetInvitationConfigurationRequest& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the network profile details by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkProfileOutcome GetNetworkProfile(const Model::GetNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkProfileOutcomeCallable GetNetworkProfileCallable(const Model::GetNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for GetNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkProfileAsync(const Model::GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a room profile by profile ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProfileOutcomeCallable GetProfileCallable(const Model::GetProfileRequest& request) const;

        /**
         * An Async wrapper for GetProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProfileAsync(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;

        /**
         * A Callable wrapper for GetRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoomOutcomeCallable GetRoomCallable(const Model::GetRoomRequest& request) const;

        /**
         * An Async wrapper for GetRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomAsync(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets room skill parameter details by room, skill, and parameter key
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoomSkillParameterOutcome GetRoomSkillParameter(const Model::GetRoomSkillParameterRequest& request) const;

        /**
         * A Callable wrapper for GetRoomSkillParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoomSkillParameterOutcomeCallable GetRoomSkillParameterCallable(const Model::GetRoomSkillParameterRequest& request) const;

        /**
         * An Async wrapper for GetRoomSkillParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomSkillParameterAsync(const Model::GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSkillGroupOutcome GetSkillGroup(const Model::GetSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for GetSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSkillGroupOutcomeCallable GetSkillGroupCallable(const Model::GetSkillGroupRequest& request) const;

        /**
         * An Async wrapper for GetSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSkillGroupAsync(const Model::GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListBusinessReportSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBusinessReportSchedulesOutcomeCallable ListBusinessReportSchedulesCallable(const Model::ListBusinessReportSchedulesRequest& request) const;

        /**
         * An Async wrapper for ListBusinessReportSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBusinessReportSchedulesAsync(const Model::ListBusinessReportSchedulesRequest& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists conference providers under a specific AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListConferenceProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConferenceProvidersOutcome ListConferenceProviders(const Model::ListConferenceProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListConferenceProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConferenceProvidersOutcomeCallable ListConferenceProvidersCallable(const Model::ListConferenceProvidersRequest& request) const;

        /**
         * An Async wrapper for ListConferenceProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConferenceProvidersAsync(const Model::ListConferenceProvidersRequest& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the device event history, including device connection status, for up to
         * 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListDeviceEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceEventsOutcome ListDeviceEvents(const Model::ListDeviceEventsRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceEventsOutcomeCallable ListDeviceEventsCallable(const Model::ListDeviceEventsRequest& request) const;

        /**
         * An Async wrapper for ListDeviceEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceEventsAsync(const Model::ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of gateway group summaries. Use GetGatewayGroup to retrieve
         * details of a specific gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListGatewayGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayGroupsOutcome ListGatewayGroups(const Model::ListGatewayGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGatewayGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewayGroupsOutcomeCallable ListGatewayGroupsCallable(const Model::ListGatewayGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGatewayGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewayGroupsAsync(const Model::ListGatewayGroupsRequest& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request) const;

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all enabled skills in a specific skill group.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkills">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsOutcome ListSkills(const Model::ListSkillsRequest& request) const;

        /**
         * A Callable wrapper for ListSkills that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSkillsOutcomeCallable ListSkillsCallable(const Model::ListSkillsRequest& request) const;

        /**
         * An Async wrapper for ListSkills that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSkillsAsync(const Model::ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all categories in the Alexa skill store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsStoreCategoriesOutcome ListSkillsStoreCategories(const Model::ListSkillsStoreCategoriesRequest& request) const;

        /**
         * A Callable wrapper for ListSkillsStoreCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSkillsStoreCategoriesOutcomeCallable ListSkillsStoreCategoriesCallable(const Model::ListSkillsStoreCategoriesRequest& request) const;

        /**
         * An Async wrapper for ListSkillsStoreCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSkillsStoreCategoriesAsync(const Model::ListSkillsStoreCategoriesRequest& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all skills in the Alexa skill store by category.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreSkillsByCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsStoreSkillsByCategoryOutcome ListSkillsStoreSkillsByCategory(const Model::ListSkillsStoreSkillsByCategoryRequest& request) const;

        /**
         * A Callable wrapper for ListSkillsStoreSkillsByCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSkillsStoreSkillsByCategoryOutcomeCallable ListSkillsStoreSkillsByCategoryCallable(const Model::ListSkillsStoreSkillsByCategoryRequest& request) const;

        /**
         * An Async wrapper for ListSkillsStoreSkillsByCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSkillsStoreSkillsByCategoryAsync(const Model::ListSkillsStoreSkillsByCategoryRequest& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the smart home appliances associated with a room.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSmartHomeAppliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSmartHomeAppliancesOutcome ListSmartHomeAppliances(const Model::ListSmartHomeAppliancesRequest& request) const;

        /**
         * A Callable wrapper for ListSmartHomeAppliances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSmartHomeAppliancesOutcomeCallable ListSmartHomeAppliancesCallable(const Model::ListSmartHomeAppliancesRequest& request) const;

        /**
         * An Async wrapper for ListSmartHomeAppliances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSmartHomeAppliancesAsync(const Model::ListSmartHomeAppliancesRequest& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the conference preferences on a specific conference provider at the
         * account level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutConferencePreference">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConferencePreferenceOutcome PutConferencePreference(const Model::PutConferencePreferenceRequest& request) const;

        /**
         * A Callable wrapper for PutConferencePreference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConferencePreferenceOutcomeCallable PutConferencePreferenceCallable(const Model::PutConferencePreferenceRequest& request) const;

        /**
         * An Async wrapper for PutConferencePreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConferencePreferenceAsync(const Model::PutConferencePreferenceRequest& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures the email template for the user enrollment invitation with the
         * specified attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutInvitationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInvitationConfigurationOutcome PutInvitationConfiguration(const Model::PutInvitationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutInvitationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInvitationConfigurationOutcomeCallable PutInvitationConfigurationCallable(const Model::PutInvitationConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutInvitationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInvitationConfigurationAsync(const Model::PutInvitationConfigurationRequest& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates room skill parameter details by room, skill, and parameter key ID.
         * Not all skills have a room skill parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PutRoomSkillParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRoomSkillParameterOutcome PutRoomSkillParameter(const Model::PutRoomSkillParameterRequest& request) const;

        /**
         * A Callable wrapper for PutRoomSkillParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRoomSkillParameterOutcomeCallable PutRoomSkillParameterCallable(const Model::PutRoomSkillParameterRequest& request) const;

        /**
         * An Async wrapper for PutRoomSkillParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRoomSkillParameterAsync(const Model::PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for PutSkillAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSkillAuthorizationOutcomeCallable PutSkillAuthorizationCallable(const Model::PutSkillAuthorizationRequest& request) const;

        /**
         * An Async wrapper for PutSkillAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSkillAuthorizationAsync(const Model::PutSkillAuthorizationRequest& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Alexa-enabled device built by an Original Equipment Manufacturer
         * (OEM) using Alexa Voice Service (AVS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RegisterAVSDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAVSDeviceOutcome RegisterAVSDevice(const Model::RegisterAVSDeviceRequest& request) const;

        /**
         * A Callable wrapper for RegisterAVSDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterAVSDeviceOutcomeCallable RegisterAVSDeviceCallable(const Model::RegisterAVSDeviceRequest& request) const;

        /**
         * An Async wrapper for RegisterAVSDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterAVSDeviceAsync(const Model::RegisterAVSDeviceRequest& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for RejectSkill that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectSkillOutcomeCallable RejectSkillCallable(const Model::RejectSkillRequest& request) const;

        /**
         * An Async wrapper for RejectSkill that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectSkillAsync(const Model::RejectSkillRequest& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ResolveRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveRoomOutcomeCallable ResolveRoomCallable(const Model::ResolveRoomRequest& request) const;

        /**
         * An Async wrapper for ResolveRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveRoomAsync(const Model::ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes an invitation and invalidates the enrollment URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/RevokeInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeInvitationOutcome RevokeInvitation(const Model::RevokeInvitationRequest& request) const;

        /**
         * A Callable wrapper for RevokeInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeInvitationOutcomeCallable RevokeInvitationCallable(const Model::RevokeInvitationRequest& request) const;

        /**
         * An Async wrapper for RevokeInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeInvitationAsync(const Model::RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches address books and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchAddressBooks">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAddressBooksOutcome SearchAddressBooks(const Model::SearchAddressBooksRequest& request) const;

        /**
         * A Callable wrapper for SearchAddressBooks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchAddressBooksOutcomeCallable SearchAddressBooksCallable(const Model::SearchAddressBooksRequest& request) const;

        /**
         * An Async wrapper for SearchAddressBooks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAddressBooksAsync(const Model::SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches contacts and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchContactsOutcome SearchContacts(const Model::SearchContactsRequest& request) const;

        /**
         * A Callable wrapper for SearchContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchContactsOutcomeCallable SearchContactsCallable(const Model::SearchContactsRequest& request) const;

        /**
         * An Async wrapper for SearchContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchContactsAsync(const Model::SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches devices and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDevicesOutcome SearchDevices(const Model::SearchDevicesRequest& request) const;

        /**
         * A Callable wrapper for SearchDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchDevicesOutcomeCallable SearchDevicesCallable(const Model::SearchDevicesRequest& request) const;

        /**
         * An Async wrapper for SearchDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchDevicesAsync(const Model::SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches network profiles and lists the ones that meet a set of filter and
         * sort criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchNetworkProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchNetworkProfilesOutcome SearchNetworkProfiles(const Model::SearchNetworkProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchNetworkProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchNetworkProfilesOutcomeCallable SearchNetworkProfilesCallable(const Model::SearchNetworkProfilesRequest& request) const;

        /**
         * An Async wrapper for SearchNetworkProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchNetworkProfilesAsync(const Model::SearchNetworkProfilesRequest& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches room profiles and lists the ones that meet a set of filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProfilesOutcome SearchProfiles(const Model::SearchProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProfilesOutcomeCallable SearchProfilesCallable(const Model::SearchProfilesRequest& request) const;

        /**
         * An Async wrapper for SearchProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProfilesAsync(const Model::SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches rooms and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchRooms">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRoomsOutcome SearchRooms(const Model::SearchRoomsRequest& request) const;

        /**
         * A Callable wrapper for SearchRooms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchRoomsOutcomeCallable SearchRoomsCallable(const Model::SearchRoomsRequest& request) const;

        /**
         * An Async wrapper for SearchRooms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchRoomsAsync(const Model::SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches skill groups and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchSkillGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSkillGroupsOutcome SearchSkillGroups(const Model::SearchSkillGroupsRequest& request) const;

        /**
         * A Callable wrapper for SearchSkillGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSkillGroupsOutcomeCallable SearchSkillGroupsCallable(const Model::SearchSkillGroupsRequest& request) const;

        /**
         * An Async wrapper for SearchSkillGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSkillGroupsAsync(const Model::SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches users and lists the ones that meet a set of filter and sort
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;

        /**
         * A Callable wrapper for SearchUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchUsersOutcomeCallable SearchUsersCallable(const Model::SearchUsersRequest& request) const;

        /**
         * An Async wrapper for SearchUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchUsersAsync(const Model::SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Triggers an asynchronous flow to send text, SSML, or audio announcements to
         * rooms that are identified by a search or filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAnnouncementOutcome SendAnnouncement(const Model::SendAnnouncementRequest& request) const;

        /**
         * A Callable wrapper for SendAnnouncement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendAnnouncementOutcomeCallable SendAnnouncementCallable(const Model::SendAnnouncementRequest& request) const;

        /**
         * An Async wrapper for SendAnnouncement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendAnnouncementAsync(const Model::SendAnnouncementRequest& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an enrollment invitation email with a URL to a user. The URL is valid
         * for 30 days or until you call this operation again, whichever comes first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::SendInvitationOutcome SendInvitation(const Model::SendInvitationRequest& request) const;

        /**
         * A Callable wrapper for SendInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendInvitationOutcomeCallable SendInvitationCallable(const Model::SendInvitationRequest& request) const;

        /**
         * An Async wrapper for SendInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendInvitationAsync(const Model::SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for StartDeviceSync that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeviceSyncOutcomeCallable StartDeviceSyncCallable(const Model::StartDeviceSyncRequest& request) const;

        /**
         * An Async wrapper for StartDeviceSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeviceSyncAsync(const Model::StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the discovery of any smart home appliances associated with the
         * room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/StartSmartHomeApplianceDiscovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSmartHomeApplianceDiscoveryOutcome StartSmartHomeApplianceDiscovery(const Model::StartSmartHomeApplianceDiscoveryRequest& request) const;

        /**
         * A Callable wrapper for StartSmartHomeApplianceDiscovery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSmartHomeApplianceDiscoveryOutcomeCallable StartSmartHomeApplianceDiscoveryCallable(const Model::StartSmartHomeApplianceDiscoveryRequest& request) const;

        /**
         * An Async wrapper for StartSmartHomeApplianceDiscovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSmartHomeApplianceDiscoveryAsync(const Model::StartSmartHomeApplianceDiscoveryRequest& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds metadata tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates address book details by the address book ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAddressBookOutcome UpdateAddressBook(const Model::UpdateAddressBookRequest& request) const;

        /**
         * A Callable wrapper for UpdateAddressBook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAddressBookOutcomeCallable UpdateAddressBookCallable(const Model::UpdateAddressBookRequest& request) const;

        /**
         * An Async wrapper for UpdateAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAddressBookAsync(const Model::UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of the report delivery schedule with the specified
         * schedule ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateBusinessReportSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBusinessReportScheduleOutcome UpdateBusinessReportSchedule(const Model::UpdateBusinessReportScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateBusinessReportSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBusinessReportScheduleOutcomeCallable UpdateBusinessReportScheduleCallable(const Model::UpdateBusinessReportScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateBusinessReportSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBusinessReportScheduleAsync(const Model::UpdateBusinessReportScheduleRequest& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing conference provider's settings.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConferenceProviderOutcome UpdateConferenceProvider(const Model::UpdateConferenceProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateConferenceProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConferenceProviderOutcomeCallable UpdateConferenceProviderCallable(const Model::UpdateConferenceProviderRequest& request) const;

        /**
         * An Async wrapper for UpdateConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConferenceProviderAsync(const Model::UpdateConferenceProviderRequest& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactOutcomeCallable UpdateContactCallable(const Model::UpdateContactRequest& request) const;

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAsync(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device name by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceOutcomeCallable UpdateDeviceCallable(const Model::UpdateDeviceRequest& request) const;

        /**
         * An Async wrapper for UpdateDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details of a gateway. If any optional field is not provided, the
         * existing corresponding value is left unmodified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;

        /**
         * A Callable wrapper for UpdateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const Model::UpdateGatewayRequest& request) const;

        /**
         * An Async wrapper for UpdateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayAsync(const Model::UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details of a gateway group. If any optional field is not
         * provided, the existing corresponding value is left unmodified.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayGroupOutcome UpdateGatewayGroup(const Model::UpdateGatewayGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayGroupOutcomeCallable UpdateGatewayGroupCallable(const Model::UpdateGatewayGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayGroupAsync(const Model::UpdateGatewayGroupRequest& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a network profile by the network profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkProfileOutcome UpdateNetworkProfile(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkProfileOutcomeCallable UpdateNetworkProfileCallable(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkProfileAsync(const Model::UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing room profile by room profile ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const Model::UpdateProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProfileAsync(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const Model::UpdateRoomRequest& request) const;

        /**
         * An Async wrapper for UpdateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomAsync(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSkillGroupOutcome UpdateSkillGroup(const Model::UpdateSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSkillGroupOutcomeCallable UpdateSkillGroupCallable(const Model::UpdateSkillGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSkillGroupAsync(const Model::UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AlexaForBusinessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AlexaForBusinessClient>;
      void init(const AlexaForBusinessClientConfiguration& clientConfiguration);

      AlexaForBusinessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AlexaForBusinessEndpointProviderBase> m_endpointProvider;
  };

} // namespace AlexaForBusiness
} // namespace Aws
