/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime/ChimeServiceClientModel.h>
#include <aws/chime/model/GetPhoneNumberSettingsRequest.h>
#include <aws/chime/model/GetGlobalSettingsRequest.h>

namespace Aws
{
namespace Chime
{
  /**
   *  <p> <b>Most of these APIs are no longer supported and will not be
   * updated.</b> We recommend using the latest versions in the <a
   * href="https://docs.aws.amazon.com/chime-sdk/latest/APIReference/welcome.html">Amazon
   * Chime SDK API reference</a>, in the Amazon Chime SDK.</p> <p>Using the latest
   * versions requires migrating to dedicated namespaces. For more information, refer
   * to <a
   * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/migrate-from-chm-namespace.html">Migrating
   * from the Amazon Chime namespace</a> in the <i>Amazon Chime SDK Developer
   * Guide</i>.</p>  <p>The Amazon Chime application programming
   * interface (API) is designed so administrators can perform key tasks, such as
   * creating and managing Amazon Chime accounts, users, and Voice Connectors. This
   * guide provides detailed information about the Amazon Chime API, including
   * operations, types, inputs and outputs, and error codes.</p> <p>You can use an
   * AWS SDK, the AWS Command Line Interface (AWS CLI), or the REST API to make API
   * calls for Amazon Chime. We recommend using an AWS SDK or the AWS CLI. The page
   * for each API action contains a <i>See Also</i> section that includes links to
   * information about using the action with a language-specific AWS SDK or the AWS
   * CLI.</p> <dl> <dt>Using an AWS SDK</dt> <dd> <p> You don't need to write code to
   * calculate a signature for request authentication. The SDK clients authenticate
   * your requests by using access keys that you provide. For more information about
   * AWS SDKs, see the <a href="http://aws.amazon.com/developer/">AWS Developer
   * Center</a>. </p> </dd> <dt>Using the AWS CLI</dt> <dd> <p>Use your access keys
   * with the AWS CLI to make API calls. For information about setting up the AWS
   * CLI, see <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing
   * the AWS Command Line Interface</a> in the <i>AWS Command Line Interface User
   * Guide</i>. For a list of available Amazon Chime commands, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon
   * Chime commands</a> in the <i>AWS CLI Command Reference</i>. </p> </dd> <dt>Using
   * REST APIs</dt> <dd> <p>If you use REST to make API calls, you must authenticate
   * your request by providing a signature. Amazon Chime supports Signature Version
   * 4. For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a> in the <i>Amazon Web Services General
   * Reference</i>.</p> <p>When making REST API calls, use the service name
   * <code>chime</code> and REST endpoint
   * <code>https://service.chime.aws.amazon.com</code>.</p> </dd> </dl>
   * <p>Administrative permissions are controlled using AWS Identity and Access
   * Management (IAM). For more information, see <a
   * href="https://docs.aws.amazon.com/chime/latest/ag/security-iam.html">Identity
   * and Access Management for Amazon Chime</a> in the <i>Amazon Chime Administration
   * Guide</i>.</p>
   */
  class AWS_CHIME_API ChimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ChimeClientConfiguration ClientConfigurationType;
      typedef ChimeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Chime::ChimeClientConfiguration& clientConfiguration = Aws::Chime::ChimeClientConfiguration(),
                    std::shared_ptr<ChimeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<ChimeEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Chime::ChimeClientConfiguration& clientConfiguration = Aws::Chime::ChimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<ChimeEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Chime::ChimeClientConfiguration& clientConfiguration = Aws::Chime::ChimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ChimeClient();

