/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/finspace-data/FinSpaceDataServiceClientModel.h>

namespace Aws
{
namespace FinSpaceData
{
  /**
   * <p> The FinSpace APIs let you take actions inside the FinSpace.</p>
   */
  class AWS_FINSPACEDATA_API FinSpaceDataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FinSpaceDataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef FinSpaceDataClientConfiguration ClientConfigurationType;
      typedef FinSpaceDataEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration = Aws::FinSpaceData::FinSpaceDataClientConfiguration(),
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider = Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider = Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
                           const Aws::FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration = Aws::FinSpaceData::FinSpaceDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinSpaceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider = Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
                           const Aws::FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration = Aws::FinSpaceData::FinSpaceDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinSpaceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FinSpaceDataClient();

        /**
         * <p>Adds a user account to a permission group to grant permissions for actions a
         * user can perform in FinSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/AssociateUserToPermissionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserToPermissionGroupOutcome AssociateUserToPermissionGroup(const Model::AssociateUserToPermissionGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateUserToPermissionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateUserToPermissionGroupRequestT = Model::AssociateUserToPermissionGroupRequest>
        Model::AssociateUserToPermissionGroupOutcomeCallable AssociateUserToPermissionGroupCallable(const AssociateUserToPermissionGroupRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::AssociateUserToPermissionGroup, request);
        }

        /**
         * An Async wrapper for AssociateUserToPermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateUserToPermissionGroupRequestT = Model::AssociateUserToPermissionGroupRequest>
        void AssociateUserToPermissionGroupAsync(const AssociateUserToPermissionGroupRequestT& request, const AssociateUserToPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::AssociateUserToPermissionGroup, request, handler, context);
        }

        /**
         * <p>Creates a new Changeset in a FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChangesetOutcome CreateChangeset(const Model::CreateChangesetRequest& request) const;

        /**
         * A Callable wrapper for CreateChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChangesetRequestT = Model::CreateChangesetRequest>
        Model::CreateChangesetOutcomeCallable CreateChangesetCallable(const CreateChangesetRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::CreateChangeset, request);
        }

        /**
         * An Async wrapper for CreateChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChangesetRequestT = Model::CreateChangesetRequest>
        void CreateChangesetAsync(const CreateChangesetRequestT& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::CreateChangeset, request, handler, context);
        }

        /**
         * <p>Creates a Dataview for a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateDataView">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataViewOutcome CreateDataView(const Model::CreateDataViewRequest& request) const;

        /**
         * A Callable wrapper for CreateDataView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataViewRequestT = Model::CreateDataViewRequest>
        Model::CreateDataViewOutcomeCallable CreateDataViewCallable(const CreateDataViewRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::CreateDataView, request);
        }

        /**
         * An Async wrapper for CreateDataView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataViewRequestT = Model::CreateDataViewRequest>
        void CreateDataViewAsync(const CreateDataViewRequestT& request, const CreateDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::CreateDataView, request, handler, context);
        }

        /**
         * <p>Creates a new FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::CreateDataset, request);
        }

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::CreateDataset, request, handler, context);
        }

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
        template<typename CreatePermissionGroupRequestT = Model::CreatePermissionGroupRequest>
        Model::CreatePermissionGroupOutcomeCallable CreatePermissionGroupCallable(const CreatePermissionGroupRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::CreatePermissionGroup, request);
        }

        /**
         * An Async wrapper for CreatePermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePermissionGroupRequestT = Model::CreatePermissionGroupRequest>
        void CreatePermissionGroupAsync(const CreatePermissionGroupRequestT& request, const CreatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::CreatePermissionGroup, request, handler, context);
        }

        /**
         * <p>Creates a new user in FinSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deletes a FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::DeleteDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::DeleteDataset, request, handler, context);
        }

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
        template<typename DeletePermissionGroupRequestT = Model::DeletePermissionGroupRequest>
        Model::DeletePermissionGroupOutcomeCallable DeletePermissionGroupCallable(const DeletePermissionGroupRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::DeletePermissionGroup, request);
        }

        /**
         * An Async wrapper for DeletePermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePermissionGroupRequestT = Model::DeletePermissionGroupRequest>
        void DeletePermissionGroupAsync(const DeletePermissionGroupRequestT& request, const DeletePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::DeletePermissionGroup, request, handler, context);
        }

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
        template<typename DisableUserRequestT = Model::DisableUserRequest>
        Model::DisableUserOutcomeCallable DisableUserCallable(const DisableUserRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::DisableUser, request);
        }

        /**
         * An Async wrapper for DisableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableUserRequestT = Model::DisableUserRequest>
        void DisableUserAsync(const DisableUserRequestT& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::DisableUser, request, handler, context);
        }

        /**
         * <p>Removes a user account from a permission group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DisassociateUserFromPermissionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserFromPermissionGroupOutcome DisassociateUserFromPermissionGroup(const Model::DisassociateUserFromPermissionGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateUserFromPermissionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateUserFromPermissionGroupRequestT = Model::DisassociateUserFromPermissionGroupRequest>
        Model::DisassociateUserFromPermissionGroupOutcomeCallable DisassociateUserFromPermissionGroupCallable(const DisassociateUserFromPermissionGroupRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::DisassociateUserFromPermissionGroup, request);
        }

        /**
         * An Async wrapper for DisassociateUserFromPermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateUserFromPermissionGroupRequestT = Model::DisassociateUserFromPermissionGroupRequest>
        void DisassociateUserFromPermissionGroupAsync(const DisassociateUserFromPermissionGroupRequestT& request, const DisassociateUserFromPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::DisassociateUserFromPermissionGroup, request, handler, context);
        }

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
        template<typename EnableUserRequestT = Model::EnableUserRequest>
        Model::EnableUserOutcomeCallable EnableUserCallable(const EnableUserRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::EnableUser, request);
        }

        /**
         * An Async wrapper for EnableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableUserRequestT = Model::EnableUserRequest>
        void EnableUserAsync(const EnableUserRequestT& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::EnableUser, request, handler, context);
        }

        /**
         * <p>Get information about a Changeset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangesetOutcome GetChangeset(const Model::GetChangesetRequest& request) const;

        /**
         * A Callable wrapper for GetChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChangesetRequestT = Model::GetChangesetRequest>
        Model::GetChangesetOutcomeCallable GetChangesetCallable(const GetChangesetRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetChangeset, request);
        }

        /**
         * An Async wrapper for GetChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChangesetRequestT = Model::GetChangesetRequest>
        void GetChangesetAsync(const GetChangesetRequestT& request, const GetChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetChangeset, request, handler, context);
        }

        /**
         * <p>Gets information about a Dataview.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetDataView">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataViewOutcome GetDataView(const Model::GetDataViewRequest& request) const;

        /**
         * A Callable wrapper for GetDataView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataViewRequestT = Model::GetDataViewRequest>
        Model::GetDataViewOutcomeCallable GetDataViewCallable(const GetDataViewRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetDataView, request);
        }

        /**
         * An Async wrapper for GetDataView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataViewRequestT = Model::GetDataViewRequest>
        void GetDataViewAsync(const GetDataViewRequestT& request, const GetDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetDataView, request, handler, context);
        }

        /**
         * <p>Returns information about a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatasetOutcome GetDataset(const Model::GetDatasetRequest& request) const;

        /**
         * A Callable wrapper for GetDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDatasetRequestT = Model::GetDatasetRequest>
        Model::GetDatasetOutcomeCallable GetDatasetCallable(const GetDatasetRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetDataset, request);
        }

        /**
         * An Async wrapper for GetDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDatasetRequestT = Model::GetDatasetRequest>
        void GetDatasetAsync(const GetDatasetRequestT& request, const GetDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetDataset, request, handler, context);
        }

        /**
         * <p>Returns the credentials to access the external Dataview from an S3 location.
         * To call this API:</p> <ul> <li> <p>You must retrieve the programmatic
         * credentials.</p> </li> <li> <p>You must be a member of a FinSpace user group,
         * where the dataset that you want to access has <code>Read Dataset Data</code>
         * permissions.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetExternalDataViewAccessDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExternalDataViewAccessDetailsOutcome GetExternalDataViewAccessDetails(const Model::GetExternalDataViewAccessDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetExternalDataViewAccessDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExternalDataViewAccessDetailsRequestT = Model::GetExternalDataViewAccessDetailsRequest>
        Model::GetExternalDataViewAccessDetailsOutcomeCallable GetExternalDataViewAccessDetailsCallable(const GetExternalDataViewAccessDetailsRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetExternalDataViewAccessDetails, request);
        }

        /**
         * An Async wrapper for GetExternalDataViewAccessDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExternalDataViewAccessDetailsRequestT = Model::GetExternalDataViewAccessDetailsRequest>
        void GetExternalDataViewAccessDetailsAsync(const GetExternalDataViewAccessDetailsRequestT& request, const GetExternalDataViewAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetExternalDataViewAccessDetails, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a specific permission group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetPermissionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionGroupOutcome GetPermissionGroup(const Model::GetPermissionGroupRequest& request) const;

        /**
         * A Callable wrapper for GetPermissionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPermissionGroupRequestT = Model::GetPermissionGroupRequest>
        Model::GetPermissionGroupOutcomeCallable GetPermissionGroupCallable(const GetPermissionGroupRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetPermissionGroup, request);
        }

        /**
         * An Async wrapper for GetPermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPermissionGroupRequestT = Model::GetPermissionGroupRequest>
        void GetPermissionGroupAsync(const GetPermissionGroupRequestT& request, const GetPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetPermissionGroup, request, handler, context);
        }

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
        template<typename GetProgrammaticAccessCredentialsRequestT = Model::GetProgrammaticAccessCredentialsRequest>
        Model::GetProgrammaticAccessCredentialsOutcomeCallable GetProgrammaticAccessCredentialsCallable(const GetProgrammaticAccessCredentialsRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetProgrammaticAccessCredentials, request);
        }

        /**
         * An Async wrapper for GetProgrammaticAccessCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProgrammaticAccessCredentialsRequestT = Model::GetProgrammaticAccessCredentialsRequest>
        void GetProgrammaticAccessCredentialsAsync(const GetProgrammaticAccessCredentialsRequestT& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetProgrammaticAccessCredentials, request, handler, context);
        }

        /**
         * <p>Retrieves details for a specific user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * A Callable wrapper for GetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        Model::GetUserOutcomeCallable GetUserCallable(const GetUserRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetUser, request);
        }

        /**
         * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        void GetUserAsync(const GetUserRequestT& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetUser, request, handler, context);
        }

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
        template<typename GetWorkingLocationRequestT = Model::GetWorkingLocationRequest>
        Model::GetWorkingLocationOutcomeCallable GetWorkingLocationCallable(const GetWorkingLocationRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::GetWorkingLocation, request);
        }

        /**
         * An Async wrapper for GetWorkingLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkingLocationRequestT = Model::GetWorkingLocationRequest>
        void GetWorkingLocationAsync(const GetWorkingLocationRequestT& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::GetWorkingLocation, request, handler, context);
        }

        /**
         * <p>Lists the FinSpace Changesets for a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListChangesets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangesetsOutcome ListChangesets(const Model::ListChangesetsRequest& request) const;

        /**
         * A Callable wrapper for ListChangesets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChangesetsRequestT = Model::ListChangesetsRequest>
        Model::ListChangesetsOutcomeCallable ListChangesetsCallable(const ListChangesetsRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ListChangesets, request);
        }

        /**
         * An Async wrapper for ListChangesets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChangesetsRequestT = Model::ListChangesetsRequest>
        void ListChangesetsAsync(const ListChangesetsRequestT& request, const ListChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ListChangesets, request, handler, context);
        }

        /**
         * <p>Lists all available Dataviews for a Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListDataViews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataViewsOutcome ListDataViews(const Model::ListDataViewsRequest& request) const;

        /**
         * A Callable wrapper for ListDataViews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataViewsRequestT = Model::ListDataViewsRequest>
        Model::ListDataViewsOutcomeCallable ListDataViewsCallable(const ListDataViewsRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ListDataViews, request);
        }

        /**
         * An Async wrapper for ListDataViews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataViewsRequestT = Model::ListDataViewsRequest>
        void ListDataViewsAsync(const ListDataViewsRequestT& request, const ListDataViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ListDataViews, request, handler, context);
        }

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
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const ListDatasetsRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ListDatasets, request);
        }

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        void ListDatasetsAsync(const ListDatasetsRequestT& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ListDatasets, request, handler, context);
        }

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
        template<typename ListPermissionGroupsRequestT = Model::ListPermissionGroupsRequest>
        Model::ListPermissionGroupsOutcomeCallable ListPermissionGroupsCallable(const ListPermissionGroupsRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ListPermissionGroups, request);
        }

        /**
         * An Async wrapper for ListPermissionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionGroupsRequestT = Model::ListPermissionGroupsRequest>
        void ListPermissionGroupsAsync(const ListPermissionGroupsRequestT& request, const ListPermissionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ListPermissionGroups, request, handler, context);
        }

        /**
         * <p>Lists all the permission groups that are associated with a specific user
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListPermissionGroupsByUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionGroupsByUserOutcome ListPermissionGroupsByUser(const Model::ListPermissionGroupsByUserRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionGroupsByUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionGroupsByUserRequestT = Model::ListPermissionGroupsByUserRequest>
        Model::ListPermissionGroupsByUserOutcomeCallable ListPermissionGroupsByUserCallable(const ListPermissionGroupsByUserRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ListPermissionGroupsByUser, request);
        }

        /**
         * An Async wrapper for ListPermissionGroupsByUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionGroupsByUserRequestT = Model::ListPermissionGroupsByUserRequest>
        void ListPermissionGroupsByUserAsync(const ListPermissionGroupsByUserRequestT& request, const ListPermissionGroupsByUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ListPermissionGroupsByUser, request, handler, context);
        }

        /**
         * <p>Lists all available user accounts in FinSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Lists details of all the users in a specific permission group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListUsersByPermissionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersByPermissionGroupOutcome ListUsersByPermissionGroup(const Model::ListUsersByPermissionGroupRequest& request) const;

        /**
         * A Callable wrapper for ListUsersByPermissionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersByPermissionGroupRequestT = Model::ListUsersByPermissionGroupRequest>
        Model::ListUsersByPermissionGroupOutcomeCallable ListUsersByPermissionGroupCallable(const ListUsersByPermissionGroupRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ListUsersByPermissionGroup, request);
        }

        /**
         * An Async wrapper for ListUsersByPermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersByPermissionGroupRequestT = Model::ListUsersByPermissionGroupRequest>
        void ListUsersByPermissionGroupAsync(const ListUsersByPermissionGroupRequestT& request, const ListUsersByPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ListUsersByPermissionGroup, request, handler, context);
        }

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
        template<typename ResetUserPasswordRequestT = Model::ResetUserPasswordRequest>
        Model::ResetUserPasswordOutcomeCallable ResetUserPasswordCallable(const ResetUserPasswordRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::ResetUserPassword, request);
        }

        /**
         * An Async wrapper for ResetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetUserPasswordRequestT = Model::ResetUserPasswordRequest>
        void ResetUserPasswordAsync(const ResetUserPasswordRequestT& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::ResetUserPassword, request, handler, context);
        }

        /**
         * <p>Updates a FinSpace Changeset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChangesetOutcome UpdateChangeset(const Model::UpdateChangesetRequest& request) const;

        /**
         * A Callable wrapper for UpdateChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChangesetRequestT = Model::UpdateChangesetRequest>
        Model::UpdateChangesetOutcomeCallable UpdateChangesetCallable(const UpdateChangesetRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::UpdateChangeset, request);
        }

        /**
         * An Async wrapper for UpdateChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChangesetRequestT = Model::UpdateChangesetRequest>
        void UpdateChangesetAsync(const UpdateChangesetRequestT& request, const UpdateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::UpdateChangeset, request, handler, context);
        }

        /**
         * <p>Updates a FinSpace Dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
        Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const UpdateDatasetRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::UpdateDataset, request);
        }

        /**
         * An Async wrapper for UpdateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
        void UpdateDatasetAsync(const UpdateDatasetRequestT& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::UpdateDataset, request, handler, context);
        }

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
        template<typename UpdatePermissionGroupRequestT = Model::UpdatePermissionGroupRequest>
        Model::UpdatePermissionGroupOutcomeCallable UpdatePermissionGroupCallable(const UpdatePermissionGroupRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::UpdatePermissionGroup, request);
        }

        /**
         * An Async wrapper for UpdatePermissionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePermissionGroupRequestT = Model::UpdatePermissionGroupRequest>
        void UpdatePermissionGroupAsync(const UpdatePermissionGroupRequestT& request, const UpdatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::UpdatePermissionGroup, request, handler, context);
        }

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
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&FinSpaceDataClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinSpaceDataClient::UpdateUser, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FinSpaceDataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FinSpaceDataClient>;
      void init(const FinSpaceDataClientConfiguration& clientConfiguration);

      FinSpaceDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FinSpaceDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace FinSpaceData
} // namespace Aws
