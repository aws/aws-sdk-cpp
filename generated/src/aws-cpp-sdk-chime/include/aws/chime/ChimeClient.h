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

namespace Aws
{
namespace Chime
{
  /**
   * <p>The Amazon Chime application programming interface (API) is designed so
   * administrators can perform key tasks, such as creating and managing Amazon Chime
   * accounts, users, and Voice Connectors. This guide provides detailed information
   * about the Amazon Chime API, including operations, types, inputs and outputs, and
   * error codes.</p> <p>You can use an AWS SDK, the AWS Command Line Interface (AWS
   * CLI), or the REST API to make API calls for Amazon Chime. We recommend using an
   * AWS SDK or the AWS CLI. The page for each API action contains a <i>See Also</i>
   * section that includes links to information about using the action with a
   * language-specific AWS SDK or the AWS CLI.</p> <dl> <dt>Using an AWS SDK</dt>
   * <dd> <p> You don't need to write code to calculate a signature for request
   * authentication. The SDK clients authenticate your requests by using access keys
   * that you provide. For more information about AWS SDKs, see the <a
   * href="http://aws.amazon.com/developer/">AWS Developer Center</a>. </p> </dd>
   * <dt>Using the AWS CLI</dt> <dd> <p>Use your access keys with the AWS CLI to make
   * API calls. For information about setting up the AWS CLI, see <a
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef ChimeClientConfiguration ClientConfigurationType;
      typedef ChimeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Chime::ChimeClientConfiguration& clientConfiguration = Aws::Chime::ChimeClientConfiguration(),
                    std::shared_ptr<ChimeEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<ChimeEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Chime::ChimeClientConfiguration& clientConfiguration = Aws::Chime::ChimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<ChimeEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Associates phone numbers with the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcome AssociatePhoneNumbersWithVoiceConnector(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumbersWithVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorRequest>
        Model::AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorCallable(const AssociatePhoneNumbersWithVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::AssociatePhoneNumbersWithVoiceConnector, request);
        }

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorRequest>
        void AssociatePhoneNumbersWithVoiceConnectorAsync(const AssociatePhoneNumbersWithVoiceConnectorRequestT& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::AssociatePhoneNumbersWithVoiceConnector, request, handler, context);
        }

        /**
         * <p>Associates phone numbers with the specified Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcome AssociatePhoneNumbersWithVoiceConnectorGroup(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumbersWithVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorGroupRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest>
        Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorGroupCallable(const AssociatePhoneNumbersWithVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorGroupRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest>
        void AssociatePhoneNumbersWithVoiceConnectorGroupAsync(const AssociatePhoneNumbersWithVoiceConnectorGroupRequestT& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroup, request, handler, context);
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
         * <p> Creates up to 100 new attendees for an active Amazon Chime SDK meeting. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateAttendeeOutcome BatchCreateAttendee(const Model::BatchCreateAttendeeRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateAttendeeRequestT = Model::BatchCreateAttendeeRequest>
        Model::BatchCreateAttendeeOutcomeCallable BatchCreateAttendeeCallable(const BatchCreateAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchCreateAttendee, request);
        }

        /**
         * An Async wrapper for BatchCreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateAttendeeRequestT = Model::BatchCreateAttendeeRequest>
        void BatchCreateAttendeeAsync(const BatchCreateAttendeeRequestT& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchCreateAttendee, request, handler, context);
        }

        /**
         * <p>Adds a specified number of users to a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateChannelMembershipOutcome BatchCreateChannelMembership(const Model::BatchCreateChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateChannelMembershipRequestT = Model::BatchCreateChannelMembershipRequest>
        Model::BatchCreateChannelMembershipOutcomeCallable BatchCreateChannelMembershipCallable(const BatchCreateChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::BatchCreateChannelMembership, request);
        }

        /**
         * An Async wrapper for BatchCreateChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateChannelMembershipRequestT = Model::BatchCreateChannelMembershipRequest>
        void BatchCreateChannelMembershipAsync(const BatchCreateChannelMembershipRequestT& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::BatchCreateChannelMembership, request, handler, context);
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
         * <a>LogoutUser</a> action. </p><p><h3>See Also:</h3>   <a
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
         * Chime Administration Guide</i>. </p> <p> Previously suspended users who are
         * unsuspended using this action are returned to <code>Registered</code> status.
         * Users who are not previously suspended are ignored. </p><p><h3>See Also:</h3>  
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
         * <p>Creates an Amazon Chime SDK messaging <code>AppInstance</code> under an AWS
         * account. Only SDK messaging customers use this API.
         * <code>CreateAppInstance</code> supports idempotency behavior as described in the
         * AWS API Standard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceOutcome CreateAppInstance(const Model::CreateAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppInstanceRequestT = Model::CreateAppInstanceRequest>
        Model::CreateAppInstanceOutcomeCallable CreateAppInstanceCallable(const CreateAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateAppInstance, request);
        }

        /**
         * An Async wrapper for CreateAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppInstanceRequestT = Model::CreateAppInstanceRequest>
        void CreateAppInstanceAsync(const CreateAppInstanceRequestT& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateAppInstance, request, handler, context);
        }

        /**
         * <p>Promotes an <code>AppInstanceUser</code> to an <code>AppInstanceAdmin</code>.
         * The promoted user can perform the following actions. </p> <ul> <li> <p>
         * <code>ChannelModerator</code> actions across all channels in the
         * <code>AppInstance</code>.</p> </li> <li> <p> <code>DeleteChannelMessage</code>
         * actions.</p> </li> </ul> <p>Only an <code>AppInstanceUser</code> can be promoted
         * to an <code>AppInstanceAdmin</code> role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceAdminOutcome CreateAppInstanceAdmin(const Model::CreateAppInstanceAdminRequest& request) const;

        /**
         * A Callable wrapper for CreateAppInstanceAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppInstanceAdminRequestT = Model::CreateAppInstanceAdminRequest>
        Model::CreateAppInstanceAdminOutcomeCallable CreateAppInstanceAdminCallable(const CreateAppInstanceAdminRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateAppInstanceAdmin, request);
        }

        /**
         * An Async wrapper for CreateAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppInstanceAdminRequestT = Model::CreateAppInstanceAdminRequest>
        void CreateAppInstanceAdminAsync(const CreateAppInstanceAdminRequestT& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateAppInstanceAdmin, request, handler, context);
        }

        /**
         * <p>Creates a user under an Amazon Chime <code>AppInstance</code>. The request
         * consists of a unique <code>appInstanceUserId</code> and <code>Name</code> for
         * that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceUserOutcome CreateAppInstanceUser(const Model::CreateAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for CreateAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppInstanceUserRequestT = Model::CreateAppInstanceUserRequest>
        Model::CreateAppInstanceUserOutcomeCallable CreateAppInstanceUserCallable(const CreateAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateAppInstanceUser, request);
        }

        /**
         * An Async wrapper for CreateAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppInstanceUserRequestT = Model::CreateAppInstanceUserRequest>
        void CreateAppInstanceUserAsync(const CreateAppInstanceUserRequestT& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateAppInstanceUser, request, handler, context);
        }

        /**
         * <p> Creates a new attendee for an active Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAttendeeOutcome CreateAttendee(const Model::CreateAttendeeRequest& request) const;

        /**
         * A Callable wrapper for CreateAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAttendeeRequestT = Model::CreateAttendeeRequest>
        Model::CreateAttendeeOutcomeCallable CreateAttendeeCallable(const CreateAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateAttendee, request);
        }

        /**
         * An Async wrapper for CreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAttendeeRequestT = Model::CreateAttendeeRequest>
        void CreateAttendeeAsync(const CreateAttendeeRequestT& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateAttendee, request, handler, context);
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
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateChannel, request, handler, context);
        }

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels.</p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelBanOutcome CreateChannelBan(const Model::CreateChannelBanRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelBan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelBanRequestT = Model::CreateChannelBanRequest>
        Model::CreateChannelBanOutcomeCallable CreateChannelBanCallable(const CreateChannelBanRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateChannelBan, request);
        }

        /**
         * An Async wrapper for CreateChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelBanRequestT = Model::CreateChannelBanRequest>
        void CreateChannelBanAsync(const CreateChannelBanRequestT& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateChannelBan, request, handler, context);
        }

        /**
         * <p>Adds a user to a channel. The <code>InvitedBy</code> response field is
         * derived from the request header. A channel member can:</p> <ul> <li> <p>List
         * messages</p> </li> <li> <p>Send messages</p> </li> <li> <p>Receive messages</p>
         * </li> <li> <p>Edit their own messages</p> </li> <li> <p>Leave the channel</p>
         * </li> </ul> <p>Privacy settings impact this action as follows:</p> <ul> <li>
         * <p>Public Channels: You do not need to be a member to list messages, but you
         * must be a member to send messages.</p> </li> <li> <p>Private Channels: You must
         * be a member to list or send messages.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelMembershipOutcome CreateChannelMembership(const Model::CreateChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelMembershipRequestT = Model::CreateChannelMembershipRequest>
        Model::CreateChannelMembershipOutcomeCallable CreateChannelMembershipCallable(const CreateChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateChannelMembership, request);
        }

        /**
         * An Async wrapper for CreateChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelMembershipRequestT = Model::CreateChannelMembershipRequest>
        void CreateChannelMembershipAsync(const CreateChannelMembershipRequestT& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateChannelMembership, request, handler, context);
        }

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelModeratorOutcome CreateChannelModerator(const Model::CreateChannelModeratorRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelModerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelModeratorRequestT = Model::CreateChannelModeratorRequest>
        Model::CreateChannelModeratorOutcomeCallable CreateChannelModeratorCallable(const CreateChannelModeratorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateChannelModerator, request);
        }

        /**
         * An Async wrapper for CreateChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelModeratorRequestT = Model::CreateChannelModeratorRequest>
        void CreateChannelModeratorAsync(const CreateChannelModeratorRequestT& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateChannelModerator, request, handler, context);
        }

        /**
         * <p>Creates a media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaCapturePipelineOutcome CreateMediaCapturePipeline(const Model::CreateMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMediaCapturePipelineRequestT = Model::CreateMediaCapturePipelineRequest>
        Model::CreateMediaCapturePipelineOutcomeCallable CreateMediaCapturePipelineCallable(const CreateMediaCapturePipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateMediaCapturePipeline, request);
        }

        /**
         * An Async wrapper for CreateMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMediaCapturePipelineRequestT = Model::CreateMediaCapturePipelineRequest>
        void CreateMediaCapturePipelineAsync(const CreateMediaCapturePipelineRequestT& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateMediaCapturePipeline, request, handler, context);
        }

        /**
         * <p> Creates a new Amazon Chime SDK meeting in the specified media Region with no
         * initial attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime SDK Developer Guide</i> . For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer Guide</i> .
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingOutcome CreateMeeting(const Model::CreateMeetingRequest& request) const;

        /**
         * A Callable wrapper for CreateMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMeetingRequestT = Model::CreateMeetingRequest>
        Model::CreateMeetingOutcomeCallable CreateMeetingCallable(const CreateMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateMeeting, request);
        }

        /**
         * An Async wrapper for CreateMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMeetingRequestT = Model::CreateMeetingRequest>
        void CreateMeetingAsync(const CreateMeetingRequestT& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateMeeting, request, handler, context);
        }

        /**
         * <p>Uses the join token and call metadata in a meeting request (From number, To
         * number, and so forth) to initiate an outbound call to a public switched
         * telephone network (PSTN) and join them into a Chime meeting. Also ensures that
         * the From number belongs to the customer.</p> <p>To play welcome audio or
         * implement an interactive voice response (IVR), use the
         * <code>CreateSipMediaApplicationCall</code> action with the corresponding SIP
         * media application ID.</p><p><h3>See Also:</h3>   <a
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
         * <p> Creates a new Amazon Chime SDK meeting in the specified media Region, with
         * attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime SDK Developer Guide</i> . For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer Guide</i> .
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingWithAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingWithAttendeesOutcome CreateMeetingWithAttendees(const Model::CreateMeetingWithAttendeesRequest& request) const;

        /**
         * A Callable wrapper for CreateMeetingWithAttendees that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMeetingWithAttendeesRequestT = Model::CreateMeetingWithAttendeesRequest>
        Model::CreateMeetingWithAttendeesOutcomeCallable CreateMeetingWithAttendeesCallable(const CreateMeetingWithAttendeesRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateMeetingWithAttendees, request);
        }

        /**
         * An Async wrapper for CreateMeetingWithAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMeetingWithAttendeesRequestT = Model::CreateMeetingWithAttendeesRequest>
        void CreateMeetingWithAttendeesAsync(const CreateMeetingWithAttendeesRequestT& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateMeetingWithAttendees, request, handler, context);
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
         * <p>Creates a proxy session on the specified Amazon Chime Voice Connector for the
         * specified participant phone numbers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProxySessionOutcome CreateProxySession(const Model::CreateProxySessionRequest& request) const;

        /**
         * A Callable wrapper for CreateProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProxySessionRequestT = Model::CreateProxySessionRequest>
        Model::CreateProxySessionOutcomeCallable CreateProxySessionCallable(const CreateProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateProxySession, request);
        }

        /**
         * An Async wrapper for CreateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProxySessionRequestT = Model::CreateProxySessionRequest>
        void CreateProxySessionAsync(const CreateProxySessionRequestT& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateProxySession, request, handler, context);
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
         * <p>Creates a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipMediaApplicationOutcome CreateSipMediaApplication(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSipMediaApplicationRequestT = Model::CreateSipMediaApplicationRequest>
        Model::CreateSipMediaApplicationOutcomeCallable CreateSipMediaApplicationCallable(const CreateSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateSipMediaApplication, request);
        }

        /**
         * An Async wrapper for CreateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSipMediaApplicationRequestT = Model::CreateSipMediaApplicationRequest>
        void CreateSipMediaApplicationAsync(const CreateSipMediaApplicationRequestT& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Creates an outbound call to a phone number from the phone number specified in
         * the request, and it invokes the endpoint of the specified
         * <code>sipMediaApplicationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplicationCall">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipMediaApplicationCallOutcome CreateSipMediaApplicationCall(const Model::CreateSipMediaApplicationCallRequest& request) const;

        /**
         * A Callable wrapper for CreateSipMediaApplicationCall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSipMediaApplicationCallRequestT = Model::CreateSipMediaApplicationCallRequest>
        Model::CreateSipMediaApplicationCallOutcomeCallable CreateSipMediaApplicationCallCallable(const CreateSipMediaApplicationCallRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateSipMediaApplicationCall, request);
        }

        /**
         * An Async wrapper for CreateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSipMediaApplicationCallRequestT = Model::CreateSipMediaApplicationCallRequest>
        void CreateSipMediaApplicationCallAsync(const CreateSipMediaApplicationCallRequestT& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateSipMediaApplicationCall, request, handler, context);
        }

        /**
         * <p>Creates a SIP rule which can be used to run a SIP media application as a
         * target for a specific trigger type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipRuleOutcome CreateSipRule(const Model::CreateSipRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSipRuleRequestT = Model::CreateSipRuleRequest>
        Model::CreateSipRuleOutcomeCallable CreateSipRuleCallable(const CreateSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateSipRule, request);
        }

        /**
         * An Async wrapper for CreateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSipRuleRequestT = Model::CreateSipRuleRequest>
        void CreateSipRuleAsync(const CreateSipRuleRequestT& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateSipRule, request, handler, context);
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
         * <p>Creates an Amazon Chime Voice Connector under the administrator's AWS
         * account. You can choose to create an Amazon Chime Voice Connector in a specific
         * AWS Region.</p> <p> Enabling
         * <a>CreateVoiceConnectorRequest$RequireEncryption</a> configures your Amazon
         * Chime Voice Connector to use TLS transport for SIP signaling and Secure RTP
         * (SRTP) for media. Inbound calls use TLS transport, and unencrypted outbound
         * calls are blocked. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceConnectorOutcome CreateVoiceConnector(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVoiceConnectorRequestT = Model::CreateVoiceConnectorRequest>
        Model::CreateVoiceConnectorOutcomeCallable CreateVoiceConnectorCallable(const CreateVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateVoiceConnector, request);
        }

        /**
         * An Async wrapper for CreateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVoiceConnectorRequestT = Model::CreateVoiceConnectorRequest>
        void CreateVoiceConnectorAsync(const CreateVoiceConnectorRequestT& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateVoiceConnector, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Chime Voice Connector group under the administrator's AWS
         * account. You can associate Amazon Chime Voice Connectors with the Amazon Chime
         * Voice Connector group by including <code>VoiceConnectorItems</code> in the
         * request.</p> <p>You can include Amazon Chime Voice Connectors from different AWS
         * Regions in your group. This creates a fault tolerant mechanism for fallback in
         * case of availability events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceConnectorGroupOutcome CreateVoiceConnectorGroup(const Model::CreateVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVoiceConnectorGroupRequestT = Model::CreateVoiceConnectorGroupRequest>
        Model::CreateVoiceConnectorGroupOutcomeCallable CreateVoiceConnectorGroupCallable(const CreateVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::CreateVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for CreateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVoiceConnectorGroupRequestT = Model::CreateVoiceConnectorGroupRequest>
        void CreateVoiceConnectorGroupAsync(const CreateVoiceConnectorGroupRequestT& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::CreateVoiceConnectorGroup, request, handler, context);
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
         * <p>Deletes an <code>AppInstance</code> and all associated data
         * asynchronously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceOutcome DeleteAppInstance(const Model::DeleteAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInstanceRequestT = Model::DeleteAppInstanceRequest>
        Model::DeleteAppInstanceOutcomeCallable DeleteAppInstanceCallable(const DeleteAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteAppInstance, request);
        }

        /**
         * An Async wrapper for DeleteAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInstanceRequestT = Model::DeleteAppInstanceRequest>
        void DeleteAppInstanceAsync(const DeleteAppInstanceRequestT& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteAppInstance, request, handler, context);
        }

        /**
         * <p>Demotes an <code>AppInstanceAdmin</code> to an <code>AppInstanceUser</code>.
         * This action does not delete the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceAdminOutcome DeleteAppInstanceAdmin(const Model::DeleteAppInstanceAdminRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstanceAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInstanceAdminRequestT = Model::DeleteAppInstanceAdminRequest>
        Model::DeleteAppInstanceAdminOutcomeCallable DeleteAppInstanceAdminCallable(const DeleteAppInstanceAdminRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteAppInstanceAdmin, request);
        }

        /**
         * An Async wrapper for DeleteAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInstanceAdminRequestT = Model::DeleteAppInstanceAdminRequest>
        void DeleteAppInstanceAdminAsync(const DeleteAppInstanceAdminRequestT& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteAppInstanceAdmin, request, handler, context);
        }

        /**
         * <p>Deletes the streaming configurations of an
         * <code>AppInstance</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceStreamingConfigurationsOutcome DeleteAppInstanceStreamingConfigurations(const Model::DeleteAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstanceStreamingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInstanceStreamingConfigurationsRequestT = Model::DeleteAppInstanceStreamingConfigurationsRequest>
        Model::DeleteAppInstanceStreamingConfigurationsOutcomeCallable DeleteAppInstanceStreamingConfigurationsCallable(const DeleteAppInstanceStreamingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteAppInstanceStreamingConfigurations, request);
        }

        /**
         * An Async wrapper for DeleteAppInstanceStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInstanceStreamingConfigurationsRequestT = Model::DeleteAppInstanceStreamingConfigurationsRequest>
        void DeleteAppInstanceStreamingConfigurationsAsync(const DeleteAppInstanceStreamingConfigurationsRequestT& request, const DeleteAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteAppInstanceStreamingConfigurations, request, handler, context);
        }

        /**
         * <p>Deletes an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceUserOutcome DeleteAppInstanceUser(const Model::DeleteAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInstanceUserRequestT = Model::DeleteAppInstanceUserRequest>
        Model::DeleteAppInstanceUserOutcomeCallable DeleteAppInstanceUserCallable(const DeleteAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DeleteAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInstanceUserRequestT = Model::DeleteAppInstanceUserRequest>
        void DeleteAppInstanceUserAsync(const DeleteAppInstanceUserRequestT& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Deletes an attendee from the specified Amazon Chime SDK meeting and deletes
         * their <code>JoinToken</code>. Attendees are automatically deleted when a Amazon
         * Chime SDK meeting is deleted. For more information about the Amazon Chime SDK,
         * see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttendeeOutcome DeleteAttendee(const Model::DeleteAttendeeRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAttendeeRequestT = Model::DeleteAttendeeRequest>
        Model::DeleteAttendeeOutcomeCallable DeleteAttendeeCallable(const DeleteAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteAttendee, request);
        }

        /**
         * An Async wrapper for DeleteAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAttendeeRequestT = Model::DeleteAttendeeRequest>
        void DeleteAttendeeAsync(const DeleteAttendeeRequestT& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteAttendee, request, handler, context);
        }

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteChannel, request, handler, context);
        }

        /**
         * <p>Removes a user from a channel's ban list.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelBanOutcome DeleteChannelBan(const Model::DeleteChannelBanRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelBan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelBanRequestT = Model::DeleteChannelBanRequest>
        Model::DeleteChannelBanOutcomeCallable DeleteChannelBanCallable(const DeleteChannelBanRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteChannelBan, request);
        }

        /**
         * An Async wrapper for DeleteChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelBanRequestT = Model::DeleteChannelBanRequest>
        void DeleteChannelBanAsync(const DeleteChannelBanRequestT& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteChannelBan, request, handler, context);
        }

        /**
         * <p>Removes a member from a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMembershipOutcome DeleteChannelMembership(const Model::DeleteChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelMembershipRequestT = Model::DeleteChannelMembershipRequest>
        Model::DeleteChannelMembershipOutcomeCallable DeleteChannelMembershipCallable(const DeleteChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteChannelMembership, request);
        }

        /**
         * An Async wrapper for DeleteChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelMembershipRequestT = Model::DeleteChannelMembershipRequest>
        void DeleteChannelMembershipAsync(const DeleteChannelMembershipRequestT& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteChannelMembership, request, handler, context);
        }

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMessageOutcome DeleteChannelMessage(const Model::DeleteChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelMessageRequestT = Model::DeleteChannelMessageRequest>
        Model::DeleteChannelMessageOutcomeCallable DeleteChannelMessageCallable(const DeleteChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteChannelMessage, request);
        }

        /**
         * An Async wrapper for DeleteChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelMessageRequestT = Model::DeleteChannelMessageRequest>
        void DeleteChannelMessageAsync(const DeleteChannelMessageRequestT& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteChannelMessage, request, handler, context);
        }

        /**
         * <p>Deletes a channel moderator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelModeratorOutcome DeleteChannelModerator(const Model::DeleteChannelModeratorRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelModerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelModeratorRequestT = Model::DeleteChannelModeratorRequest>
        Model::DeleteChannelModeratorOutcomeCallable DeleteChannelModeratorCallable(const DeleteChannelModeratorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteChannelModerator, request);
        }

        /**
         * An Async wrapper for DeleteChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelModeratorRequestT = Model::DeleteChannelModeratorRequest>
        void DeleteChannelModeratorAsync(const DeleteChannelModeratorRequestT& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteChannelModerator, request, handler, context);
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
         * <p>Deletes the media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaCapturePipelineOutcome DeleteMediaCapturePipeline(const Model::DeleteMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMediaCapturePipelineRequestT = Model::DeleteMediaCapturePipelineRequest>
        Model::DeleteMediaCapturePipelineOutcomeCallable DeleteMediaCapturePipelineCallable(const DeleteMediaCapturePipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteMediaCapturePipeline, request);
        }

        /**
         * An Async wrapper for DeleteMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMediaCapturePipelineRequestT = Model::DeleteMediaCapturePipelineRequest>
        void DeleteMediaCapturePipelineAsync(const DeleteMediaCapturePipelineRequestT& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteMediaCapturePipeline, request, handler, context);
        }

        /**
         * <p>Deletes the specified Amazon Chime SDK meeting. The operation deletes all
         * attendees, disconnects all clients, and prevents new clients from joining the
         * meeting. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeetingOutcome DeleteMeeting(const Model::DeleteMeetingRequest& request) const;

        /**
         * A Callable wrapper for DeleteMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMeetingRequestT = Model::DeleteMeetingRequest>
        Model::DeleteMeetingOutcomeCallable DeleteMeetingCallable(const DeleteMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteMeeting, request);
        }

        /**
         * An Async wrapper for DeleteMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMeetingRequestT = Model::DeleteMeetingRequest>
        void DeleteMeetingAsync(const DeleteMeetingRequestT& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteMeeting, request, handler, context);
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
         * <p>Deletes the specified proxy session from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProxySessionOutcome DeleteProxySession(const Model::DeleteProxySessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProxySessionRequestT = Model::DeleteProxySessionRequest>
        Model::DeleteProxySessionOutcomeCallable DeleteProxySessionCallable(const DeleteProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteProxySession, request);
        }

        /**
         * An Async wrapper for DeleteProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProxySessionRequestT = Model::DeleteProxySessionRequest>
        void DeleteProxySessionAsync(const DeleteProxySessionRequestT& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteProxySession, request, handler, context);
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
         * <p>Deletes a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSipMediaApplicationOutcome DeleteSipMediaApplication(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSipMediaApplicationRequestT = Model::DeleteSipMediaApplicationRequest>
        Model::DeleteSipMediaApplicationOutcomeCallable DeleteSipMediaApplicationCallable(const DeleteSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteSipMediaApplication, request);
        }

        /**
         * An Async wrapper for DeleteSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSipMediaApplicationRequestT = Model::DeleteSipMediaApplicationRequest>
        void DeleteSipMediaApplicationAsync(const DeleteSipMediaApplicationRequestT& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Deletes a SIP rule. You must disable a SIP rule before you can delete
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSipRuleOutcome DeleteSipRule(const Model::DeleteSipRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSipRuleRequestT = Model::DeleteSipRuleRequest>
        Model::DeleteSipRuleOutcomeCallable DeleteSipRuleCallable(const DeleteSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteSipRule, request);
        }

        /**
         * An Async wrapper for DeleteSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSipRuleRequestT = Model::DeleteSipRuleRequest>
        void DeleteSipRuleAsync(const DeleteSipRuleRequestT& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteSipRule, request, handler, context);
        }

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector. Any phone numbers
         * associated with the Amazon Chime Voice Connector must be disassociated from it
         * before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOutcome DeleteVoiceConnector(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorRequestT = Model::DeleteVoiceConnectorRequest>
        Model::DeleteVoiceConnectorOutcomeCallable DeleteVoiceConnectorCallable(const DeleteVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnector, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorRequestT = Model::DeleteVoiceConnectorRequest>
        void DeleteVoiceConnectorAsync(const DeleteVoiceConnectorRequestT& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnector, request, handler, context);
        }

        /**
         * <p>Deletes the emergency calling configuration details from the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcome DeleteVoiceConnectorEmergencyCallingConfiguration(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorEmergencyCallingConfigurationRequestT = Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest>
        Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable DeleteVoiceConnectorEmergencyCallingConfigurationCallable(const DeleteVoiceConnectorEmergencyCallingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnectorEmergencyCallingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorEmergencyCallingConfigurationRequestT = Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest>
        void DeleteVoiceConnectorEmergencyCallingConfigurationAsync(const DeleteVoiceConnectorEmergencyCallingConfigurationRequestT& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnectorEmergencyCallingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector group. Any
         * <code>VoiceConnectorItems</code> and phone numbers associated with the group
         * must be removed before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorGroupOutcome DeleteVoiceConnectorGroup(const Model::DeleteVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorGroupRequestT = Model::DeleteVoiceConnectorGroupRequest>
        Model::DeleteVoiceConnectorGroupOutcomeCallable DeleteVoiceConnectorGroupCallable(const DeleteVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorGroupRequestT = Model::DeleteVoiceConnectorGroupRequest>
        void DeleteVoiceConnectorGroupAsync(const DeleteVoiceConnectorGroupRequestT& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the origination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcome DeleteVoiceConnectorOrigination(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorOriginationRequestT = Model::DeleteVoiceConnectorOriginationRequest>
        Model::DeleteVoiceConnectorOriginationOutcomeCallable DeleteVoiceConnectorOriginationCallable(const DeleteVoiceConnectorOriginationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnectorOrigination, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorOriginationRequestT = Model::DeleteVoiceConnectorOriginationRequest>
        void DeleteVoiceConnectorOriginationAsync(const DeleteVoiceConnectorOriginationRequestT& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnectorOrigination, request, handler, context);
        }

        /**
         * <p>Deletes the proxy configuration from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorProxyOutcome DeleteVoiceConnectorProxy(const Model::DeleteVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorProxyRequestT = Model::DeleteVoiceConnectorProxyRequest>
        Model::DeleteVoiceConnectorProxyOutcomeCallable DeleteVoiceConnectorProxyCallable(const DeleteVoiceConnectorProxyRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnectorProxy, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorProxyRequestT = Model::DeleteVoiceConnectorProxyRequest>
        void DeleteVoiceConnectorProxyAsync(const DeleteVoiceConnectorProxyRequestT& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnectorProxy, request, handler, context);
        }

        /**
         * <p>Deletes the streaming configuration for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorStreamingConfigurationOutcome DeleteVoiceConnectorStreamingConfiguration(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorStreamingConfigurationRequestT = Model::DeleteVoiceConnectorStreamingConfigurationRequest>
        Model::DeleteVoiceConnectorStreamingConfigurationOutcomeCallable DeleteVoiceConnectorStreamingConfigurationCallable(const DeleteVoiceConnectorStreamingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnectorStreamingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorStreamingConfigurationRequestT = Model::DeleteVoiceConnectorStreamingConfigurationRequest>
        void DeleteVoiceConnectorStreamingConfigurationAsync(const DeleteVoiceConnectorStreamingConfigurationRequestT& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnectorStreamingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the termination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcome DeleteVoiceConnectorTermination(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorTerminationRequestT = Model::DeleteVoiceConnectorTerminationRequest>
        Model::DeleteVoiceConnectorTerminationOutcomeCallable DeleteVoiceConnectorTerminationCallable(const DeleteVoiceConnectorTerminationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnectorTermination, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorTerminationRequestT = Model::DeleteVoiceConnectorTerminationRequest>
        void DeleteVoiceConnectorTerminationAsync(const DeleteVoiceConnectorTerminationRequestT& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnectorTermination, request, handler, context);
        }

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcome DeleteVoiceConnectorTerminationCredentials(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorTerminationCredentialsRequestT = Model::DeleteVoiceConnectorTerminationCredentialsRequest>
        Model::DeleteVoiceConnectorTerminationCredentialsOutcomeCallable DeleteVoiceConnectorTerminationCredentialsCallable(const DeleteVoiceConnectorTerminationCredentialsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DeleteVoiceConnectorTerminationCredentials, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorTerminationCredentialsRequestT = Model::DeleteVoiceConnectorTerminationCredentialsRequest>
        void DeleteVoiceConnectorTerminationCredentialsAsync(const DeleteVoiceConnectorTerminationCredentialsRequestT& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DeleteVoiceConnectorTerminationCredentials, request, handler, context);
        }

        /**
         * <p>Returns the full details of an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceOutcome DescribeAppInstance(const Model::DescribeAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppInstanceRequestT = Model::DescribeAppInstanceRequest>
        Model::DescribeAppInstanceOutcomeCallable DescribeAppInstanceCallable(const DescribeAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeAppInstance, request);
        }

        /**
         * An Async wrapper for DescribeAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppInstanceRequestT = Model::DescribeAppInstanceRequest>
        void DescribeAppInstanceAsync(const DescribeAppInstanceRequestT& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeAppInstance, request, handler, context);
        }

        /**
         * <p>Returns the full details of an <code>AppInstanceAdmin</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceAdminOutcome DescribeAppInstanceAdmin(const Model::DescribeAppInstanceAdminRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppInstanceAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppInstanceAdminRequestT = Model::DescribeAppInstanceAdminRequest>
        Model::DescribeAppInstanceAdminOutcomeCallable DescribeAppInstanceAdminCallable(const DescribeAppInstanceAdminRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeAppInstanceAdmin, request);
        }

        /**
         * An Async wrapper for DescribeAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppInstanceAdminRequestT = Model::DescribeAppInstanceAdminRequest>
        void DescribeAppInstanceAdminAsync(const DescribeAppInstanceAdminRequestT& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeAppInstanceAdmin, request, handler, context);
        }

        /**
         * <p>Returns the full details of an <code>AppInstanceUser</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceUserOutcome DescribeAppInstanceUser(const Model::DescribeAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppInstanceUserRequestT = Model::DescribeAppInstanceUserRequest>
        Model::DescribeAppInstanceUserOutcomeCallable DescribeAppInstanceUserCallable(const DescribeAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DescribeAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppInstanceUserRequestT = Model::DescribeAppInstanceUserRequest>
        void DescribeAppInstanceUserAsync(const DescribeAppInstanceUserRequestT& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Returns the full details of a channel in an Amazon Chime
         * <code>AppInstance</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const DescribeChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeChannel, request);
        }

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        void DescribeChannelAsync(const DescribeChannelRequestT& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeChannel, request, handler, context);
        }

        /**
         * <p>Returns the full details of a channel ban.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelBanOutcome DescribeChannelBan(const Model::DescribeChannelBanRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelBan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelBanRequestT = Model::DescribeChannelBanRequest>
        Model::DescribeChannelBanOutcomeCallable DescribeChannelBanCallable(const DescribeChannelBanRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeChannelBan, request);
        }

        /**
         * An Async wrapper for DescribeChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelBanRequestT = Model::DescribeChannelBanRequest>
        void DescribeChannelBanAsync(const DescribeChannelBanRequestT& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeChannelBan, request, handler, context);
        }

        /**
         * <p>Returns the full details of a user's channel membership.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipOutcome DescribeChannelMembership(const Model::DescribeChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelMembershipRequestT = Model::DescribeChannelMembershipRequest>
        Model::DescribeChannelMembershipOutcomeCallable DescribeChannelMembershipCallable(const DescribeChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeChannelMembership, request);
        }

        /**
         * An Async wrapper for DescribeChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelMembershipRequestT = Model::DescribeChannelMembershipRequest>
        void DescribeChannelMembershipAsync(const DescribeChannelMembershipRequestT& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeChannelMembership, request, handler, context);
        }

        /**
         * <p> Returns the details of a channel based on the membership of the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipForAppInstanceUserOutcome DescribeChannelMembershipForAppInstanceUser(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelMembershipForAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelMembershipForAppInstanceUserRequestT = Model::DescribeChannelMembershipForAppInstanceUserRequest>
        Model::DescribeChannelMembershipForAppInstanceUserOutcomeCallable DescribeChannelMembershipForAppInstanceUserCallable(const DescribeChannelMembershipForAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeChannelMembershipForAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DescribeChannelMembershipForAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelMembershipForAppInstanceUserRequestT = Model::DescribeChannelMembershipForAppInstanceUserRequest>
        void DescribeChannelMembershipForAppInstanceUserAsync(const DescribeChannelMembershipForAppInstanceUserRequestT& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeChannelMembershipForAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratedByAppInstanceUserOutcome DescribeChannelModeratedByAppInstanceUser(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelModeratedByAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelModeratedByAppInstanceUserRequestT = Model::DescribeChannelModeratedByAppInstanceUserRequest>
        Model::DescribeChannelModeratedByAppInstanceUserOutcomeCallable DescribeChannelModeratedByAppInstanceUserCallable(const DescribeChannelModeratedByAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeChannelModeratedByAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DescribeChannelModeratedByAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelModeratedByAppInstanceUserRequestT = Model::DescribeChannelModeratedByAppInstanceUserRequest>
        void DescribeChannelModeratedByAppInstanceUserAsync(const DescribeChannelModeratedByAppInstanceUserRequestT& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeChannelModeratedByAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Returns the full details of a single ChannelModerator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratorOutcome DescribeChannelModerator(const Model::DescribeChannelModeratorRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelModerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelModeratorRequestT = Model::DescribeChannelModeratorRequest>
        Model::DescribeChannelModeratorOutcomeCallable DescribeChannelModeratorCallable(const DescribeChannelModeratorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DescribeChannelModerator, request);
        }

        /**
         * An Async wrapper for DescribeChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelModeratorRequestT = Model::DescribeChannelModeratorRequest>
        void DescribeChannelModeratorAsync(const DescribeChannelModeratorRequestT& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DescribeChannelModerator, request, handler, context);
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
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome DisassociatePhoneNumbersFromVoiceConnector(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumbersFromVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorRequest>
        Model::DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorCallable(const DisassociatePhoneNumbersFromVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnector, request);
        }

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorRequest>
        void DisassociatePhoneNumbersFromVoiceConnectorAsync(const DisassociatePhoneNumbersFromVoiceConnectorRequestT& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnector, request, handler, context);
        }

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome DisassociatePhoneNumbersFromVoiceConnectorGroup(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumbersFromVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest>
        Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest>
        void DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroup, request, handler, context);
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
         * <p>Gets the retention settings for an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppInstanceRetentionSettingsOutcome GetAppInstanceRetentionSettings(const Model::GetAppInstanceRetentionSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAppInstanceRetentionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppInstanceRetentionSettingsRequestT = Model::GetAppInstanceRetentionSettingsRequest>
        Model::GetAppInstanceRetentionSettingsOutcomeCallable GetAppInstanceRetentionSettingsCallable(const GetAppInstanceRetentionSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetAppInstanceRetentionSettings, request);
        }

        /**
         * An Async wrapper for GetAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppInstanceRetentionSettingsRequestT = Model::GetAppInstanceRetentionSettingsRequest>
        void GetAppInstanceRetentionSettingsAsync(const GetAppInstanceRetentionSettingsRequestT& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetAppInstanceRetentionSettings, request, handler, context);
        }

        /**
         * <p>Gets the streaming settings for an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppInstanceStreamingConfigurationsOutcome GetAppInstanceStreamingConfigurations(const Model::GetAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for GetAppInstanceStreamingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppInstanceStreamingConfigurationsRequestT = Model::GetAppInstanceStreamingConfigurationsRequest>
        Model::GetAppInstanceStreamingConfigurationsOutcomeCallable GetAppInstanceStreamingConfigurationsCallable(const GetAppInstanceStreamingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetAppInstanceStreamingConfigurations, request);
        }

        /**
         * An Async wrapper for GetAppInstanceStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppInstanceStreamingConfigurationsRequestT = Model::GetAppInstanceStreamingConfigurationsRequest>
        void GetAppInstanceStreamingConfigurationsAsync(const GetAppInstanceStreamingConfigurationsRequestT& request, const GetAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetAppInstanceStreamingConfigurations, request, handler, context);
        }

        /**
         * <p> Gets the Amazon Chime SDK attendee details for a specified meeting ID and
         * attendee ID. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer Guide</i> .
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttendeeOutcome GetAttendee(const Model::GetAttendeeRequest& request) const;

        /**
         * A Callable wrapper for GetAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAttendeeRequestT = Model::GetAttendeeRequest>
        Model::GetAttendeeOutcomeCallable GetAttendeeCallable(const GetAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetAttendee, request);
        }

        /**
         * An Async wrapper for GetAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAttendeeRequestT = Model::GetAttendeeRequest>
        void GetAttendeeAsync(const GetAttendeeRequestT& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetAttendee, request, handler, context);
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
         * <p>Gets the full details of a channel message.</p>  <p>The
         * x-amz-chime-bearer request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMessageOutcome GetChannelMessage(const Model::GetChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for GetChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelMessageRequestT = Model::GetChannelMessageRequest>
        Model::GetChannelMessageOutcomeCallable GetChannelMessageCallable(const GetChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetChannelMessage, request);
        }

        /**
         * An Async wrapper for GetChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelMessageRequestT = Model::GetChannelMessageRequest>
        void GetChannelMessageAsync(const GetChannelMessageRequestT& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetChannelMessage, request, handler, context);
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
        virtual Model::GetGlobalSettingsOutcome GetGlobalSettings() const;

        /**
         * A Callable wrapper for GetGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename = void>
        Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable() const
        {
            return SubmitCallable(&ChimeClient::GetGlobalSettings);
        }

        /**
         * An Async wrapper for GetGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename = void>
        void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetGlobalSettings, handler, context);
        }
        /**
         * <p>Gets an existing media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaCapturePipelineOutcome GetMediaCapturePipeline(const Model::GetMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for GetMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMediaCapturePipelineRequestT = Model::GetMediaCapturePipelineRequest>
        Model::GetMediaCapturePipelineOutcomeCallable GetMediaCapturePipelineCallable(const GetMediaCapturePipelineRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetMediaCapturePipeline, request);
        }

        /**
         * An Async wrapper for GetMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMediaCapturePipelineRequestT = Model::GetMediaCapturePipelineRequest>
        void GetMediaCapturePipelineAsync(const GetMediaCapturePipelineRequestT& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetMediaCapturePipeline, request, handler, context);
        }

        /**
         * <p> Gets the Amazon Chime SDK meeting details for the specified meeting ID. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer Guide</i> .
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMeetingOutcome GetMeeting(const Model::GetMeetingRequest& request) const;

        /**
         * A Callable wrapper for GetMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMeetingRequestT = Model::GetMeetingRequest>
        Model::GetMeetingOutcomeCallable GetMeetingCallable(const GetMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetMeeting, request);
        }

        /**
         * An Async wrapper for GetMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMeetingRequestT = Model::GetMeetingRequest>
        void GetMeetingAsync(const GetMeetingRequestT& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetMeeting, request, handler, context);
        }

        /**
         * <p>The details of the endpoint for the messaging session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMessagingSessionEndpointOutcome GetMessagingSessionEndpoint(const Model::GetMessagingSessionEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetMessagingSessionEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMessagingSessionEndpointRequestT = Model::GetMessagingSessionEndpointRequest>
        Model::GetMessagingSessionEndpointOutcomeCallable GetMessagingSessionEndpointCallable(const GetMessagingSessionEndpointRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetMessagingSessionEndpoint, request);
        }

        /**
         * An Async wrapper for GetMessagingSessionEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMessagingSessionEndpointRequestT = Model::GetMessagingSessionEndpointRequest>
        void GetMessagingSessionEndpointAsync(const GetMessagingSessionEndpointRequestT& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetMessagingSessionEndpoint, request, handler, context);
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
        virtual Model::GetPhoneNumberSettingsOutcome GetPhoneNumberSettings() const;

        /**
         * A Callable wrapper for GetPhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename = void>
        Model::GetPhoneNumberSettingsOutcomeCallable GetPhoneNumberSettingsCallable() const
        {
            return SubmitCallable(&ChimeClient::GetPhoneNumberSettings);
        }

        /**
         * An Async wrapper for GetPhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename = void>
        void GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetPhoneNumberSettings, handler, context);
        }
        /**
         * <p>Gets the specified proxy session details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProxySessionOutcome GetProxySession(const Model::GetProxySessionRequest& request) const;

        /**
         * A Callable wrapper for GetProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProxySessionRequestT = Model::GetProxySessionRequest>
        Model::GetProxySessionOutcomeCallable GetProxySessionCallable(const GetProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetProxySession, request);
        }

        /**
         * An Async wrapper for GetProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProxySessionRequestT = Model::GetProxySessionRequest>
        void GetProxySessionAsync(const GetProxySessionRequestT& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetProxySession, request, handler, context);
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
         * <p>Retrieves the information for a SIP media application, including name, AWS
         * Region, and endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipMediaApplicationOutcome GetSipMediaApplication(const Model::GetSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSipMediaApplicationRequestT = Model::GetSipMediaApplicationRequest>
        Model::GetSipMediaApplicationOutcomeCallable GetSipMediaApplicationCallable(const GetSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetSipMediaApplication, request);
        }

        /**
         * An Async wrapper for GetSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSipMediaApplicationRequestT = Model::GetSipMediaApplicationRequest>
        void GetSipMediaApplicationAsync(const GetSipMediaApplicationRequestT& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Returns the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipMediaApplicationLoggingConfigurationOutcome GetSipMediaApplicationLoggingConfiguration(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplicationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSipMediaApplicationLoggingConfigurationRequestT = Model::GetSipMediaApplicationLoggingConfigurationRequest>
        Model::GetSipMediaApplicationLoggingConfigurationOutcomeCallable GetSipMediaApplicationLoggingConfigurationCallable(const GetSipMediaApplicationLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetSipMediaApplicationLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for GetSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSipMediaApplicationLoggingConfigurationRequestT = Model::GetSipMediaApplicationLoggingConfigurationRequest>
        void GetSipMediaApplicationLoggingConfigurationAsync(const GetSipMediaApplicationLoggingConfigurationRequestT& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetSipMediaApplicationLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a SIP rule, such as the rule ID, name, triggers, and
         * target endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipRuleOutcome GetSipRule(const Model::GetSipRuleRequest& request) const;

        /**
         * A Callable wrapper for GetSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSipRuleRequestT = Model::GetSipRuleRequest>
        Model::GetSipRuleOutcomeCallable GetSipRuleCallable(const GetSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetSipRule, request);
        }

        /**
         * An Async wrapper for GetSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSipRuleRequestT = Model::GetSipRuleRequest>
        void GetSipRuleAsync(const GetSipRuleRequestT& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetSipRule, request, handler, context);
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
         * <p>Retrieves details for the specified Amazon Chime Voice Connector, such as
         * timestamps,name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOutcome GetVoiceConnector(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorRequestT = Model::GetVoiceConnectorRequest>
        Model::GetVoiceConnectorOutcomeCallable GetVoiceConnectorCallable(const GetVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnector, request);
        }

        /**
         * An Async wrapper for GetVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorRequestT = Model::GetVoiceConnectorRequest>
        void GetVoiceConnectorAsync(const GetVoiceConnectorRequestT& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnector, request, handler, context);
        }

        /**
         * <p>Gets the emergency calling configuration details for the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorEmergencyCallingConfigurationOutcome GetVoiceConnectorEmergencyCallingConfiguration(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorEmergencyCallingConfigurationRequestT = Model::GetVoiceConnectorEmergencyCallingConfigurationRequest>
        Model::GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable GetVoiceConnectorEmergencyCallingConfigurationCallable(const GetVoiceConnectorEmergencyCallingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorEmergencyCallingConfiguration, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorEmergencyCallingConfigurationRequestT = Model::GetVoiceConnectorEmergencyCallingConfigurationRequest>
        void GetVoiceConnectorEmergencyCallingConfigurationAsync(const GetVoiceConnectorEmergencyCallingConfigurationRequestT& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorEmergencyCallingConfiguration, request, handler, context);
        }

        /**
         * <p> Retrieves details for the specified Amazon Chime Voice Connector group, such
         * as timestamps,name, and associated
         * <code>VoiceConnectorItems</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorGroupOutcome GetVoiceConnectorGroup(const Model::GetVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorGroupRequestT = Model::GetVoiceConnectorGroupRequest>
        Model::GetVoiceConnectorGroupOutcomeCallable GetVoiceConnectorGroupCallable(const GetVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorGroupRequestT = Model::GetVoiceConnectorGroupRequest>
        void GetVoiceConnectorGroupAsync(const GetVoiceConnectorGroupRequestT& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Retrieves the logging configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether SIP message logs are enabled for sending to
         * Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorLoggingConfigurationOutcome GetVoiceConnectorLoggingConfiguration(const Model::GetVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorLoggingConfigurationRequestT = Model::GetVoiceConnectorLoggingConfigurationRequest>
        Model::GetVoiceConnectorLoggingConfigurationOutcomeCallable GetVoiceConnectorLoggingConfigurationCallable(const GetVoiceConnectorLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorLoggingConfigurationRequestT = Model::GetVoiceConnectorLoggingConfigurationRequest>
        void GetVoiceConnectorLoggingConfigurationAsync(const GetVoiceConnectorLoggingConfigurationRequestT& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves origination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOriginationOutcome GetVoiceConnectorOrigination(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorOriginationRequestT = Model::GetVoiceConnectorOriginationRequest>
        Model::GetVoiceConnectorOriginationOutcomeCallable GetVoiceConnectorOriginationCallable(const GetVoiceConnectorOriginationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorOrigination, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorOriginationRequestT = Model::GetVoiceConnectorOriginationRequest>
        void GetVoiceConnectorOriginationAsync(const GetVoiceConnectorOriginationRequestT& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorOrigination, request, handler, context);
        }

        /**
         * <p>Gets the proxy configuration details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorProxyOutcome GetVoiceConnectorProxy(const Model::GetVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorProxyRequestT = Model::GetVoiceConnectorProxyRequest>
        Model::GetVoiceConnectorProxyOutcomeCallable GetVoiceConnectorProxyCallable(const GetVoiceConnectorProxyRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorProxy, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorProxyRequestT = Model::GetVoiceConnectorProxyRequest>
        void GetVoiceConnectorProxyAsync(const GetVoiceConnectorProxyRequestT& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorProxy, request, handler, context);
        }

        /**
         * <p>Retrieves the streaming configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether media streaming is enabled for sending to Amazon
         * Kinesis. It also shows the retention period, in hours, for the Amazon Kinesis
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorStreamingConfigurationOutcome GetVoiceConnectorStreamingConfiguration(const Model::GetVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorStreamingConfigurationRequestT = Model::GetVoiceConnectorStreamingConfigurationRequest>
        Model::GetVoiceConnectorStreamingConfigurationOutcomeCallable GetVoiceConnectorStreamingConfigurationCallable(const GetVoiceConnectorStreamingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorStreamingConfiguration, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorStreamingConfigurationRequestT = Model::GetVoiceConnectorStreamingConfigurationRequest>
        void GetVoiceConnectorStreamingConfigurationAsync(const GetVoiceConnectorStreamingConfigurationRequestT& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorStreamingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves termination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationOutcome GetVoiceConnectorTermination(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorTerminationRequestT = Model::GetVoiceConnectorTerminationRequest>
        Model::GetVoiceConnectorTerminationOutcomeCallable GetVoiceConnectorTerminationCallable(const GetVoiceConnectorTerminationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorTermination, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorTerminationRequestT = Model::GetVoiceConnectorTerminationRequest>
        void GetVoiceConnectorTerminationAsync(const GetVoiceConnectorTerminationRequestT& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorTermination, request, handler, context);
        }

        /**
         * <p>Retrieves information about the last time a SIP <code>OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcome GetVoiceConnectorTerminationHealth(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorTerminationHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorTerminationHealthRequestT = Model::GetVoiceConnectorTerminationHealthRequest>
        Model::GetVoiceConnectorTerminationHealthOutcomeCallable GetVoiceConnectorTerminationHealthCallable(const GetVoiceConnectorTerminationHealthRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::GetVoiceConnectorTerminationHealth, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorTerminationHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorTerminationHealthRequestT = Model::GetVoiceConnectorTerminationHealthRequest>
        void GetVoiceConnectorTerminationHealthAsync(const GetVoiceConnectorTerminationHealthRequestT& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::GetVoiceConnectorTerminationHealth, request, handler, context);
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
         * <p>Returns a list of the administrators in the
         * <code>AppInstance</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceAdmins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstanceAdminsOutcome ListAppInstanceAdmins(const Model::ListAppInstanceAdminsRequest& request) const;

        /**
         * A Callable wrapper for ListAppInstanceAdmins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInstanceAdminsRequestT = Model::ListAppInstanceAdminsRequest>
        Model::ListAppInstanceAdminsOutcomeCallable ListAppInstanceAdminsCallable(const ListAppInstanceAdminsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListAppInstanceAdmins, request);
        }

        /**
         * An Async wrapper for ListAppInstanceAdmins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInstanceAdminsRequestT = Model::ListAppInstanceAdminsRequest>
        void ListAppInstanceAdminsAsync(const ListAppInstanceAdminsRequestT& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListAppInstanceAdmins, request, handler, context);
        }

        /**
         * <p>List all <code>AppInstanceUsers</code> created under a single
         * <code>AppInstance</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstanceUsersOutcome ListAppInstanceUsers(const Model::ListAppInstanceUsersRequest& request) const;

        /**
         * A Callable wrapper for ListAppInstanceUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInstanceUsersRequestT = Model::ListAppInstanceUsersRequest>
        Model::ListAppInstanceUsersOutcomeCallable ListAppInstanceUsersCallable(const ListAppInstanceUsersRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListAppInstanceUsers, request);
        }

        /**
         * An Async wrapper for ListAppInstanceUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInstanceUsersRequestT = Model::ListAppInstanceUsersRequest>
        void ListAppInstanceUsersAsync(const ListAppInstanceUsersRequestT& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListAppInstanceUsers, request, handler, context);
        }

        /**
         * <p>Lists all Amazon Chime <code>AppInstance</code>s created under a single AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstancesOutcome ListAppInstances(const Model::ListAppInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListAppInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInstancesRequestT = Model::ListAppInstancesRequest>
        Model::ListAppInstancesOutcomeCallable ListAppInstancesCallable(const ListAppInstancesRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListAppInstances, request);
        }

        /**
         * An Async wrapper for ListAppInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInstancesRequestT = Model::ListAppInstancesRequest>
        void ListAppInstancesAsync(const ListAppInstancesRequestT& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListAppInstances, request, handler, context);
        }

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK attendee
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendeeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttendeeTagsOutcome ListAttendeeTags(const Model::ListAttendeeTagsRequest& request) const;

        /**
         * A Callable wrapper for ListAttendeeTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttendeeTagsRequestT = Model::ListAttendeeTagsRequest>
        Model::ListAttendeeTagsOutcomeCallable ListAttendeeTagsCallable(const ListAttendeeTagsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListAttendeeTags, request);
        }

        /**
         * An Async wrapper for ListAttendeeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttendeeTagsRequestT = Model::ListAttendeeTagsRequest>
        void ListAttendeeTagsAsync(const ListAttendeeTagsRequestT& request, const ListAttendeeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListAttendeeTags, request, handler, context);
        }

        /**
         * <p> Lists the attendees for the specified Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttendeesOutcome ListAttendees(const Model::ListAttendeesRequest& request) const;

        /**
         * A Callable wrapper for ListAttendees that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttendeesRequestT = Model::ListAttendeesRequest>
        Model::ListAttendeesOutcomeCallable ListAttendeesCallable(const ListAttendeesRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListAttendees, request);
        }

        /**
         * An Async wrapper for ListAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttendeesRequestT = Model::ListAttendeesRequest>
        void ListAttendeesAsync(const ListAttendeesRequestT& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListAttendees, request, handler, context);
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
         * <p>Lists all the users banned from a particular channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelBans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelBansOutcome ListChannelBans(const Model::ListChannelBansRequest& request) const;

        /**
         * A Callable wrapper for ListChannelBans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelBansRequestT = Model::ListChannelBansRequest>
        Model::ListChannelBansOutcomeCallable ListChannelBansCallable(const ListChannelBansRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListChannelBans, request);
        }

        /**
         * An Async wrapper for ListChannelBans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelBansRequestT = Model::ListChannelBansRequest>
        void ListChannelBansAsync(const ListChannelBansRequestT& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListChannelBans, request, handler, context);
        }

        /**
         * <p>Lists all channel memberships in a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsOutcome ListChannelMemberships(const Model::ListChannelMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListChannelMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelMembershipsRequestT = Model::ListChannelMembershipsRequest>
        Model::ListChannelMembershipsOutcomeCallable ListChannelMembershipsCallable(const ListChannelMembershipsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListChannelMemberships, request);
        }

        /**
         * An Async wrapper for ListChannelMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelMembershipsRequestT = Model::ListChannelMembershipsRequest>
        void ListChannelMembershipsAsync(const ListChannelMembershipsRequestT& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListChannelMemberships, request, handler, context);
        }

        /**
         * <p> Lists all channels that a particular <code>AppInstanceUser</code> is a part
         * of. Only an <code>AppInstanceAdmin</code> can call the API with a user ARN that
         * is not their own. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsForAppInstanceUserOutcome ListChannelMembershipsForAppInstanceUser(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for ListChannelMembershipsForAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelMembershipsForAppInstanceUserRequestT = Model::ListChannelMembershipsForAppInstanceUserRequest>
        Model::ListChannelMembershipsForAppInstanceUserOutcomeCallable ListChannelMembershipsForAppInstanceUserCallable(const ListChannelMembershipsForAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListChannelMembershipsForAppInstanceUser, request);
        }

        /**
         * An Async wrapper for ListChannelMembershipsForAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelMembershipsForAppInstanceUserRequestT = Model::ListChannelMembershipsForAppInstanceUserRequest>
        void ListChannelMembershipsForAppInstanceUserAsync(const ListChannelMembershipsForAppInstanceUserRequestT& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListChannelMembershipsForAppInstanceUser, request, handler, context);
        }

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. By default, sorted by creation timestamp in
         * descending order.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p>Also, the x-amz-chime-bearer request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMessagesOutcome ListChannelMessages(const Model::ListChannelMessagesRequest& request) const;

        /**
         * A Callable wrapper for ListChannelMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelMessagesRequestT = Model::ListChannelMessagesRequest>
        Model::ListChannelMessagesOutcomeCallable ListChannelMessagesCallable(const ListChannelMessagesRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListChannelMessages, request);
        }

        /**
         * An Async wrapper for ListChannelMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelMessagesRequestT = Model::ListChannelMessagesRequest>
        void ListChannelMessagesAsync(const ListChannelMessagesRequestT& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListChannelMessages, request, handler, context);
        }

        /**
         * <p>Lists all the moderators for a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelModerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelModeratorsOutcome ListChannelModerators(const Model::ListChannelModeratorsRequest& request) const;

        /**
         * A Callable wrapper for ListChannelModerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelModeratorsRequestT = Model::ListChannelModeratorsRequest>
        Model::ListChannelModeratorsOutcomeCallable ListChannelModeratorsCallable(const ListChannelModeratorsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListChannelModerators, request);
        }

        /**
         * An Async wrapper for ListChannelModerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelModeratorsRequestT = Model::ListChannelModeratorsRequest>
        void ListChannelModeratorsAsync(const ListChannelModeratorsRequestT& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListChannelModerators, request, handler, context);
        }

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account.</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListChannels, request, handler, context);
        }

        /**
         * <p>A list of the channels moderated by an <code>AppInstanceUser</code>.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsModeratedByAppInstanceUserOutcome ListChannelsModeratedByAppInstanceUser(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for ListChannelsModeratedByAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsModeratedByAppInstanceUserRequestT = Model::ListChannelsModeratedByAppInstanceUserRequest>
        Model::ListChannelsModeratedByAppInstanceUserOutcomeCallable ListChannelsModeratedByAppInstanceUserCallable(const ListChannelsModeratedByAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListChannelsModeratedByAppInstanceUser, request);
        }

        /**
         * An Async wrapper for ListChannelsModeratedByAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsModeratedByAppInstanceUserRequestT = Model::ListChannelsModeratedByAppInstanceUserRequest>
        void ListChannelsModeratedByAppInstanceUserAsync(const ListChannelsModeratedByAppInstanceUserRequestT& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListChannelsModeratedByAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Returns a list of media capture pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMediaCapturePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaCapturePipelinesOutcome ListMediaCapturePipelines(const Model::ListMediaCapturePipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListMediaCapturePipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMediaCapturePipelinesRequestT = Model::ListMediaCapturePipelinesRequest>
        Model::ListMediaCapturePipelinesOutcomeCallable ListMediaCapturePipelinesCallable(const ListMediaCapturePipelinesRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListMediaCapturePipelines, request);
        }

        /**
         * An Async wrapper for ListMediaCapturePipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMediaCapturePipelinesRequestT = Model::ListMediaCapturePipelinesRequest>
        void ListMediaCapturePipelinesAsync(const ListMediaCapturePipelinesRequestT& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListMediaCapturePipelines, request, handler, context);
        }

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetingTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeetingTagsOutcome ListMeetingTags(const Model::ListMeetingTagsRequest& request) const;

        /**
         * A Callable wrapper for ListMeetingTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMeetingTagsRequestT = Model::ListMeetingTagsRequest>
        Model::ListMeetingTagsOutcomeCallable ListMeetingTagsCallable(const ListMeetingTagsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListMeetingTags, request);
        }

        /**
         * An Async wrapper for ListMeetingTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMeetingTagsRequestT = Model::ListMeetingTagsRequest>
        void ListMeetingTagsAsync(const ListMeetingTagsRequestT& request, const ListMeetingTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListMeetingTags, request, handler, context);
        }

        /**
         * <p> Lists up to 100 active Amazon Chime SDK meetings. For more information about
         * the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meetings-sdk.html">Using
         * the Amazon Chime SDK</a> in the <i>Amazon Chime SDK Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeetingsOutcome ListMeetings(const Model::ListMeetingsRequest& request) const;

        /**
         * A Callable wrapper for ListMeetings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMeetingsRequestT = Model::ListMeetingsRequest>
        Model::ListMeetingsOutcomeCallable ListMeetingsCallable(const ListMeetingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListMeetings, request);
        }

        /**
         * An Async wrapper for ListMeetings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMeetingsRequestT = Model::ListMeetingsRequest>
        void ListMeetingsAsync(const ListMeetingsRequestT& request, const ListMeetingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListMeetings, request, handler, context);
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
         * <p>Lists the proxy sessions for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListProxySessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProxySessionsOutcome ListProxySessions(const Model::ListProxySessionsRequest& request) const;

        /**
         * A Callable wrapper for ListProxySessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProxySessionsRequestT = Model::ListProxySessionsRequest>
        Model::ListProxySessionsOutcomeCallable ListProxySessionsCallable(const ListProxySessionsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListProxySessions, request);
        }

        /**
         * An Async wrapper for ListProxySessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProxySessionsRequestT = Model::ListProxySessionsRequest>
        void ListProxySessionsAsync(const ListProxySessionsRequestT& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListProxySessions, request, handler, context);
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
         * <p>Lists the SIP media applications under the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipMediaApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSipMediaApplicationsOutcome ListSipMediaApplications(const Model::ListSipMediaApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListSipMediaApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSipMediaApplicationsRequestT = Model::ListSipMediaApplicationsRequest>
        Model::ListSipMediaApplicationsOutcomeCallable ListSipMediaApplicationsCallable(const ListSipMediaApplicationsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListSipMediaApplications, request);
        }

        /**
         * An Async wrapper for ListSipMediaApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSipMediaApplicationsRequestT = Model::ListSipMediaApplicationsRequest>
        void ListSipMediaApplicationsAsync(const ListSipMediaApplicationsRequestT& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListSipMediaApplications, request, handler, context);
        }

        /**
         * <p>Lists the SIP rules under the administrator's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSipRulesOutcome ListSipRules(const Model::ListSipRulesRequest& request) const;

        /**
         * A Callable wrapper for ListSipRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSipRulesRequestT = Model::ListSipRulesRequest>
        Model::ListSipRulesOutcomeCallable ListSipRulesCallable(const ListSipRulesRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListSipRules, request);
        }

        /**
         * An Async wrapper for ListSipRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSipRulesRequestT = Model::ListSipRulesRequest>
        void ListSipRulesAsync(const ListSipRulesRequestT& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListSipRules, request, handler, context);
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
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListTagsForResource, request, handler, context);
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
         * <p>Lists the Amazon Chime Voice Connector groups for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorGroupsOutcome ListVoiceConnectorGroups(const Model::ListVoiceConnectorGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectorGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceConnectorGroupsRequestT = Model::ListVoiceConnectorGroupsRequest>
        Model::ListVoiceConnectorGroupsOutcomeCallable ListVoiceConnectorGroupsCallable(const ListVoiceConnectorGroupsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListVoiceConnectorGroups, request);
        }

        /**
         * An Async wrapper for ListVoiceConnectorGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceConnectorGroupsRequestT = Model::ListVoiceConnectorGroupsRequest>
        void ListVoiceConnectorGroupsAsync(const ListVoiceConnectorGroupsRequestT& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListVoiceConnectorGroups, request, handler, context);
        }

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcome ListVoiceConnectorTerminationCredentials(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceConnectorTerminationCredentialsRequestT = Model::ListVoiceConnectorTerminationCredentialsRequest>
        Model::ListVoiceConnectorTerminationCredentialsOutcomeCallable ListVoiceConnectorTerminationCredentialsCallable(const ListVoiceConnectorTerminationCredentialsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListVoiceConnectorTerminationCredentials, request);
        }

        /**
         * An Async wrapper for ListVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceConnectorTerminationCredentialsRequestT = Model::ListVoiceConnectorTerminationCredentialsRequest>
        void ListVoiceConnectorTerminationCredentialsAsync(const ListVoiceConnectorTerminationCredentialsRequestT& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListVoiceConnectorTerminationCredentials, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Chime Voice Connectors for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorsOutcome ListVoiceConnectors(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceConnectorsRequestT = Model::ListVoiceConnectorsRequest>
        Model::ListVoiceConnectorsOutcomeCallable ListVoiceConnectorsCallable(const ListVoiceConnectorsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ListVoiceConnectors, request);
        }

        /**
         * An Async wrapper for ListVoiceConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceConnectorsRequestT = Model::ListVoiceConnectorsRequest>
        void ListVoiceConnectorsAsync(const ListVoiceConnectorsRequestT& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ListVoiceConnectors, request, handler, context);
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
         * <p>Sets the amount of time in days that a given <code>AppInstance</code> retains
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppInstanceRetentionSettingsOutcome PutAppInstanceRetentionSettings(const Model::PutAppInstanceRetentionSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutAppInstanceRetentionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAppInstanceRetentionSettingsRequestT = Model::PutAppInstanceRetentionSettingsRequest>
        Model::PutAppInstanceRetentionSettingsOutcomeCallable PutAppInstanceRetentionSettingsCallable(const PutAppInstanceRetentionSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutAppInstanceRetentionSettings, request);
        }

        /**
         * An Async wrapper for PutAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAppInstanceRetentionSettingsRequestT = Model::PutAppInstanceRetentionSettingsRequest>
        void PutAppInstanceRetentionSettingsAsync(const PutAppInstanceRetentionSettingsRequestT& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutAppInstanceRetentionSettings, request, handler, context);
        }

        /**
         * <p>The data streaming configurations of an
         * <code>AppInstance</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppInstanceStreamingConfigurationsOutcome PutAppInstanceStreamingConfigurations(const Model::PutAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for PutAppInstanceStreamingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAppInstanceStreamingConfigurationsRequestT = Model::PutAppInstanceStreamingConfigurationsRequest>
        Model::PutAppInstanceStreamingConfigurationsOutcomeCallable PutAppInstanceStreamingConfigurationsCallable(const PutAppInstanceStreamingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutAppInstanceStreamingConfigurations, request);
        }

        /**
         * An Async wrapper for PutAppInstanceStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAppInstanceStreamingConfigurationsRequestT = Model::PutAppInstanceStreamingConfigurationsRequest>
        void PutAppInstanceStreamingConfigurationsAsync(const PutAppInstanceStreamingConfigurationsRequestT& request, const PutAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutAppInstanceStreamingConfigurations, request, handler, context);
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
         * <p>Updates the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSipMediaApplicationLoggingConfigurationOutcome PutSipMediaApplicationLoggingConfiguration(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutSipMediaApplicationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSipMediaApplicationLoggingConfigurationRequestT = Model::PutSipMediaApplicationLoggingConfigurationRequest>
        Model::PutSipMediaApplicationLoggingConfigurationOutcomeCallable PutSipMediaApplicationLoggingConfigurationCallable(const PutSipMediaApplicationLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutSipMediaApplicationLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for PutSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSipMediaApplicationLoggingConfigurationRequestT = Model::PutSipMediaApplicationLoggingConfigurationRequest>
        void PutSipMediaApplicationLoggingConfigurationAsync(const PutSipMediaApplicationLoggingConfigurationRequestT& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutSipMediaApplicationLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Puts emergency calling configuration details to the specified Amazon Chime
         * Voice Connector, such as emergency phone numbers and calling countries.
         * Origination and termination settings must be enabled for the Amazon Chime Voice
         * Connector before emergency calling can be configured.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorEmergencyCallingConfigurationOutcome PutVoiceConnectorEmergencyCallingConfiguration(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorEmergencyCallingConfigurationRequestT = Model::PutVoiceConnectorEmergencyCallingConfigurationRequest>
        Model::PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable PutVoiceConnectorEmergencyCallingConfigurationCallable(const PutVoiceConnectorEmergencyCallingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutVoiceConnectorEmergencyCallingConfiguration, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorEmergencyCallingConfigurationRequestT = Model::PutVoiceConnectorEmergencyCallingConfigurationRequest>
        void PutVoiceConnectorEmergencyCallingConfigurationAsync(const PutVoiceConnectorEmergencyCallingConfigurationRequestT& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutVoiceConnectorEmergencyCallingConfiguration, request, handler, context);
        }

        /**
         * <p>Adds a logging configuration for the specified Amazon Chime Voice Connector.
         * The logging configuration specifies whether SIP message logs are enabled for
         * sending to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorLoggingConfigurationOutcome PutVoiceConnectorLoggingConfiguration(const Model::PutVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorLoggingConfigurationRequestT = Model::PutVoiceConnectorLoggingConfigurationRequest>
        Model::PutVoiceConnectorLoggingConfigurationOutcomeCallable PutVoiceConnectorLoggingConfigurationCallable(const PutVoiceConnectorLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutVoiceConnectorLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorLoggingConfigurationRequestT = Model::PutVoiceConnectorLoggingConfigurationRequest>
        void PutVoiceConnectorLoggingConfigurationAsync(const PutVoiceConnectorLoggingConfigurationRequestT& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutVoiceConnectorLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Adds origination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off origination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorOriginationOutcome PutVoiceConnectorOrigination(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorOriginationRequestT = Model::PutVoiceConnectorOriginationRequest>
        Model::PutVoiceConnectorOriginationOutcomeCallable PutVoiceConnectorOriginationCallable(const PutVoiceConnectorOriginationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutVoiceConnectorOrigination, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorOriginationRequestT = Model::PutVoiceConnectorOriginationRequest>
        void PutVoiceConnectorOriginationAsync(const PutVoiceConnectorOriginationRequestT& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutVoiceConnectorOrigination, request, handler, context);
        }

        /**
         * <p>Puts the specified proxy configuration to the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorProxyOutcome PutVoiceConnectorProxy(const Model::PutVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorProxyRequestT = Model::PutVoiceConnectorProxyRequest>
        Model::PutVoiceConnectorProxyOutcomeCallable PutVoiceConnectorProxyCallable(const PutVoiceConnectorProxyRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutVoiceConnectorProxy, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorProxyRequestT = Model::PutVoiceConnectorProxyRequest>
        void PutVoiceConnectorProxyAsync(const PutVoiceConnectorProxyRequestT& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutVoiceConnectorProxy, request, handler, context);
        }

        /**
         * <p>Adds a streaming configuration for the specified Amazon Chime Voice
         * Connector. The streaming configuration specifies whether media streaming is
         * enabled for sending to Kinesis. It also sets the retention period, in hours, for
         * the Amazon Kinesis data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorStreamingConfigurationOutcome PutVoiceConnectorStreamingConfiguration(const Model::PutVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorStreamingConfigurationRequestT = Model::PutVoiceConnectorStreamingConfigurationRequest>
        Model::PutVoiceConnectorStreamingConfigurationOutcomeCallable PutVoiceConnectorStreamingConfigurationCallable(const PutVoiceConnectorStreamingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutVoiceConnectorStreamingConfiguration, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorStreamingConfigurationRequestT = Model::PutVoiceConnectorStreamingConfigurationRequest>
        void PutVoiceConnectorStreamingConfigurationAsync(const PutVoiceConnectorStreamingConfigurationRequestT& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutVoiceConnectorStreamingConfiguration, request, handler, context);
        }

        /**
         * <p>Adds termination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off termination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationOutcome PutVoiceConnectorTermination(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorTerminationRequestT = Model::PutVoiceConnectorTerminationRequest>
        Model::PutVoiceConnectorTerminationOutcomeCallable PutVoiceConnectorTerminationCallable(const PutVoiceConnectorTerminationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutVoiceConnectorTermination, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorTerminationRequestT = Model::PutVoiceConnectorTerminationRequest>
        void PutVoiceConnectorTerminationAsync(const PutVoiceConnectorTerminationRequestT& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutVoiceConnectorTermination, request, handler, context);
        }

        /**
         * <p>Adds termination SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcome PutVoiceConnectorTerminationCredentials(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorTerminationCredentialsRequestT = Model::PutVoiceConnectorTerminationCredentialsRequest>
        Model::PutVoiceConnectorTerminationCredentialsOutcomeCallable PutVoiceConnectorTerminationCredentialsCallable(const PutVoiceConnectorTerminationCredentialsRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::PutVoiceConnectorTerminationCredentials, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorTerminationCredentialsRequestT = Model::PutVoiceConnectorTerminationCredentialsRequest>
        void PutVoiceConnectorTerminationCredentialsAsync(const PutVoiceConnectorTerminationCredentialsRequestT& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::PutVoiceConnectorTerminationCredentials, request, handler, context);
        }

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as redacted.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactChannelMessageOutcome RedactChannelMessage(const Model::RedactChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for RedactChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RedactChannelMessageRequestT = Model::RedactChannelMessageRequest>
        Model::RedactChannelMessageOutcomeCallable RedactChannelMessageCallable(const RedactChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::RedactChannelMessage, request);
        }

        /**
         * An Async wrapper for RedactChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RedactChannelMessageRequestT = Model::RedactChannelMessageRequest>
        void RedactChannelMessageAsync(const RedactChannelMessageRequestT& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::RedactChannelMessage, request, handler, context);
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
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p>Also, <code>STANDARD</code> messages can contain 4KB
         * of data and the 1KB of metadata. <code>CONTROL</code> messages can contain 30
         * bytes of data and no metadata.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SendChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendChannelMessageOutcome SendChannelMessage(const Model::SendChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for SendChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendChannelMessageRequestT = Model::SendChannelMessageRequest>
        Model::SendChannelMessageOutcomeCallable SendChannelMessageCallable(const SendChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::SendChannelMessage, request);
        }

        /**
         * An Async wrapper for SendChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendChannelMessageRequestT = Model::SendChannelMessageRequest>
        void SendChannelMessageAsync(const SendChannelMessageRequestT& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::SendChannelMessage, request, handler, context);
        }

        /**
         * <p>Starts transcription for the specified <code>meetingId</code>. For more
         * information, refer to <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meeting-transcription.html">
         * Using Amazon Chime SDK live transcription </a> in the <i>Amazon Chime SDK
         * Developer Guide</i>.</p> <p>If you specify an invalid configuration, a
         * <code>TranscriptFailed</code> event will be sent with the contents of the
         * <code>BadRequestException</code> generated by Amazon Transcribe. For more
         * information on each parameter and which combinations are valid, refer to the <a
         * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/API_streaming_StartStreamTranscription.html">StartStreamTranscription</a>
         * API in the <i>Amazon Transcribe Developer Guide</i>.</p>  <p>Amazon
         * Chime SDK live transcription is powered by Amazon Transcribe. Use of Amazon
         * Transcribe is subject to the <a href="https://aws.amazon.com/service-terms/">AWS
         * Service Terms</a>, including the terms specific to the AWS Machine Learning and
         * Artificial Intelligence Services.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/StartMeetingTranscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMeetingTranscriptionOutcome StartMeetingTranscription(const Model::StartMeetingTranscriptionRequest& request) const;

        /**
         * A Callable wrapper for StartMeetingTranscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMeetingTranscriptionRequestT = Model::StartMeetingTranscriptionRequest>
        Model::StartMeetingTranscriptionOutcomeCallable StartMeetingTranscriptionCallable(const StartMeetingTranscriptionRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::StartMeetingTranscription, request);
        }

        /**
         * An Async wrapper for StartMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMeetingTranscriptionRequestT = Model::StartMeetingTranscriptionRequest>
        void StartMeetingTranscriptionAsync(const StartMeetingTranscriptionRequestT& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::StartMeetingTranscription, request, handler, context);
        }

        /**
         * <p>Stops transcription for the specified <code>meetingId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/StopMeetingTranscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMeetingTranscriptionOutcome StopMeetingTranscription(const Model::StopMeetingTranscriptionRequest& request) const;

        /**
         * A Callable wrapper for StopMeetingTranscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopMeetingTranscriptionRequestT = Model::StopMeetingTranscriptionRequest>
        Model::StopMeetingTranscriptionOutcomeCallable StopMeetingTranscriptionCallable(const StopMeetingTranscriptionRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::StopMeetingTranscription, request);
        }

        /**
         * An Async wrapper for StopMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopMeetingTranscriptionRequestT = Model::StopMeetingTranscriptionRequest>
        void StopMeetingTranscriptionAsync(const StopMeetingTranscriptionRequestT& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::StopMeetingTranscription, request, handler, context);
        }

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::TagAttendeeOutcome TagAttendee(const Model::TagAttendeeRequest& request) const;

        /**
         * A Callable wrapper for TagAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagAttendeeRequestT = Model::TagAttendeeRequest>
        Model::TagAttendeeOutcomeCallable TagAttendeeCallable(const TagAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::TagAttendee, request);
        }

        /**
         * An Async wrapper for TagAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagAttendeeRequestT = Model::TagAttendeeRequest>
        void TagAttendeeAsync(const TagAttendeeRequestT& request, const TagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::TagAttendee, request, handler, context);
        }

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::TagMeetingOutcome TagMeeting(const Model::TagMeetingRequest& request) const;

        /**
         * A Callable wrapper for TagMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagMeetingRequestT = Model::TagMeetingRequest>
        Model::TagMeetingOutcomeCallable TagMeetingCallable(const TagMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::TagMeeting, request);
        }

        /**
         * An Async wrapper for TagMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagMeetingRequestT = Model::TagMeetingRequest>
        void TagMeetingAsync(const TagMeetingRequestT& request, const TagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::TagMeeting, request, handler, context);
        }

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagAttendeeOutcome UntagAttendee(const Model::UntagAttendeeRequest& request) const;

        /**
         * A Callable wrapper for UntagAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagAttendeeRequestT = Model::UntagAttendeeRequest>
        Model::UntagAttendeeOutcomeCallable UntagAttendeeCallable(const UntagAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UntagAttendee, request);
        }

        /**
         * An Async wrapper for UntagAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagAttendeeRequestT = Model::UntagAttendeeRequest>
        void UntagAttendeeAsync(const UntagAttendeeRequestT& request, const UntagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UntagAttendee, request, handler, context);
        }

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagMeetingOutcome UntagMeeting(const Model::UntagMeetingRequest& request) const;

        /**
         * A Callable wrapper for UntagMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagMeetingRequestT = Model::UntagMeetingRequest>
        Model::UntagMeetingOutcomeCallable UntagMeetingCallable(const UntagMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UntagMeeting, request);
        }

        /**
         * An Async wrapper for UntagMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagMeetingRequestT = Model::UntagMeetingRequest>
        void UntagMeetingAsync(const UntagMeetingRequestT& request, const UntagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UntagMeeting, request, handler, context);
        }

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UntagResource, request, handler, context);
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
         * <p>Updates <code>AppInstance</code> metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceOutcome UpdateAppInstance(const Model::UpdateAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppInstanceRequestT = Model::UpdateAppInstanceRequest>
        Model::UpdateAppInstanceOutcomeCallable UpdateAppInstanceCallable(const UpdateAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateAppInstance, request);
        }

        /**
         * An Async wrapper for UpdateAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppInstanceRequestT = Model::UpdateAppInstanceRequest>
        void UpdateAppInstanceAsync(const UpdateAppInstanceRequestT& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateAppInstance, request, handler, context);
        }

        /**
         * <p>Updates the details of an <code>AppInstanceUser</code>. You can update names
         * and metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceUserOutcome UpdateAppInstanceUser(const Model::UpdateAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppInstanceUserRequestT = Model::UpdateAppInstanceUserRequest>
        Model::UpdateAppInstanceUserOutcomeCallable UpdateAppInstanceUserCallable(const UpdateAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateAppInstanceUser, request);
        }

        /**
         * An Async wrapper for UpdateAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppInstanceUserRequestT = Model::UpdateAppInstanceUserRequest>
        void UpdateAppInstanceUserAsync(const UpdateAppInstanceUserRequestT& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateAppInstanceUser, request, handler, context);
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
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateChannel, request, handler, context);
        }

        /**
         * <p>Updates the content of a message.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelMessageOutcome UpdateChannelMessage(const Model::UpdateChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelMessageRequestT = Model::UpdateChannelMessageRequest>
        Model::UpdateChannelMessageOutcomeCallable UpdateChannelMessageCallable(const UpdateChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateChannelMessage, request);
        }

        /**
         * An Async wrapper for UpdateChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelMessageRequestT = Model::UpdateChannelMessageRequest>
        void UpdateChannelMessageAsync(const UpdateChannelMessageRequestT& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateChannelMessage, request, handler, context);
        }

        /**
         * <p>The details of the time when a user last read messages in a channel.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the <code>AppInstanceUserArn</code> of the user that makes the API call as the
         * value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelReadMarkerOutcome UpdateChannelReadMarker(const Model::UpdateChannelReadMarkerRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelReadMarker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelReadMarkerRequestT = Model::UpdateChannelReadMarkerRequest>
        Model::UpdateChannelReadMarkerOutcomeCallable UpdateChannelReadMarkerCallable(const UpdateChannelReadMarkerRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateChannelReadMarker, request);
        }

        /**
         * An Async wrapper for UpdateChannelReadMarker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelReadMarkerRequestT = Model::UpdateChannelReadMarkerRequest>
        void UpdateChannelReadMarkerAsync(const UpdateChannelReadMarkerRequestT& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateChannelReadMarker, request, handler, context);
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
         * <p>Updates the specified proxy session details, such as voice or SMS
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProxySessionOutcome UpdateProxySession(const Model::UpdateProxySessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProxySessionRequestT = Model::UpdateProxySessionRequest>
        Model::UpdateProxySessionOutcomeCallable UpdateProxySessionCallable(const UpdateProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateProxySession, request);
        }

        /**
         * An Async wrapper for UpdateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProxySessionRequestT = Model::UpdateProxySessionRequest>
        void UpdateProxySessionAsync(const UpdateProxySessionRequestT& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateProxySession, request, handler, context);
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
         * <p>Updates the details of the specified SIP media application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipMediaApplicationOutcome UpdateSipMediaApplication(const Model::UpdateSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSipMediaApplicationRequestT = Model::UpdateSipMediaApplicationRequest>
        Model::UpdateSipMediaApplicationOutcomeCallable UpdateSipMediaApplicationCallable(const UpdateSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateSipMediaApplication, request);
        }

        /**
         * An Async wrapper for UpdateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSipMediaApplicationRequestT = Model::UpdateSipMediaApplicationRequest>
        void UpdateSipMediaApplicationAsync(const UpdateSipMediaApplicationRequestT& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Invokes the AWS Lambda function associated with the SIP media application and
         * transaction ID in an update request. The Lambda function can then return a new
         * set of actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipMediaApplicationCall">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipMediaApplicationCallOutcome UpdateSipMediaApplicationCall(const Model::UpdateSipMediaApplicationCallRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipMediaApplicationCall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSipMediaApplicationCallRequestT = Model::UpdateSipMediaApplicationCallRequest>
        Model::UpdateSipMediaApplicationCallOutcomeCallable UpdateSipMediaApplicationCallCallable(const UpdateSipMediaApplicationCallRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateSipMediaApplicationCall, request);
        }

        /**
         * An Async wrapper for UpdateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSipMediaApplicationCallRequestT = Model::UpdateSipMediaApplicationCallRequest>
        void UpdateSipMediaApplicationCallAsync(const UpdateSipMediaApplicationCallRequestT& request, const UpdateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateSipMediaApplicationCall, request, handler, context);
        }

        /**
         * <p>Updates the details of the specified SIP rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipRuleOutcome UpdateSipRule(const Model::UpdateSipRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSipRuleRequestT = Model::UpdateSipRuleRequest>
        Model::UpdateSipRuleOutcomeCallable UpdateSipRuleCallable(const UpdateSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateSipRule, request);
        }

        /**
         * An Async wrapper for UpdateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSipRuleRequestT = Model::UpdateSipRuleRequest>
        void UpdateSipRuleAsync(const UpdateSipRuleRequestT& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateSipRule, request, handler, context);
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

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceConnectorOutcome UpdateVoiceConnector(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceConnectorRequestT = Model::UpdateVoiceConnectorRequest>
        Model::UpdateVoiceConnectorOutcomeCallable UpdateVoiceConnectorCallable(const UpdateVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateVoiceConnector, request);
        }

        /**
         * An Async wrapper for UpdateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceConnectorRequestT = Model::UpdateVoiceConnectorRequest>
        void UpdateVoiceConnectorAsync(const UpdateVoiceConnectorRequestT& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateVoiceConnector, request, handler, context);
        }

        /**
         * <p>Updates details of the specified Amazon Chime Voice Connector group, such as
         * the name and Amazon Chime Voice Connector priority ranking.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceConnectorGroupOutcome UpdateVoiceConnectorGroup(const Model::UpdateVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceConnectorGroupRequestT = Model::UpdateVoiceConnectorGroupRequest>
        Model::UpdateVoiceConnectorGroupOutcomeCallable UpdateVoiceConnectorGroupCallable(const UpdateVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::UpdateVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for UpdateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceConnectorGroupRequestT = Model::UpdateVoiceConnectorGroupRequest>
        void UpdateVoiceConnectorGroupAsync(const UpdateVoiceConnectorGroupRequestT& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::UpdateVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Validates an address to be used for 911 calls made with Amazon Chime Voice
         * Connectors. You can use validated addresses in a Presence Information Data
         * Format Location Object file that you include in SIP requests. That helps ensure
         * that addresses are routed to the appropriate Public Safety Answering
         * Point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ValidateE911Address">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateE911AddressOutcome ValidateE911Address(const Model::ValidateE911AddressRequest& request) const;

        /**
         * A Callable wrapper for ValidateE911Address that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateE911AddressRequestT = Model::ValidateE911AddressRequest>
        Model::ValidateE911AddressOutcomeCallable ValidateE911AddressCallable(const ValidateE911AddressRequestT& request) const
        {
            return SubmitCallable(&ChimeClient::ValidateE911Address, request);
        }

        /**
         * An Async wrapper for ValidateE911Address that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateE911AddressRequestT = Model::ValidateE911AddressRequest>
        void ValidateE911AddressAsync(const ValidateE911AddressRequestT& request, const ValidateE911AddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeClient::ValidateE911Address, request, handler, context);
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