        /**
         * <p>Associates a phone number with the specified Amazon Chime user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumberWithUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumberWithUserOutcome AssociatePhoneNumberWithUser(const Model::AssociatePhoneNumberWithUserRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumberWithUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePhoneNumberWithUserRequestT = Model::AssociatePhoneNumberWithUserRequest>
        Model::AssociatePhoneNumberWithUserOutcomeCallable AssociatePhoneNumberWithUserCallable(const AssociatePhoneNumberWithUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::AssociatePhoneNumberWithUser, request);
        }

        /**
         * An Async wrapper for AssociatePhoneNumberWithUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePhoneNumberWithUserRequestT = Model::AssociatePhoneNumberWithUserRequest>
        void AssociatePhoneNumberWithUserAsync(const AssociatePhoneNumberWithUserRequestT& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::AssociatePhoneNumberWithUser, request, handler, context);
        }

        /**
         * <p>Associates the specified sign-in delegate groups with the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociateSigninDelegateGroupsWithAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSigninDelegateGroupsWithAccountOutcome AssociateSigninDelegateGroupsWithAccount(const Model::AssociateSigninDelegateGroupsWithAccountRequest& request) const;

        /**
         * A Callable wrapper for AssociateSigninDelegateGroupsWithAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateSigninDelegateGroupsWithAccountRequestT = Model::AssociateSigninDelegateGroupsWithAccountRequest>
        Model::AssociateSigninDelegateGroupsWithAccountOutcomeCallable AssociateSigninDelegateGroupsWithAccountCallable(const AssociateSigninDelegateGroupsWithAccountRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::AssociateSigninDelegateGroupsWithAccount, request);
        }

        /**
         * An Async wrapper for AssociateSigninDelegateGroupsWithAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSigninDelegateGroupsWithAccountRequestT = Model::AssociateSigninDelegateGroupsWithAccountRequest>
        void AssociateSigninDelegateGroupsWithAccountAsync(const AssociateSigninDelegateGroupsWithAccountRequestT& request, const AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::AssociateSigninDelegateGroupsWithAccount, request, handler, context);
        }

        /**
         * <p>Adds up to 50 members to a chat room in an Amazon Chime Enterprise account.
         * Members can be users or bots. The member role designates whether the member is a
         * chat room administrator or a general chat room member.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateRoomMembershipOutcome BatchCreateRoomMembership(const Model::BatchCreateRoomMembershipRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateRoomMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateRoomMembershipRequestT = Model::BatchCreateRoomMembershipRequest>
        Model::BatchCreateRoomMembershipOutcomeCallable BatchCreateRoomMembershipCallable(const BatchCreateRoomMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchCreateRoomMembership, request);
        }

        /**
         * An Async wrapper for BatchCreateRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateRoomMembershipRequestT = Model::BatchCreateRoomMembershipRequest>
        void BatchCreateRoomMembershipAsync(const BatchCreateRoomMembershipRequestT& request, const BatchCreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchCreateRoomMembership, request, handler, context);
        }

        /**
         * <p> Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime Voice Connectors before they can be
         * deleted. </p> <p> Phone numbers remain in the <b>Deletion queue</b> for 7 days
         * before they are deleted permanently. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeletePhoneNumberOutcome BatchDeletePhoneNumber(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for BatchDeletePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeletePhoneNumberRequestT = Model::BatchDeletePhoneNumberRequest>
        Model::BatchDeletePhoneNumberOutcomeCallable BatchDeletePhoneNumberCallable(const BatchDeletePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchDeletePhoneNumber, request);
        }

        /**
         * An Async wrapper for BatchDeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeletePhoneNumberRequestT = Model::BatchDeletePhoneNumberRequest>
        void BatchDeletePhoneNumberAsync(const BatchDeletePhoneNumberRequestT& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchDeletePhoneNumber, request, handler, context);
        }

        /**
         * <p>Suspends up to 50 users from a <code>Team</code> or
         * <code>EnterpriseLWA</code> Amazon Chime account. For more information about
         * different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Users suspended from a <code>Team</code> account are
         * disassociated from the account,but they can continue to use Amazon Chime as free
         * users. To remove the suspension from suspended <code>Team</code> account users,
         * invite them to the <code>Team</code> account again. You can use the
         * <a>InviteUsers</a> action to do so.</p> <p>Users suspended from an
         * <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime
         * and can no longer sign in. To remove the suspension from suspended
         * <code>EnterpriseLWA</code> account users, use the <a>BatchUnsuspendUser</a>
         * action.</p> <p> To sign out users without suspending them, use the
         * <a>LogoutUser</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchSuspendUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchSuspendUserOutcome BatchSuspendUser(const Model::BatchSuspendUserRequest& request) const;

        /**
         * A Callable wrapper for BatchSuspendUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchSuspendUserRequestT = Model::BatchSuspendUserRequest>
        Model::BatchSuspendUserOutcomeCallable BatchSuspendUserCallable(const BatchSuspendUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchSuspendUser, request);
        }

        /**
         * An Async wrapper for BatchSuspendUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchSuspendUserRequestT = Model::BatchSuspendUserRequest>
        void BatchSuspendUserAsync(const BatchSuspendUserRequestT& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchSuspendUser, request, handler, context);
        }

        /**
         * <p>Removes the suspension from up to 50 previously suspended users for the
         * specified Amazon Chime <code>EnterpriseLWA</code> account. Only users on
         * <code>EnterpriseLWA</code> accounts can be unsuspended using this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">
         * Managing Your Amazon Chime Accounts </a> in the account types, in the <i>Amazon
         * Chime Administration Guide</i>. </p> <p>Previously suspended users who are
         * unsuspended using this action are returned to <code>Registered</code> status.
         * Users who are not previously suspended are ignored.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUnsuspendUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUnsuspendUserOutcome BatchUnsuspendUser(const Model::BatchUnsuspendUserRequest& request) const;

        /**
         * A Callable wrapper for BatchUnsuspendUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUnsuspendUserRequestT = Model::BatchUnsuspendUserRequest>
        Model::BatchUnsuspendUserOutcomeCallable BatchUnsuspendUserCallable(const BatchUnsuspendUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchUnsuspendUser, request);
        }

        /**
         * An Async wrapper for BatchUnsuspendUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUnsuspendUserRequestT = Model::BatchUnsuspendUserRequest>
        void BatchUnsuspendUserAsync(const BatchUnsuspendUserRequestT& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchUnsuspendUser, request, handler, context);
        }

        /**
         * <p>Updates phone number product types or calling names. You can update one
         * attribute at a time for each <code>UpdatePhoneNumberRequestItem</code>. For
         * example, you can update the product type or the calling name.</p> <p>For
         * toll-free numbers, you cannot use the Amazon Chime Business Calling product
         * type. For numbers outside the U.S., you must use the Amazon Chime SIP Media
         * Application Dial-In product type.</p> <p>Updates to outbound calling names can
         * take up to 72 hours to complete. Pending updates to outbound calling names must
         * be complete before you can request another update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdatePhoneNumberOutcome BatchUpdatePhoneNumber(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdatePhoneNumberRequestT = Model::BatchUpdatePhoneNumberRequest>
        Model::BatchUpdatePhoneNumberOutcomeCallable BatchUpdatePhoneNumberCallable(const BatchUpdatePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchUpdatePhoneNumber, request);
        }

        /**
         * An Async wrapper for BatchUpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdatePhoneNumberRequestT = Model::BatchUpdatePhoneNumberRequest>
        void BatchUpdatePhoneNumberAsync(const BatchUpdatePhoneNumberRequestT& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchUpdatePhoneNumber, request, handler, context);
        }

        /**
         * <p>Updates user details within the <a>UpdateUserRequestItem</a> object for up to
         * 20 users for the specified Amazon Chime account. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateUserOutcome BatchUpdateUser(const Model::BatchUpdateUserRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateUserRequestT = Model::BatchUpdateUserRequest>
        Model::BatchUpdateUserOutcomeCallable BatchUpdateUserCallable(const BatchUpdateUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchUpdateUser, request);
        }

        /**
         * An Async wrapper for BatchUpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateUserRequestT = Model::BatchUpdateUserRequest>
        void BatchUpdateUserAsync(const BatchUpdateUserRequestT& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchUpdateUser, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Chime account under the administrator's AWS account. Only
         * <code>Team</code> account types are currently supported for this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest& request) const;

        /**
         * A Callable wrapper for CreateAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccountRequestT = Model::CreateAccountRequest>
        Model::CreateAccountOutcomeCallable CreateAccountCallable(const CreateAccountRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateAccount, request);
        }

        /**
         * An Async wrapper for CreateAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccountRequestT = Model::CreateAccountRequest>
        void CreateAccountAsync(const CreateAccountRequestT& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateAccount, request, handler, context);
        }

        /**
         * <p>Creates a bot for an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateBot">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;

        /**
         * A Callable wrapper for CreateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBotRequestT = Model::CreateBotRequest>
        Model::CreateBotOutcomeCallable CreateBotCallable(const CreateBotRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateBot, request);
        }

        /**
         * An Async wrapper for CreateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBotRequestT = Model::CreateBotRequest>
        void CreateBotAsync(const CreateBotRequestT& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateBot, request, handler, context);
        }

        /**
         * <p>Uses the join token and call metadata in a meeting request (From number, To
         * number, and so forth) to initiate an outbound call to a public switched
         * telephone network (PSTN) and join them into a Chime meeting. Also ensures that
         * the From number belongs to the customer.</p> <p>To play welcome audio or
         * implement an interactive voice response (IVR), use the
         * <code>CreateSipMediaApplicationCall</code> action with the corresponding SIP
         * media application ID.</p>  <p> <b>This API is is not available in a
         * dedicated namespace.</b> </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingDialOut">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingDialOutOutcome CreateMeetingDialOut(const Model::CreateMeetingDialOutRequest& request) const;

        /**
         * A Callable wrapper for CreateMeetingDialOut that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMeetingDialOutRequestT = Model::CreateMeetingDialOutRequest>
        Model::CreateMeetingDialOutOutcomeCallable CreateMeetingDialOutCallable(const CreateMeetingDialOutRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateMeetingDialOut, request);
        }

        /**
         * An Async wrapper for CreateMeetingDialOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMeetingDialOutRequestT = Model::CreateMeetingDialOutRequest>
        void CreateMeetingDialOutAsync(const CreateMeetingDialOutRequestT& request, const CreateMeetingDialOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateMeetingDialOut, request, handler, context);
        }

        /**
         * <p>Creates an order for phone numbers to be provisioned. For toll-free numbers,
         * you cannot use the Amazon Chime Business Calling product type. For numbers
         * outside the U.S., you must use the Amazon Chime SIP Media Application Dial-In
         * product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePhoneNumberOrderOutcome CreatePhoneNumberOrder(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * A Callable wrapper for CreatePhoneNumberOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePhoneNumberOrderRequestT = Model::CreatePhoneNumberOrderRequest>
        Model::CreatePhoneNumberOrderOutcomeCallable CreatePhoneNumberOrderCallable(const CreatePhoneNumberOrderRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreatePhoneNumberOrder, request);
        }

        /**
         * An Async wrapper for CreatePhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePhoneNumberOrderRequestT = Model::CreatePhoneNumberOrderRequest>
        void CreatePhoneNumberOrderAsync(const CreatePhoneNumberOrderRequestT& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreatePhoneNumberOrder, request, handler, context);
        }

        /**
         * <p>Creates a chat room for the specified Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;

        /**
         * A Callable wrapper for CreateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRoomRequestT = Model::CreateRoomRequest>
        Model::CreateRoomOutcomeCallable CreateRoomCallable(const CreateRoomRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateRoom, request);
        }

        /**
         * An Async wrapper for CreateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRoomRequestT = Model::CreateRoomRequest>
        void CreateRoomAsync(const CreateRoomRequestT& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateRoom, request, handler, context);
        }

        /**
         * <p>Adds a member to a chat room in an Amazon Chime Enterprise account. A member
         * can be either a user or a bot. The member role designates whether the member is
         * a chat room administrator or a general chat room member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomMembershipOutcome CreateRoomMembership(const Model::CreateRoomMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateRoomMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRoomMembershipRequestT = Model::CreateRoomMembershipRequest>
        Model::CreateRoomMembershipOutcomeCallable CreateRoomMembershipCallable(const CreateRoomMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateRoomMembership, request);
        }

        /**
         * An Async wrapper for CreateRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRoomMembershipRequestT = Model::CreateRoomMembershipRequest>
        void CreateRoomMembershipAsync(const CreateRoomMembershipRequestT& request, const CreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateRoomMembership, request, handler, context);
        }

        /**
         * <p>Creates a user under the specified Amazon Chime account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deletes the specified Amazon Chime account. You must suspend all users before
         * deleting <code>Team</code> account. You can use the <a>BatchSuspendUser</a>
         * action to dodo.</p> <p>For <code>EnterpriseLWA</code> and
         * <code>EnterpriseAD</code> accounts, you must release the claimed domains for
         * your Amazon Chime account before deletion. As soon as you release the domain,
         * all users under that account are suspended.</p> <p>Deleted accounts appear in
         * your <code>Disabled</code> accounts list for 90 days. To restore deleted account
         * from your <code>Disabled</code> accounts list, you must contact AWS Support.</p>
         * <p>After 90 days, deleted accounts are permanently removed from your
         * <code>Disabled</code> accounts list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccountRequestT = Model::DeleteAccountRequest>
        Model::DeleteAccountOutcomeCallable DeleteAccountCallable(const DeleteAccountRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteAccount, request);
        }

        /**
         * An Async wrapper for DeleteAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountRequestT = Model::DeleteAccountRequest>
        void DeleteAccountAsync(const DeleteAccountRequestT& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteAccount, request, handler, context);
        }

        /**
         * <p>Deletes the events configuration that allows a bot to receive outgoing
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventsConfigurationOutcome DeleteEventsConfiguration(const Model::DeleteEventsConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventsConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventsConfigurationRequestT = Model::DeleteEventsConfigurationRequest>
        Model::DeleteEventsConfigurationOutcomeCallable DeleteEventsConfigurationCallable(const DeleteEventsConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteEventsConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteEventsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventsConfigurationRequestT = Model::DeleteEventsConfigurationRequest>
        void DeleteEventsConfigurationAsync(const DeleteEventsConfigurationRequestT& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteEventsConfiguration, request, handler, context);
        }

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePhoneNumberOutcome DeletePhoneNumber(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for DeletePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePhoneNumberRequestT = Model::DeletePhoneNumberRequest>
        Model::DeletePhoneNumberOutcomeCallable DeletePhoneNumberCallable(const DeletePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeletePhoneNumber, request);
        }

        /**
         * An Async wrapper for DeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePhoneNumberRequestT = Model::DeletePhoneNumberRequest>
        void DeletePhoneNumberAsync(const DeletePhoneNumberRequestT& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeletePhoneNumber, request, handler, context);
        }

        /**
         * <p>Deletes a chat room in an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRoomRequestT = Model::DeleteRoomRequest>
        Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const DeleteRoomRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteRoom, request);
        }

        /**
         * An Async wrapper for DeleteRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoomRequestT = Model::DeleteRoomRequest>
        void DeleteRoomAsync(const DeleteRoomRequestT& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteRoom, request, handler, context);
        }

        /**
         * <p>Removes a member from a chat room in an Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomMembershipOutcome DeleteRoomMembership(const Model::DeleteRoomMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoomMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRoomMembershipRequestT = Model::DeleteRoomMembershipRequest>
        Model::DeleteRoomMembershipOutcomeCallable DeleteRoomMembershipCallable(const DeleteRoomMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteRoomMembership, request);
        }

        /**
         * An Async wrapper for DeleteRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoomMembershipRequestT = Model::DeleteRoomMembershipRequest>
        void DeleteRoomMembershipAsync(const DeleteRoomMembershipRequestT& request, const DeleteRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteRoomMembership, request, handler, context);
        }

        /**
         * <p>Disassociates the primary provisioned phone number from the specified Amazon
         * Chime user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumberFromUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumberFromUserOutcome DisassociatePhoneNumberFromUser(const Model::DisassociatePhoneNumberFromUserRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumberFromUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePhoneNumberFromUserRequestT = Model::DisassociatePhoneNumberFromUserRequest>
        Model::DisassociatePhoneNumberFromUserOutcomeCallable DisassociatePhoneNumberFromUserCallable(const DisassociatePhoneNumberFromUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DisassociatePhoneNumberFromUser, request);
        }

        /**
         * An Async wrapper for DisassociatePhoneNumberFromUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePhoneNumberFromUserRequestT = Model::DisassociatePhoneNumberFromUserRequest>
        void DisassociatePhoneNumberFromUserAsync(const DisassociatePhoneNumberFromUserRequestT& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DisassociatePhoneNumberFromUser, request, handler, context);
        }

        /**
         * <p>Disassociates the specified sign-in delegate groups from the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociateSigninDelegateGroupsFromAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSigninDelegateGroupsFromAccountOutcome DisassociateSigninDelegateGroupsFromAccount(const Model::DisassociateSigninDelegateGroupsFromAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSigninDelegateGroupsFromAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateSigninDelegateGroupsFromAccountRequestT = Model::DisassociateSigninDelegateGroupsFromAccountRequest>
        Model::DisassociateSigninDelegateGroupsFromAccountOutcomeCallable DisassociateSigninDelegateGroupsFromAccountCallable(const DisassociateSigninDelegateGroupsFromAccountRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DisassociateSigninDelegateGroupsFromAccount, request);
        }

        /**
         * An Async wrapper for DisassociateSigninDelegateGroupsFromAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateSigninDelegateGroupsFromAccountRequestT = Model::DisassociateSigninDelegateGroupsFromAccountRequest>
        void DisassociateSigninDelegateGroupsFromAccountAsync(const DisassociateSigninDelegateGroupsFromAccountRequestT& request, const DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DisassociateSigninDelegateGroupsFromAccount, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified Amazon Chime account, such as account
         * type and supported licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountRequestT = Model::GetAccountRequest>
        Model::GetAccountOutcomeCallable GetAccountCallable(const GetAccountRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetAccount, request);
        }

        /**
         * An Async wrapper for GetAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountRequestT = Model::GetAccountRequest>
        void GetAccountAsync(const GetAccountRequestT& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetAccount, request, handler, context);
        }

        /**
         * <p>Retrieves account settings for the specified Amazon Chime account ID, such as
         * remote control and dialout settings. For more information about these settings,
         * see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const GetAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetAccountSettings, request);
        }

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        void GetAccountSettingsAsync(const GetAccountSettingsRequestT& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetAccountSettings, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified bot, such as bot email address, bot type,
         * status, and display name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetBot">AWS API
         * Reference</a></p>
         */
        virtual Model::GetBotOutcome GetBot(const Model::GetBotRequest& request) const;

