/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/finspace-data/model/CreateChangesetResult.h>
#include <aws/finspace-data/model/CreateDataViewResult.h>
#include <aws/finspace-data/model/CreateDatasetResult.h>
#include <aws/finspace-data/model/CreatePermissionGroupResult.h>
#include <aws/finspace-data/model/CreateUserResult.h>
#include <aws/finspace-data/model/DeleteDatasetResult.h>
#include <aws/finspace-data/model/DeletePermissionGroupResult.h>
#include <aws/finspace-data/model/DisableUserResult.h>
#include <aws/finspace-data/model/EnableUserResult.h>
#include <aws/finspace-data/model/GetChangesetResult.h>
#include <aws/finspace-data/model/GetDataViewResult.h>
#include <aws/finspace-data/model/GetDatasetResult.h>
#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsResult.h>
#include <aws/finspace-data/model/GetUserResult.h>
#include <aws/finspace-data/model/GetWorkingLocationResult.h>
#include <aws/finspace-data/model/ListChangesetsResult.h>
#include <aws/finspace-data/model/ListDataViewsResult.h>
#include <aws/finspace-data/model/ListDatasetsResult.h>
#include <aws/finspace-data/model/ListPermissionGroupsResult.h>
#include <aws/finspace-data/model/ListUsersResult.h>
#include <aws/finspace-data/model/ResetUserPasswordResult.h>
#include <aws/finspace-data/model/UpdateChangesetResult.h>
#include <aws/finspace-data/model/UpdateDatasetResult.h>
#include <aws/finspace-data/model/UpdatePermissionGroupResult.h>
#include <aws/finspace-data/model/UpdateUserResult.h>
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

namespace FinSpaceData
{

namespace Model
{
        class CreateChangesetRequest;
        class CreateDataViewRequest;
        class CreateDatasetRequest;
        class CreatePermissionGroupRequest;
        class CreateUserRequest;
        class DeleteDatasetRequest;
        class DeletePermissionGroupRequest;
        class DisableUserRequest;
        class EnableUserRequest;
        class GetChangesetRequest;
        class GetDataViewRequest;
        class GetDatasetRequest;
        class GetProgrammaticAccessCredentialsRequest;
        class GetUserRequest;
        class GetWorkingLocationRequest;
        class ListChangesetsRequest;
        class ListDataViewsRequest;
        class ListDatasetsRequest;
        class ListPermissionGroupsRequest;
        class ListUsersRequest;
        class ResetUserPasswordRequest;
        class UpdateChangesetRequest;
        class UpdateDatasetRequest;
        class UpdatePermissionGroupRequest;
        class UpdateUserRequest;

        typedef Aws::Utils::Outcome<CreateChangesetResult, FinSpaceDataError> CreateChangesetOutcome;
        typedef Aws::Utils::Outcome<CreateDataViewResult, FinSpaceDataError> CreateDataViewOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetResult, FinSpaceDataError> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreatePermissionGroupResult, FinSpaceDataError> CreatePermissionGroupOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, FinSpaceDataError> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteDatasetResult, FinSpaceDataError> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<DeletePermissionGroupResult, FinSpaceDataError> DeletePermissionGroupOutcome;
        typedef Aws::Utils::Outcome<DisableUserResult, FinSpaceDataError> DisableUserOutcome;
        typedef Aws::Utils::Outcome<EnableUserResult, FinSpaceDataError> EnableUserOutcome;
        typedef Aws::Utils::Outcome<GetChangesetResult, FinSpaceDataError> GetChangesetOutcome;
        typedef Aws::Utils::Outcome<GetDataViewResult, FinSpaceDataError> GetDataViewOutcome;
        typedef Aws::Utils::Outcome<GetDatasetResult, FinSpaceDataError> GetDatasetOutcome;
        typedef Aws::Utils::Outcome<GetProgrammaticAccessCredentialsResult, FinSpaceDataError> GetProgrammaticAccessCredentialsOutcome;
        typedef Aws::Utils::Outcome<GetUserResult, FinSpaceDataError> GetUserOutcome;
        typedef Aws::Utils::Outcome<GetWorkingLocationResult, FinSpaceDataError> GetWorkingLocationOutcome;
        typedef Aws::Utils::Outcome<ListChangesetsResult, FinSpaceDataError> ListChangesetsOutcome;
        typedef Aws::Utils::Outcome<ListDataViewsResult, FinSpaceDataError> ListDataViewsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, FinSpaceDataError> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListPermissionGroupsResult, FinSpaceDataError> ListPermissionGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, FinSpaceDataError> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ResetUserPasswordResult, FinSpaceDataError> ResetUserPasswordOutcome;
        typedef Aws::Utils::Outcome<UpdateChangesetResult, FinSpaceDataError> UpdateChangesetOutcome;
        typedef Aws::Utils::Outcome<UpdateDatasetResult, FinSpaceDataError> UpdateDatasetOutcome;
        typedef Aws::Utils::Outcome<UpdatePermissionGroupResult, FinSpaceDataError> UpdatePermissionGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, FinSpaceDataError> UpdateUserOutcome;

