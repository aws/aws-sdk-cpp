/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityServiceClientModel.h>

namespace Aws
{
namespace ChimeSDKIdentity
{
  /**
   * <p>The Amazon Chime SDK Identity APIs in this section allow software developers
   * to create and manage unique instances of their messaging applications. These
   * APIs provide the overarching framework for creating and sending messages. For
   * more information about the identity APIs, refer to <a
   * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon
   * Chime SDK identity</a>.</p>
   */
  class AWS_CHIMESDKIDENTITY_API ChimeSDKIdentityClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKIdentityClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKIdentityClient(const Aws::ChimeSDKIdentity::ChimeSDKIdentityClientConfiguration& clientConfiguration = Aws::ChimeSDKIdentity::ChimeSDKIdentityClientConfiguration(),
                               std::shared_ptr<ChimeSDKIdentityEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKIdentityEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKIdentityClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ChimeSDKIdentityEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKIdentityEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ChimeSDKIdentity::ChimeSDKIdentityClientConfiguration& clientConfiguration = Aws::ChimeSDKIdentity::ChimeSDKIdentityClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKIdentityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ChimeSDKIdentityEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKIdentityEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ChimeSDKIdentity::ChimeSDKIdentityClientConfiguration& clientConfiguration = Aws::ChimeSDKIdentity::ChimeSDKIdentityClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKIdentityClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKIdentityClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKIdentityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ChimeSDKIdentityClient();

        /**
         * <p>Creates an Amazon Chime SDK messaging <code>AppInstance</code> under an AWS
         * account. Only SDK messaging customers use this API.
         * <code>CreateAppInstance</code> supports idempotency behavior as described in the
         * AWS API Standard.</p> <p>identity</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/CreateAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceOutcome CreateAppInstance(const Model::CreateAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppInstanceRequestT = Model::CreateAppInstanceRequest>
        Model::CreateAppInstanceOutcomeCallable CreateAppInstanceCallable(const CreateAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::CreateAppInstance, request);
        }

        /**
         * An Async wrapper for CreateAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppInstanceRequestT = Model::CreateAppInstanceRequest>
        void CreateAppInstanceAsync(const CreateAppInstanceRequestT& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::CreateAppInstance, request, handler, context);
        }

        /**
         * <p>Promotes an <code>AppInstanceUser</code> to an <code>AppInstanceAdmin</code>.
         * The promoted user can perform the following actions. </p> <ul> <li> <p>
         * <code>ChannelModerator</code> actions across all channels in the
         * <code>AppInstance</code>.</p> </li> <li> <p> <code>DeleteChannelMessage</code>
         * actions.</p> </li> </ul> <p>Only an <code>AppInstanceUser</code> can be promoted
         * to an <code>AppInstanceAdmin</code> role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/CreateAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceAdminOutcome CreateAppInstanceAdmin(const Model::CreateAppInstanceAdminRequest& request) const;

        /**
         * A Callable wrapper for CreateAppInstanceAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppInstanceAdminRequestT = Model::CreateAppInstanceAdminRequest>
        Model::CreateAppInstanceAdminOutcomeCallable CreateAppInstanceAdminCallable(const CreateAppInstanceAdminRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::CreateAppInstanceAdmin, request);
        }

        /**
         * An Async wrapper for CreateAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppInstanceAdminRequestT = Model::CreateAppInstanceAdminRequest>
        void CreateAppInstanceAdminAsync(const CreateAppInstanceAdminRequestT& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::CreateAppInstanceAdmin, request, handler, context);
        }

        /**
         * <p>Creates a user under an Amazon Chime <code>AppInstance</code>. The request
         * consists of a unique <code>appInstanceUserId</code> and <code>Name</code> for
         * that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/CreateAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceUserOutcome CreateAppInstanceUser(const Model::CreateAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for CreateAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppInstanceUserRequestT = Model::CreateAppInstanceUserRequest>
        Model::CreateAppInstanceUserOutcomeCallable CreateAppInstanceUserCallable(const CreateAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::CreateAppInstanceUser, request);
        }

        /**
         * An Async wrapper for CreateAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppInstanceUserRequestT = Model::CreateAppInstanceUserRequest>
        void CreateAppInstanceUserAsync(const CreateAppInstanceUserRequestT& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::CreateAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Deletes an <code>AppInstance</code> and all associated data
         * asynchronously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeleteAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceOutcome DeleteAppInstance(const Model::DeleteAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInstanceRequestT = Model::DeleteAppInstanceRequest>
        Model::DeleteAppInstanceOutcomeCallable DeleteAppInstanceCallable(const DeleteAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DeleteAppInstance, request);
        }

        /**
         * An Async wrapper for DeleteAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInstanceRequestT = Model::DeleteAppInstanceRequest>
        void DeleteAppInstanceAsync(const DeleteAppInstanceRequestT& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DeleteAppInstance, request, handler, context);
        }

        /**
         * <p>Demotes an <code>AppInstanceAdmin</code> to an <code>AppInstanceUser</code>.
         * This action does not delete the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeleteAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceAdminOutcome DeleteAppInstanceAdmin(const Model::DeleteAppInstanceAdminRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstanceAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInstanceAdminRequestT = Model::DeleteAppInstanceAdminRequest>
        Model::DeleteAppInstanceAdminOutcomeCallable DeleteAppInstanceAdminCallable(const DeleteAppInstanceAdminRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DeleteAppInstanceAdmin, request);
        }

        /**
         * An Async wrapper for DeleteAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInstanceAdminRequestT = Model::DeleteAppInstanceAdminRequest>
        void DeleteAppInstanceAdminAsync(const DeleteAppInstanceAdminRequestT& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DeleteAppInstanceAdmin, request, handler, context);
        }

        /**
         * <p>Deletes an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeleteAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceUserOutcome DeleteAppInstanceUser(const Model::DeleteAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInstanceUserRequestT = Model::DeleteAppInstanceUserRequest>
        Model::DeleteAppInstanceUserOutcomeCallable DeleteAppInstanceUserCallable(const DeleteAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DeleteAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DeleteAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInstanceUserRequestT = Model::DeleteAppInstanceUserRequest>
        void DeleteAppInstanceUserAsync(const DeleteAppInstanceUserRequestT& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DeleteAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Deregisters an <code>AppInstanceUserEndpoint</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeregisterAppInstanceUserEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterAppInstanceUserEndpointOutcome DeregisterAppInstanceUserEndpoint(const Model::DeregisterAppInstanceUserEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeregisterAppInstanceUserEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterAppInstanceUserEndpointRequestT = Model::DeregisterAppInstanceUserEndpointRequest>
        Model::DeregisterAppInstanceUserEndpointOutcomeCallable DeregisterAppInstanceUserEndpointCallable(const DeregisterAppInstanceUserEndpointRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DeregisterAppInstanceUserEndpoint, request);
        }

        /**
         * An Async wrapper for DeregisterAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterAppInstanceUserEndpointRequestT = Model::DeregisterAppInstanceUserEndpointRequest>
        void DeregisterAppInstanceUserEndpointAsync(const DeregisterAppInstanceUserEndpointRequestT& request, const DeregisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DeregisterAppInstanceUserEndpoint, request, handler, context);
        }

        /**
         * <p>Returns the full details of an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DescribeAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceOutcome DescribeAppInstance(const Model::DescribeAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppInstanceRequestT = Model::DescribeAppInstanceRequest>
        Model::DescribeAppInstanceOutcomeCallable DescribeAppInstanceCallable(const DescribeAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstance, request);
        }

        /**
         * An Async wrapper for DescribeAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppInstanceRequestT = Model::DescribeAppInstanceRequest>
        void DescribeAppInstanceAsync(const DescribeAppInstanceRequestT& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstance, request, handler, context);
        }

        /**
         * <p>Returns the full details of an <code>AppInstanceAdmin</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DescribeAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceAdminOutcome DescribeAppInstanceAdmin(const Model::DescribeAppInstanceAdminRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppInstanceAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppInstanceAdminRequestT = Model::DescribeAppInstanceAdminRequest>
        Model::DescribeAppInstanceAdminOutcomeCallable DescribeAppInstanceAdminCallable(const DescribeAppInstanceAdminRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstanceAdmin, request);
        }

        /**
         * An Async wrapper for DescribeAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppInstanceAdminRequestT = Model::DescribeAppInstanceAdminRequest>
        void DescribeAppInstanceAdminAsync(const DescribeAppInstanceAdminRequestT& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstanceAdmin, request, handler, context);
        }

        /**
         * <p>Returns the full details of an <code>AppInstanceUser</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DescribeAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceUserOutcome DescribeAppInstanceUser(const Model::DescribeAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppInstanceUserRequestT = Model::DescribeAppInstanceUserRequest>
        Model::DescribeAppInstanceUserOutcomeCallable DescribeAppInstanceUserCallable(const DescribeAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DescribeAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppInstanceUserRequestT = Model::DescribeAppInstanceUserRequest>
        void DescribeAppInstanceUserAsync(const DescribeAppInstanceUserRequestT& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Returns the full details of an
         * <code>AppInstanceUserEndpoint</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DescribeAppInstanceUserEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceUserEndpointOutcome DescribeAppInstanceUserEndpoint(const Model::DescribeAppInstanceUserEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppInstanceUserEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppInstanceUserEndpointRequestT = Model::DescribeAppInstanceUserEndpointRequest>
        Model::DescribeAppInstanceUserEndpointOutcomeCallable DescribeAppInstanceUserEndpointCallable(const DescribeAppInstanceUserEndpointRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstanceUserEndpoint, request);
        }

        /**
         * An Async wrapper for DescribeAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppInstanceUserEndpointRequestT = Model::DescribeAppInstanceUserEndpointRequest>
        void DescribeAppInstanceUserEndpointAsync(const DescribeAppInstanceUserEndpointRequestT& request, const DescribeAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstanceUserEndpoint, request, handler, context);
        }

        /**
         * <p>Gets the retention settings for an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/GetAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppInstanceRetentionSettingsOutcome GetAppInstanceRetentionSettings(const Model::GetAppInstanceRetentionSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAppInstanceRetentionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppInstanceRetentionSettingsRequestT = Model::GetAppInstanceRetentionSettingsRequest>
        Model::GetAppInstanceRetentionSettingsOutcomeCallable GetAppInstanceRetentionSettingsCallable(const GetAppInstanceRetentionSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::GetAppInstanceRetentionSettings, request);
        }

        /**
         * An Async wrapper for GetAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppInstanceRetentionSettingsRequestT = Model::GetAppInstanceRetentionSettingsRequest>
        void GetAppInstanceRetentionSettingsAsync(const GetAppInstanceRetentionSettingsRequestT& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::GetAppInstanceRetentionSettings, request, handler, context);
        }

        /**
         * <p>Returns a list of the administrators in the
         * <code>AppInstance</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/ListAppInstanceAdmins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstanceAdminsOutcome ListAppInstanceAdmins(const Model::ListAppInstanceAdminsRequest& request) const;

        /**
         * A Callable wrapper for ListAppInstanceAdmins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInstanceAdminsRequestT = Model::ListAppInstanceAdminsRequest>
        Model::ListAppInstanceAdminsOutcomeCallable ListAppInstanceAdminsCallable(const ListAppInstanceAdminsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::ListAppInstanceAdmins, request);
        }

        /**
         * An Async wrapper for ListAppInstanceAdmins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInstanceAdminsRequestT = Model::ListAppInstanceAdminsRequest>
        void ListAppInstanceAdminsAsync(const ListAppInstanceAdminsRequestT& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::ListAppInstanceAdmins, request, handler, context);
        }

        /**
         * <p>Lists all the <code>AppInstanceUserEndpoints</code> created under a single
         * <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/ListAppInstanceUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstanceUserEndpointsOutcome ListAppInstanceUserEndpoints(const Model::ListAppInstanceUserEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListAppInstanceUserEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInstanceUserEndpointsRequestT = Model::ListAppInstanceUserEndpointsRequest>
        Model::ListAppInstanceUserEndpointsOutcomeCallable ListAppInstanceUserEndpointsCallable(const ListAppInstanceUserEndpointsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::ListAppInstanceUserEndpoints, request);
        }

        /**
         * An Async wrapper for ListAppInstanceUserEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInstanceUserEndpointsRequestT = Model::ListAppInstanceUserEndpointsRequest>
        void ListAppInstanceUserEndpointsAsync(const ListAppInstanceUserEndpointsRequestT& request, const ListAppInstanceUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::ListAppInstanceUserEndpoints, request, handler, context);
        }

        /**
         * <p>List all <code>AppInstanceUsers</code> created under a single
         * <code>AppInstance</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/ListAppInstanceUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstanceUsersOutcome ListAppInstanceUsers(const Model::ListAppInstanceUsersRequest& request) const;

        /**
         * A Callable wrapper for ListAppInstanceUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInstanceUsersRequestT = Model::ListAppInstanceUsersRequest>
        Model::ListAppInstanceUsersOutcomeCallable ListAppInstanceUsersCallable(const ListAppInstanceUsersRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::ListAppInstanceUsers, request);
        }

        /**
         * An Async wrapper for ListAppInstanceUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInstanceUsersRequestT = Model::ListAppInstanceUsersRequest>
        void ListAppInstanceUsersAsync(const ListAppInstanceUsersRequestT& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::ListAppInstanceUsers, request, handler, context);
        }

        /**
         * <p>Lists all Amazon Chime <code>AppInstance</code>s created under a single AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/ListAppInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstancesOutcome ListAppInstances(const Model::ListAppInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListAppInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInstancesRequestT = Model::ListAppInstancesRequest>
        Model::ListAppInstancesOutcomeCallable ListAppInstancesCallable(const ListAppInstancesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::ListAppInstances, request);
        }

        /**
         * An Async wrapper for ListAppInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInstancesRequestT = Model::ListAppInstancesRequest>
        void ListAppInstancesAsync(const ListAppInstancesRequestT& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::ListAppInstances, request, handler, context);
        }

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK identity
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sets the amount of time in days that a given <code>AppInstance</code> retains
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/PutAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppInstanceRetentionSettingsOutcome PutAppInstanceRetentionSettings(const Model::PutAppInstanceRetentionSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutAppInstanceRetentionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAppInstanceRetentionSettingsRequestT = Model::PutAppInstanceRetentionSettingsRequest>
        Model::PutAppInstanceRetentionSettingsOutcomeCallable PutAppInstanceRetentionSettingsCallable(const PutAppInstanceRetentionSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::PutAppInstanceRetentionSettings, request);
        }

        /**
         * An Async wrapper for PutAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAppInstanceRetentionSettingsRequestT = Model::PutAppInstanceRetentionSettingsRequest>
        void PutAppInstanceRetentionSettingsAsync(const PutAppInstanceRetentionSettingsRequestT& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::PutAppInstanceRetentionSettings, request, handler, context);
        }

        /**
         * <p>Registers an endpoint under an Amazon Chime <code>AppInstanceUser</code>. The
         * endpoint receives messages for a user. For push notifications, the endpoint is a
         * mobile device used to receive mobile push notifications for a
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/RegisterAppInstanceUserEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAppInstanceUserEndpointOutcome RegisterAppInstanceUserEndpoint(const Model::RegisterAppInstanceUserEndpointRequest& request) const;

        /**
         * A Callable wrapper for RegisterAppInstanceUserEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterAppInstanceUserEndpointRequestT = Model::RegisterAppInstanceUserEndpointRequest>
        Model::RegisterAppInstanceUserEndpointOutcomeCallable RegisterAppInstanceUserEndpointCallable(const RegisterAppInstanceUserEndpointRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::RegisterAppInstanceUserEndpoint, request);
        }

        /**
         * An Async wrapper for RegisterAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterAppInstanceUserEndpointRequestT = Model::RegisterAppInstanceUserEndpointRequest>
        void RegisterAppInstanceUserEndpointAsync(const RegisterAppInstanceUserEndpointRequestT& request, const RegisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::RegisterAppInstanceUserEndpoint, request, handler, context);
        }

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK identity
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified Amazon Chime SDK identity
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates <code>AppInstance</code> metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/UpdateAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceOutcome UpdateAppInstance(const Model::UpdateAppInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppInstanceRequestT = Model::UpdateAppInstanceRequest>
        Model::UpdateAppInstanceOutcomeCallable UpdateAppInstanceCallable(const UpdateAppInstanceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::UpdateAppInstance, request);
        }

        /**
         * An Async wrapper for UpdateAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppInstanceRequestT = Model::UpdateAppInstanceRequest>
        void UpdateAppInstanceAsync(const UpdateAppInstanceRequestT& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::UpdateAppInstance, request, handler, context);
        }

        /**
         * <p>Updates the details of an <code>AppInstanceUser</code>. You can update names
         * and metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/UpdateAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceUserOutcome UpdateAppInstanceUser(const Model::UpdateAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppInstanceUserRequestT = Model::UpdateAppInstanceUserRequest>
        Model::UpdateAppInstanceUserOutcomeCallable UpdateAppInstanceUserCallable(const UpdateAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::UpdateAppInstanceUser, request);
        }

        /**
         * An Async wrapper for UpdateAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppInstanceUserRequestT = Model::UpdateAppInstanceUserRequest>
        void UpdateAppInstanceUserAsync(const UpdateAppInstanceUserRequestT& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::UpdateAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Updates the details of an <code>AppInstanceUserEndpoint</code>. You can
         * update the name and <code>AllowMessage</code> values.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/UpdateAppInstanceUserEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceUserEndpointOutcome UpdateAppInstanceUserEndpoint(const Model::UpdateAppInstanceUserEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppInstanceUserEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppInstanceUserEndpointRequestT = Model::UpdateAppInstanceUserEndpointRequest>
        Model::UpdateAppInstanceUserEndpointOutcomeCallable UpdateAppInstanceUserEndpointCallable(const UpdateAppInstanceUserEndpointRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKIdentityClient::UpdateAppInstanceUserEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppInstanceUserEndpointRequestT = Model::UpdateAppInstanceUserEndpointRequest>
        void UpdateAppInstanceUserEndpointAsync(const UpdateAppInstanceUserEndpointRequestT& request, const UpdateAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKIdentityClient::UpdateAppInstanceUserEndpoint, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ChimeSDKIdentityEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKIdentityClient>;
      void init(const ChimeSDKIdentityClientConfiguration& clientConfiguration);

      ChimeSDKIdentityClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ChimeSDKIdentityEndpointProviderBase> m_endpointProvider;
  };

} // namespace ChimeSDKIdentity
} // namespace Aws
