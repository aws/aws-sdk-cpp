/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceAdminResult.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceAdminResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserEndpointResult.h>
#include <aws/chime-sdk-identity/model/GetAppInstanceRetentionSettingsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesResult.h>
#include <aws/chime-sdk-identity/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-identity/model/PutAppInstanceRetentionSettingsResult.h>
#include <aws/chime-sdk-identity/model/RegisterAppInstanceUserEndpointResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserEndpointResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ChimeSDKIdentity
{

namespace Model
{
        class CreateAppInstanceRequest;
        class CreateAppInstanceAdminRequest;
        class CreateAppInstanceUserRequest;
        class DeleteAppInstanceRequest;
        class DeleteAppInstanceAdminRequest;
        class DeleteAppInstanceUserRequest;
        class DeregisterAppInstanceUserEndpointRequest;
        class DescribeAppInstanceRequest;
        class DescribeAppInstanceAdminRequest;
        class DescribeAppInstanceUserRequest;
        class DescribeAppInstanceUserEndpointRequest;
        class GetAppInstanceRetentionSettingsRequest;
        class ListAppInstanceAdminsRequest;
        class ListAppInstanceUserEndpointsRequest;
        class ListAppInstanceUsersRequest;
        class ListAppInstancesRequest;
        class ListTagsForResourceRequest;
        class PutAppInstanceRetentionSettingsRequest;
        class RegisterAppInstanceUserEndpointRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAppInstanceRequest;
        class UpdateAppInstanceUserRequest;
        class UpdateAppInstanceUserEndpointRequest;

        typedef Aws::Utils::Outcome<CreateAppInstanceResult, ChimeSDKIdentityError> CreateAppInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateAppInstanceAdminResult, ChimeSDKIdentityError> CreateAppInstanceAdminOutcome;
        typedef Aws::Utils::Outcome<CreateAppInstanceUserResult, ChimeSDKIdentityError> CreateAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeleteAppInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeleteAppInstanceAdminOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeleteAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> DeregisterAppInstanceUserEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeAppInstanceResult, ChimeSDKIdentityError> DescribeAppInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeAppInstanceAdminResult, ChimeSDKIdentityError> DescribeAppInstanceAdminOutcome;
        typedef Aws::Utils::Outcome<DescribeAppInstanceUserResult, ChimeSDKIdentityError> DescribeAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<DescribeAppInstanceUserEndpointResult, ChimeSDKIdentityError> DescribeAppInstanceUserEndpointOutcome;
        typedef Aws::Utils::Outcome<GetAppInstanceRetentionSettingsResult, ChimeSDKIdentityError> GetAppInstanceRetentionSettingsOutcome;
        typedef Aws::Utils::Outcome<ListAppInstanceAdminsResult, ChimeSDKIdentityError> ListAppInstanceAdminsOutcome;
        typedef Aws::Utils::Outcome<ListAppInstanceUserEndpointsResult, ChimeSDKIdentityError> ListAppInstanceUserEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListAppInstanceUsersResult, ChimeSDKIdentityError> ListAppInstanceUsersOutcome;
        typedef Aws::Utils::Outcome<ListAppInstancesResult, ChimeSDKIdentityError> ListAppInstancesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeSDKIdentityError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutAppInstanceRetentionSettingsResult, ChimeSDKIdentityError> PutAppInstanceRetentionSettingsOutcome;
        typedef Aws::Utils::Outcome<RegisterAppInstanceUserEndpointResult, ChimeSDKIdentityError> RegisterAppInstanceUserEndpointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKIdentityError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAppInstanceResult, ChimeSDKIdentityError> UpdateAppInstanceOutcome;
        typedef Aws::Utils::Outcome<UpdateAppInstanceUserResult, ChimeSDKIdentityError> UpdateAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<UpdateAppInstanceUserEndpointResult, ChimeSDKIdentityError> UpdateAppInstanceUserEndpointOutcome;

        typedef std::future<CreateAppInstanceOutcome> CreateAppInstanceOutcomeCallable;
        typedef std::future<CreateAppInstanceAdminOutcome> CreateAppInstanceAdminOutcomeCallable;
        typedef std::future<CreateAppInstanceUserOutcome> CreateAppInstanceUserOutcomeCallable;
        typedef std::future<DeleteAppInstanceOutcome> DeleteAppInstanceOutcomeCallable;
        typedef std::future<DeleteAppInstanceAdminOutcome> DeleteAppInstanceAdminOutcomeCallable;
        typedef std::future<DeleteAppInstanceUserOutcome> DeleteAppInstanceUserOutcomeCallable;
        typedef std::future<DeregisterAppInstanceUserEndpointOutcome> DeregisterAppInstanceUserEndpointOutcomeCallable;
        typedef std::future<DescribeAppInstanceOutcome> DescribeAppInstanceOutcomeCallable;
        typedef std::future<DescribeAppInstanceAdminOutcome> DescribeAppInstanceAdminOutcomeCallable;
        typedef std::future<DescribeAppInstanceUserOutcome> DescribeAppInstanceUserOutcomeCallable;
        typedef std::future<DescribeAppInstanceUserEndpointOutcome> DescribeAppInstanceUserEndpointOutcomeCallable;
        typedef std::future<GetAppInstanceRetentionSettingsOutcome> GetAppInstanceRetentionSettingsOutcomeCallable;
        typedef std::future<ListAppInstanceAdminsOutcome> ListAppInstanceAdminsOutcomeCallable;
        typedef std::future<ListAppInstanceUserEndpointsOutcome> ListAppInstanceUserEndpointsOutcomeCallable;
        typedef std::future<ListAppInstanceUsersOutcome> ListAppInstanceUsersOutcomeCallable;
        typedef std::future<ListAppInstancesOutcome> ListAppInstancesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutAppInstanceRetentionSettingsOutcome> PutAppInstanceRetentionSettingsOutcomeCallable;
        typedef std::future<RegisterAppInstanceUserEndpointOutcome> RegisterAppInstanceUserEndpointOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAppInstanceOutcome> UpdateAppInstanceOutcomeCallable;
        typedef std::future<UpdateAppInstanceUserOutcome> UpdateAppInstanceUserOutcomeCallable;
        typedef std::future<UpdateAppInstanceUserEndpointOutcome> UpdateAppInstanceUserEndpointOutcomeCallable;
} // namespace Model

  class ChimeSDKIdentityClient;

    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::CreateAppInstanceRequest&, const Model::CreateAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::CreateAppInstanceAdminRequest&, const Model::CreateAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::CreateAppInstanceUserRequest&, const Model::CreateAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeleteAppInstanceRequest&, const Model::DeleteAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeleteAppInstanceAdminRequest&, const Model::DeleteAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeleteAppInstanceUserRequest&, const Model::DeleteAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DeregisterAppInstanceUserEndpointRequest&, const Model::DeregisterAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterAppInstanceUserEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceRequest&, const Model::DescribeAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceAdminRequest&, const Model::DescribeAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceUserRequest&, const Model::DescribeAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::DescribeAppInstanceUserEndpointRequest&, const Model::DescribeAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceUserEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::GetAppInstanceRetentionSettingsRequest&, const Model::GetAppInstanceRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppInstanceRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstanceAdminsRequest&, const Model::ListAppInstanceAdminsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceAdminsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstanceUserEndpointsRequest&, const Model::ListAppInstanceUserEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceUserEndpointsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstanceUsersRequest&, const Model::ListAppInstanceUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListAppInstancesRequest&, const Model::ListAppInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstancesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::PutAppInstanceRetentionSettingsRequest&, const Model::PutAppInstanceRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppInstanceRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::RegisterAppInstanceUserEndpointRequest&, const Model::RegisterAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterAppInstanceUserEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UpdateAppInstanceRequest&, const Model::UpdateAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UpdateAppInstanceUserRequest&, const Model::UpdateAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKIdentityClient*, const Model::UpdateAppInstanceUserEndpointRequest&, const Model::UpdateAppInstanceUserEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceUserEndpointResponseReceivedHandler;

  /**
   * <p>The Amazon Chime SDK Identity APIs in this section allow software developers
   * to create and manage unique instances of their messaging applications. These
   * APIs provide the overarching framework for creating and sending messages. For
   * more information about the identity APIs, refer to <a
   * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon
   * Chime SDK identity</a>.</p>
   */
  class AWS_CHIMESDKIDENTITY_API ChimeSDKIdentityClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKIdentityClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKIdentityClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKIdentityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/CreateAppInstanceAdmin">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/CreateAppInstanceUser">AWS
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
         * <p>Deletes an <code>AppInstance</code> and all associated data
         * asynchronously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeleteAppInstance">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeleteAppInstanceAdmin">AWS
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
         * <p>Deletes an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeleteAppInstanceUser">AWS
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
         * <p>Deregisters an <code>AppInstanceUserEndpoint</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/DeregisterAppInstanceUserEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterAppInstanceUserEndpointOutcome DeregisterAppInstanceUserEndpoint(const Model::DeregisterAppInstanceUserEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeregisterAppInstanceUserEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterAppInstanceUserEndpointOutcomeCallable DeregisterAppInstanceUserEndpointCallable(const Model::DeregisterAppInstanceUserEndpointRequest& request) const;

        /**
         * An Async wrapper for DeregisterAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterAppInstanceUserEndpointAsync(const Model::DeregisterAppInstanceUserEndpointRequest& request, const DeregisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppInstanceOutcomeCallable DescribeAppInstanceCallable(const Model::DescribeAppInstanceRequest& request) const;

        /**
         * An Async wrapper for DescribeAppInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceAsync(const Model::DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppInstanceAdminOutcomeCallable DescribeAppInstanceAdminCallable(const Model::DescribeAppInstanceAdminRequest& request) const;

        /**
         * An Async wrapper for DescribeAppInstanceAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceAdminAsync(const Model::DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppInstanceUserOutcomeCallable DescribeAppInstanceUserCallable(const Model::DescribeAppInstanceUserRequest& request) const;

        /**
         * An Async wrapper for DescribeAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceUserAsync(const Model::DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAppInstanceUserEndpointOutcomeCallable DescribeAppInstanceUserEndpointCallable(const Model::DescribeAppInstanceUserEndpointRequest& request) const;

        /**
         * An Async wrapper for DescribeAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceUserEndpointAsync(const Model::DescribeAppInstanceUserEndpointRequest& request, const DescribeAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAppInstanceRetentionSettingsOutcomeCallable GetAppInstanceRetentionSettingsCallable(const Model::GetAppInstanceRetentionSettingsRequest& request) const;

        /**
         * An Async wrapper for GetAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppInstanceRetentionSettingsAsync(const Model::GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppInstanceAdminsOutcomeCallable ListAppInstanceAdminsCallable(const Model::ListAppInstanceAdminsRequest& request) const;

        /**
         * An Async wrapper for ListAppInstanceAdmins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstanceAdminsAsync(const Model::ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppInstanceUserEndpointsOutcomeCallable ListAppInstanceUserEndpointsCallable(const Model::ListAppInstanceUserEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListAppInstanceUserEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstanceUserEndpointsAsync(const Model::ListAppInstanceUserEndpointsRequest& request, const ListAppInstanceUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppInstanceUsersOutcomeCallable ListAppInstanceUsersCallable(const Model::ListAppInstanceUsersRequest& request) const;

        /**
         * An Async wrapper for ListAppInstanceUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstanceUsersAsync(const Model::ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppInstancesOutcomeCallable ListAppInstancesCallable(const Model::ListAppInstancesRequest& request) const;

        /**
         * An Async wrapper for ListAppInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstancesAsync(const Model::ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutAppInstanceRetentionSettingsOutcomeCallable PutAppInstanceRetentionSettingsCallable(const Model::PutAppInstanceRetentionSettingsRequest& request) const;

        /**
         * An Async wrapper for PutAppInstanceRetentionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppInstanceRetentionSettingsAsync(const Model::PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RegisterAppInstanceUserEndpointOutcomeCallable RegisterAppInstanceUserEndpointCallable(const Model::RegisterAppInstanceUserEndpointRequest& request) const;

        /**
         * An Async wrapper for RegisterAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterAppInstanceUserEndpointAsync(const Model::RegisterAppInstanceUserEndpointRequest& request, const RegisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates <code>AppInstance</code> metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/UpdateAppInstance">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/UpdateAppInstanceUser">AWS
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
        virtual Model::UpdateAppInstanceUserEndpointOutcomeCallable UpdateAppInstanceUserEndpointCallable(const Model::UpdateAppInstanceUserEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateAppInstanceUserEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppInstanceUserEndpointAsync(const Model::UpdateAppInstanceUserEndpointRequest& request, const UpdateAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAppInstanceAsyncHelper(const Model::CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppInstanceAdminAsyncHelper(const Model::CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppInstanceUserAsyncHelper(const Model::CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppInstanceAsyncHelper(const Model::DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppInstanceAdminAsyncHelper(const Model::DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppInstanceUserAsyncHelper(const Model::DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterAppInstanceUserEndpointAsyncHelper(const Model::DeregisterAppInstanceUserEndpointRequest& request, const DeregisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppInstanceAsyncHelper(const Model::DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppInstanceAdminAsyncHelper(const Model::DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppInstanceUserAsyncHelper(const Model::DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppInstanceUserEndpointAsyncHelper(const Model::DescribeAppInstanceUserEndpointRequest& request, const DescribeAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppInstanceRetentionSettingsAsyncHelper(const Model::GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppInstanceAdminsAsyncHelper(const Model::ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppInstanceUserEndpointsAsyncHelper(const Model::ListAppInstanceUserEndpointsRequest& request, const ListAppInstanceUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppInstanceUsersAsyncHelper(const Model::ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppInstancesAsyncHelper(const Model::ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAppInstanceRetentionSettingsAsyncHelper(const Model::PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterAppInstanceUserEndpointAsyncHelper(const Model::RegisterAppInstanceUserEndpointRequest& request, const RegisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppInstanceAsyncHelper(const Model::UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppInstanceUserAsyncHelper(const Model::UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppInstanceUserEndpointAsyncHelper(const Model::UpdateAppInstanceUserEndpointRequest& request, const UpdateAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ChimeSDKIdentity
} // namespace Aws