        typedef std::future<CreateChangesetOutcome> CreateChangesetOutcomeCallable;
        typedef std::future<CreateDataViewOutcome> CreateDataViewOutcomeCallable;
        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreatePermissionGroupOutcome> CreatePermissionGroupOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeletePermissionGroupOutcome> DeletePermissionGroupOutcomeCallable;
        typedef std::future<DisableUserOutcome> DisableUserOutcomeCallable;
        typedef std::future<EnableUserOutcome> EnableUserOutcomeCallable;
        typedef std::future<GetChangesetOutcome> GetChangesetOutcomeCallable;
        typedef std::future<GetDataViewOutcome> GetDataViewOutcomeCallable;
        typedef std::future<GetDatasetOutcome> GetDatasetOutcomeCallable;
        typedef std::future<GetProgrammaticAccessCredentialsOutcome> GetProgrammaticAccessCredentialsOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetWorkingLocationOutcome> GetWorkingLocationOutcomeCallable;
        typedef std::future<ListChangesetsOutcome> ListChangesetsOutcomeCallable;
        typedef std::future<ListDataViewsOutcome> ListDataViewsOutcomeCallable;
        typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
        typedef std::future<ListPermissionGroupsOutcome> ListPermissionGroupsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ResetUserPasswordOutcome> ResetUserPasswordOutcomeCallable;
        typedef std::future<UpdateChangesetOutcome> UpdateChangesetOutcomeCallable;
        typedef std::future<UpdateDatasetOutcome> UpdateDatasetOutcomeCallable;
        typedef std::future<UpdatePermissionGroupOutcome> UpdatePermissionGroupOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
} // namespace Model

