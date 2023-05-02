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

      typedef AlexaForBusinessClientConfiguration ClientConfigurationType;
      typedef AlexaForBusinessEndpointProvider EndpointProviderType;

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
        template<typename ApproveSkillRequestT = Model::ApproveSkillRequest>
        Model::ApproveSkillOutcomeCallable ApproveSkillCallable(const ApproveSkillRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ApproveSkill, request);
        }

        /**
         * An Async wrapper for ApproveSkill that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApproveSkillRequestT = Model::ApproveSkillRequest>
        void ApproveSkillAsync(const ApproveSkillRequestT& request, const ApproveSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ApproveSkill, request, handler, context);
        }

        /**
         * <p>Associates a contact with a given address book.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateContactWithAddressBook">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateContactWithAddressBookOutcome AssociateContactWithAddressBook(const Model::AssociateContactWithAddressBookRequest& request) const;

        /**
         * A Callable wrapper for AssociateContactWithAddressBook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateContactWithAddressBookRequestT = Model::AssociateContactWithAddressBookRequest>
        Model::AssociateContactWithAddressBookOutcomeCallable AssociateContactWithAddressBookCallable(const AssociateContactWithAddressBookRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::AssociateContactWithAddressBook, request);
        }

        /**
         * An Async wrapper for AssociateContactWithAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateContactWithAddressBookRequestT = Model::AssociateContactWithAddressBookRequest>
        void AssociateContactWithAddressBookAsync(const AssociateContactWithAddressBookRequestT& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::AssociateContactWithAddressBook, request, handler, context);
        }

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
        template<typename AssociateDeviceWithNetworkProfileRequestT = Model::AssociateDeviceWithNetworkProfileRequest>
        Model::AssociateDeviceWithNetworkProfileOutcomeCallable AssociateDeviceWithNetworkProfileCallable(const AssociateDeviceWithNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::AssociateDeviceWithNetworkProfile, request);
        }

        /**
         * An Async wrapper for AssociateDeviceWithNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDeviceWithNetworkProfileRequestT = Model::AssociateDeviceWithNetworkProfileRequest>
        void AssociateDeviceWithNetworkProfileAsync(const AssociateDeviceWithNetworkProfileRequestT& request, const AssociateDeviceWithNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::AssociateDeviceWithNetworkProfile, request, handler, context);
        }

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
        template<typename AssociateDeviceWithRoomRequestT = Model::AssociateDeviceWithRoomRequest>
        Model::AssociateDeviceWithRoomOutcomeCallable AssociateDeviceWithRoomCallable(const AssociateDeviceWithRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::AssociateDeviceWithRoom, request);
        }

        /**
         * An Async wrapper for AssociateDeviceWithRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDeviceWithRoomRequestT = Model::AssociateDeviceWithRoomRequest>
        void AssociateDeviceWithRoomAsync(const AssociateDeviceWithRoomRequestT& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::AssociateDeviceWithRoom, request, handler, context);
        }

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
        template<typename AssociateSkillGroupWithRoomRequestT = Model::AssociateSkillGroupWithRoomRequest>
        Model::AssociateSkillGroupWithRoomOutcomeCallable AssociateSkillGroupWithRoomCallable(const AssociateSkillGroupWithRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::AssociateSkillGroupWithRoom, request);
        }

        /**
         * An Async wrapper for AssociateSkillGroupWithRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSkillGroupWithRoomRequestT = Model::AssociateSkillGroupWithRoomRequest>
        void AssociateSkillGroupWithRoomAsync(const AssociateSkillGroupWithRoomRequestT& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::AssociateSkillGroupWithRoom, request, handler, context);
        }

        /**
         * <p>Associates a skill with a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/AssociateSkillWithSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSkillWithSkillGroupOutcome AssociateSkillWithSkillGroup(const Model::AssociateSkillWithSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateSkillWithSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateSkillWithSkillGroupRequestT = Model::AssociateSkillWithSkillGroupRequest>
        Model::AssociateSkillWithSkillGroupOutcomeCallable AssociateSkillWithSkillGroupCallable(const AssociateSkillWithSkillGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::AssociateSkillWithSkillGroup, request);
        }

        /**
         * An Async wrapper for AssociateSkillWithSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSkillWithSkillGroupRequestT = Model::AssociateSkillWithSkillGroupRequest>
        void AssociateSkillWithSkillGroupAsync(const AssociateSkillWithSkillGroupRequestT& request, const AssociateSkillWithSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::AssociateSkillWithSkillGroup, request, handler, context);
        }

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
        template<typename AssociateSkillWithUsersRequestT = Model::AssociateSkillWithUsersRequest>
        Model::AssociateSkillWithUsersOutcomeCallable AssociateSkillWithUsersCallable(const AssociateSkillWithUsersRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::AssociateSkillWithUsers, request);
        }

        /**
         * An Async wrapper for AssociateSkillWithUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSkillWithUsersRequestT = Model::AssociateSkillWithUsersRequest>
        void AssociateSkillWithUsersAsync(const AssociateSkillWithUsersRequestT& request, const AssociateSkillWithUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::AssociateSkillWithUsers, request, handler, context);
        }

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
        template<typename CreateAddressBookRequestT = Model::CreateAddressBookRequest>
        Model::CreateAddressBookOutcomeCallable CreateAddressBookCallable(const CreateAddressBookRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateAddressBook, request);
        }

        /**
         * An Async wrapper for CreateAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAddressBookRequestT = Model::CreateAddressBookRequest>
        void CreateAddressBookAsync(const CreateAddressBookRequestT& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateAddressBook, request, handler, context);
        }

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
        template<typename CreateBusinessReportScheduleRequestT = Model::CreateBusinessReportScheduleRequest>
        Model::CreateBusinessReportScheduleOutcomeCallable CreateBusinessReportScheduleCallable(const CreateBusinessReportScheduleRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateBusinessReportSchedule, request);
        }

        /**
         * An Async wrapper for CreateBusinessReportSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBusinessReportScheduleRequestT = Model::CreateBusinessReportScheduleRequest>
        void CreateBusinessReportScheduleAsync(const CreateBusinessReportScheduleRequestT& request, const CreateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateBusinessReportSchedule, request, handler, context);
        }

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
        template<typename CreateConferenceProviderRequestT = Model::CreateConferenceProviderRequest>
        Model::CreateConferenceProviderOutcomeCallable CreateConferenceProviderCallable(const CreateConferenceProviderRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateConferenceProvider, request);
        }

        /**
         * An Async wrapper for CreateConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConferenceProviderRequestT = Model::CreateConferenceProviderRequest>
        void CreateConferenceProviderAsync(const CreateConferenceProviderRequestT& request, const CreateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateConferenceProvider, request, handler, context);
        }

        /**
         * <p>Creates a contact with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * A Callable wrapper for CreateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactRequestT = Model::CreateContactRequest>
        Model::CreateContactOutcomeCallable CreateContactCallable(const CreateContactRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateContact, request);
        }

        /**
         * An Async wrapper for CreateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactRequestT = Model::CreateContactRequest>
        void CreateContactAsync(const CreateContactRequestT& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateContact, request, handler, context);
        }

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
        template<typename CreateGatewayGroupRequestT = Model::CreateGatewayGroupRequest>
        Model::CreateGatewayGroupOutcomeCallable CreateGatewayGroupCallable(const CreateGatewayGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateGatewayGroup, request);
        }

        /**
         * An Async wrapper for CreateGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGatewayGroupRequestT = Model::CreateGatewayGroupRequest>
        void CreateGatewayGroupAsync(const CreateGatewayGroupRequestT& request, const CreateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateGatewayGroup, request, handler, context);
        }

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
        template<typename CreateNetworkProfileRequestT = Model::CreateNetworkProfileRequest>
        Model::CreateNetworkProfileOutcomeCallable CreateNetworkProfileCallable(const CreateNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateNetworkProfile, request);
        }

        /**
         * An Async wrapper for CreateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNetworkProfileRequestT = Model::CreateNetworkProfileRequest>
        void CreateNetworkProfileAsync(const CreateNetworkProfileRequestT& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateNetworkProfile, request, handler, context);
        }

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
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        Model::CreateProfileOutcomeCallable CreateProfileCallable(const CreateProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateProfile, request);
        }

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        void CreateProfileAsync(const CreateProfileRequestT& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateProfile, request, handler, context);
        }

        /**
         * <p>Creates a room with the specified details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;

        /**
         * A Callable wrapper for CreateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRoomRequestT = Model::CreateRoomRequest>
        Model::CreateRoomOutcomeCallable CreateRoomCallable(const CreateRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateRoom, request);
        }

        /**
         * An Async wrapper for CreateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRoomRequestT = Model::CreateRoomRequest>
        void CreateRoomAsync(const CreateRoomRequestT& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateRoom, request, handler, context);
        }

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
        template<typename CreateSkillGroupRequestT = Model::CreateSkillGroupRequest>
        Model::CreateSkillGroupOutcomeCallable CreateSkillGroupCallable(const CreateSkillGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateSkillGroup, request);
        }

        /**
         * An Async wrapper for CreateSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSkillGroupRequestT = Model::CreateSkillGroupRequest>
        void CreateSkillGroupAsync(const CreateSkillGroupRequestT& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateSkillGroup, request, handler, context);
        }

        /**
         * <p>Creates a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::CreateUser, request, handler, context);
        }

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
        template<typename DeleteAddressBookRequestT = Model::DeleteAddressBookRequest>
        Model::DeleteAddressBookOutcomeCallable DeleteAddressBookCallable(const DeleteAddressBookRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteAddressBook, request);
        }

        /**
         * An Async wrapper for DeleteAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAddressBookRequestT = Model::DeleteAddressBookRequest>
        void DeleteAddressBookAsync(const DeleteAddressBookRequestT& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteAddressBook, request, handler, context);
        }

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
        template<typename DeleteBusinessReportScheduleRequestT = Model::DeleteBusinessReportScheduleRequest>
        Model::DeleteBusinessReportScheduleOutcomeCallable DeleteBusinessReportScheduleCallable(const DeleteBusinessReportScheduleRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteBusinessReportSchedule, request);
        }

        /**
         * An Async wrapper for DeleteBusinessReportSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBusinessReportScheduleRequestT = Model::DeleteBusinessReportScheduleRequest>
        void DeleteBusinessReportScheduleAsync(const DeleteBusinessReportScheduleRequestT& request, const DeleteBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteBusinessReportSchedule, request, handler, context);
        }

        /**
         * <p>Deletes a conference provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteConferenceProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConferenceProviderOutcome DeleteConferenceProvider(const Model::DeleteConferenceProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteConferenceProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConferenceProviderRequestT = Model::DeleteConferenceProviderRequest>
        Model::DeleteConferenceProviderOutcomeCallable DeleteConferenceProviderCallable(const DeleteConferenceProviderRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteConferenceProvider, request);
        }

        /**
         * An Async wrapper for DeleteConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConferenceProviderRequestT = Model::DeleteConferenceProviderRequest>
        void DeleteConferenceProviderAsync(const DeleteConferenceProviderRequestT& request, const DeleteConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteConferenceProvider, request, handler, context);
        }

        /**
         * <p>Deletes a contact by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactRequestT = Model::DeleteContactRequest>
        Model::DeleteContactOutcomeCallable DeleteContactCallable(const DeleteContactRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteContact, request);
        }

        /**
         * An Async wrapper for DeleteContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactRequestT = Model::DeleteContactRequest>
        void DeleteContactAsync(const DeleteContactRequestT& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteContact, request, handler, context);
        }

        /**
         * <p>Removes a device from Alexa For Business.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const DeleteDeviceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteDevice, request);
        }

        /**
         * An Async wrapper for DeleteDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        void DeleteDeviceAsync(const DeleteDeviceRequestT& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteDevice, request, handler, context);
        }

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
        template<typename DeleteDeviceUsageDataRequestT = Model::DeleteDeviceUsageDataRequest>
        Model::DeleteDeviceUsageDataOutcomeCallable DeleteDeviceUsageDataCallable(const DeleteDeviceUsageDataRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteDeviceUsageData, request);
        }

        /**
         * An Async wrapper for DeleteDeviceUsageData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceUsageDataRequestT = Model::DeleteDeviceUsageDataRequest>
        void DeleteDeviceUsageDataAsync(const DeleteDeviceUsageDataRequestT& request, const DeleteDeviceUsageDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteDeviceUsageData, request, handler, context);
        }

        /**
         * <p>Deletes a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayGroupOutcome DeleteGatewayGroup(const Model::DeleteGatewayGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGatewayGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGatewayGroupRequestT = Model::DeleteGatewayGroupRequest>
        Model::DeleteGatewayGroupOutcomeCallable DeleteGatewayGroupCallable(const DeleteGatewayGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteGatewayGroup, request);
        }

        /**
         * An Async wrapper for DeleteGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGatewayGroupRequestT = Model::DeleteGatewayGroupRequest>
        void DeleteGatewayGroupAsync(const DeleteGatewayGroupRequestT& request, const DeleteGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteGatewayGroup, request, handler, context);
        }

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
        template<typename DeleteNetworkProfileRequestT = Model::DeleteNetworkProfileRequest>
        Model::DeleteNetworkProfileOutcomeCallable DeleteNetworkProfileCallable(const DeleteNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteNetworkProfile, request);
        }

        /**
         * An Async wrapper for DeleteNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkProfileRequestT = Model::DeleteNetworkProfileRequest>
        void DeleteNetworkProfileAsync(const DeleteNetworkProfileRequestT& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteNetworkProfile, request, handler, context);
        }

        /**
         * <p>Deletes a room profile by the profile ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const DeleteProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteProfile, request);
        }

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        void DeleteProfileAsync(const DeleteProfileRequestT& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteProfile, request, handler, context);
        }

        /**
         * <p>Deletes a room by the room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRoomRequestT = Model::DeleteRoomRequest>
        Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const DeleteRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteRoom, request);
        }

        /**
         * An Async wrapper for DeleteRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoomRequestT = Model::DeleteRoomRequest>
        void DeleteRoomAsync(const DeleteRoomRequestT& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteRoom, request, handler, context);
        }

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
        template<typename DeleteRoomSkillParameterRequestT = Model::DeleteRoomSkillParameterRequest>
        Model::DeleteRoomSkillParameterOutcomeCallable DeleteRoomSkillParameterCallable(const DeleteRoomSkillParameterRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteRoomSkillParameter, request);
        }

        /**
         * An Async wrapper for DeleteRoomSkillParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoomSkillParameterRequestT = Model::DeleteRoomSkillParameterRequest>
        void DeleteRoomSkillParameterAsync(const DeleteRoomSkillParameterRequestT& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteRoomSkillParameter, request, handler, context);
        }

        /**
         * <p>Unlinks a third-party account from a skill.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillAuthorizationOutcome DeleteSkillAuthorization(const Model::DeleteSkillAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSkillAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSkillAuthorizationRequestT = Model::DeleteSkillAuthorizationRequest>
        Model::DeleteSkillAuthorizationOutcomeCallable DeleteSkillAuthorizationCallable(const DeleteSkillAuthorizationRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteSkillAuthorization, request);
        }

        /**
         * An Async wrapper for DeleteSkillAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSkillAuthorizationRequestT = Model::DeleteSkillAuthorizationRequest>
        void DeleteSkillAuthorizationAsync(const DeleteSkillAuthorizationRequestT& request, const DeleteSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteSkillAuthorization, request, handler, context);
        }

        /**
         * <p>Deletes a skill group by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeleteSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSkillGroupOutcome DeleteSkillGroup(const Model::DeleteSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSkillGroupRequestT = Model::DeleteSkillGroupRequest>
        Model::DeleteSkillGroupOutcomeCallable DeleteSkillGroupCallable(const DeleteSkillGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteSkillGroup, request);
        }

        /**
         * An Async wrapper for DeleteSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSkillGroupRequestT = Model::DeleteSkillGroupRequest>
        void DeleteSkillGroupAsync(const DeleteSkillGroupRequestT& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteSkillGroup, request, handler, context);
        }

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
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DeleteUser, request, handler, context);
        }

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
        template<typename DisassociateContactFromAddressBookRequestT = Model::DisassociateContactFromAddressBookRequest>
        Model::DisassociateContactFromAddressBookOutcomeCallable DisassociateContactFromAddressBookCallable(const DisassociateContactFromAddressBookRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DisassociateContactFromAddressBook, request);
        }

        /**
         * An Async wrapper for DisassociateContactFromAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateContactFromAddressBookRequestT = Model::DisassociateContactFromAddressBookRequest>
        void DisassociateContactFromAddressBookAsync(const DisassociateContactFromAddressBookRequestT& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DisassociateContactFromAddressBook, request, handler, context);
        }

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
        template<typename DisassociateDeviceFromRoomRequestT = Model::DisassociateDeviceFromRoomRequest>
        Model::DisassociateDeviceFromRoomOutcomeCallable DisassociateDeviceFromRoomCallable(const DisassociateDeviceFromRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DisassociateDeviceFromRoom, request);
        }

        /**
         * An Async wrapper for DisassociateDeviceFromRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateDeviceFromRoomRequestT = Model::DisassociateDeviceFromRoomRequest>
        void DisassociateDeviceFromRoomAsync(const DisassociateDeviceFromRoomRequestT& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DisassociateDeviceFromRoom, request, handler, context);
        }

        /**
         * <p>Disassociates a skill from a skill group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DisassociateSkillFromSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSkillFromSkillGroupOutcome DisassociateSkillFromSkillGroup(const Model::DisassociateSkillFromSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSkillFromSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateSkillFromSkillGroupRequestT = Model::DisassociateSkillFromSkillGroupRequest>
        Model::DisassociateSkillFromSkillGroupOutcomeCallable DisassociateSkillFromSkillGroupCallable(const DisassociateSkillFromSkillGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DisassociateSkillFromSkillGroup, request);
        }

        /**
         * An Async wrapper for DisassociateSkillFromSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateSkillFromSkillGroupRequestT = Model::DisassociateSkillFromSkillGroupRequest>
        void DisassociateSkillFromSkillGroupAsync(const DisassociateSkillFromSkillGroupRequestT& request, const DisassociateSkillFromSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DisassociateSkillFromSkillGroup, request, handler, context);
        }

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
        template<typename DisassociateSkillFromUsersRequestT = Model::DisassociateSkillFromUsersRequest>
        Model::DisassociateSkillFromUsersOutcomeCallable DisassociateSkillFromUsersCallable(const DisassociateSkillFromUsersRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DisassociateSkillFromUsers, request);
        }

        /**
         * An Async wrapper for DisassociateSkillFromUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateSkillFromUsersRequestT = Model::DisassociateSkillFromUsersRequest>
        void DisassociateSkillFromUsersAsync(const DisassociateSkillFromUsersRequestT& request, const DisassociateSkillFromUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DisassociateSkillFromUsers, request, handler, context);
        }

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
        template<typename DisassociateSkillGroupFromRoomRequestT = Model::DisassociateSkillGroupFromRoomRequest>
        Model::DisassociateSkillGroupFromRoomOutcomeCallable DisassociateSkillGroupFromRoomCallable(const DisassociateSkillGroupFromRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::DisassociateSkillGroupFromRoom, request);
        }

        /**
         * An Async wrapper for DisassociateSkillGroupFromRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateSkillGroupFromRoomRequestT = Model::DisassociateSkillGroupFromRoomRequest>
        void DisassociateSkillGroupFromRoomAsync(const DisassociateSkillGroupFromRoomRequestT& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::DisassociateSkillGroupFromRoom, request, handler, context);
        }

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
        template<typename ForgetSmartHomeAppliancesRequestT = Model::ForgetSmartHomeAppliancesRequest>
        Model::ForgetSmartHomeAppliancesOutcomeCallable ForgetSmartHomeAppliancesCallable(const ForgetSmartHomeAppliancesRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ForgetSmartHomeAppliances, request);
        }

        /**
         * An Async wrapper for ForgetSmartHomeAppliances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ForgetSmartHomeAppliancesRequestT = Model::ForgetSmartHomeAppliancesRequest>
        void ForgetSmartHomeAppliancesAsync(const ForgetSmartHomeAppliancesRequestT& request, const ForgetSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ForgetSmartHomeAppliances, request, handler, context);
        }

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
        template<typename GetAddressBookRequestT = Model::GetAddressBookRequest>
        Model::GetAddressBookOutcomeCallable GetAddressBookCallable(const GetAddressBookRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetAddressBook, request);
        }

        /**
         * An Async wrapper for GetAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAddressBookRequestT = Model::GetAddressBookRequest>
        void GetAddressBookAsync(const GetAddressBookRequestT& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetAddressBook, request, handler, context);
        }

        /**
         * <p>Retrieves the existing conference preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetConferencePreference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConferencePreferenceOutcome GetConferencePreference(const Model::GetConferencePreferenceRequest& request) const;

        /**
         * A Callable wrapper for GetConferencePreference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConferencePreferenceRequestT = Model::GetConferencePreferenceRequest>
        Model::GetConferencePreferenceOutcomeCallable GetConferencePreferenceCallable(const GetConferencePreferenceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetConferencePreference, request);
        }

        /**
         * An Async wrapper for GetConferencePreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConferencePreferenceRequestT = Model::GetConferencePreferenceRequest>
        void GetConferencePreferenceAsync(const GetConferencePreferenceRequestT& request, const GetConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetConferencePreference, request, handler, context);
        }

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
        template<typename GetConferenceProviderRequestT = Model::GetConferenceProviderRequest>
        Model::GetConferenceProviderOutcomeCallable GetConferenceProviderCallable(const GetConferenceProviderRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetConferenceProvider, request);
        }

        /**
         * An Async wrapper for GetConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConferenceProviderRequestT = Model::GetConferenceProviderRequest>
        void GetConferenceProviderAsync(const GetConferenceProviderRequestT& request, const GetConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetConferenceProvider, request, handler, context);
        }

        /**
         * <p>Gets the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * A Callable wrapper for GetContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactRequestT = Model::GetContactRequest>
        Model::GetContactOutcomeCallable GetContactCallable(const GetContactRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetContact, request);
        }

        /**
         * An Async wrapper for GetContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactRequestT = Model::GetContactRequest>
        void GetContactAsync(const GetContactRequestT& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetContact, request, handler, context);
        }

        /**
         * <p>Gets the details of a device by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        Model::GetDeviceOutcomeCallable GetDeviceCallable(const GetDeviceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetDevice, request);
        }

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        void GetDeviceAsync(const GetDeviceRequestT& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetDevice, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayOutcome GetGateway(const Model::GetGatewayRequest& request) const;

        /**
         * A Callable wrapper for GetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGatewayRequestT = Model::GetGatewayRequest>
        Model::GetGatewayOutcomeCallable GetGatewayCallable(const GetGatewayRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetGateway, request);
        }

        /**
         * An Async wrapper for GetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGatewayRequestT = Model::GetGatewayRequest>
        void GetGatewayAsync(const GetGatewayRequestT& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetGateway, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a gateway group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetGatewayGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayGroupOutcome GetGatewayGroup(const Model::GetGatewayGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGatewayGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGatewayGroupRequestT = Model::GetGatewayGroupRequest>
        Model::GetGatewayGroupOutcomeCallable GetGatewayGroupCallable(const GetGatewayGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetGatewayGroup, request);
        }

        /**
         * An Async wrapper for GetGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGatewayGroupRequestT = Model::GetGatewayGroupRequest>
        void GetGatewayGroupAsync(const GetGatewayGroupRequestT& request, const GetGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetGatewayGroup, request, handler, context);
        }

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
        template<typename GetInvitationConfigurationRequestT = Model::GetInvitationConfigurationRequest>
        Model::GetInvitationConfigurationOutcomeCallable GetInvitationConfigurationCallable(const GetInvitationConfigurationRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetInvitationConfiguration, request);
        }

        /**
         * An Async wrapper for GetInvitationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvitationConfigurationRequestT = Model::GetInvitationConfigurationRequest>
        void GetInvitationConfigurationAsync(const GetInvitationConfigurationRequestT& request, const GetInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetInvitationConfiguration, request, handler, context);
        }

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
        template<typename GetNetworkProfileRequestT = Model::GetNetworkProfileRequest>
        Model::GetNetworkProfileOutcomeCallable GetNetworkProfileCallable(const GetNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetNetworkProfile, request);
        }

        /**
         * An Async wrapper for GetNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkProfileRequestT = Model::GetNetworkProfileRequest>
        void GetNetworkProfileAsync(const GetNetworkProfileRequestT& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetNetworkProfile, request, handler, context);
        }

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
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        Model::GetProfileOutcomeCallable GetProfileCallable(const GetProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetProfile, request);
        }

        /**
         * An Async wrapper for GetProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        void GetProfileAsync(const GetProfileRequestT& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetProfile, request, handler, context);
        }

        /**
         * <p>Gets room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;

        /**
         * A Callable wrapper for GetRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRoomRequestT = Model::GetRoomRequest>
        Model::GetRoomOutcomeCallable GetRoomCallable(const GetRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetRoom, request);
        }

        /**
         * An Async wrapper for GetRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRoomRequestT = Model::GetRoomRequest>
        void GetRoomAsync(const GetRoomRequestT& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetRoom, request, handler, context);
        }

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
        template<typename GetRoomSkillParameterRequestT = Model::GetRoomSkillParameterRequest>
        Model::GetRoomSkillParameterOutcomeCallable GetRoomSkillParameterCallable(const GetRoomSkillParameterRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetRoomSkillParameter, request);
        }

        /**
         * An Async wrapper for GetRoomSkillParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRoomSkillParameterRequestT = Model::GetRoomSkillParameterRequest>
        void GetRoomSkillParameterAsync(const GetRoomSkillParameterRequestT& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetRoomSkillParameter, request, handler, context);
        }

        /**
         * <p>Gets skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/GetSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSkillGroupOutcome GetSkillGroup(const Model::GetSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for GetSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSkillGroupRequestT = Model::GetSkillGroupRequest>
        Model::GetSkillGroupOutcomeCallable GetSkillGroupCallable(const GetSkillGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::GetSkillGroup, request);
        }

        /**
         * An Async wrapper for GetSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSkillGroupRequestT = Model::GetSkillGroupRequest>
        void GetSkillGroupAsync(const GetSkillGroupRequestT& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::GetSkillGroup, request, handler, context);
        }

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
        template<typename ListBusinessReportSchedulesRequestT = Model::ListBusinessReportSchedulesRequest>
        Model::ListBusinessReportSchedulesOutcomeCallable ListBusinessReportSchedulesCallable(const ListBusinessReportSchedulesRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListBusinessReportSchedules, request);
        }

        /**
         * An Async wrapper for ListBusinessReportSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBusinessReportSchedulesRequestT = Model::ListBusinessReportSchedulesRequest>
        void ListBusinessReportSchedulesAsync(const ListBusinessReportSchedulesRequestT& request, const ListBusinessReportSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListBusinessReportSchedules, request, handler, context);
        }

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
        template<typename ListConferenceProvidersRequestT = Model::ListConferenceProvidersRequest>
        Model::ListConferenceProvidersOutcomeCallable ListConferenceProvidersCallable(const ListConferenceProvidersRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListConferenceProviders, request);
        }

        /**
         * An Async wrapper for ListConferenceProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConferenceProvidersRequestT = Model::ListConferenceProvidersRequest>
        void ListConferenceProvidersAsync(const ListConferenceProvidersRequestT& request, const ListConferenceProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListConferenceProviders, request, handler, context);
        }

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
        template<typename ListDeviceEventsRequestT = Model::ListDeviceEventsRequest>
        Model::ListDeviceEventsOutcomeCallable ListDeviceEventsCallable(const ListDeviceEventsRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListDeviceEvents, request);
        }

        /**
         * An Async wrapper for ListDeviceEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceEventsRequestT = Model::ListDeviceEventsRequest>
        void ListDeviceEventsAsync(const ListDeviceEventsRequestT& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListDeviceEvents, request, handler, context);
        }

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
        template<typename ListGatewayGroupsRequestT = Model::ListGatewayGroupsRequest>
        Model::ListGatewayGroupsOutcomeCallable ListGatewayGroupsCallable(const ListGatewayGroupsRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListGatewayGroups, request);
        }

        /**
         * An Async wrapper for ListGatewayGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewayGroupsRequestT = Model::ListGatewayGroupsRequest>
        void ListGatewayGroupsAsync(const ListGatewayGroupsRequestT& request, const ListGatewayGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListGatewayGroups, request, handler, context);
        }

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
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const ListGatewaysRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListGateways, request);
        }

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        void ListGatewaysAsync(const ListGatewaysRequestT& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListGateways, request, handler, context);
        }

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
        template<typename ListSkillsRequestT = Model::ListSkillsRequest>
        Model::ListSkillsOutcomeCallable ListSkillsCallable(const ListSkillsRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListSkills, request);
        }

        /**
         * An Async wrapper for ListSkills that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSkillsRequestT = Model::ListSkillsRequest>
        void ListSkillsAsync(const ListSkillsRequestT& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListSkills, request, handler, context);
        }

        /**
         * <p>Lists all categories in the Alexa skill store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListSkillsStoreCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSkillsStoreCategoriesOutcome ListSkillsStoreCategories(const Model::ListSkillsStoreCategoriesRequest& request) const;

        /**
         * A Callable wrapper for ListSkillsStoreCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSkillsStoreCategoriesRequestT = Model::ListSkillsStoreCategoriesRequest>
        Model::ListSkillsStoreCategoriesOutcomeCallable ListSkillsStoreCategoriesCallable(const ListSkillsStoreCategoriesRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListSkillsStoreCategories, request);
        }

        /**
         * An Async wrapper for ListSkillsStoreCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSkillsStoreCategoriesRequestT = Model::ListSkillsStoreCategoriesRequest>
        void ListSkillsStoreCategoriesAsync(const ListSkillsStoreCategoriesRequestT& request, const ListSkillsStoreCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListSkillsStoreCategories, request, handler, context);
        }

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
        template<typename ListSkillsStoreSkillsByCategoryRequestT = Model::ListSkillsStoreSkillsByCategoryRequest>
        Model::ListSkillsStoreSkillsByCategoryOutcomeCallable ListSkillsStoreSkillsByCategoryCallable(const ListSkillsStoreSkillsByCategoryRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListSkillsStoreSkillsByCategory, request);
        }

        /**
         * An Async wrapper for ListSkillsStoreSkillsByCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSkillsStoreSkillsByCategoryRequestT = Model::ListSkillsStoreSkillsByCategoryRequest>
        void ListSkillsStoreSkillsByCategoryAsync(const ListSkillsStoreSkillsByCategoryRequestT& request, const ListSkillsStoreSkillsByCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListSkillsStoreSkillsByCategory, request, handler, context);
        }

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
        template<typename ListSmartHomeAppliancesRequestT = Model::ListSmartHomeAppliancesRequest>
        Model::ListSmartHomeAppliancesOutcomeCallable ListSmartHomeAppliancesCallable(const ListSmartHomeAppliancesRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListSmartHomeAppliances, request);
        }

        /**
         * An Async wrapper for ListSmartHomeAppliances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSmartHomeAppliancesRequestT = Model::ListSmartHomeAppliancesRequest>
        void ListSmartHomeAppliancesAsync(const ListSmartHomeAppliancesRequestT& request, const ListSmartHomeAppliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListSmartHomeAppliances, request, handler, context);
        }

        /**
         * <p>Lists all tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ListTags, request, handler, context);
        }

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
        template<typename PutConferencePreferenceRequestT = Model::PutConferencePreferenceRequest>
        Model::PutConferencePreferenceOutcomeCallable PutConferencePreferenceCallable(const PutConferencePreferenceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::PutConferencePreference, request);
        }

        /**
         * An Async wrapper for PutConferencePreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConferencePreferenceRequestT = Model::PutConferencePreferenceRequest>
        void PutConferencePreferenceAsync(const PutConferencePreferenceRequestT& request, const PutConferencePreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::PutConferencePreference, request, handler, context);
        }

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
        template<typename PutInvitationConfigurationRequestT = Model::PutInvitationConfigurationRequest>
        Model::PutInvitationConfigurationOutcomeCallable PutInvitationConfigurationCallable(const PutInvitationConfigurationRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::PutInvitationConfiguration, request);
        }

        /**
         * An Async wrapper for PutInvitationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInvitationConfigurationRequestT = Model::PutInvitationConfigurationRequest>
        void PutInvitationConfigurationAsync(const PutInvitationConfigurationRequestT& request, const PutInvitationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::PutInvitationConfiguration, request, handler, context);
        }

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
        template<typename PutRoomSkillParameterRequestT = Model::PutRoomSkillParameterRequest>
        Model::PutRoomSkillParameterOutcomeCallable PutRoomSkillParameterCallable(const PutRoomSkillParameterRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::PutRoomSkillParameter, request);
        }

        /**
         * An Async wrapper for PutRoomSkillParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRoomSkillParameterRequestT = Model::PutRoomSkillParameterRequest>
        void PutRoomSkillParameterAsync(const PutRoomSkillParameterRequestT& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::PutRoomSkillParameter, request, handler, context);
        }

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
        template<typename PutSkillAuthorizationRequestT = Model::PutSkillAuthorizationRequest>
        Model::PutSkillAuthorizationOutcomeCallable PutSkillAuthorizationCallable(const PutSkillAuthorizationRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::PutSkillAuthorization, request);
        }

        /**
         * An Async wrapper for PutSkillAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSkillAuthorizationRequestT = Model::PutSkillAuthorizationRequest>
        void PutSkillAuthorizationAsync(const PutSkillAuthorizationRequestT& request, const PutSkillAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::PutSkillAuthorization, request, handler, context);
        }

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
        template<typename RegisterAVSDeviceRequestT = Model::RegisterAVSDeviceRequest>
        Model::RegisterAVSDeviceOutcomeCallable RegisterAVSDeviceCallable(const RegisterAVSDeviceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::RegisterAVSDevice, request);
        }

        /**
         * An Async wrapper for RegisterAVSDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterAVSDeviceRequestT = Model::RegisterAVSDeviceRequest>
        void RegisterAVSDeviceAsync(const RegisterAVSDeviceRequestT& request, const RegisterAVSDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::RegisterAVSDevice, request, handler, context);
        }

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
        template<typename RejectSkillRequestT = Model::RejectSkillRequest>
        Model::RejectSkillOutcomeCallable RejectSkillCallable(const RejectSkillRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::RejectSkill, request);
        }

        /**
         * An Async wrapper for RejectSkill that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectSkillRequestT = Model::RejectSkillRequest>
        void RejectSkillAsync(const RejectSkillRequestT& request, const RejectSkillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::RejectSkill, request, handler, context);
        }

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
        template<typename ResolveRoomRequestT = Model::ResolveRoomRequest>
        Model::ResolveRoomOutcomeCallable ResolveRoomCallable(const ResolveRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::ResolveRoom, request);
        }

        /**
         * An Async wrapper for ResolveRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResolveRoomRequestT = Model::ResolveRoomRequest>
        void ResolveRoomAsync(const ResolveRoomRequestT& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::ResolveRoom, request, handler, context);
        }

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
        template<typename RevokeInvitationRequestT = Model::RevokeInvitationRequest>
        Model::RevokeInvitationOutcomeCallable RevokeInvitationCallable(const RevokeInvitationRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::RevokeInvitation, request);
        }

        /**
         * An Async wrapper for RevokeInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeInvitationRequestT = Model::RevokeInvitationRequest>
        void RevokeInvitationAsync(const RevokeInvitationRequestT& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::RevokeInvitation, request, handler, context);
        }

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
        template<typename SearchAddressBooksRequestT = Model::SearchAddressBooksRequest>
        Model::SearchAddressBooksOutcomeCallable SearchAddressBooksCallable(const SearchAddressBooksRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchAddressBooks, request);
        }

        /**
         * An Async wrapper for SearchAddressBooks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchAddressBooksRequestT = Model::SearchAddressBooksRequest>
        void SearchAddressBooksAsync(const SearchAddressBooksRequestT& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchAddressBooks, request, handler, context);
        }

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
        template<typename SearchContactsRequestT = Model::SearchContactsRequest>
        Model::SearchContactsOutcomeCallable SearchContactsCallable(const SearchContactsRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchContacts, request);
        }

        /**
         * An Async wrapper for SearchContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchContactsRequestT = Model::SearchContactsRequest>
        void SearchContactsAsync(const SearchContactsRequestT& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchContacts, request, handler, context);
        }

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
        template<typename SearchDevicesRequestT = Model::SearchDevicesRequest>
        Model::SearchDevicesOutcomeCallable SearchDevicesCallable(const SearchDevicesRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchDevices, request);
        }

        /**
         * An Async wrapper for SearchDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchDevicesRequestT = Model::SearchDevicesRequest>
        void SearchDevicesAsync(const SearchDevicesRequestT& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchDevices, request, handler, context);
        }

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
        template<typename SearchNetworkProfilesRequestT = Model::SearchNetworkProfilesRequest>
        Model::SearchNetworkProfilesOutcomeCallable SearchNetworkProfilesCallable(const SearchNetworkProfilesRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchNetworkProfiles, request);
        }

        /**
         * An Async wrapper for SearchNetworkProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchNetworkProfilesRequestT = Model::SearchNetworkProfilesRequest>
        void SearchNetworkProfilesAsync(const SearchNetworkProfilesRequestT& request, const SearchNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchNetworkProfiles, request, handler, context);
        }

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
        template<typename SearchProfilesRequestT = Model::SearchProfilesRequest>
        Model::SearchProfilesOutcomeCallable SearchProfilesCallable(const SearchProfilesRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchProfiles, request);
        }

        /**
         * An Async wrapper for SearchProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchProfilesRequestT = Model::SearchProfilesRequest>
        void SearchProfilesAsync(const SearchProfilesRequestT& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchProfiles, request, handler, context);
        }

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
        template<typename SearchRoomsRequestT = Model::SearchRoomsRequest>
        Model::SearchRoomsOutcomeCallable SearchRoomsCallable(const SearchRoomsRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchRooms, request);
        }

        /**
         * An Async wrapper for SearchRooms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRoomsRequestT = Model::SearchRoomsRequest>
        void SearchRoomsAsync(const SearchRoomsRequestT& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchRooms, request, handler, context);
        }

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
        template<typename SearchSkillGroupsRequestT = Model::SearchSkillGroupsRequest>
        Model::SearchSkillGroupsOutcomeCallable SearchSkillGroupsCallable(const SearchSkillGroupsRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchSkillGroups, request);
        }

        /**
         * An Async wrapper for SearchSkillGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchSkillGroupsRequestT = Model::SearchSkillGroupsRequest>
        void SearchSkillGroupsAsync(const SearchSkillGroupsRequestT& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchSkillGroups, request, handler, context);
        }

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
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        Model::SearchUsersOutcomeCallable SearchUsersCallable(const SearchUsersRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SearchUsers, request);
        }

        /**
         * An Async wrapper for SearchUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        void SearchUsersAsync(const SearchUsersRequestT& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SearchUsers, request, handler, context);
        }

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
        template<typename SendAnnouncementRequestT = Model::SendAnnouncementRequest>
        Model::SendAnnouncementOutcomeCallable SendAnnouncementCallable(const SendAnnouncementRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SendAnnouncement, request);
        }

        /**
         * An Async wrapper for SendAnnouncement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendAnnouncementRequestT = Model::SendAnnouncementRequest>
        void SendAnnouncementAsync(const SendAnnouncementRequestT& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SendAnnouncement, request, handler, context);
        }

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
        template<typename SendInvitationRequestT = Model::SendInvitationRequest>
        Model::SendInvitationOutcomeCallable SendInvitationCallable(const SendInvitationRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SendInvitation, request);
        }

        /**
         * An Async wrapper for SendInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendInvitationRequestT = Model::SendInvitationRequest>
        void SendInvitationAsync(const SendInvitationRequestT& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SendInvitation, request, handler, context);
        }

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
        template<typename StartDeviceSyncRequestT = Model::StartDeviceSyncRequest>
        Model::StartDeviceSyncOutcomeCallable StartDeviceSyncCallable(const StartDeviceSyncRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::StartDeviceSync, request);
        }

        /**
         * An Async wrapper for StartDeviceSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDeviceSyncRequestT = Model::StartDeviceSyncRequest>
        void StartDeviceSyncAsync(const StartDeviceSyncRequestT& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::StartDeviceSync, request, handler, context);
        }

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
        template<typename StartSmartHomeApplianceDiscoveryRequestT = Model::StartSmartHomeApplianceDiscoveryRequest>
        Model::StartSmartHomeApplianceDiscoveryOutcomeCallable StartSmartHomeApplianceDiscoveryCallable(const StartSmartHomeApplianceDiscoveryRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::StartSmartHomeApplianceDiscovery, request);
        }

        /**
         * An Async wrapper for StartSmartHomeApplianceDiscovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSmartHomeApplianceDiscoveryRequestT = Model::StartSmartHomeApplianceDiscoveryRequest>
        void StartSmartHomeApplianceDiscoveryAsync(const StartSmartHomeApplianceDiscoveryRequestT& request, const StartSmartHomeApplianceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::StartSmartHomeApplianceDiscovery, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateAddressBookRequestT = Model::UpdateAddressBookRequest>
        Model::UpdateAddressBookOutcomeCallable UpdateAddressBookCallable(const UpdateAddressBookRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateAddressBook, request);
        }

        /**
         * An Async wrapper for UpdateAddressBook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAddressBookRequestT = Model::UpdateAddressBookRequest>
        void UpdateAddressBookAsync(const UpdateAddressBookRequestT& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateAddressBook, request, handler, context);
        }

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
        template<typename UpdateBusinessReportScheduleRequestT = Model::UpdateBusinessReportScheduleRequest>
        Model::UpdateBusinessReportScheduleOutcomeCallable UpdateBusinessReportScheduleCallable(const UpdateBusinessReportScheduleRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateBusinessReportSchedule, request);
        }

        /**
         * An Async wrapper for UpdateBusinessReportSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBusinessReportScheduleRequestT = Model::UpdateBusinessReportScheduleRequest>
        void UpdateBusinessReportScheduleAsync(const UpdateBusinessReportScheduleRequestT& request, const UpdateBusinessReportScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateBusinessReportSchedule, request, handler, context);
        }

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
        template<typename UpdateConferenceProviderRequestT = Model::UpdateConferenceProviderRequest>
        Model::UpdateConferenceProviderOutcomeCallable UpdateConferenceProviderCallable(const UpdateConferenceProviderRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateConferenceProvider, request);
        }

        /**
         * An Async wrapper for UpdateConferenceProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConferenceProviderRequestT = Model::UpdateConferenceProviderRequest>
        void UpdateConferenceProviderAsync(const UpdateConferenceProviderRequestT& request, const UpdateConferenceProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateConferenceProvider, request, handler, context);
        }

        /**
         * <p>Updates the contact details by the contact ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        Model::UpdateContactOutcomeCallable UpdateContactCallable(const UpdateContactRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateContact, request);
        }

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        void UpdateContactAsync(const UpdateContactRequestT& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateContact, request, handler, context);
        }

        /**
         * <p>Updates the device name by device ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceRequestT = Model::UpdateDeviceRequest>
        Model::UpdateDeviceOutcomeCallable UpdateDeviceCallable(const UpdateDeviceRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateDevice, request);
        }

        /**
         * An Async wrapper for UpdateDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceRequestT = Model::UpdateDeviceRequest>
        void UpdateDeviceAsync(const UpdateDeviceRequestT& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateDevice, request, handler, context);
        }

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
        template<typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
        Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const UpdateGatewayRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateGateway, request);
        }

        /**
         * An Async wrapper for UpdateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
        void UpdateGatewayAsync(const UpdateGatewayRequestT& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateGateway, request, handler, context);
        }

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
        template<typename UpdateGatewayGroupRequestT = Model::UpdateGatewayGroupRequest>
        Model::UpdateGatewayGroupOutcomeCallable UpdateGatewayGroupCallable(const UpdateGatewayGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateGatewayGroup, request);
        }

        /**
         * An Async wrapper for UpdateGatewayGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayGroupRequestT = Model::UpdateGatewayGroupRequest>
        void UpdateGatewayGroupAsync(const UpdateGatewayGroupRequestT& request, const UpdateGatewayGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateGatewayGroup, request, handler, context);
        }

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
        template<typename UpdateNetworkProfileRequestT = Model::UpdateNetworkProfileRequest>
        Model::UpdateNetworkProfileOutcomeCallable UpdateNetworkProfileCallable(const UpdateNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateNetworkProfile, request);
        }

        /**
         * An Async wrapper for UpdateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkProfileRequestT = Model::UpdateNetworkProfileRequest>
        void UpdateNetworkProfileAsync(const UpdateNetworkProfileRequestT& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateNetworkProfile, request, handler, context);
        }

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
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const UpdateProfileRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateProfile, request);
        }

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        void UpdateProfileAsync(const UpdateProfileRequestT& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateProfile, request, handler, context);
        }

        /**
         * <p>Updates room details by room ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoomRequestT = Model::UpdateRoomRequest>
        Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const UpdateRoomRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateRoom, request);
        }

        /**
         * An Async wrapper for UpdateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoomRequestT = Model::UpdateRoomRequest>
        void UpdateRoomAsync(const UpdateRoomRequestT& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateRoom, request, handler, context);
        }

        /**
         * <p>Updates skill group details by skill group ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateSkillGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSkillGroupOutcome UpdateSkillGroup(const Model::UpdateSkillGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateSkillGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSkillGroupRequestT = Model::UpdateSkillGroupRequest>
        Model::UpdateSkillGroupOutcomeCallable UpdateSkillGroupCallable(const UpdateSkillGroupRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::UpdateSkillGroup, request);
        }

        /**
         * An Async wrapper for UpdateSkillGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSkillGroupRequestT = Model::UpdateSkillGroupRequest>
        void UpdateSkillGroupAsync(const UpdateSkillGroupRequestT& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::UpdateSkillGroup, request, handler, context);
        }


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