        /**
         * A Callable wrapper for GetBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotRequestT = Model::GetBotRequest>
        Model::GetBotOutcomeCallable GetBotCallable(const GetBotRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetBot, request);
        }

        /**
         * An Async wrapper for GetBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotRequestT = Model::GetBotRequest>
        void GetBotAsync(const GetBotRequestT& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetBot, request, handler, context);
        }

        /**
         * <p>Gets details for an events configuration that allows a bot to receive
         * outgoing events, such as an HTTPS endpoint or Lambda function ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventsConfigurationOutcome GetEventsConfiguration(const Model::GetEventsConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetEventsConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventsConfigurationRequestT = Model::GetEventsConfigurationRequest>
        Model::GetEventsConfigurationOutcomeCallable GetEventsConfigurationCallable(const GetEventsConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetEventsConfiguration, request);
        }

        /**
         * An Async wrapper for GetEventsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventsConfigurationRequestT = Model::GetEventsConfigurationRequest>
        void GetEventsConfigurationAsync(const GetEventsConfigurationRequestT& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetEventsConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGlobalSettingsOutcome GetGlobalSettings(const Model::GetGlobalSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGlobalSettingsRequestT = Model::GetGlobalSettingsRequest>
        Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable(const GetGlobalSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&ChimeClient::GetGlobalSettings, request);
        }

        /**
         * An Async wrapper for GetGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGlobalSettingsRequestT = Model::GetGlobalSettingsRequest>
        void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetGlobalSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&ChimeClient::GetGlobalSettings, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOutcome GetPhoneNumber(const Model::GetPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for GetPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPhoneNumberRequestT = Model::GetPhoneNumberRequest>
        Model::GetPhoneNumberOutcomeCallable GetPhoneNumberCallable(const GetPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetPhoneNumber, request);
        }

        /**
         * An Async wrapper for GetPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPhoneNumberRequestT = Model::GetPhoneNumberRequest>
        void GetPhoneNumberAsync(const GetPhoneNumberRequestT& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetPhoneNumber, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified phone number order, such as the order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOrderOutcome GetPhoneNumberOrder(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * A Callable wrapper for GetPhoneNumberOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPhoneNumberOrderRequestT = Model::GetPhoneNumberOrderRequest>
        Model::GetPhoneNumberOrderOutcomeCallable GetPhoneNumberOrderCallable(const GetPhoneNumberOrderRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetPhoneNumberOrder, request);
        }

        /**
         * An Async wrapper for GetPhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPhoneNumberOrderRequestT = Model::GetPhoneNumberOrderRequest>
        void GetPhoneNumberOrderAsync(const GetPhoneNumberOrderRequestT& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetPhoneNumberOrder, request, handler, context);
        }

        /**
         * <p>Retrieves the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberSettingsOutcome GetPhoneNumberSettings(const Model::GetPhoneNumberSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetPhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPhoneNumberSettingsRequestT = Model::GetPhoneNumberSettingsRequest>
        Model::GetPhoneNumberSettingsOutcomeCallable GetPhoneNumberSettingsCallable(const GetPhoneNumberSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&ChimeClient::GetPhoneNumberSettings, request);
        }

        /**
         * An Async wrapper for GetPhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPhoneNumberSettingsRequestT = Model::GetPhoneNumberSettingsRequest>
        void GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetPhoneNumberSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&ChimeClient::GetPhoneNumberSettings, request, handler, context);
        }

        /**
         * <p> Gets the retention settings for the specified Amazon Chime Enterprise
         * account. For more information about retention settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRetentionSettingsOutcome GetRetentionSettings(const Model::GetRetentionSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetRetentionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRetentionSettingsRequestT = Model::GetRetentionSettingsRequest>
        Model::GetRetentionSettingsOutcomeCallable GetRetentionSettingsCallable(const GetRetentionSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetRetentionSettings, request);
        }

        /**
         * An Async wrapper for GetRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRetentionSettingsRequestT = Model::GetRetentionSettingsRequest>
        void GetRetentionSettingsAsync(const GetRetentionSettingsRequestT& request, const GetRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetRetentionSettings, request, handler, context);
        }

        /**
         * <p>Retrieves room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRoom">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;

        /**
         * A Callable wrapper for GetRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRoomRequestT = Model::GetRoomRequest>
        Model::GetRoomOutcomeCallable GetRoomCallable(const GetRoomRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetRoom, request);
        }

        /**
         * An Async wrapper for GetRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRoomRequestT = Model::GetRoomRequest>
        void GetRoomAsync(const GetRoomRequestT& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetRoom, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified user ID, such as primary email address,
         * license type,and personal meeting PIN.</p> <p> To retrieve user details with an
         * email address instead of a user ID, use the <a>ListUsers</a> action, and then
         * filter by email address. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUser">AWS API
         * Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * A Callable wrapper for GetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        Model::GetUserOutcomeCallable GetUserCallable(const GetUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetUser, request);
        }

        /**
         * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        void GetUserAsync(const GetUserRequestT& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetUser, request, handler, context);
        }

        /**
         * <p>Retrieves settings for the specified user ID, such as any associated phone
         * number settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserSettingsOutcome GetUserSettings(const Model::GetUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserSettingsRequestT = Model::GetUserSettingsRequest>
        Model::GetUserSettingsOutcomeCallable GetUserSettingsCallable(const GetUserSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetUserSettings, request);
        }

        /**
         * An Async wrapper for GetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserSettingsRequestT = Model::GetUserSettingsRequest>
        void GetUserSettingsAsync(const GetUserSettingsRequestT& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetUserSettings, request, handler, context);
        }

        /**
         * <p>Sends email to a maximum of 50 users, inviting them to the specified Amazon
         * Chime <code>Team</code> account. Only <code>Team</code> account types are
         * currently supported for this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/InviteUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteUsersOutcome InviteUsers(const Model::InviteUsersRequest& request) const;

        /**
         * A Callable wrapper for InviteUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InviteUsersRequestT = Model::InviteUsersRequest>
        Model::InviteUsersOutcomeCallable InviteUsersCallable(const InviteUsersRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::InviteUsers, request);
        }

        /**
         * An Async wrapper for InviteUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InviteUsersRequestT = Model::InviteUsersRequest>
        void InviteUsersAsync(const InviteUsersRequestT& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::InviteUsers, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Chime accounts under the administrator's AWS account. You
         * can filter accounts by account name prefix. To find out which Amazon Chime
         * account a user belongs to, you can filter by the user's email address, which
         * returns one account result.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountsRequestT = Model::ListAccountsRequest>
        Model::ListAccountsOutcomeCallable ListAccountsCallable(const ListAccountsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListAccounts, request);
        }

        /**
         * An Async wrapper for ListAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountsRequestT = Model::ListAccountsRequest>
        void ListAccountsAsync(const ListAccountsRequestT& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListAccounts, request, handler, context);
        }

        /**
         * <p>Lists the bots associated with the administrator's Amazon Chime Enterprise
         * account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListBots">AWS API
         * Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * A Callable wrapper for ListBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotsRequestT = Model::ListBotsRequest>
        Model::ListBotsOutcomeCallable ListBotsCallable(const ListBotsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListBots, request);
        }

        /**
         * An Async wrapper for ListBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotsRequestT = Model::ListBotsRequest>
        void ListBotsAsync(const ListBotsRequestT& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListBots, request, handler, context);
        }

        /**
         * <p>Lists the phone number orders for the administrator's Amazon Chime
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumberOrdersOutcome ListPhoneNumberOrders(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumberOrders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPhoneNumberOrdersRequestT = Model::ListPhoneNumberOrdersRequest>
        Model::ListPhoneNumberOrdersOutcomeCallable ListPhoneNumberOrdersCallable(const ListPhoneNumberOrdersRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListPhoneNumberOrders, request);
        }

        /**
         * An Async wrapper for ListPhoneNumberOrders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPhoneNumberOrdersRequestT = Model::ListPhoneNumberOrdersRequest>
        void ListPhoneNumberOrdersAsync(const ListPhoneNumberOrdersRequestT& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListPhoneNumberOrders, request, handler, context);
        }

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime account, Amazon Chime
         * user, Amazon Chime Voice Connector, or Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPhoneNumbersRequestT = Model::ListPhoneNumbersRequest>
        Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const ListPhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListPhoneNumbers, request);
        }

        /**
         * An Async wrapper for ListPhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPhoneNumbersRequestT = Model::ListPhoneNumbersRequest>
        void ListPhoneNumbersAsync(const ListPhoneNumbersRequestT& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListPhoneNumbers, request, handler, context);
        }

        /**
         * <p>Lists the membership details for the specified room in an Amazon Chime
         * Enterprise account, such as the members' IDs, email addresses, and
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRoomMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoomMembershipsOutcome ListRoomMemberships(const Model::ListRoomMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListRoomMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRoomMembershipsRequestT = Model::ListRoomMembershipsRequest>
        Model::ListRoomMembershipsOutcomeCallable ListRoomMembershipsCallable(const ListRoomMembershipsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListRoomMemberships, request);
        }

        /**
         * An Async wrapper for ListRoomMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoomMembershipsRequestT = Model::ListRoomMembershipsRequest>
        void ListRoomMembershipsAsync(const ListRoomMembershipsRequestT& request, const ListRoomMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListRoomMemberships, request, handler, context);
        }

        /**
         * <p>Lists the room details for the specified Amazon Chime Enterprise account.
         * Optionally, filter the results by a member ID (user ID or bot ID) to see a list
         * of rooms that the member belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRooms">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRoomsOutcome ListRooms(const Model::ListRoomsRequest& request) const;

        /**
         * A Callable wrapper for ListRooms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRoomsRequestT = Model::ListRoomsRequest>
        Model::ListRoomsOutcomeCallable ListRoomsCallable(const ListRoomsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListRooms, request);
        }

        /**
         * An Async wrapper for ListRooms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoomsRequestT = Model::ListRoomsRequest>
        void ListRoomsAsync(const ListRoomsRequestT& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListRooms, request, handler, context);
        }

        /**
         * <p>Lists supported phone number countries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSupportedPhoneNumberCountries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSupportedPhoneNumberCountriesOutcome ListSupportedPhoneNumberCountries(const Model::ListSupportedPhoneNumberCountriesRequest& request) const;

        /**
         * A Callable wrapper for ListSupportedPhoneNumberCountries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSupportedPhoneNumberCountriesRequestT = Model::ListSupportedPhoneNumberCountriesRequest>
        Model::ListSupportedPhoneNumberCountriesOutcomeCallable ListSupportedPhoneNumberCountriesCallable(const ListSupportedPhoneNumberCountriesRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListSupportedPhoneNumberCountries, request);
        }

        /**
         * An Async wrapper for ListSupportedPhoneNumberCountries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSupportedPhoneNumberCountriesRequestT = Model::ListSupportedPhoneNumberCountriesRequest>
        void ListSupportedPhoneNumberCountriesAsync(const ListSupportedPhoneNumberCountriesRequestT& request, const ListSupportedPhoneNumberCountriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListSupportedPhoneNumberCountries, request, handler, context);
        }

        /**
         * <p>Lists the users that belong to the specified Amazon Chime account. You can
         * specify an email address to list only the user that the email address belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Logs out the specified user from all of the devices they are currently logged
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LogoutUser">AWS
         * API Reference</a></p>
         */
        virtual Model::LogoutUserOutcome LogoutUser(const Model::LogoutUserRequest& request) const;

