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
   * <p>The Amazon Chime API (application programming interface) is designed for
   * developers to perform key tasks, such as creating and managing Amazon Chime
   * accounts, users, and Voice Connectors. This guide provides detailed information
   * about the Amazon Chime API, including operations, types, inputs and outputs, and
   * error codes. It also includes API actions for use with the Amazon Chime SDK,
   * which developers use to build their own communication applications. For more
   * information about the Amazon Chime SDK, see <a
   * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html"> Using the
   * Amazon Chime SDK </a> in the <i>Amazon Chime Developer Guide</i>.</p> <p>You can
   * use an AWS SDK, the AWS Command Line Interface (AWS CLI), or the REST API to
   * make API calls. We recommend using an AWS SDK or the AWS CLI. Each API operation
   * includes links to information about using it with a language-specific AWS SDK or
   * the AWS CLI.</p> <dl> <dt>Using an AWS SDK</dt> <dd> <p> You don't need to write
   * code to calculate a signature for request authentication. The SDK clients
   * authenticate your requests by using access keys that you provide. For more
   * information about AWS SDKs, see the <a
   * href="http://aws.amazon.com/developer/">AWS Developer Center</a>. </p> </dd>
   * <dt>Using the AWS CLI</dt> <dd> <p>Use your access keys with the AWS CLI to make
   * API calls. For information about setting up the AWS CLI, see <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing
   * the AWS Command Line Interface</a> in the <i>AWS Command Line Interface User
   * Guide</i>. For a list of available Amazon Chime commands, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon
   * Chime commands</a> in the <i>AWS CLI Command Reference</i>. </p> </dd> <dt>Using
   * REST APIs</dt> <dd> <p>If you use REST to make API calls, you must authenticate
   * your request by providing a signature. Amazon Chime supports signature version
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
        virtual Model::AssociatePhoneNumberWithUserOutcomeCallable AssociatePhoneNumberWithUserCallable(const Model::AssociatePhoneNumberWithUserRequest& request) const;

        /**
         * An Async wrapper for AssociatePhoneNumberWithUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumberWithUserAsync(const Model::AssociatePhoneNumberWithUserRequest& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorCallable(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumbersWithVoiceConnectorAsync(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorGroupCallable(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumbersWithVoiceConnectorGroupAsync(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AssociateSigninDelegateGroupsWithAccountOutcomeCallable AssociateSigninDelegateGroupsWithAccountCallable(const Model::AssociateSigninDelegateGroupsWithAccountRequest& request) const;

        /**
         * An Async wrapper for AssociateSigninDelegateGroupsWithAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSigninDelegateGroupsWithAccountAsync(const Model::AssociateSigninDelegateGroupsWithAccountRequest& request, const AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates up to 100 new attendees for an active Amazon Chime SDK meeting. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateAttendeeOutcome BatchCreateAttendee(const Model::BatchCreateAttendeeRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateAttendeeOutcomeCallable BatchCreateAttendeeCallable(const Model::BatchCreateAttendeeRequest& request) const;

        /**
         * An Async wrapper for BatchCreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateAttendeeAsync(const Model::BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a specified number of users to a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateChannelMembershipOutcome BatchCreateChannelMembership(const Model::BatchCreateChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateChannelMembershipOutcomeCallable BatchCreateChannelMembershipCallable(const Model::BatchCreateChannelMembershipRequest& request) const;

        /**
         * An Async wrapper for BatchCreateChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateChannelMembershipAsync(const Model::BatchCreateChannelMembershipRequest& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchCreateRoomMembershipOutcomeCallable BatchCreateRoomMembershipCallable(const Model::BatchCreateRoomMembershipRequest& request) const;

        /**
         * An Async wrapper for BatchCreateRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateRoomMembershipAsync(const Model::BatchCreateRoomMembershipRequest& request, const BatchCreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchDeletePhoneNumberOutcomeCallable BatchDeletePhoneNumberCallable(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for BatchDeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeletePhoneNumberAsync(const Model::BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchSuspendUserOutcomeCallable BatchSuspendUserCallable(const Model::BatchSuspendUserRequest& request) const;

        /**
         * An Async wrapper for BatchSuspendUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchSuspendUserAsync(const Model::BatchSuspendUserRequest& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchUnsuspendUserOutcomeCallable BatchUnsuspendUserCallable(const Model::BatchUnsuspendUserRequest& request) const;

        /**
         * An Async wrapper for BatchUnsuspendUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUnsuspendUserAsync(const Model::BatchUnsuspendUserRequest& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchUpdatePhoneNumberOutcomeCallable BatchUpdatePhoneNumberCallable(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for BatchUpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdatePhoneNumberAsync(const Model::BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchUpdateUserOutcomeCallable BatchUpdateUserCallable(const Model::BatchUpdateUserRequest& request) const;

        /**
         * An Async wrapper for BatchUpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateUserAsync(const Model::BatchUpdateUserRequest& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request) const;

        /**
         * An Async wrapper for CreateAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAppInstanceOutcomeCallable CreateAppInstanceCallable(const Model::CreateAppInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppInstanceAsync(const Model::CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAppInstanceAdminOutcomeCallable CreateAppInstanceAdminCallable(const Model::CreateAppInstanceAdminRequest& request) const;

        /**
         * An Async wrapper for CreateAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppInstanceAdminAsync(const Model::CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAppInstanceUserOutcomeCallable CreateAppInstanceUserCallable(const Model::CreateAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for CreateAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppInstanceUserAsync(const Model::CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new attendee for an active Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAttendeeOutcome CreateAttendee(const Model::CreateAttendeeRequest& request) const;

        /**
         * A Callable wrapper for CreateAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAttendeeOutcomeCallable CreateAttendeeCallable(const Model::CreateAttendeeRequest& request) const;

        /**
         * An Async wrapper for CreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAttendeeAsync(const Model::CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateBotOutcomeCallable CreateBotCallable(const Model::CreateBotRequest& request) const;

        /**
         * An Async wrapper for CreateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotAsync(const Model::CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateChannelBanOutcomeCallable CreateChannelBanCallable(const Model::CreateChannelBanRequest& request) const;

        /**
         * An Async wrapper for CreateChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelBanAsync(const Model::CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateChannelMembershipOutcomeCallable CreateChannelMembershipCallable(const Model::CreateChannelMembershipRequest& request) const;

        /**
         * An Async wrapper for CreateChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelMembershipAsync(const Model::CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateChannelModeratorOutcomeCallable CreateChannelModeratorCallable(const Model::CreateChannelModeratorRequest& request) const;

        /**
         * An Async wrapper for CreateChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelModeratorAsync(const Model::CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMediaCapturePipelineOutcome CreateMediaCapturePipeline(const Model::CreateMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMediaCapturePipelineOutcomeCallable CreateMediaCapturePipelineCallable(const Model::CreateMediaCapturePipelineRequest& request) const;

        /**
         * An Async wrapper for CreateMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMediaCapturePipelineAsync(const Model::CreateMediaCapturePipelineRequest& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new Amazon Chime SDK meeting in the specified media Region with no
         * initial attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i> . For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i> . </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingOutcome CreateMeeting(const Model::CreateMeetingRequest& request) const;

        /**
         * A Callable wrapper for CreateMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeetingOutcomeCallable CreateMeetingCallable(const Model::CreateMeetingRequest& request) const;

        /**
         * An Async wrapper for CreateMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingAsync(const Model::CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateMeetingDialOutOutcomeCallable CreateMeetingDialOutCallable(const Model::CreateMeetingDialOutRequest& request) const;

        /**
         * An Async wrapper for CreateMeetingDialOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingDialOutAsync(const Model::CreateMeetingDialOutRequest& request, const CreateMeetingDialOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new Amazon Chime SDK meeting in the specified media Region, with
         * attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i> . For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i> . </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingWithAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingWithAttendeesOutcome CreateMeetingWithAttendees(const Model::CreateMeetingWithAttendeesRequest& request) const;

        /**
         * A Callable wrapper for CreateMeetingWithAttendees that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeetingWithAttendeesOutcomeCallable CreateMeetingWithAttendeesCallable(const Model::CreateMeetingWithAttendeesRequest& request) const;

        /**
         * An Async wrapper for CreateMeetingWithAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingWithAttendeesAsync(const Model::CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreatePhoneNumberOrderOutcomeCallable CreatePhoneNumberOrderCallable(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * An Async wrapper for CreatePhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePhoneNumberOrderAsync(const Model::CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateProxySessionOutcomeCallable CreateProxySessionCallable(const Model::CreateProxySessionRequest& request) const;

        /**
         * An Async wrapper for CreateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProxySessionAsync(const Model::CreateProxySessionRequest& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request) const;

        /**
         * An Async wrapper for CreateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateRoomMembershipOutcomeCallable CreateRoomMembershipCallable(const Model::CreateRoomMembershipRequest& request) const;

        /**
         * An Async wrapper for CreateRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomMembershipAsync(const Model::CreateRoomMembershipRequest& request, const CreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipMediaApplicationOutcome CreateSipMediaApplication(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSipMediaApplicationOutcomeCallable CreateSipMediaApplicationCallable(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipMediaApplicationAsync(const Model::CreateSipMediaApplicationRequest& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSipMediaApplicationCallOutcomeCallable CreateSipMediaApplicationCallCallable(const Model::CreateSipMediaApplicationCallRequest& request) const;

        /**
         * An Async wrapper for CreateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipMediaApplicationCallAsync(const Model::CreateSipMediaApplicationCallRequest& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSipRuleOutcomeCallable CreateSipRuleCallable(const Model::CreateSipRuleRequest& request) const;

        /**
         * An Async wrapper for CreateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipRuleAsync(const Model::CreateSipRuleRequest& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateVoiceConnectorOutcomeCallable CreateVoiceConnectorCallable(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for CreateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceConnectorAsync(const Model::CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateVoiceConnectorGroupOutcomeCallable CreateVoiceConnectorGroupCallable(const Model::CreateVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for CreateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceConnectorGroupAsync(const Model::CreateVoiceConnectorGroupRequest& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request) const;

        /**
         * An Async wrapper for DeleteAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAppInstanceOutcomeCallable DeleteAppInstanceCallable(const Model::DeleteAppInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceAsync(const Model::DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAppInstanceAdminOutcomeCallable DeleteAppInstanceAdminCallable(const Model::DeleteAppInstanceAdminRequest& request) const;

        /**
         * An Async wrapper for DeleteAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceAdminAsync(const Model::DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAppInstanceStreamingConfigurationsOutcomeCallable DeleteAppInstanceStreamingConfigurationsCallable(const Model::DeleteAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DeleteAppInstanceStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceStreamingConfigurationsAsync(const Model::DeleteAppInstanceStreamingConfigurationsRequest& request, const DeleteAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceUserOutcome DeleteAppInstanceUser(const Model::DeleteAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppInstanceUserOutcomeCallable DeleteAppInstanceUserCallable(const Model::DeleteAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for DeleteAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceUserAsync(const Model::DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an attendee from the specified Amazon Chime SDK meeting and deletes
         * their <code>JoinToken</code>. Attendees are automatically deleted when a Amazon
         * Chime SDK meeting is deleted. For more information about the Amazon Chime SDK,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttendeeOutcome DeleteAttendee(const Model::DeleteAttendeeRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttendeeOutcomeCallable DeleteAttendeeCallable(const Model::DeleteAttendeeRequest& request) const;

        /**
         * An Async wrapper for DeleteAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAttendeeAsync(const Model::DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteChannelBanOutcomeCallable DeleteChannelBanCallable(const Model::DeleteChannelBanRequest& request) const;

        /**
         * An Async wrapper for DeleteChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelBanAsync(const Model::DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteChannelMembershipOutcomeCallable DeleteChannelMembershipCallable(const Model::DeleteChannelMembershipRequest& request) const;

        /**
         * An Async wrapper for DeleteChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelMembershipAsync(const Model::DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteChannelMessageOutcomeCallable DeleteChannelMessageCallable(const Model::DeleteChannelMessageRequest& request) const;

        /**
         * An Async wrapper for DeleteChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelMessageAsync(const Model::DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteChannelModeratorOutcomeCallable DeleteChannelModeratorCallable(const Model::DeleteChannelModeratorRequest& request) const;

        /**
         * An Async wrapper for DeleteChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelModeratorAsync(const Model::DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteEventsConfigurationOutcomeCallable DeleteEventsConfigurationCallable(const Model::DeleteEventsConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteEventsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventsConfigurationAsync(const Model::DeleteEventsConfigurationRequest& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMediaCapturePipelineOutcome DeleteMediaCapturePipeline(const Model::DeleteMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMediaCapturePipelineOutcomeCallable DeleteMediaCapturePipelineCallable(const Model::DeleteMediaCapturePipelineRequest& request) const;

        /**
         * An Async wrapper for DeleteMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMediaCapturePipelineAsync(const Model::DeleteMediaCapturePipelineRequest& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime SDK meeting. The operation deletes all
         * attendees, disconnects all clients, and prevents new clients from joining the
         * meeting. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeetingOutcome DeleteMeeting(const Model::DeleteMeetingRequest& request) const;

        /**
         * A Callable wrapper for DeleteMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMeetingOutcomeCallable DeleteMeetingCallable(const Model::DeleteMeetingRequest& request) const;

        /**
         * An Async wrapper for DeleteMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMeetingAsync(const Model::DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeletePhoneNumberOutcomeCallable DeletePhoneNumberCallable(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for DeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePhoneNumberAsync(const Model::DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteProxySessionOutcomeCallable DeleteProxySessionCallable(const Model::DeleteProxySessionRequest& request) const;

        /**
         * An Async wrapper for DeleteProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProxySessionAsync(const Model::DeleteProxySessionRequest& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request) const;

        /**
         * An Async wrapper for DeleteRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteRoomMembershipOutcomeCallable DeleteRoomMembershipCallable(const Model::DeleteRoomMembershipRequest& request) const;

        /**
         * An Async wrapper for DeleteRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomMembershipAsync(const Model::DeleteRoomMembershipRequest& request, const DeleteRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSipMediaApplicationOutcome DeleteSipMediaApplication(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSipMediaApplicationOutcomeCallable DeleteSipMediaApplicationCallable(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSipMediaApplicationAsync(const Model::DeleteSipMediaApplicationRequest& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSipRuleOutcomeCallable DeleteSipRuleCallable(const Model::DeleteSipRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSipRuleAsync(const Model::DeleteSipRuleRequest& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorOutcomeCallable DeleteVoiceConnectorCallable(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorAsync(const Model::DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable DeleteVoiceConnectorEmergencyCallingConfigurationCallable(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorEmergencyCallingConfigurationAsync(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorGroupOutcomeCallable DeleteVoiceConnectorGroupCallable(const Model::DeleteVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorGroupAsync(const Model::DeleteVoiceConnectorGroupRequest& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorOriginationOutcomeCallable DeleteVoiceConnectorOriginationCallable(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorOriginationAsync(const Model::DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorProxyOutcomeCallable DeleteVoiceConnectorProxyCallable(const Model::DeleteVoiceConnectorProxyRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorProxyAsync(const Model::DeleteVoiceConnectorProxyRequest& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorStreamingConfigurationOutcomeCallable DeleteVoiceConnectorStreamingConfigurationCallable(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorStreamingConfigurationAsync(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorTerminationOutcomeCallable DeleteVoiceConnectorTerminationCallable(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationAsync(const Model::DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcomeCallable DeleteVoiceConnectorTerminationCredentialsCallable(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationCredentialsAsync(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppInstanceOutcomeCallable DescribeAppInstanceCallable(const Model::DescribeAppInstanceRequest& request) const;

        /**
         * An Async wrapper for DescribeAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceAsync(const Model::DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppInstanceAdminOutcomeCallable DescribeAppInstanceAdminCallable(const Model::DescribeAppInstanceAdminRequest& request) const;

        /**
         * An Async wrapper for DescribeAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceAdminAsync(const Model::DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppInstanceUserOutcomeCallable DescribeAppInstanceUserCallable(const Model::DescribeAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for DescribeAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceUserAsync(const Model::DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeChannelBanOutcomeCallable DescribeChannelBanCallable(const Model::DescribeChannelBanRequest& request) const;

        /**
         * An Async wrapper for DescribeChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelBanAsync(const Model::DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeChannelMembershipOutcomeCallable DescribeChannelMembershipCallable(const Model::DescribeChannelMembershipRequest& request) const;

        /**
         * An Async wrapper for DescribeChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelMembershipAsync(const Model::DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeChannelMembershipForAppInstanceUserOutcomeCallable DescribeChannelMembershipForAppInstanceUserCallable(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for DescribeChannelMembershipForAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelMembershipForAppInstanceUserAsync(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeChannelModeratedByAppInstanceUserOutcomeCallable DescribeChannelModeratedByAppInstanceUserCallable(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for DescribeChannelModeratedByAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelModeratedByAppInstanceUserAsync(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeChannelModeratorOutcomeCallable DescribeChannelModeratorCallable(const Model::DescribeChannelModeratorRequest& request) const;

        /**
         * An Async wrapper for DescribeChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelModeratorAsync(const Model::DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociatePhoneNumberFromUserOutcomeCallable DisassociatePhoneNumberFromUserCallable(const Model::DisassociatePhoneNumberFromUserRequest& request) const;

        /**
         * An Async wrapper for DisassociatePhoneNumberFromUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumberFromUserAsync(const Model::DisassociatePhoneNumberFromUserRequest& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorCallable(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumbersFromVoiceConnectorAsync(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateSigninDelegateGroupsFromAccountOutcomeCallable DisassociateSigninDelegateGroupsFromAccountCallable(const Model::DisassociateSigninDelegateGroupsFromAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateSigninDelegateGroupsFromAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSigninDelegateGroupsFromAccountAsync(const Model::DisassociateSigninDelegateGroupsFromAccountRequest& request, const DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request) const;

        /**
         * An Async wrapper for GetAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAppInstanceRetentionSettingsOutcomeCallable GetAppInstanceRetentionSettingsCallable(const Model::GetAppInstanceRetentionSettingsRequest& request) const;

        /**
         * An Async wrapper for GetAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppInstanceRetentionSettingsAsync(const Model::GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAppInstanceStreamingConfigurationsOutcomeCallable GetAppInstanceStreamingConfigurationsCallable(const Model::GetAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for GetAppInstanceStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppInstanceStreamingConfigurationsAsync(const Model::GetAppInstanceStreamingConfigurationsRequest& request, const GetAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets the Amazon Chime SDK attendee details for a specified meeting ID and
         * attendee ID. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i> . </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttendeeOutcome GetAttendee(const Model::GetAttendeeRequest& request) const;

        /**
         * A Callable wrapper for GetAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttendeeOutcomeCallable GetAttendeeCallable(const Model::GetAttendeeRequest& request) const;

        /**
         * An Async wrapper for GetAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttendeeAsync(const Model::GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetBotOutcomeCallable GetBotCallable(const Model::GetBotRequest& request) const;

        /**
         * An Async wrapper for GetBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotAsync(const Model::GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetChannelMessageOutcomeCallable GetChannelMessageCallable(const Model::GetChannelMessageRequest& request) const;

        /**
         * An Async wrapper for GetChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelMessageAsync(const Model::GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEventsConfigurationOutcomeCallable GetEventsConfigurationCallable(const Model::GetEventsConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetEventsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventsConfigurationAsync(const Model::GetEventsConfigurationRequest& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable() const;

        /**
         * An Async wrapper for GetGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Gets an existing media capture pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMediaCapturePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaCapturePipelineOutcome GetMediaCapturePipeline(const Model::GetMediaCapturePipelineRequest& request) const;

        /**
         * A Callable wrapper for GetMediaCapturePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaCapturePipelineOutcomeCallable GetMediaCapturePipelineCallable(const Model::GetMediaCapturePipelineRequest& request) const;

        /**
         * An Async wrapper for GetMediaCapturePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaCapturePipelineAsync(const Model::GetMediaCapturePipelineRequest& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets the Amazon Chime SDK meeting details for the specified meeting ID. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i> . </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMeetingOutcome GetMeeting(const Model::GetMeetingRequest& request) const;

        /**
         * A Callable wrapper for GetMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMeetingOutcomeCallable GetMeetingCallable(const Model::GetMeetingRequest& request) const;

        /**
         * An Async wrapper for GetMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMeetingAsync(const Model::GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetMessagingSessionEndpointOutcomeCallable GetMessagingSessionEndpointCallable(const Model::GetMessagingSessionEndpointRequest& request) const;

        /**
         * An Async wrapper for GetMessagingSessionEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMessagingSessionEndpointAsync(const Model::GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetPhoneNumberOutcomeCallable GetPhoneNumberCallable(const Model::GetPhoneNumberRequest& request) const;

        /**
         * An Async wrapper for GetPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberAsync(const Model::GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetPhoneNumberOrderOutcomeCallable GetPhoneNumberOrderCallable(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * An Async wrapper for GetPhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberOrderAsync(const Model::GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetPhoneNumberSettingsOutcomeCallable GetPhoneNumberSettingsCallable() const;

        /**
         * An Async wrapper for GetPhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
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
        virtual Model::GetProxySessionOutcomeCallable GetProxySessionCallable(const Model::GetProxySessionRequest& request) const;

        /**
         * An Async wrapper for GetProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProxySessionAsync(const Model::GetProxySessionRequest& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRetentionSettingsOutcomeCallable GetRetentionSettingsCallable(const Model::GetRetentionSettingsRequest& request) const;

        /**
         * An Async wrapper for GetRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRetentionSettingsAsync(const Model::GetRetentionSettingsRequest& request, const GetRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRoomOutcomeCallable GetRoomCallable(const Model::GetRoomRequest& request) const;

        /**
         * An Async wrapper for GetRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomAsync(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSipMediaApplicationOutcomeCallable GetSipMediaApplicationCallable(const Model::GetSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for GetSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipMediaApplicationAsync(const Model::GetSipMediaApplicationRequest& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSipMediaApplicationLoggingConfigurationOutcomeCallable GetSipMediaApplicationLoggingConfigurationCallable(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipMediaApplicationLoggingConfigurationAsync(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSipRuleOutcomeCallable GetSipRuleCallable(const Model::GetSipRuleRequest& request) const;

        /**
         * An Async wrapper for GetSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipRuleAsync(const Model::GetSipRuleRequest& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUserSettingsOutcomeCallable GetUserSettingsCallable(const Model::GetUserSettingsRequest& request) const;

        /**
         * An Async wrapper for GetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserSettingsAsync(const Model::GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorOutcomeCallable GetVoiceConnectorCallable(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorAsync(const Model::GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable GetVoiceConnectorEmergencyCallingConfigurationCallable(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorEmergencyCallingConfigurationAsync(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorGroupOutcomeCallable GetVoiceConnectorGroupCallable(const Model::GetVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorGroupAsync(const Model::GetVoiceConnectorGroupRequest& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorLoggingConfigurationOutcomeCallable GetVoiceConnectorLoggingConfigurationCallable(const Model::GetVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorLoggingConfigurationAsync(const Model::GetVoiceConnectorLoggingConfigurationRequest& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorOriginationOutcomeCallable GetVoiceConnectorOriginationCallable(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorOriginationAsync(const Model::GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorProxyOutcomeCallable GetVoiceConnectorProxyCallable(const Model::GetVoiceConnectorProxyRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorProxyAsync(const Model::GetVoiceConnectorProxyRequest& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorStreamingConfigurationOutcomeCallable GetVoiceConnectorStreamingConfigurationCallable(const Model::GetVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorStreamingConfigurationAsync(const Model::GetVoiceConnectorStreamingConfigurationRequest& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorTerminationOutcomeCallable GetVoiceConnectorTerminationCallable(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationAsync(const Model::GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVoiceConnectorTerminationHealthOutcomeCallable GetVoiceConnectorTerminationHealthCallable(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorTerminationHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationHealthAsync(const Model::GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::InviteUsersOutcomeCallable InviteUsersCallable(const Model::InviteUsersRequest& request) const;

        /**
         * An Async wrapper for InviteUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteUsersAsync(const Model::InviteUsersRequest& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAccountsOutcomeCallable ListAccountsCallable(const Model::ListAccountsRequest& request) const;

        /**
         * An Async wrapper for ListAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsAsync(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppInstanceAdminsOutcomeCallable ListAppInstanceAdminsCallable(const Model::ListAppInstanceAdminsRequest& request) const;

        /**
         * An Async wrapper for ListAppInstanceAdmins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstanceAdminsAsync(const Model::ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppInstanceUsersOutcomeCallable ListAppInstanceUsersCallable(const Model::ListAppInstanceUsersRequest& request) const;

        /**
         * An Async wrapper for ListAppInstanceUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstanceUsersAsync(const Model::ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppInstancesOutcomeCallable ListAppInstancesCallable(const Model::ListAppInstancesRequest& request) const;

        /**
         * An Async wrapper for ListAppInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstancesAsync(const Model::ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAttendeeTagsOutcomeCallable ListAttendeeTagsCallable(const Model::ListAttendeeTagsRequest& request) const;

        /**
         * An Async wrapper for ListAttendeeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttendeeTagsAsync(const Model::ListAttendeeTagsRequest& request, const ListAttendeeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the attendees for the specified Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttendeesOutcome ListAttendees(const Model::ListAttendeesRequest& request) const;

        /**
         * A Callable wrapper for ListAttendees that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttendeesOutcomeCallable ListAttendeesCallable(const Model::ListAttendeesRequest& request) const;

        /**
         * An Async wrapper for ListAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttendeesAsync(const Model::ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListBotsOutcomeCallable ListBotsCallable(const Model::ListBotsRequest& request) const;

        /**
         * An Async wrapper for ListBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotsAsync(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListChannelBansOutcomeCallable ListChannelBansCallable(const Model::ListChannelBansRequest& request) const;

        /**
         * An Async wrapper for ListChannelBans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelBansAsync(const Model::ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListChannelMembershipsOutcomeCallable ListChannelMembershipsCallable(const Model::ListChannelMembershipsRequest& request) const;

        /**
         * An Async wrapper for ListChannelMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMembershipsAsync(const Model::ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListChannelMembershipsForAppInstanceUserOutcomeCallable ListChannelMembershipsForAppInstanceUserCallable(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for ListChannelMembershipsForAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMembershipsForAppInstanceUserAsync(const Model::ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListChannelMessagesOutcomeCallable ListChannelMessagesCallable(const Model::ListChannelMessagesRequest& request) const;

        /**
         * An Async wrapper for ListChannelMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMessagesAsync(const Model::ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListChannelModeratorsOutcomeCallable ListChannelModeratorsCallable(const Model::ListChannelModeratorsRequest& request) const;

        /**
         * An Async wrapper for ListChannelModerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelModeratorsAsync(const Model::ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListChannelsModeratedByAppInstanceUserOutcomeCallable ListChannelsModeratedByAppInstanceUserCallable(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for ListChannelsModeratedByAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsModeratedByAppInstanceUserAsync(const Model::ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of media capture pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMediaCapturePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMediaCapturePipelinesOutcome ListMediaCapturePipelines(const Model::ListMediaCapturePipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListMediaCapturePipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMediaCapturePipelinesOutcomeCallable ListMediaCapturePipelinesCallable(const Model::ListMediaCapturePipelinesRequest& request) const;

        /**
         * An Async wrapper for ListMediaCapturePipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMediaCapturePipelinesAsync(const Model::ListMediaCapturePipelinesRequest& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListMeetingTagsOutcomeCallable ListMeetingTagsCallable(const Model::ListMeetingTagsRequest& request) const;

        /**
         * An Async wrapper for ListMeetingTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMeetingTagsAsync(const Model::ListMeetingTagsRequest& request, const ListMeetingTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists up to 100 active Amazon Chime SDK meetings. For more information about
         * the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeetingsOutcome ListMeetings(const Model::ListMeetingsRequest& request) const;

        /**
         * A Callable wrapper for ListMeetings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMeetingsOutcomeCallable ListMeetingsCallable(const Model::ListMeetingsRequest& request) const;

        /**
         * An Async wrapper for ListMeetings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMeetingsAsync(const Model::ListMeetingsRequest& request, const ListMeetingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListPhoneNumberOrdersOutcomeCallable ListPhoneNumberOrdersCallable(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * An Async wrapper for ListPhoneNumberOrders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumberOrdersAsync(const Model::ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * An Async wrapper for ListPhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListProxySessionsOutcomeCallable ListProxySessionsCallable(const Model::ListProxySessionsRequest& request) const;

        /**
         * An Async wrapper for ListProxySessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProxySessionsAsync(const Model::ListProxySessionsRequest& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListRoomMembershipsOutcomeCallable ListRoomMembershipsCallable(const Model::ListRoomMembershipsRequest& request) const;

        /**
         * An Async wrapper for ListRoomMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoomMembershipsAsync(const Model::ListRoomMembershipsRequest& request, const ListRoomMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListRoomsOutcomeCallable ListRoomsCallable(const Model::ListRoomsRequest& request) const;

        /**
         * An Async wrapper for ListRooms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoomsAsync(const Model::ListRoomsRequest& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSipMediaApplicationsOutcomeCallable ListSipMediaApplicationsCallable(const Model::ListSipMediaApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListSipMediaApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSipMediaApplicationsAsync(const Model::ListSipMediaApplicationsRequest& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSipRulesOutcomeCallable ListSipRulesCallable(const Model::ListSipRulesRequest& request) const;

        /**
         * An Async wrapper for ListSipRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSipRulesAsync(const Model::ListSipRulesRequest& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists supported phone number countries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSupportedPhoneNumberCountries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSupportedPhoneNumberCountriesOutcome ListSupportedPhoneNumberCountries(const Model::ListSupportedPhoneNumberCountriesRequest& request) const;

        /**
         * A Callable wrapper for ListSupportedPhoneNumberCountries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSupportedPhoneNumberCountriesOutcomeCallable ListSupportedPhoneNumberCountriesCallable(const Model::ListSupportedPhoneNumberCountriesRequest& request) const;

        /**
         * An Async wrapper for ListSupportedPhoneNumberCountries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSupportedPhoneNumberCountriesAsync(const Model::ListSupportedPhoneNumberCountriesRequest& request, const ListSupportedPhoneNumberCountriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListVoiceConnectorGroupsOutcomeCallable ListVoiceConnectorGroupsCallable(const Model::ListVoiceConnectorGroupsRequest& request) const;

        /**
         * An Async wrapper for ListVoiceConnectorGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorGroupsAsync(const Model::ListVoiceConnectorGroupsRequest& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcomeCallable ListVoiceConnectorTerminationCredentialsCallable(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * An Async wrapper for ListVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorTerminationCredentialsAsync(const Model::ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListVoiceConnectorsOutcomeCallable ListVoiceConnectorsCallable(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * An Async wrapper for ListVoiceConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorsAsync(const Model::ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::LogoutUserOutcomeCallable LogoutUserCallable(const Model::LogoutUserRequest& request) const;

        /**
         * An Async wrapper for LogoutUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LogoutUserAsync(const Model::LogoutUserRequest& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutAppInstanceRetentionSettingsOutcomeCallable PutAppInstanceRetentionSettingsCallable(const Model::PutAppInstanceRetentionSettingsRequest& request) const;

        /**
         * An Async wrapper for PutAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppInstanceRetentionSettingsAsync(const Model::PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutAppInstanceStreamingConfigurationsOutcomeCallable PutAppInstanceStreamingConfigurationsCallable(const Model::PutAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for PutAppInstanceStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppInstanceStreamingConfigurationsAsync(const Model::PutAppInstanceStreamingConfigurationsRequest& request, const PutAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutEventsConfigurationOutcomeCallable PutEventsConfigurationCallable(const Model::PutEventsConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutEventsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsConfigurationAsync(const Model::PutEventsConfigurationRequest& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutRetentionSettingsOutcomeCallable PutRetentionSettingsCallable(const Model::PutRetentionSettingsRequest& request) const;

        /**
         * An Async wrapper for PutRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRetentionSettingsAsync(const Model::PutRetentionSettingsRequest& request, const PutRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutSipMediaApplicationLoggingConfigurationOutcomeCallable PutSipMediaApplicationLoggingConfigurationCallable(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSipMediaApplicationLoggingConfigurationAsync(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable PutVoiceConnectorEmergencyCallingConfigurationCallable(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorEmergencyCallingConfigurationAsync(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutVoiceConnectorLoggingConfigurationOutcomeCallable PutVoiceConnectorLoggingConfigurationCallable(const Model::PutVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorLoggingConfigurationAsync(const Model::PutVoiceConnectorLoggingConfigurationRequest& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutVoiceConnectorOriginationOutcomeCallable PutVoiceConnectorOriginationCallable(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorOriginationAsync(const Model::PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutVoiceConnectorProxyOutcomeCallable PutVoiceConnectorProxyCallable(const Model::PutVoiceConnectorProxyRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorProxyAsync(const Model::PutVoiceConnectorProxyRequest& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutVoiceConnectorStreamingConfigurationOutcomeCallable PutVoiceConnectorStreamingConfigurationCallable(const Model::PutVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorStreamingConfigurationAsync(const Model::PutVoiceConnectorStreamingConfigurationRequest& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutVoiceConnectorTerminationOutcomeCallable PutVoiceConnectorTerminationCallable(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationAsync(const Model::PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcomeCallable PutVoiceConnectorTerminationCredentialsCallable(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationCredentialsAsync(const Model::PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RedactChannelMessageOutcomeCallable RedactChannelMessageCallable(const Model::RedactChannelMessageRequest& request) const;

        /**
         * An Async wrapper for RedactChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RedactChannelMessageAsync(const Model::RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RedactConversationMessageOutcomeCallable RedactConversationMessageCallable(const Model::RedactConversationMessageRequest& request) const;

        /**
         * An Async wrapper for RedactConversationMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RedactConversationMessageAsync(const Model::RedactConversationMessageRequest& request, const RedactConversationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RedactRoomMessageOutcomeCallable RedactRoomMessageCallable(const Model::RedactRoomMessageRequest& request) const;

        /**
         * An Async wrapper for RedactRoomMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RedactRoomMessageAsync(const Model::RedactRoomMessageRequest& request, const RedactRoomMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RegenerateSecurityTokenOutcome RegenerateSecurityToken(const Model::RegenerateSecurityTokenRequest& request) const;

        /**
         * A Callable wrapper for RegenerateSecurityToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegenerateSecurityTokenOutcomeCallable RegenerateSecurityTokenCallable(const Model::RegenerateSecurityTokenRequest& request) const;

        /**
         * An Async wrapper for RegenerateSecurityToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegenerateSecurityTokenAsync(const Model::RegenerateSecurityTokenRequest& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ResetPersonalPINOutcomeCallable ResetPersonalPINCallable(const Model::ResetPersonalPINRequest& request) const;

        /**
         * An Async wrapper for ResetPersonalPIN that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetPersonalPINAsync(const Model::ResetPersonalPINRequest& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RestorePhoneNumberOutcomeCallable RestorePhoneNumberCallable(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for RestorePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestorePhoneNumberAsync(const Model::RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * An Async wrapper for SearchAvailablePhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAvailablePhoneNumbersAsync(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SendChannelMessageOutcomeCallable SendChannelMessageCallable(const Model::SendChannelMessageRequest& request) const;

        /**
         * An Async wrapper for SendChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendChannelMessageAsync(const Model::SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts transcription for the specified <code>meetingId</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/StartMeetingTranscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMeetingTranscriptionOutcome StartMeetingTranscription(const Model::StartMeetingTranscriptionRequest& request) const;

        /**
         * A Callable wrapper for StartMeetingTranscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMeetingTranscriptionOutcomeCallable StartMeetingTranscriptionCallable(const Model::StartMeetingTranscriptionRequest& request) const;

        /**
         * An Async wrapper for StartMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMeetingTranscriptionAsync(const Model::StartMeetingTranscriptionRequest& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopMeetingTranscriptionOutcomeCallable StopMeetingTranscriptionCallable(const Model::StopMeetingTranscriptionRequest& request) const;

        /**
         * An Async wrapper for StopMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMeetingTranscriptionAsync(const Model::StopMeetingTranscriptionRequest& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagAttendeeOutcomeCallable TagAttendeeCallable(const Model::TagAttendeeRequest& request) const;

        /**
         * An Async wrapper for TagAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagAttendeeAsync(const Model::TagAttendeeRequest& request, const TagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagMeetingOutcomeCallable TagMeetingCallable(const Model::TagMeetingRequest& request) const;

        /**
         * An Async wrapper for TagMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagMeetingAsync(const Model::TagMeetingRequest& request, const TagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagAttendeeOutcomeCallable UntagAttendeeCallable(const Model::UntagAttendeeRequest& request) const;

        /**
         * An Async wrapper for UntagAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagAttendeeAsync(const Model::UntagAttendeeRequest& request, const UntagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagMeetingOutcomeCallable UntagMeetingCallable(const Model::UntagMeetingRequest& request) const;

        /**
         * An Async wrapper for UntagMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagMeetingAsync(const Model::UntagMeetingRequest& request, const UntagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateAccountOutcomeCallable UpdateAccountCallable(const Model::UpdateAccountRequest& request) const;

        /**
         * An Async wrapper for UpdateAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountAsync(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountSettingsAsync(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates <code>AppInstance</code> metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceOutcome UpdateAppInstance(const Model::UpdateAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppInstanceOutcomeCallable UpdateAppInstanceCallable(const Model::UpdateAppInstanceRequest& request) const;

        /**
         * An Async wrapper for UpdateAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppInstanceAsync(const Model::UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateAppInstanceUserOutcomeCallable UpdateAppInstanceUserCallable(const Model::UpdateAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for UpdateAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppInstanceUserAsync(const Model::UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateBotOutcomeCallable UpdateBotCallable(const Model::UpdateBotRequest& request) const;

        /**
         * An Async wrapper for UpdateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotAsync(const Model::UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateChannelMessageOutcomeCallable UpdateChannelMessageCallable(const Model::UpdateChannelMessageRequest& request) const;

        /**
         * An Async wrapper for UpdateChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelMessageAsync(const Model::UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateChannelReadMarkerOutcomeCallable UpdateChannelReadMarkerCallable(const Model::UpdateChannelReadMarkerRequest& request) const;

        /**
         * An Async wrapper for UpdateChannelReadMarker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelReadMarkerAsync(const Model::UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalSettingsAsync(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for UpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberAsync(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdatePhoneNumberSettingsOutcomeCallable UpdatePhoneNumberSettingsCallable(const Model::UpdatePhoneNumberSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdatePhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberSettingsAsync(const Model::UpdatePhoneNumberSettingsRequest& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateProxySessionOutcomeCallable UpdateProxySessionCallable(const Model::UpdateProxySessionRequest& request) const;

        /**
         * An Async wrapper for UpdateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProxySessionAsync(const Model::UpdateProxySessionRequest& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const Model::UpdateRoomRequest& request) const;

        /**
         * An Async wrapper for UpdateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomAsync(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateRoomMembershipOutcomeCallable UpdateRoomMembershipCallable(const Model::UpdateRoomMembershipRequest& request) const;

        /**
         * An Async wrapper for UpdateRoomMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomMembershipAsync(const Model::UpdateRoomMembershipRequest& request, const UpdateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSipMediaApplicationOutcomeCallable UpdateSipMediaApplicationCallable(const Model::UpdateSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipMediaApplicationAsync(const Model::UpdateSipMediaApplicationRequest& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSipMediaApplicationCallOutcomeCallable UpdateSipMediaApplicationCallCallable(const Model::UpdateSipMediaApplicationCallRequest& request) const;

        /**
         * An Async wrapper for UpdateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipMediaApplicationCallAsync(const Model::UpdateSipMediaApplicationCallRequest& request, const UpdateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details of the specified SIP rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipRuleOutcome UpdateSipRule(const Model::UpdateSipRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSipRuleOutcomeCallable UpdateSipRuleCallable(const Model::UpdateSipRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipRuleAsync(const Model::UpdateSipRuleRequest& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateUserSettingsOutcomeCallable UpdateUserSettingsCallable(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserSettingsAsync(const Model::UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateVoiceConnectorOutcomeCallable UpdateVoiceConnectorCallable(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for UpdateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceConnectorAsync(const Model::UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateVoiceConnectorGroupOutcomeCallable UpdateVoiceConnectorGroupCallable(const Model::UpdateVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceConnectorGroupAsync(const Model::UpdateVoiceConnectorGroupRequest& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ValidateE911AddressOutcomeCallable ValidateE911AddressCallable(const Model::ValidateE911AddressRequest& request) const;

        /**
         * An Async wrapper for ValidateE911Address that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateE911AddressAsync(const Model::ValidateE911AddressRequest& request, const ValidateE911AddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