  class FinSpaceDataClient;

    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateChangesetRequest&, const Model::CreateChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChangesetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateDataViewRequest&, const Model::CreateDataViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataViewResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreatePermissionGroupRequest&, const Model::CreatePermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::DeletePermissionGroupRequest&, const Model::DeletePermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::DisableUserRequest&, const Model::DisableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::EnableUserRequest&, const Model::EnableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetChangesetRequest&, const Model::GetChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangesetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetDataViewRequest&, const Model::GetDataViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataViewResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetDatasetRequest&, const Model::GetDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetProgrammaticAccessCredentialsRequest&, const Model::GetProgrammaticAccessCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProgrammaticAccessCredentialsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::GetWorkingLocationRequest&, const Model::GetWorkingLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkingLocationResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListChangesetsRequest&, const Model::ListChangesetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangesetsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListDataViewsRequest&, const Model::ListDataViewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataViewsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListPermissionGroupsRequest&, const Model::ListPermissionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionGroupsResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::ResetUserPasswordRequest&, const Model::ResetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdateChangesetRequest&, const Model::UpdateChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChangesetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdateDatasetRequest&, const Model::UpdateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdatePermissionGroupRequest&, const Model::UpdatePermissionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePermissionGroupResponseReceivedHandler;
    typedef std::function<void(const FinSpaceDataClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;

  /**
   * <p> The FinSpace APIs let you take actions inside the FinSpace.</p>
   */
  class AWS_FINSPACEDATA_API FinSpaceDataClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinSpaceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FinSpaceDataClient();


        /**
         * <p>Creates a new Changeset in a FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChangesetOutcome CreateChangeset(const Model::CreateChangesetRequest& request) const;

        /**
         * A Callable wrapper for CreateChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChangesetOutcomeCallable CreateChangesetCallable(const Model::CreateChangesetRequest& request) const;

        /**
         * An Async wrapper for CreateChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChangesetAsync(const Model::CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Dataview for a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateDataView">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataViewOutcome CreateDataView(const Model::CreateDataViewRequest& request) const;

        /**
         * A Callable wrapper for CreateDataView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataViewOutcomeCallable CreateDataViewCallable(const Model::CreateDataViewRequest& request) const;

        /**
         * An Async wrapper for CreateDataView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataViewAsync(const Model::CreateDataViewRequest& request, const CreateDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a group of permissions for various actions that a user can perform in
         * FinSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreatePermissionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionGroupOutcome CreatePermissionGroup(const Model::CreatePermissionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreatePermissionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePermissionGroupOutcomeCallable CreatePermissionGroupCallable(const Model::CreatePermissionGroupRequest& request) const;

        /**
         * An Async wrapper for CreatePermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePermissionGroupAsync(const Model::CreatePermissionGroupRequest& request, const CreatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user in FinSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateUser">AWS
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
         * <p>Deletes a FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a permission group. This action is irreversible.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DeletePermissionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionGroupOutcome DeletePermissionGroup(const Model::DeletePermissionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionGroupOutcomeCallable DeletePermissionGroupCallable(const Model::DeletePermissionGroupRequest& request) const;

        /**
         * An Async wrapper for DeletePermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionGroupAsync(const Model::DeletePermissionGroupRequest& request, const DeletePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Denies access to the FinSpace web application and API for the specified
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableUserOutcome DisableUser(const Model::DisableUserRequest& request) const;

        /**
         * A Callable wrapper for DisableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableUserOutcomeCallable DisableUserCallable(const Model::DisableUserRequest& request) const;

        /**
         * An Async wrapper for DisableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableUserAsync(const Model::DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Allows the specified user to access the FinSpace web application and
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/EnableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableUserOutcome EnableUser(const Model::EnableUserRequest& request) const;

        /**
         * A Callable wrapper for EnableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableUserOutcomeCallable EnableUserCallable(const Model::EnableUserRequest& request) const;

        /**
         * An Async wrapper for EnableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableUserAsync(const Model::EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a Changeset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangesetOutcome GetChangeset(const Model::GetChangesetRequest& request) const;

        /**
         * A Callable wrapper for GetChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangesetOutcomeCallable GetChangesetCallable(const Model::GetChangesetRequest& request) const;

        /**
         * An Async wrapper for GetChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangesetAsync(const Model::GetChangesetRequest& request, const GetChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Dataview.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetDataView">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataViewOutcome GetDataView(const Model::GetDataViewRequest& request) const;

        /**
         * A Callable wrapper for GetDataView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataViewOutcomeCallable GetDataViewCallable(const Model::GetDataViewRequest& request) const;

        /**
         * An Async wrapper for GetDataView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataViewAsync(const Model::GetDataViewRequest& request, const GetDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatasetOutcome GetDataset(const Model::GetDatasetRequest& request) const;

        /**
         * A Callable wrapper for GetDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatasetOutcomeCallable GetDatasetCallable(const Model::GetDatasetRequest& request) const;

        /**
         * An Async wrapper for GetDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatasetAsync(const Model::GetDatasetRequest& request, const GetDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request programmatic credentials to use with FinSpace SDK.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetProgrammaticAccessCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProgrammaticAccessCredentialsOutcome GetProgrammaticAccessCredentials(const Model::GetProgrammaticAccessCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetProgrammaticAccessCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProgrammaticAccessCredentialsOutcomeCallable GetProgrammaticAccessCredentialsCallable(const Model::GetProgrammaticAccessCredentialsRequest& request) const;

        /**
         * An Async wrapper for GetProgrammaticAccessCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProgrammaticAccessCredentialsAsync(const Model::GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for a specific user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetUser">AWS
         * API Reference</a></p>
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
         * <p>A temporary Amazon S3 location, where you can copy your files from a source
         * location to stage or use as a scratch space in FinSpace notebook.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetWorkingLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkingLocationOutcome GetWorkingLocation(const Model::GetWorkingLocationRequest& request) const;

        /**
         * A Callable wrapper for GetWorkingLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkingLocationOutcomeCallable GetWorkingLocationCallable(const Model::GetWorkingLocationRequest& request) const;

        /**
         * An Async wrapper for GetWorkingLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkingLocationAsync(const Model::GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the FinSpace Changesets for a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListChangesets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangesetsOutcome ListChangesets(const Model::ListChangesetsRequest& request) const;

        /**
         * A Callable wrapper for ListChangesets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChangesetsOutcomeCallable ListChangesetsCallable(const Model::ListChangesetsRequest& request) const;

        /**
         * An Async wrapper for ListChangesets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChangesetsAsync(const Model::ListChangesetsRequest& request, const ListChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available Dataviews for a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListDataViews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataViewsOutcome ListDataViews(const Model::ListDataViewsRequest& request) const;

        /**
         * A Callable wrapper for ListDataViews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataViewsOutcomeCallable ListDataViewsCallable(const Model::ListDataViewsRequest& request) const;

        /**
         * An Async wrapper for ListDataViews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataViewsAsync(const Model::ListDataViewsRequest& request, const ListDataViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the active Datasets that a user has access to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available permission groups in FinSpace.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListPermissionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionGroupsOutcome ListPermissionGroups(const Model::ListPermissionGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionGroupsOutcomeCallable ListPermissionGroupsCallable(const Model::ListPermissionGroupsRequest& request) const;

        /**
         * An Async wrapper for ListPermissionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionGroupsAsync(const Model::ListPermissionGroupsRequest& request, const ListPermissionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available user accounts in FinSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListUsers">AWS
         * API Reference</a></p>
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
         * <p>Resets the password for a specified user ID and generates a temporary one.
         * Only a superuser can reset password for other users. Resetting the password
         * immediately invalidates the previous password associated with the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ResetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetUserPasswordOutcome ResetUserPassword(const Model::ResetUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for ResetUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetUserPasswordOutcomeCallable ResetUserPasswordCallable(const Model::ResetUserPasswordRequest& request) const;

        /**
         * An Async wrapper for ResetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetUserPasswordAsync(const Model::ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a FinSpace Changeset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChangesetOutcome UpdateChangeset(const Model::UpdateChangesetRequest& request) const;

        /**
         * A Callable wrapper for UpdateChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChangesetOutcomeCallable UpdateChangesetCallable(const Model::UpdateChangesetRequest& request) const;

        /**
         * An Async wrapper for UpdateChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChangesetAsync(const Model::UpdateChangesetRequest& request, const UpdateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const Model::UpdateDatasetRequest& request) const;

        /**
         * An Async wrapper for UpdateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatasetAsync(const Model::UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the details of a permission group. You cannot modify a
         * <code>permissionGroupID</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdatePermissionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePermissionGroupOutcome UpdatePermissionGroup(const Model::UpdatePermissionGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdatePermissionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePermissionGroupOutcomeCallable UpdatePermissionGroupCallable(const Model::UpdatePermissionGroupRequest& request) const;

        /**
         * An Async wrapper for UpdatePermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePermissionGroupAsync(const Model::UpdatePermissionGroupRequest& request, const UpdatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the details of the specified user account. You cannot update the
         * <code>userId</code> for a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateUser">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateChangesetAsyncHelper(const Model::CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataViewAsyncHelper(const Model::CreateDataViewRequest& request, const CreateDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetAsyncHelper(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePermissionGroupAsyncHelper(const Model::CreatePermissionGroupRequest& request, const CreatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePermissionGroupAsyncHelper(const Model::DeletePermissionGroupRequest& request, const DeletePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableUserAsyncHelper(const Model::DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableUserAsyncHelper(const Model::EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChangesetAsyncHelper(const Model::GetChangesetRequest& request, const GetChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataViewAsyncHelper(const Model::GetDataViewRequest& request, const GetDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDatasetAsyncHelper(const Model::GetDatasetRequest& request, const GetDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProgrammaticAccessCredentialsAsyncHelper(const Model::GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkingLocationAsyncHelper(const Model::GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChangesetsAsyncHelper(const Model::ListChangesetsRequest& request, const ListChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataViewsAsyncHelper(const Model::ListDataViewsRequest& request, const ListDataViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPermissionGroupsAsyncHelper(const Model::ListPermissionGroupsRequest& request, const ListPermissionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetUserPasswordAsyncHelper(const Model::ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChangesetAsyncHelper(const Model::UpdateChangesetRequest& request, const UpdateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatasetAsyncHelper(const Model::UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePermissionGroupAsyncHelper(const Model::UpdatePermissionGroupRequest& request, const UpdatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FinSpaceData
} // namespace Aws