        /**
         * A Callable wrapper for LogoutUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename LogoutUserRequestT = Model::LogoutUserRequest>
        Model::LogoutUserOutcomeCallable LogoutUserCallable(const LogoutUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::LogoutUser, request);
        }

        /**
         * An Async wrapper for LogoutUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename LogoutUserRequestT = Model::LogoutUserRequest>
        void LogoutUserAsync(const LogoutUserRequestT& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::LogoutUser, request, handler, context);
        }

        /**
         * <p>Creates an events configuration that allows a bot to receive outgoing events
         * sent by Amazon Chime. Choose either an HTTPS endpoint or a Lambda function ARN.
         * For more information, see <a>Bot</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsConfigurationOutcome PutEventsConfiguration(const Model::PutEventsConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutEventsConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEventsConfigurationRequestT = Model::PutEventsConfigurationRequest>
        Model::PutEventsConfigurationOutcomeCallable PutEventsConfigurationCallable(const PutEventsConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutEventsConfiguration, request);
        }

        /**
         * An Async wrapper for PutEventsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEventsConfigurationRequestT = Model::PutEventsConfigurationRequest>
        void PutEventsConfigurationAsync(const PutEventsConfigurationRequestT& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutEventsConfiguration, request, handler, context);
        }

        /**
         * <p> Puts retention settings for the specified Amazon Chime Enterprise account.
         * We recommend using AWS CloudTrail to monitor usage of this API for your account.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/cloudtrail.html">Logging
         * Amazon Chime API Calls with AWS CloudTrail</a> in the <i>Amazon Chime
         * Administration Guide</i>.</p> <p> To turn off existing retention settings,
         * remove the number of days from the corresponding <b>RetentionDays</b> field in
         * the <b>RetentionSettings</b> object. For more information about retention
         * settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionSettingsOutcome PutRetentionSettings(const Model::PutRetentionSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutRetentionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRetentionSettingsRequestT = Model::PutRetentionSettingsRequest>
        Model::PutRetentionSettingsOutcomeCallable PutRetentionSettingsCallable(const PutRetentionSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutRetentionSettings, request);
        }

        /**
         * An Async wrapper for PutRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRetentionSettingsRequestT = Model::PutRetentionSettingsRequest>
        void PutRetentionSettingsAsync(const PutRetentionSettingsRequestT& request, const PutRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutRetentionSettings, request, handler, context);
        }

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactConversationMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactConversationMessageOutcome RedactConversationMessage(const Model::RedactConversationMessageRequest& request) const;

        /**
         * A Callable wrapper for RedactConversationMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RedactConversationMessageRequestT = Model::RedactConversationMessageRequest>
        Model::RedactConversationMessageOutcomeCallable RedactConversationMessageCallable(const RedactConversationMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::RedactConversationMessage, request);
        }

        /**
         * An Async wrapper for RedactConversationMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RedactConversationMessageRequestT = Model::RedactConversationMessageRequest>
        void RedactConversationMessageAsync(const RedactConversationMessageRequestT& request, const RedactConversationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::RedactConversationMessage, request, handler, context);
        }

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactRoomMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactRoomMessageOutcome RedactRoomMessage(const Model::RedactRoomMessageRequest& request) const;

        /**
         * A Callable wrapper for RedactRoomMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RedactRoomMessageRequestT = Model::RedactRoomMessageRequest>
        Model::RedactRoomMessageOutcomeCallable RedactRoomMessageCallable(const RedactRoomMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::RedactRoomMessage, request);
        }

        /**
         * An Async wrapper for RedactRoomMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RedactRoomMessageRequestT = Model::RedactRoomMessageRequest>
        void RedactRoomMessageAsync(const RedactRoomMessageRequestT& request, const RedactRoomMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::RedactRoomMessage, request, handler, context);
        }

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RegenerateSecurityTokenOutcome RegenerateSecurityToken(const Model::RegenerateSecurityTokenRequest& request) const;

        /**
         * A Callable wrapper for RegenerateSecurityToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegenerateSecurityTokenRequestT = Model::RegenerateSecurityTokenRequest>
        Model::RegenerateSecurityTokenOutcomeCallable RegenerateSecurityTokenCallable(const RegenerateSecurityTokenRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::RegenerateSecurityToken, request);
        }

        /**
         * An Async wrapper for RegenerateSecurityToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegenerateSecurityTokenRequestT = Model::RegenerateSecurityTokenRequest>
        void RegenerateSecurityTokenAsync(const RegenerateSecurityTokenRequestT& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::RegenerateSecurityToken, request, handler, context);
        }

        /**
         * <p>Resets the personal meeting PIN for the specified user on an Amazon Chime
         * account. Returns the <a>User</a> object with the updated personal meeting
         * PIN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ResetPersonalPIN">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetPersonalPINOutcome ResetPersonalPIN(const Model::ResetPersonalPINRequest& request) const;

        /**
         * A Callable wrapper for ResetPersonalPIN that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetPersonalPINRequestT = Model::ResetPersonalPINRequest>
        Model::ResetPersonalPINOutcomeCallable ResetPersonalPINCallable(const ResetPersonalPINRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ResetPersonalPIN, request);
        }

        /**
         * An Async wrapper for ResetPersonalPIN that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetPersonalPINRequestT = Model::ResetPersonalPINRequest>
        void ResetPersonalPINAsync(const ResetPersonalPINRequestT& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ResetPersonalPIN, request, handler, context);
        }

        /**
         * <p>Moves a phone number from the <b>Deletion queue</b> back into the phone
         * number <b>Inventory</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RestorePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::RestorePhoneNumberOutcome RestorePhoneNumber(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for RestorePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestorePhoneNumberRequestT = Model::RestorePhoneNumberRequest>
        Model::RestorePhoneNumberOutcomeCallable RestorePhoneNumberCallable(const RestorePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::RestorePhoneNumber, request);
        }

        /**
         * An Async wrapper for RestorePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestorePhoneNumberRequestT = Model::RestorePhoneNumberRequest>
        void RestorePhoneNumberAsync(const RestorePhoneNumberRequestT& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::RestorePhoneNumber, request, handler, context);
        }

        /**
         * <p>Searches for phone numbers that can be ordered. For US numbers, provide at
         * least one of the following search filters: <code>AreaCode</code>,
         * <code>City</code>, <code>State</code>, or <code>TollFreePrefix</code>. If you
         * provide <code>City</code>, you must also provide <code>State</code>. Numbers
         * outside the US only support the <code>PhoneNumberType</code> filter, which you
         * must use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for SearchAvailablePhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchAvailablePhoneNumbersRequestT = Model::SearchAvailablePhoneNumbersRequest>
        Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const SearchAvailablePhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::SearchAvailablePhoneNumbers, request);
        }

        /**
         * An Async wrapper for SearchAvailablePhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchAvailablePhoneNumbersRequestT = Model::SearchAvailablePhoneNumbersRequest>
        void SearchAvailablePhoneNumbersAsync(const SearchAvailablePhoneNumbersRequestT& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::SearchAvailablePhoneNumbers, request, handler, context);
        }

        /**
         * <p>Updates account details for the specified Amazon Chime account. Currently,
         * only account name and default license updates are supported for this
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountOutcome UpdateAccount(const Model::UpdateAccountRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountRequestT = Model::UpdateAccountRequest>
        Model::UpdateAccountOutcomeCallable UpdateAccountCallable(const UpdateAccountRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateAccount, request);
        }

        /**
         * An Async wrapper for UpdateAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountRequestT = Model::UpdateAccountRequest>
        void UpdateAccountAsync(const UpdateAccountRequestT& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateAccount, request, handler, context);
        }

        /**
         * <p>Updates the settings for the specified Amazon Chime account. You can update
         * settings for remote control of shared screens, or for the dial-out option. For
         * more information about these settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const UpdateAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateAccountSettings, request);
        }

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        void UpdateAccountSettingsAsync(const UpdateAccountSettingsRequestT& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateAccountSettings, request, handler, context);
        }

        /**
         * <p>Updates the status of the specified bot, such as starting or stopping the bot
         * from running in your Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;

        /**
         * A Callable wrapper for UpdateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBotRequestT = Model::UpdateBotRequest>
        Model::UpdateBotOutcomeCallable UpdateBotCallable(const UpdateBotRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateBot, request);
        }

        /**
         * An Async wrapper for UpdateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBotRequestT = Model::UpdateBotRequest>
        void UpdateBotAsync(const UpdateBotRequestT& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateBot, request, handler, context);
        }

        /**
         * <p>Updates global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateGlobalSettings, request);
        }

        /**
         * An Async wrapper for UpdateGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        void UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequestT& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateGlobalSettings, request, handler, context);
        }

        /**
         * <p>Updates phone number details, such as product type or calling name, for the
         * specified phone number ID. You can update one phone number detail at a time. For
         * example, you can update either the product type or the calling name in one
         * action.</p> <p>For toll-free numbers, you cannot use the Amazon Chime Business
         * Calling product type. For numbers outside the U.S., you must use the Amazon
         * Chime SIP Media Application Dial-In product type.</p> <p>Updates to outbound
         * calling names can take 72 hours to complete. Pending updates to outbound calling
         * names must be complete before you can request another update.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const UpdatePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdatePhoneNumber, request);
        }

        /**
         * An Async wrapper for UpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        void UpdatePhoneNumberAsync(const UpdatePhoneNumberRequestT& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdatePhoneNumber, request, handler, context);
        }

        /**
         * <p>Updates the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name. You can update the default outbound
         * calling name once every seven days. Outbound calling names can take up to 72
         * hours to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumberSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberSettingsOutcome UpdatePhoneNumberSettings(const Model::UpdatePhoneNumberSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePhoneNumberSettingsRequestT = Model::UpdatePhoneNumberSettingsRequest>
        Model::UpdatePhoneNumberSettingsOutcomeCallable UpdatePhoneNumberSettingsCallable(const UpdatePhoneNumberSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdatePhoneNumberSettings, request);
        }

        /**
         * An Async wrapper for UpdatePhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePhoneNumberSettingsRequestT = Model::UpdatePhoneNumberSettingsRequest>
        void UpdatePhoneNumberSettingsAsync(const UpdatePhoneNumberSettingsRequestT& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdatePhoneNumberSettings, request, handler, context);
        }

        /**
         * <p>Updates room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoomRequestT = Model::UpdateRoomRequest>
        Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const UpdateRoomRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateRoom, request);
        }

        /**
         * An Async wrapper for UpdateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoomRequestT = Model::UpdateRoomRequest>
        void UpdateRoomAsync(const UpdateRoomRequestT& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateRoom, request, handler, context);
        }

        /**
         * <p>Updates room membership details, such as the member role, for a room in an
         * Amazon Chime Enterprise account. The member role designates whether the member
         * is a chat room administrator or a general chat room member. The member role can
         * be updated only for user IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomMembershipOutcome UpdateRoomMembership(const Model::UpdateRoomMembershipRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoomMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoomMembershipRequestT = Model::UpdateRoomMembershipRequest>
        Model::UpdateRoomMembershipOutcomeCallable UpdateRoomMembershipCallable(const UpdateRoomMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateRoomMembership, request);
        }

        /**
         * An Async wrapper for UpdateRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoomMembershipRequestT = Model::UpdateRoomMembershipRequest>
        void UpdateRoomMembershipAsync(const UpdateRoomMembershipRequestT& request, const UpdateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateRoomMembership, request, handler, context);
        }

        /**
         * <p>Updates user details for a specified user ID. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateUser, request, handler, context);
        }

        /**
         * <p>Updates the settings for the specified user, such as phone number
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSettingsOutcome UpdateUserSettings(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserSettingsRequestT = Model::UpdateUserSettingsRequest>
        Model::UpdateUserSettingsOutcomeCallable UpdateUserSettingsCallable(const UpdateUserSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateUserSettings, request);
        }

        /**
         * An Async wrapper for UpdateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserSettingsRequestT = Model::UpdateUserSettingsRequest>
        void UpdateUserSettingsAsync(const UpdateUserSettingsRequestT& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateUserSettings, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ChimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ChimeClient>;
      void init(const ChimeClientConfiguration& clientConfiguration);

      ChimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ChimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace Chime
} // namespace Aws
